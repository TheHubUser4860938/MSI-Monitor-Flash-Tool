#!/usr/bin/env bash
# 15f retry-3: reproduce the user's umu + proton-cachyos stack as exactly
# as we can: umu-run (handles the non-numeric compat path fine; the
# protonfixes crash was an artifact of calling proton directly), inheriting
# THIS shell's session env (the 15e direct-wine repro proved this shell can
# reach the compositor), adding only logging + the NVAPI toggles the
# original run had.
set -u
LOG=/tmp/opencode/nvapilog_umu
rm -rf "$LOG" && mkdir -p "$LOG"
P=/usr/share/steam/compatibilitytools.d/proton-cachyos-slr
H="/home/eugene/Games/Heroic/Prefixes/MSI firmware updater tool"

WINEPREFIX="$H" \
STEAM_COMPAT_DATA_PATH="$H" \
STEAM_COMPAT_CLIENT_INSTALL_PATH=/home/eugene/.steam \
STEAM_COMPAT_APP_ID=0 \
PROTONPATH="$P" \
PROTON_ENABLE_NVAPI=1 \
PROTON_LOG=1 \
DXVK_ENABLE_NVAPI=1 \
DXVK_NVAPI_ALLOW_OTHER_DRIVERS=1 \
DXVK_NVAPI_LOG_LEVEL=info \
DXVK_LOG_LEVEL=info \
DXVK_NVAPI_LOG_PATH="$LOG" \
DXVK_LOG_PATH="$LOG" \
/usr/bin/umu-run "/home/eugene/Projects/monitor-fw/vendor/MSI Firmware Update Utility V1.0.6.exe" \
  >"$LOG/umu_stdout.log" 2>&1 &
UMU=$!
sleep 100

echo "=== protonlog/steam-0.log app-side lines ==="
S=/home/eugene/steam-0.log
[ -f "$S" ] && { grep -aiE "nvapi|i2c" "$S" | sort -u | head -12
                 grep -aiE "err:" "$S" | sort -u | head -8; } || echo "no steam-0.log"
echo "=== nvapi/dxvk logs in \$LOG ==="
ls -la "$LOG" | grep -viE "^total|^d"
for f in "$LOG"/*nvapi*.log "$LOG"/*dxvk*.log; do
  [ -f "$f" ] || continue
  echo "--- $f"
  grep -aiE "i2c|interface|initialize|fail|error" "$f" | sort -u | head -16
done
echo "=== umu stdout tail ==="
tail -6 "$LOG/umu_stdout.log"

kill "$UMU" 2>/dev/null
pkill -f "proton-cachyos-slr" 2>/dev/null
sleep 3
pkill -u eugene -x wineserver 2>/dev/null
echo DONE
