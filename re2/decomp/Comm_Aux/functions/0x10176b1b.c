// rea decompile_all
// name: SetStyle
// address: 0x10176b1b
// body: available
// range: 0x10176b1b-0x10176b7c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual void __thiscall CMFCToolBarDateTimeCtrl::SetStyle(unsigned int)
    public: virtual void __thiscall CMFCToolBarEditBoxButton::SetStyle(unsigned int)
   
   Library: Visual Studio 2015 Release */

void SetStyle(int param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  
  in_ECX[9] = param_1;
  if (in_ECX[0x1e] == 0) {
    return;
  }
  if (*(int *)(in_ECX[0x1e] + 0x20) == 0) {
    return;
  }
  if (DAT_1020e500 == 0) {
LAB_10176b5c:
    if ((in_ECX[9] & 0x40000U) == 0) {
LAB_10176b6a:
      uVar3 = 0;
      goto LAB_10176b6c;
    }
  }
  else {
    pcVar1 = *(code **)(*in_ECX + 0x60);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      if (DAT_1020e500 == 0) goto LAB_10176b5c;
      goto LAB_10176b6a;
    }
  }
  uVar3 = 1;
LAB_10176b6c:
  CWnd::EnableWindow((CWnd *)in_ECX[0x1e],uVar3 ^ 1);
  return;
}

