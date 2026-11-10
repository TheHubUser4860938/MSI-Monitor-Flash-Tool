// rea decompile_all
// name: CMFCRibbonButton::AddToListBox
// address: 0x46fd78
// body: available
// range: 0x46fd78-0x46fe0a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCRibbonButton::AddToListBox(class CMFCRibbonCommandsListBox
   *,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCRibbonButton::AddToListBox
          (CMFCRibbonButton *this,CMFCRibbonCommandsListBox *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int local_8;
  
  iVar2 = FUN_0046d075(param_1,param_2);
  if (((param_2 != 0) && (*(int *)(this + 0x194) == 0)) && (local_8 = 0, 0 < *(int *)(this + 0x1b8))
     ) {
    do {
      piVar3 = (int *)FUN_004ab4cd(local_8);
      if (*(int *)(*piVar3 + 0xa4) != 0) {
        puVar4 = (undefined4 *)FUN_004ab4cd(local_8);
        pcVar1 = *(code **)(*(int *)*puVar4 + 0x174);
        guard_check_icall(param_1,1);
        iVar2 = (*pcVar1)();
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(this + 0x1b8));
  }
  return iVar2;
}

