// rea decompile_all
// name: CDockingManager::PaneFromPoint
// address: 0x100b92f2
// body: available
// range: 0x100b92f2-0x100b9463 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CBasePane * __thiscall CDockingManager::PaneFromPoint(class
   CPoint,int,bool,struct CRuntimeClass *,int,class CBasePane const *)const 
   
   Library: Visual Studio 2015 Release */

CBasePane * __thiscall
CDockingManager::PaneFromPoint
          (CDockingManager *this,LONG param_2,LONG param_3,int param_4,char param_5,int param_6,
          int param_7,CWnd *param_8)

{
  code *pcVar1;
  POINT pt;
  undefined4 uVar2;
  CWnd *pCVar3;
  int iVar4;
  ulong uVar5;
  BOOL BVar6;
  CBasePane *pCVar7;
  int *local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  if ((*(int *)(this + 0x1b8) == 0) || (3 < *(uint *)(*(int *)(this + 0x1b8) + 0x110))) {
    uVar2 = 0;
    if (param_8 != (CWnd *)0x0) {
      pcVar1 = *(code **)(*(int *)param_8 + 0x228);
      guard_check_icall(1);
      uVar2 = (*pcVar1)();
    }
    pcVar1 = *(code **)(*(int *)this + 0x14);
    guard_check_icall(param_2,param_3,uVar2,0);
    local_1c = (int *)(*pcVar1)();
    if (local_1c != (int *)0x0) {
      pcVar1 = *(code **)(*local_1c + 0x1c4);
      guard_check_icall(param_2,param_3,param_4,param_7);
      pCVar3 = (CWnd *)(*pcVar1)();
      if (((pCVar3 != (CWnd *)0x0) && (pCVar3 != param_8)) &&
         ((param_6 == 0 || (iVar4 = FUN_100250d6(param_6), iVar4 != 0)))) goto LAB_100b944e;
    }
    local_1c = *(int **)(this + 0x24);
    do {
      do {
        if (local_1c == (int *)0x0) goto LAB_100b944e;
        pCVar3 = (CWnd *)FUN_1006a9f1(&local_1c);
      } while (((param_6 != 0) && (iVar4 = FUN_100250d6(param_6), iVar4 == 0)) ||
              (((param_7 != 0 && (uVar5 = CWnd::GetExStyle(pCVar3), (uVar5 & 0x10000000) == 0)) ||
               (pCVar3 == param_8))));
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      GetWindowRect(*(HWND *)(pCVar3 + 0x20),&local_18);
      if (param_5 == '\0') {
        InflateRect(&local_18,param_4,param_4);
      }
      pt.y = param_3;
      pt.x = param_2;
      BVar6 = PtInRect(&local_18,pt);
    } while (BVar6 == 0);
  }
LAB_100b944e:
  pCVar7 = (CBasePane *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pCVar7;
}

