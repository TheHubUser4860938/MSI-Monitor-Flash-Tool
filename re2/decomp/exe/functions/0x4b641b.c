// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnDrawMenuResizeBar
// address: 0x4b641b
// body: available
// range: 0x4b641b-0x4b6538 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2007::OnDrawMenuResizeBar(class CDC
   *,class CRect,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2007::OnDrawMenuResizeBar
          (CMFCVisualManagerOffice2007 *this,undefined4 param_1,undefined4 param_3,
          undefined4 param_4,undefined4 param_5,undefined4 param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_7 == 1) {
    iVar2 = 0xf50;
  }
  else {
    iVar2 = ((param_7 != 3) - 1 & 0xfffffee8) + 0x1180;
  }
  iVar3 = CanDrawImage(this);
  if (((iVar3 == 0) || (*(int *)(this + 0x2754) == 0)) ||
     (*(int *)((CMFCToolBarImages *)(this + iVar2) + 0x8c) == 0)) {
    CMFCVisualManagerOfficeXP::OnDrawMenuResizeBar
              ((CMFCVisualManagerOfficeXP *)this,param_1,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    iVar3 = *(int *)(this + 0x26c0);
    guard_check_icall(param_1,param_3,param_4,param_5,param_6,0,0xff);
    (**(code **)(iVar3 + 0x10))();
    if ((param_7 == 1) || (param_7 == 3)) {
      bVar1 = -(param_7 != 3) & 2;
      uVar4 = 2;
    }
    else {
      bVar1 = 1;
      uVar4 = 1;
    }
    CMFCToolBarImages::DrawEx
              ((CMFCToolBarImages *)(this + iVar2),param_1,param_3,param_4,param_5,param_6,0,uVar4,
               bVar1,0,0,0,0,0xff);
  }
  return;
}

