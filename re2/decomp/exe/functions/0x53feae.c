// rea decompile_all
// name: CScrollView::OnPrepareDC
// address: 0x53feae
// body: available
// range: 0x53feae-0x53ffe0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CScrollView::OnPrepareDC(class CDC *,struct CPrintInfo *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CScrollView::OnPrepareDC(CScrollView *this,CDC *param_1,CPrintInfo *param_2)

{
  code *pcVar1;
  tagSIZE tVar2;
  tagSIZE tVar3;
  tagPOINT tVar4;
  int *piVar5;
  LONG LVar6;
  undefined1 local_20 [4];
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x84) == 0) {
    pcVar1 = *(code **)(*(int *)param_1 + 0x34);
    if (*(int *)(this + 0x8c) == -1) {
      guard_check_icall(8);
      (*pcVar1)();
      tVar2.cy = *(LONG *)(this + 0x90);
      tVar2.cx = (LONG)local_20;
      CDC::SetWindowExt(param_1,tVar2);
      tVar3.cy = *(LONG *)(this + 0x98);
      tVar3.cx = (LONG)local_20;
      CDC::SetViewportExt(param_1,tVar3);
    }
    else {
      guard_check_icall(*(int *)(this + 0x8c));
      (*pcVar1)();
    }
    LVar6 = 0;
    if (*(int *)(param_1 + 0xc) == 0) {
      piVar5 = (int *)GetDeviceScrollPosition(this);
      LVar6 = -*piVar5;
      local_1c = -piVar5[1];
      if (*(int *)(this + 0xb0) != 0) {
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        GetClientRect(*(HWND *)(this + 0x20),&local_18);
        if (*(int *)(this + 0x98) < local_18.right - local_18.left) {
          LVar6 = ((local_18.right - *(int *)(this + 0x98)) - local_18.left) / 2;
        }
      }
    }
    tVar4.y = LVar6;
    tVar4.x = (LONG)local_20;
    CDC::SetViewportOrg(param_1,tVar4);
    CView::OnPrepareDC((CView *)this,param_1,param_2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

