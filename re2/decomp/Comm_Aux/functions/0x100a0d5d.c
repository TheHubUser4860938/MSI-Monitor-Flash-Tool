// rea decompile_all
// name: CMFCBaseTabCtrl::SetAutoColors
// address: 0x100a0d5d
// body: available
// range: 0x100a0d5d-0x100a0e17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCBaseTabCtrl::SetAutoColors(class CArray<unsigned long,unsigned long>
   const &)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCBaseTabCtrl::SetAutoColors(CMFCBaseTabCtrl *this,CArray<unsigned_long,unsigned_long> *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)(this + 0xbc)) {
    do {
      iVar2 = FUN_10067dc8(iVar4);
      *(undefined4 *)(iVar2 + 0x30) = 0xffffffff;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(this + 0xbc));
  }
  FUN_1017250c(0,0xffffffff);
  if (*(int *)(param_1 + 8) == 0) {
    *(undefined4 *)(this + 0x1e0) = 1;
    pcVar1 = *(code **)(*(int *)this + 0x2c8);
    guard_check_icall();
    (*pcVar1)();
  }
  else {
    *(undefined4 *)(this + 0x1e0) = 0;
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        puVar3 = (undefined4 *)FUN_10151a1d(iVar4);
        FUN_10100265(*(undefined4 *)(this + 0x1d0),*puVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 8));
    }
  }
  if (*(int *)(this + 0x20) != 0) {
    RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
  }
  return;
}

