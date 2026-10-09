# Source this from wherever:  . re/env.sh
# Vendor DLL paths + the capstone/pefile venv, all repo-relative.
R="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
C=$R/vendor/Comm.dll
A=$R/vendor/Comm/Comm_Aux.dll
P=$R/vendor/PlugIn/WinIspPlugIn.dll
# RE python (capstone 5.0.7 + pefile live in the repo venv; PEP 668 system python
# stays clean -- 2026-10-09 the system capstone went missing and blocked re/)
PY=$R/.venv/bin/python
export PATH="$R/.venv/bin:$PATH"
