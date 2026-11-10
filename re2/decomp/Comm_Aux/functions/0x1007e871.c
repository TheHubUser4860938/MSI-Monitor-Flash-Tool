// rea decompile_all
// name: CBasePane::IsVisible
// address: 0x1007e871
// body: available
// range: 0x1007e871-0x1007e92c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CBasePane::IsVisible(void)const 
   
   Library: Visual Studio 2015 Release */

int __thiscall CBasePane::IsVisible(CBasePane *this)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  CMFCBaseTabCtrl *pCVar5;
  BOOL BVar6;
  int iVar7;
  CBasePane *pCVar8;
  CBasePane *local_8;
  
  pcVar1 = *(code **)(*(int *)this + 0x16c);
  local_8 = this;
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if (iVar2 == 0) {
    if (DAT_1020fd28 == 0) {
      uVar4 = CWnd::GetExStyle((CWnd *)this);
      uVar3 = uVar4 >> 0x1c & 1;
    }
    else {
      pcVar1 = *(code **)(*(int *)this + 0x1ac);
      guard_check_icall();
      uVar3 = (*pcVar1)();
    }
  }
  else {
    local_8 = (CBasePane *)0x0;
    pCVar5 = GetParentTabWnd(this,(HWND__ **)&local_8);
    BVar6 = IsWindowVisible(*(HWND *)(pCVar5 + 0x20));
    uVar3 = 0;
    if (BVar6 != 0) {
      pcVar1 = *(code **)(*(int *)pCVar5 + 0x21c);
      pCVar8 = local_8;
      guard_check_icall(local_8);
      iVar2 = (*pcVar1)();
      if (-1 < iVar2) {
        pcVar1 = *(code **)(*(int *)pCVar5 + 0x1ac);
        guard_check_icall(pCVar8);
        iVar7 = (*pcVar1)();
        if (iVar2 < iVar7) {
          pcVar1 = *(code **)(*(int *)pCVar5 + 0x27c);
          guard_check_icall(iVar2);
          iVar2 = (*pcVar1)();
          return iVar2;
        }
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}

