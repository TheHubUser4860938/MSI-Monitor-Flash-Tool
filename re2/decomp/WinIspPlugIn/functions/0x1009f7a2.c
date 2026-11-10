// rea decompile_all
// name: CMFCBaseTabCtrl::CleanUp
// address: 0x1009f7a2
// body: available
// range: 0x1009f7a2-0x1009f8a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCBaseTabCtrl::CleanUp(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCBaseTabCtrl::CleanUp(CMFCBaseTabCtrl *this)

{
  code *pcVar1;
  int *piVar2;
  BOOL BVar3;
  int iVar4;
  int local_c;
  
  local_c = 0;
  if (0 < *(int *)(this + 0xbc)) {
    do {
      piVar2 = (int *)FUN_100efaed(local_c);
      piVar2 = (int *)*piVar2;
      if ((*(int *)(piVar2[8] + 0x20) == 0) ||
         (BVar3 = IsWindow(*(HWND *)(piVar2[8] + 0x20)), BVar3 != 0)) {
        iVar4 = FUN_10051e53(&PTR_s_CPane_101de9e4);
        if (*(int *)(this + 0x11c) != 0) {
          pcVar1 = *(code **)(*(int *)piVar2[8] + 0x60);
          guard_check_icall();
          (*pcVar1)();
        }
        if ((iVar4 == 0) || (*(int *)(this + 0x11c) == 0)) {
          pcVar1 = *(code **)(*piVar2 + 4);
          guard_check_icall(1);
          (*pcVar1)();
        }
      }
      local_c = local_c + 1;
    } while (local_c < *(int *)(this + 0xbc));
  }
  CTooltipManager::DeleteToolTip((CToolTipCtrl **)(this + 0xf8));
  CTooltipManager::DeleteToolTip((CToolTipCtrl **)(this + 0xfc));
  FUN_1016329d(0,0xffffffff);
  FUN_1006874b(0,0xffffffff);
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0xffffffff;
  return;
}

