// rea decompile_all
// name: CMFCRibbonPanel::OnShow
// address: 0x477833
// body: available
// range: 0x477833-0x4778c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonPanel::OnShow(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonPanel::OnShow(CMFCRibbonPanel *this,int param_1)

{
  code *pcVar1;
  int *piVar2;
  BOOL BVar3;
  undefined4 uVar4;
  int iVar5;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  iVar5 = 0;
  if (0 < *(int *)(this + 0x4e4)) {
    do {
      piVar2 = (int *)FUN_004ab4cd(iVar5);
      piVar2 = (int *)*piVar2;
      if (param_1 == 0) {
LAB_0047788d:
        uVar4 = 0;
      }
      else {
        local_18.left = piVar2[0x1d];
        local_18.top = piVar2[0x1e];
        local_18.right = piVar2[0x1f];
        local_18.bottom = piVar2[0x20];
        BVar3 = IsRectEmpty(&local_18);
        if (BVar3 != 0) goto LAB_0047788d;
        uVar4 = 1;
      }
      pcVar1 = *(code **)(*piVar2 + 0x128);
      guard_check_icall(uVar4);
      (*pcVar1)();
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(this + 0x4e4));
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

