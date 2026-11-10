// rea decompile_all
// name: CWnd::GetWindowTextW
// address: 0x10055d13
// body: available
// range: 0x10055d13-0x10055d9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall CWnd::GetWindowTextW(wchar_t *,int)const 
   
   Library: Visual Studio 2015 Release */

int __thiscall CWnd::GetWindowTextW(CWnd *this,wchar_t *param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  size_t sVar3;
  undefined4 local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x10055d1f;
  sVar3 = 0;
  if (*(int *)(this + 0x74) == 0) {
    sVar3 = ::GetWindowTextW(*(HWND *)(this + 0x20),param_1,param_2);
  }
  else {
    uVar2 = FUN_10048e90();
    FUN_10034c30(uVar2);
    local_8 = 0;
    pcVar1 = *(code **)(**(int **)(this + 0x74) + 0x8c);
    guard_check_icall(local_14);
    (*pcVar1)();
    uVar2 = FUN_10189012(param_1,param_2,local_14[0],0xffffffff);
    FUN_10034d00(uVar2);
    if (param_1 != (wchar_t *)0x0) {
      sVar3 = _wcslen(param_1);
    }
    FUN_10034f00();
  }
  return sVar3;
}

