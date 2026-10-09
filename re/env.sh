C=/home/eugene/Projects/monitor-fw/vendor/Comm.dll
A=/home/eugene/Projects/monitor-fw/vendor/Comm/Comm_Aux.dll
P=/home/eugene/Projects/monitor-fw/vendor/PlugIn/WinIspPlugIn.dll
# RE python (capstone 5.0.7 + pefile live in the repo venv; PEP 668 system python
# stays clean -- 2026-10-09 the system capstone went missing and blocked re/)
PY=/home/eugene/Projects/monitor-fw/.venv/bin/python
export PATH="/home/eugene/Projects/monitor-fw/.venv/bin:$PATH"
