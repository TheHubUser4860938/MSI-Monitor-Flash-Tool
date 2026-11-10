// rea decompile_all
// name: CMFCAutoHideBar::ButtonFromPoint
// address: 0x1012cba1
// body: available
// range: 0x1012cba1-0x1012cc94 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: class CMFCAutoHideButton * __thiscall CMFCAutoHideBar::ButtonFromPoint(class CPoint)
   
   Library: Visual Studio 2015 Release */

CMFCAutoHideButton * __thiscall
CMFCAutoHideBar::ButtonFromPoint(CMFCAutoHideBar *this,LONG param_2,LONG param_3)

{
  code *pcVar1;
  POINT pt;
  POINT pt_00;
  int *piVar2;
  int iVar3;
  BOOL BVar4;
  CMFCAutoHideButton *pCVar5;
  int local_1c;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  local_1c = *(int *)(this + 700);
  do {
    do {
      do {
        if (local_1c == 0) {
          local_1c = *(int *)(this + 700);
          goto joined_r0x1012cc27;
        }
        piVar2 = (int *)FUN_100972dc(&local_1c);
        piVar2 = (int *)*piVar2;
      } while (piVar2[1] == 0);
      pcVar1 = *(code **)(*piVar2 + 0x14);
      guard_check_icall();
      iVar3 = (*pcVar1)();
    } while (iVar3 == 0);
    local_18.left = piVar2[6];
    local_18.top = piVar2[7];
    local_18.right = piVar2[8];
    local_18.bottom = piVar2[9];
    pt.y = param_3;
    pt.x = param_2;
    BVar4 = PtInRect(&local_18,pt);
  } while (BVar4 == 0);
  goto LAB_1012cc82;
  while( true ) {
    local_18.left = piVar2[6];
    local_18.top = piVar2[7];
    local_18.right = piVar2[8];
    local_18.bottom = piVar2[9];
    pt_00.y = param_3;
    pt_00.x = param_2;
    BVar4 = PtInRect(&local_18,pt_00);
    if (BVar4 != 0) break;
joined_r0x1012cc27:
    do {
      if (local_1c == 0) goto LAB_1012cc82;
      piVar2 = (int *)FUN_100972dc(&local_1c);
      piVar2 = (int *)*piVar2;
      pcVar1 = *(code **)(*piVar2 + 0x14);
      guard_check_icall();
      iVar3 = (*pcVar1)();
    } while (iVar3 == 0);
  }
LAB_1012cc82:
  pCVar5 = (CMFCAutoHideButton *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pCVar5;
}

