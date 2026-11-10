// rea decompile_all
// name: CDataRecoveryHandler::Initialize
// address: 0x10065fe8
// body: available
// range: 0x10065fe8-0x1006609b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CDataRecoveryHandler::Initialize(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CDataRecoveryHandler::Initialize(CDataRecoveryHandler *this)

{
  code *pcVar1;
  long lVar2;
  UINT uElapse;
  UINT_PTR UVar3;
  TIMERPROC lpTimerFunc;
  undefined1 local_18 [4];
  wchar_t *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x10065ff4;
  if (((byte)this[0xb4] & 0xc) != 0) {
    local_14[0] = (wchar_t *)0x0;
    lVar2 = _AfxSHGetKnownFolderPath((_GUID *)&DAT_101dcaac,0,(void *)0x0,local_14);
    if (lVar2 != 0) {
      return 0;
    }
    if (local_14[0] == (wchar_t *)0x0) {
      return 0;
    }
    FUN_100352e0(local_14[0]);
    local_8 = 0;
    pcVar1 = *(code **)(*(int *)this + 0x1c);
    guard_check_icall(local_18);
    (*pcVar1)();
    local_8 = 0xffffffff;
    FUN_10034f00();
    CoTaskMemFree(local_14[0]);
  }
  if (((byte)this[0xb4] & 8) != 0) {
    lpTimerFunc = (TIMERPROC)&LAB_1006551b;
    pcVar1 = *(code **)(*(int *)this + 0x10);
    guard_check_icall();
    uElapse = (*pcVar1)();
    UVar3 = SetTimer((HWND)0x0,*(UINT_PTR *)(this + 200),uElapse,lpTimerFunc);
    *(UINT_PTR *)(this + 200) = UVar3;
  }
  return 1;
}

