// rea decompile_all
// name: CDockablePane::GetDockingStatus
// address: 0x1012ad8e
// body: available
// range: 0x1012ad8e-0x1012af3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual enum AFX_CS_STATUS __thiscall CDockablePane::GetDockingStatus(class CPoint,int)
   
   Library: Visual Studio 2015 Release */

AFX_CS_STATUS __thiscall
CDockablePane::GetDockingStatus(CDockablePane *this,LONG param_2,LONG param_3,int param_4)

{
  code *pcVar1;
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  POINT pt_02;
  char cVar2;
  CWnd *pCVar3;
  CDockingManager *this_00;
  CSmartDockingManager *pCVar4;
  int iVar5;
  BOOL BVar6;
  AFX_CS_STATUS AVar7;
  int local_3c;
  RECT local_38;
  RECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  pcVar1 = *(code **)(*(int *)this + 0x1b8);
  guard_check_icall();
  cVar2 = (*pcVar1)();
  pcVar1 = *(code **)(*(int *)this + 0x19c);
  guard_check_icall();
  pCVar3 = (CWnd *)(*pcVar1)();
  this_00 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_10205db4,pCVar3);
  local_3c = -1;
  if ((((cVar2 < '\0') && (this_00 != (CDockingManager *)0x0)) &&
      (pCVar4 = CDockingManager::GetSmartDockingManager(this_00),
      pCVar4 != (CSmartDockingManager *)0x0)) &&
     ((*(int *)(pCVar4 + 8) != 0 && (*(int *)(pCVar4 + 4) != 0)))) {
    local_3c = *(int *)(pCVar4 + 0x110);
  }
  pcVar1 = *(code **)(*(int *)this + 0x334);
  guard_check_icall(param_2,param_3,1);
  iVar5 = (*pcVar1)();
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  local_38.left = 0;
  pcVar1 = *(code **)(*(int *)this + 0x32c);
  local_38.top = 0;
  local_38.right = 0;
  local_38.bottom = 0;
  guard_check_icall(&local_28,&local_38);
  (*pcVar1)();
  if (((iVar5 != 2) && (pt.y = param_3, pt.x = param_2, BVar6 = PtInRect(&local_28,pt), BVar6 == 0))
     && ((pt_00.y = param_3, pt_00.x = param_2, BVar6 = PtInRect(&local_38,pt_00), BVar6 == 0 &&
         (local_3c != 8)))) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_18);
    pcVar1 = *(code **)(*(int *)this + 0x1a4);
    guard_check_icall();
    iVar5 = (*pcVar1)();
    local_18.top = local_18.top + iVar5 + (local_28.bottom - local_28.top);
    local_18.bottom = local_18.bottom + (local_38.top - local_38.bottom);
    if (param_4 == -1) {
      pt_01.y = param_3;
      pt_01.x = param_2;
      PtInRect(&local_18,pt_01);
    }
    else {
      InflateRect(&local_18,-param_4,-param_4);
      pt_02.y = param_3;
      pt_02.x = param_2;
      PtInRect(&local_18,pt_02);
    }
  }
  AVar7 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return AVar7;
}

