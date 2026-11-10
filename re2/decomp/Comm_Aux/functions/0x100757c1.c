// rea decompile_all
// name: CMFCPropertyGridCtrl::OnRButtonDown
// address: 0x100757c1
// body: available
// range: 0x100757c1-0x10075963 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPropertyGridCtrl::OnRButtonDown(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCPropertyGridCtrl::OnRButtonDown
          (CMFCPropertyGridCtrl *this,undefined4 param_1,LONG param_3,int param_4)

{
  code *pcVar1;
  POINT pt;
  long lVar2;
  CMFCPropertyGridProperty *pCVar3;
  int iVar4;
  BOOL BVar5;
  int local_20;
  uint local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  FUN_100509af();
  CWnd::SetFocus((CWnd *)this);
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_18);
  if (((*(int *)(this + 0x2fc) == 0) ||
      ((lVar2 = _labs((param_4 - *(int *)(this + 0x334)) + -4), 2 < lVar2 &&
       (param_4 <= *(int *)(this + 0x334))))) &&
     (lVar2 = _labs((param_3 - *(int *)(this + 0x358)) - *(int *)(this + 0x328)), 2 < lVar2)) {
    pCVar3 = HitTest(this,param_3,param_4,&local_20,0);
    local_1c = (uint)(pCVar3 != *(CMFCPropertyGridProperty **)(this + 0x3d8));
    SetCurSel(this,pCVar3,1);
    if (pCVar3 != (CMFCPropertyGridProperty *)0x0) {
      EnsureVisible(this,pCVar3,0);
      if (local_20 == 1) {
        pcVar1 = *(code **)(*(int *)pCVar3 + 100);
        guard_check_icall(param_3,param_4);
        (*pcVar1)();
      }
      else if (local_20 == 2) {
        pcVar1 = *(code **)(*(int *)pCVar3 + 0x68);
        guard_check_icall(param_3,param_4,local_1c);
        (*pcVar1)();
        if ((*(int *)(pCVar3 + 100) != 0) && (local_1c == 0)) {
          pcVar1 = *(code **)(*(int *)this + 0x180);
          guard_check_icall(pCVar3,&param_3);
          iVar4 = (*pcVar1)();
          if ((iVar4 != 0) &&
             ((*(int *)(pCVar3 + 0xb8) != 0 &&
              (pt.y = param_4, pt.x = param_3, BVar5 = PtInRect((RECT *)(pCVar3 + 0x40),pt),
              BVar5 == 0)))) {
            pcVar1 = *(code **)(*(int *)pCVar3 + 0x98);
            guard_check_icall();
            iVar4 = (*pcVar1)();
            if (iVar4 != 0) {
              pcVar1 = *(code **)(*(int *)pCVar3 + 0x40);
              guard_check_icall(0x204,param_3,param_4);
              (*pcVar1)();
            }
          }
        }
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

