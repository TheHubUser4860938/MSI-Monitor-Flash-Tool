#!/usr/bin/env bash
# 15f retry: logged relaunch via the proton-cachyos-slr script directly
# (it injects DXVK + dxvk-nvapi overrides itself). Inherit this shell's
# session env (worked in the 15e direct-wine repro).
set -u
LOG=/tmp/opencode/nvapilog_umu
rm -rf "$LOG" && mkdir -p "$LOG"
P=/usr/share/steam/compatibilitytools.d/proton-cachyos-slr
H="$HOME/Games/Heroic/Prefixes/MSI firmware updater tool"

env WINEPREFIX="$H" \
    STEAM_COMPAT_DATA_PATH="$H" \
    STEAM_COMPAT_CLIENT_INSTALL_PATH=$HOME/.steam \
    STEAM_COMPAT_APP_ID=0 \
    PROTON_ENABLE_NVAPI=1 \
    PROTON_LOG=1 \
    DXVK_ENABLE_NVAPI=1 \
    DXVK_NVAPI_ALLOW_OTHER_DRIVERS=1 \
    DXVK_NVAPI_LOG_LEVEL=info \
    DXVK_LOG_LEVEL=info \
    DXVK_NVAPI_LOG_PATH="$LOG" \
    DXVK_LOG_PATH="$LOG" \
    "$P/proton" waitforexitandrun \
      "Z:\\${HOME//\//\\}\\Projects\\monitor-fw\\vendor\\MSI Firmware Update Utility V1.0.6.exe" \
      >"$LOG/proton_stdout.log" 2>&1 &
PR=$!
sleep 100

echo "=== proton log tail (app errors) ==="
tail -4 "$LOG/proton_stdout.log" 2>/dev/null
echo "=== nvapi/dxvk logs captured? ==="
ls -la "$LOG" | grep -viE "proton_stdout|^total|^d"
for f in "$LOG"/*nvapi*; do
  [ -f "$f" ] || continue
  echo "--- $f"
  grep -aiE "i2c|interface|initialize" "$f" | sort -u | head -16
done
echo "=== steam-0.log (PROTON_LOG) interesting lines ==="
S=$HOME/steam-0.log
[ -f "$S" ] && grep -aiE "nvapi|i2c|err:" "$S" | sort -u | head -12 || echo "no steam-0.log"

pkill -f "proton-cachyos-slr" 2>/dev/null
kill "$PR" 2>/dev/null
sleep 3
pkill -u "$USER" -x wineserver 2>/dev/null
echo DONE
