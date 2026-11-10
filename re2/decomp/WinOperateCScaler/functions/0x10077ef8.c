// rea decompile_all
// name: CMFCOutlookBar::GetDockingStatus
// address: 0x10077ef8
// body: available
// range: 0x10077ef8-0x10078043 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual enum AFX_CS_STATUS __thiscall CMFCOutlookBar::GetDockingStatus(class CPoint,int)
   
   Library: Visual Studio 2015 Release */

AFX_CS_STATUS __thiscall
CMFCOutlookBar::GetDockingStatus(CMFCOutlookBar *this,LONG param_2,LONG param_3,int param_4)

{
  code *pcVar1;
  POINT pt;
  POINT pt_00;
  int iVar2;
  BOOL BVar3;
  AFX_CS_STATUS AVar4;
  RECT local_28;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  if (*(int **)(this + 0x370) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0x370) + 0x1ac);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      pcVar1 = *(code **)(**(int **)(this + 0x370) + 0x1a4);
      guard_check_icall();
      iVar2 = (*pcVar1)();
      if (iVar2 != 0) {
        pcVar1 = *(code **)(*(int *)this + 0x334);
        guard_check_icall(param_2,param_3,1);
        iVar2 = (*pcVar1)();
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        local_28.left = 0;
        local_28.top = 0;
        local_28.right = 0;
        local_28.bottom = 0;
        pcVar1 = *(code **)(*(int *)this + 0x32c);
        guard_check_icall(&local_18,&local_28);
        (*pcVar1)();
        BVar3 = IsRectEmpty(&local_18);
        if (BVar3 == 0) {
          local_18.bottom = local_18.bottom + param_4;
        }
        BVar3 = IsRectEmpty(&local_28);
        if (BVar3 == 0) {
          local_28.top = local_28.top - param_4;
        }
        if (((iVar2 != 2) &&
            (pt.y = param_3, pt.x = param_2, BVar3 = PtInRect(&local_18,pt), BVar3 == 0)) &&
           (pt_00.y = param_3, pt_00.x = param_2, BVar3 = PtInRect(&local_28,pt_00), BVar3 == 0)) {
          CDockablePane::GetDockingStatus((CDockablePane *)this,param_2,param_3,param_4);
          pcVar1 = *(code **)(*(int *)this + 0x1cc);
          guard_check_icall();
          (*pcVar1)();
        }
      }
    }
  }
  AVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return AVar4;
}

