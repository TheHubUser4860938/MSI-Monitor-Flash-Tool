// rea decompile_all
// name: _AFX_CHECKLIST_STATE::GetCheckBoxSize
// address: 0x556f49
// body: available
// range: 0x556f49-0x55703f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: class CSize const & __thiscall _AFX_CHECKLIST_STATE::GetCheckBoxSize(class CWnd *)
   
   Library: Visual Studio 2015 Release */

CSize * __thiscall _AFX_CHECKLIST_STATE::GetCheckBoxSize(_AFX_CHECKLIST_STATE *this,CWnd *param_1)

{
  CSize *this_00;
  int iVar1;
  BOOL BVar2;
  HWND hwnd;
  HTHEME hTheme;
  CFont *pCVar3;
  CPen *pCVar4;
  HRESULT HVar5;
  _AFX_CHECKLIST_STATE *p_Var6;
  undefined1 local_48 [4];
  int local_44;
  undefined4 local_40;
  CClientDC local_30 [4];
  HDC local_2c;
  SIZE local_1c;
  _AFX_CHECKLIST_STATE *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x38;
  local_8 = 0x556f55;
  this_00 = (CSize *)(this + 8);
  local_14 = this;
  iVar1 = CSize::operator==(this_00,(tagSIZE)0x0);
  p_Var6 = this;
  if ((iVar1 != 0) && (BVar2 = IsAppThemed(), BVar2 != 0)) {
    if (param_1 == (CWnd *)0x0) {
      hwnd = (HWND)0x0;
    }
    else {
      hwnd = *(HWND *)(param_1 + 0x20);
    }
    hTheme = OpenThemeData(hwnd,L"Button");
    p_Var6 = local_14;
    if (hTheme != (HTHEME)0x0) {
      CClientDC::CClientDC(local_30,param_1);
      local_8 = 0;
      pCVar3 = CWnd::GetFont(param_1);
      pCVar4 = CDC::SelectObject((CDC *)local_30,(CPen *)pCVar3);
      local_1c.cy = 0;
      local_1c.cx = 0;
      HVar5 = GetThemePartSize(hTheme,local_2c,3,5,(LPCRECT)0x0,TS_TRUE,&local_1c);
      if (-1 < HVar5) {
        *(LONG *)this_00 = local_1c.cx;
        *(LONG *)(this + 0xc) = local_1c.cy;
      }
      CDC::SelectObject((CDC *)local_30,pCVar4);
      CloseThemeData(hTheme);
      CClientDC::~CClientDC(local_30);
      p_Var6 = local_14;
    }
  }
  iVar1 = CSize::operator==(this_00,(tagSIZE)0x0);
  if (iVar1 != 0) {
    GetObjectW(*(HANDLE *)(p_Var6 + 4),0x18,local_48);
    *(int *)this_00 = local_44 / 3;
    *(undefined4 *)(p_Var6 + 0xc) = local_40;
  }
  return this_00;
}

