// rea decompile_all
// name: CScrollView::CalcWindowRect
// address: 0x53f61c
// body: available
// range: 0x53f61c-0x53f6b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CScrollView::CalcWindowRect(struct tagRECT *,unsigned int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CScrollView::CalcWindowRect(CScrollView *this,tagRECT *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  uint dwExStyle;
  BOOL bMenu;
  int local_10;
  int local_c;
  int local_8;
  
  uVar2 = CWnd::GetExStyle((CWnd *)this);
  if (param_2 == 1) {
    AdjustWindowRectEx(param_1,0,0,uVar2);
    if (*(int *)(this + 0x8c) != -1) {
      iVar3 = param_1->bottom - param_1->top;
      local_10 = 0;
      local_8 = *(int *)(this + 0x98) - (param_1->right - param_1->left);
      local_c = 0;
      iVar1 = *(int *)(this + 0x9c);
      GetScrollBarSizes(this,(CSize *)&local_10);
      if (iVar1 != iVar3 && -1 < iVar1 - iVar3) {
        param_1->right = param_1->right + local_10;
      }
      if (0 < local_8) {
        param_1->bottom = param_1->bottom + local_c;
      }
    }
  }
  else {
    dwExStyle = uVar2 & 0xfffffdff;
    bMenu = 0;
    uVar2 = CWnd::GetExStyle((CWnd *)this);
    AdjustWindowRectEx(param_1,uVar2,bMenu,dwExStyle);
  }
  return;
}

