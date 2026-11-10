// rea decompile_all
// name: CMFCRibbonButton::AddSubItem
// address: 0x46fd00
// body: available
// range: 0x46fd00-0x46fd77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCRibbonButton::AddSubItem(class CMFCRibbonBaseElement *,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCRibbonButton::AddSubItem(CMFCRibbonButton *this,CMFCRibbonBaseElement *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(this + 0x88);
  pcVar1 = *(code **)(*(int *)param_1 + 0x164);
  guard_check_icall(uVar3);
  (*pcVar1)();
  if (DAT_00616144 == 0) {
    pcVar1 = *(code **)(*(int *)param_1 + 0x104);
    guard_check_icall(uVar3);
    iVar2 = (*pcVar1)();
    if (iVar2 == 0) {
      uVar3 = 1;
      goto LAB_0046fd49;
    }
  }
  uVar3 = 0;
LAB_0046fd49:
  *(undefined4 *)(param_1 + 0xec) = uVar3;
  if (param_2 == -1) {
    FUN_00473afc(*(undefined4 *)(this + 0x1b8),param_1);
  }
  else {
    FUN_00471d0f(param_2,param_1,1);
  }
  return;
}

