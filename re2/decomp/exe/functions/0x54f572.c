// rea decompile_all
// name: CMFCTasksPane::DrawCaption
// address: 0x54f572
// body: available
// range: 0x54f572-0x54f643 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCTasksPane::DrawCaption(class CDC *,class CRect)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCTasksPane::DrawCaption
          (CMFCTasksPane *this,undefined4 param_1,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar1 = *(int *)(this + 0x470);
  if (0 < *(int *)(this + 0x33c)) {
    do {
      piVar3 = (int *)FUN_004ab4cd(iVar6);
      iVar2 = *piVar3;
      iVar4 = FUN_0056922d();
      if (iVar4 - 0x17U < 3) {
        if (((*(int *)(iVar2 + 0xc) == 0) && (1 < iVar1)) && (*(int *)(this + 0x36c) == 0)) {
          uVar5 = 0;
        }
        else {
          uVar5 = 1;
        }
        *(undefined4 *)(iVar2 + 0xc) = uVar5;
      }
      iVar4 = FUN_0056922d();
      if (iVar4 == 0x17) {
        *(uint *)(iVar2 + 0x10) = (uint)(0 < *(int *)(this + 0x38c));
      }
      iVar4 = FUN_0056922d();
      if (iVar4 == 0x18) {
        *(uint *)(iVar2 + 0x10) = (uint)(*(int *)(this + 0x38c) < *(int *)(this + 0x530) + -1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(this + 0x33c));
  }
  CDockablePane::UpdateTooltips((CDockablePane *)this);
  CDockablePane::DrawCaption((CDockablePane *)this,param_1,param_3,param_4,param_5,param_6);
  return;
}

