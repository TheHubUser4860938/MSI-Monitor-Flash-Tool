// rea decompile_all
// name: CPane::MovePane
// address: 0x4804ae
// body: available
// range: 0x4804ae-0x4805ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CSize __thiscall CPane::MovePane(class CRect,int,void * &)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CPane::MovePane(CPane *this,int *param_2,int param_3,int param_4,int param_5,int param_6,int param_7
               )

{
  code *pcVar1;
  int _X;
  int _X_00;
  long lVar2;
  HWND pHVar3;
  CWnd *this_00;
  tagRECT *ptVar4;
  int local_24;
  int local_20;
  CPane *local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  _X = param_5 - param_3;
  local_24 = 0;
  local_20 = 0;
  _X_00 = param_6 - param_4;
  pcVar1 = *(code **)(*(int *)this + 0x270);
  local_1c = this;
  guard_check_icall(&local_24);
  (*pcVar1)();
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect(*(HWND *)(this + 0x20),&local_18);
  *param_2 = (param_5 - param_3) - (local_18.right - local_18.left);
  param_2[1] = (param_6 - param_4) - (local_18.bottom - local_18.top);
  if (param_7 == 0) {
    lVar2 = _labs(_X);
    if (lVar2 < local_24) {
      if ((local_18.left == param_3) || (local_18.right != param_5)) {
        param_5 = local_18.left + local_24;
      }
      else {
        param_3 = local_18.right - local_24;
      }
      *param_2 = ((local_18.right - param_5) - local_18.left) + param_3;
    }
    lVar2 = _labs(_X_00);
    this = local_1c;
    if (lVar2 < local_20) {
      if ((local_18.top == param_4) || (local_18.bottom != param_6)) {
        param_6 = local_18.top + local_20;
      }
      else {
        param_4 = local_18.bottom - local_20;
      }
      param_2[1] = ((local_18.bottom - param_6) - local_18.top) + param_4;
    }
  }
  ptVar4 = (tagRECT *)&param_3;
  pHVar3 = GetParent(*(HWND *)(this + 0x20));
  this_00 = CWnd::FromHandle(pHVar3);
  CWnd::ScreenToClient(this_00,ptVar4);
  pcVar1 = *(code **)(*(int *)this + 0x234);
  guard_check_icall(&param_3,1,0);
  (*pcVar1)();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

