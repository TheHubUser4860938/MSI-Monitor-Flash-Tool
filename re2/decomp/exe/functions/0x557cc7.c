// rea decompile_all
// name: CCheckListBox::PreDrawItemThemed
// address: 0x557cc7
// body: available
// range: 0x557cc7-0x557e22 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: bool __thiscall CCheckListBox::PreDrawItemThemed(class CDC *,struct tagDRAWITEMSTRUCT
   &,int,int)
   
   Library: Visual Studio 2015 Release */

bool __thiscall
CCheckListBox::PreDrawItemThemed
          (CCheckListBox *this,CDC *param_1,tagDRAWITEMSTRUCT *param_2,int param_3,int param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  BOOL BVar3;
  HTHEME hTheme;
  HRESULT HVar4;
  int iVar5;
  RECT *lprcSrc;
  SIZE local_4c;
  tagDRAWITEMSTRUCT *local_44;
  CCheckListBox *local_40;
  int local_3c;
  RECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_44 = param_2;
  local_40 = this;
  BVar3 = IsAppThemed();
  if ((BVar3 != 0) &&
     (hTheme = OpenThemeData(*(HWND *)(this + 0x20),L"Button"), hTheme != (HTHEME)0x0)) {
    local_3c = 1;
    if (param_3 == 1) {
      local_3c = 5;
    }
    else if (param_3 == 2) {
      local_3c = 9;
    }
    HVar4 = GetThemePartSize(hTheme,*(HDC *)(param_1 + 4),3,local_3c,(LPCRECT)0x0,TS_TRUE,&local_4c)
    ;
    if (-1 < HVar4) {
      lprcSrc = (RECT *)(local_44 + 0x1c);
      CopyRect(&local_18,lprcSrc);
      local_18.left = local_18.left + 1;
      iVar5 = (param_4 - local_4c.cy) / 2;
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      local_18.top = iVar5 + local_18.top + 1;
      local_18.right = local_4c.cx + local_18.left;
      local_18.bottom = local_4c.cy + local_18.top;
      CopyRect(&local_28,lprcSrc);
      local_28.right = local_28.left + local_4c.cx + 2;
      pcVar1 = *(code **)(*(int *)local_40 + 0x180);
      guard_check_icall(&local_38,local_28.left,local_28.top,local_28.right,local_28.bottom,
                        local_18.left,local_18.top,local_18.right,local_18.bottom);
      (*pcVar1)();
      HVar4 = DrawThemeBackground(hTheme,*(HDC *)(param_1 + 4),3,local_3c,&local_38,(LPCRECT)0x0);
      if (-1 < HVar4) {
        *(int *)(local_44 + 0x1c) = *(int *)(local_44 + 0x1c) + local_4c.cx + 3;
      }
      CloseThemeData(hTheme);
    }
  }
  uVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}

