// rea decompile_all
// name: CDockablePane::OnSlide
// address: 0x1012da75
// body: available
// range: 0x1012da75-0x1012dc28 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CDockablePane::OnSlide(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDockablePane::OnSlide(CDockablePane *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  BOOL BVar3;
  CWnd *pCVar4;
  ulong uVar5;
  uint uVar6;
  tagRECT *ptVar7;
  int local_30;
  int local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  pcVar1 = *(code **)(*(int *)this + 0x1dc);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if (iVar2 == 0) {
    BVar3 = IsWindow(*(HWND *)(this + 0x350));
    if (BVar3 == 0) goto LAB_1012dc16;
  }
  pcVar1 = *(code **)(*(int *)this + 0x19c);
  guard_check_icall();
  pCVar4 = (CWnd *)(*pcVar1)();
  uVar5 = CWnd::GetExStyle(pCVar4);
  local_18.left = 0;
  uVar6 = uVar5 & 0x400000;
  *(int *)(this + 0x304) = *(int *)(this + 0x304) + 1;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect(*(HWND *)(this + 0x20),&local_18);
  ptVar7 = &local_18;
  pcVar1 = *(code **)(*(int *)this + 0x19c);
  guard_check_icall();
  pCVar4 = (CWnd *)(*pcVar1)();
  CWnd::ScreenToClient(pCVar4,ptVar7);
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  GetWindowRect(*(HWND *)(this + 0x350),&local_28);
  ptVar7 = &local_28;
  pcVar1 = *(code **)(*(int *)this + 0x19c);
  guard_check_icall();
  pCVar4 = (CWnd *)(*pcVar1)();
  CWnd::ScreenToClient(pCVar4,ptVar7);
  if (*(int *)(this + 0x328) == 1) {
    OffsetRectForSliding(this,(CRect *)&local_18,param_1,uVar6);
    OffsetRectForSliding(this,(CRect *)&local_28,param_1,uVar6);
    if (param_1 != 0) {
      CalcCorrectOffset(this,&local_30,local_18.left,local_18.top,local_18.right,local_18.bottom,
                        uVar6);
      OffsetRect(&local_18,local_30,local_2c);
      OffsetRect(&local_28,local_30,local_2c);
    }
  }
  else {
    CalcRectForSliding(this,(CRect *)&local_18,(CRect *)&local_28,param_1);
  }
  pcVar1 = *(code **)(*(int *)this + 0x238);
  guard_check_icall(0,local_18.left,local_18.top,local_18.right - local_18.left,
                    local_18.bottom - local_18.top,0x14,0);
  (*pcVar1)();
  SetWindowPos(*(HWND *)(this + 0x350),(HWND)0x0,local_28.left,local_28.top,
               local_28.right - local_28.left,local_28.bottom - local_28.top,0x14);
LAB_1012dc16:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

