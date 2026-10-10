#!/usr/bin/env bash
# 15f: re-run the vendor tool under the SAME umu/proton-cachyos stack the
# user's FAIL run used, with DXVK-NVAPI logging on, to settle whether the
# NVAPI shim's I2C reaches the kernel (=> 0x22 died by NACK, third-party
# witness for dead-end #11) or the engine died on an unimplemented shim
# interface. No clicks: the startup version read alone discriminates
# (NvAPI_I2C lines logged + version shown = shim I2C works).
set -u
SRC_PID=$(pgrep -f "umu-run.*V1.0.6" | head -1)
[ -z "$SRC_PID" ] && { echo "tool not running (starting fresh)"; }
LOG=/tmp/opencode/nvapilog_umu
rm -rf "$LOG" && mkdir -p "$LOG"

# capture display/session env from the live process (before killing)
declare -A ENV
if [ -n "${SRC_PID:-}" ]; then
  while IFS= read -r -d '' kv; do ENV["${kv%%=*}"]="${kv#*=}"; done \
    < "/proc/$SRC_PID/environ" 2>/dev/null
fi

# close the user's instance (engine already failed; dialog open = idle)
if [ -n "${SRC_PID:-}" ]; then
  pkill -f "proton-cachyos-slr/proton" 2>/dev/null
  kill "$SRC_PID" 2>/dev/null
  sleep 3
  pkill -u eugene -x wineserver 2>/dev/null
  sleep 2
fi

WPREFIX="${ENV[WINEPREFIX]:-/home/eugene/Games/Heroic/Prefixes/MSI firmware updater tool}"
env -i \
  HOME=/home/eugene \
  PATH=/usr/bin:/bin \
  USER=eugene \
  DISPLAY="${ENV[DISPLAY]:-:0}" \
  XAUTHORITY="${ENV[XAUTHORITY]:-/home/eugene/.Xauthority}" \
  WAYLAND_DISPLAY="${ENV[WAYLAND_DISPLAY]:-}" \
  XDG_RUNTIME_DIR="${ENV[XDG_RUNTIME_DIR]:-/run/user/1000}" \
  XDG_SESSION_TYPE="${ENV[XDG_SESSION_TYPE]:-wayland}" \
  WINEPREFIX="$WPREFIX" \
  STEAM_COMPAT_DATA_PATH="${ENV[STEAM_COMPAT_DATA_PATH]:-$WPREFIX}" \
  STEAM_COMPAT_CLIENT_INSTALL_PATH="${ENV[STEAM_COMPAT_CLIENT_INSTALL_PATH]:-/home/eugene/.steam}" \
  STEAM_COMPAT_APP_ID=0 \
  PROTONPATH="${ENV[PROTONPATH]:-/usr/share/steam/compatibilitytools.d/proton-cachyos-slr}" \
  PROTON_ENABLE_NVAPI=1 \
  DXVK_ENABLE_NVAPI=1 \
  DXVK_NVAPI_ALLOW_OTHER_DRIVERS=1 \
  DXVK_NVAPI_LOG_LEVEL=info \
  DXVK_LOG_LEVEL=info \
  DXVK_NVAPI_LOG_PATH="$LOG" \
  DXVK_LOG_PATH="$LOG" \
  /usr/bin/umu-run "Z:\\home\\eugene\\Projects\\monitor-fw\\vendor\\MSI Firmware Update Utility V1.0.6.exe" \
  >"$LOG/umu_stdout.log" 2>&1 &
UMU=$!
sleep 90

echo "=== shim log (distinct) ==="
for f in "$LOG"/*nvapi*.log "$LOG"/*.nvlog "$LOG"/*.log; do
  [ -f "$f" ] || continue
  echo "--- $f"
  grep -aiE "i2c|interface|not impl|initialize|fail" "$f" | sort -u | head -14
done
echo "=== any dxvk-nvapi logs elsewhere (default path?) ==="
find /home/eugene -maxdepth 2 -iname "*nvapi*" -newermt "-3 minutes" 2>/dev/null | head -3
echo "=== shut down ==="
pkill -f "proton-cachyos-slr/proton" 2>/dev/null
kill "$UMU" 2>/dev/null
sleep 3
pkill -u eugene -x wineserver 2>/dev/null
echo done
