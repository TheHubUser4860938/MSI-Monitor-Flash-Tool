// rea decompile_all
// name: CMFCRibbonPanel::MouseButtonUp
// address: 0x47647d
// body: available
// range: 0x47647d-0x476536 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonPanel::MouseButtonUp(class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCRibbonPanel::MouseButtonUp(CMFCRibbonPanel *this,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  BOOL BVar5;
  HWND local_8;
  
  *(undefined4 *)(this + 0xa0) = 0;
  if (*(int *)(this + 0x2dc) != 0) {
    pcVar1 = *(code **)(*(int *)this + 0xa4);
    guard_check_icall();
    iVar4 = (*pcVar1)();
    if (iVar4 == 0) {
      local_8 = (HWND)0x0;
    }
    else {
      local_8 = *(HWND *)(iVar4 + 0x20);
    }
    piVar2 = *(int **)(this + 0x2dc);
    pcVar1 = *(code **)(*piVar2 + 0x214);
    guard_check_icall(param_2,param_3);
    (*pcVar1)();
    BVar5 = IsWindow(local_8);
    if ((BVar5 != 0) && (piVar2[0x34] != 0)) {
      piVar2[0x34] = 0;
      pcVar1 = *(code **)(*(int *)this + 0x108);
      guard_check_icall(piVar2);
      (*pcVar1)();
      piVar3 = *(int **)(this + 0x2dc);
      if ((piVar3 != (int *)0x0) && (piVar3 != piVar2)) {
        pcVar1 = *(code **)(*(int *)this + 0x108);
        guard_check_icall(piVar3);
        (*pcVar1)();
      }
    }
  }
  return;
}

