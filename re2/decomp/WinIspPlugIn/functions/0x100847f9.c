// rea decompile_all
// name: CPane::StretchPaneDeferWndPos
// address: 0x100847f9
// body: available
// range: 0x100847f9-0x10084930 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CPane::StretchPaneDeferWndPos(int,void * &)
   
   Library: Visual Studio 2015 Release */

int __thiscall CPane::StretchPaneDeferWndPos(CPane *this,int param_1,void **param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  HWND pHVar5;
  CWnd *this_00;
  tagRECT *ptVar6;
  long local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  pcVar1 = *(code **)(*(int *)this + 0x278);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  pcVar1 = *(code **)(*(int *)this + 0x27c);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  local_1c = 0;
  if (param_1 < 1) {
    lVar4 = _labs(param_1);
    if (iVar3 < lVar4) {
      local_1c = -iVar3;
    }
    else {
LAB_1008486a:
      local_1c = param_1;
    }
  }
  else {
    if (iVar2 == 0) goto LAB_1008491e;
    local_1c = iVar2;
    if (param_1 < iVar2) goto LAB_1008486a;
  }
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect(*(HWND *)(this + 0x20),&local_18);
  pcVar1 = *(code **)(*(int *)this + 0x164);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if (iVar2 == 0) {
    local_18.bottom = local_18.bottom + local_1c;
  }
  else {
    local_18.right = local_18.right + local_1c;
  }
  pcVar1 = *(code **)(*(int *)this + 0x300);
  guard_check_icall(&local_1c);
  (*pcVar1)();
  lVar4 = _labs(local_1c);
  if (0 < lVar4) {
    ptVar6 = &local_18;
    pHVar5 = GetParent(*(HWND *)(this + 0x20));
    this_00 = CWnd::FromHandle(pHVar5);
    CWnd::ScreenToClient(this_00,ptVar6);
    pcVar1 = *(code **)(*(int *)this + 0x234);
    guard_check_icall(&local_18,1,0);
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)this + 0x304);
    guard_check_icall(local_1c);
    (*pcVar1)();
  }
LAB_1008491e:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

