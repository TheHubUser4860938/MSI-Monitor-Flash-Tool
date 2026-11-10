// rea decompile_all
// name: CPaneDivider::Move
// address: 0x10131a29
// body: available
// range: 0x10131a29-0x10131b53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CPaneDivider::Move(class CPoint &,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPaneDivider::Move(CPaneDivider *this,CPoint *param_1,int param_2)

{
  code *pcVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  tagRECT *ptVar7;
  int dy;
  HDWP local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  pHVar2 = GetParent(*(HWND *)(this + 0x20));
  pCVar3 = CWnd::FromHandle(pHVar2);
  uVar4 = CWnd::GetExStyle(pCVar3);
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect(*(HWND *)(this + 0x20),&local_18);
  ptVar7 = &local_18;
  pHVar2 = GetParent(*(HWND *)(this + 0x20));
  pCVar3 = CWnd::FromHandle(pHVar2);
  CWnd::ScreenToClient(pCVar3,ptVar7);
  if ((*(uint *)(this + 0x114) & 2) == 0) {
    if ((*(uint *)(this + 0x114) & 1) == 0) goto LAB_10131b41;
    iVar5 = *(int *)(param_1 + 4);
    iVar6 = 0;
    dy = iVar5;
  }
  else {
    iVar5 = *(int *)param_1;
    if ((uVar4 & 0x400000) != 0) {
      iVar5 = -iVar5;
    }
    iVar6 = iVar5;
    dy = 0;
  }
  OffsetRect(&local_18,iVar6,dy);
  local_1c = BeginDeferWindowPos(0x32);
  if (*(int **)(this + 0x168) != (int *)0x0) {
    iVar6 = **(int **)(this + 0x168);
    guard_check_icall(this,0,iVar5,&local_1c);
    (**(code **)(iVar6 + 0x28))();
  }
  EndDeferWindowPos(local_1c);
  pcVar1 = *(code **)(*(int *)this + 0x268);
  guard_check_icall(0);
  (*pcVar1)();
  pcVar1 = *(code **)(*(int *)this + 0x238);
  guard_check_icall(0,local_18.left,local_18.top,local_18.right - local_18.left,
                    local_18.bottom - local_18.top,0x14,0);
  (*pcVar1)();
LAB_10131b41:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

