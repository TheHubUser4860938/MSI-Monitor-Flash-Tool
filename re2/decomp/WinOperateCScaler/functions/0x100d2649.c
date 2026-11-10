// rea decompile_all
// name: CDockSite::RowFromPoint
// address: 0x100d2649
// body: available
// range: 0x100d2649-0x100d2744 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: class CDockingPanesRow * __thiscall CDockSite::RowFromPoint(class CPoint,bool &)const
   
   
   Library: Visual Studio 2015 Release */

CDockingPanesRow * __thiscall
CDockSite::RowFromPoint(CDockSite *this,int param_2,int param_3,undefined1 *param_4)

{
  code *pcVar1;
  POINT pt;
  CDockingPanesRow *pCVar2;
  int iVar3;
  BOOL BVar4;
  int local_2c;
  RECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  *param_4 = 0;
  local_28.left = 0;
  local_2c = *(int *)(this + 0x130);
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  do {
    do {
      if (local_2c == 0) {
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        GetWindowRect(*(HWND *)(this + 0x20),&local_18);
        pcVar1 = *(code **)(*(int *)this + 0x164);
        guard_check_icall();
        iVar3 = (*pcVar1)();
        if ((iVar3 == 0) || (local_18.top <= param_3)) {
          pcVar1 = *(code **)(*(int *)this + 0x164);
          guard_check_icall();
          iVar3 = (*pcVar1)();
          if ((iVar3 != 0) || (local_18.left <= param_2)) goto LAB_100d272e;
        }
        *param_4 = 1;
        goto LAB_100d272e;
      }
      pCVar2 = (CDockingPanesRow *)FUN_1006a9f1(&local_2c);
      pcVar1 = *(code **)(*(int *)pCVar2 + 0x58);
      guard_check_icall();
      iVar3 = (*pcVar1)();
    } while (iVar3 == 0);
    CDockingPanesRow::GetWindowRect(pCVar2,(CRect *)&local_28);
    pt.y = param_3;
    pt.x = param_2;
    BVar4 = PtInRect(&local_28,pt);
  } while (BVar4 == 0);
LAB_100d272e:
  pCVar2 = (CDockingPanesRow *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pCVar2;
}

