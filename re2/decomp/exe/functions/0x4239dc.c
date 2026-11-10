// rea decompile_all
// name: CMFCVisualManagerWindows::OnFillCommandsListBackground
// address: 0x4239dc
// body: available
// range: 0x4239dc-0x423a78 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual unsigned long __thiscall
   CMFCVisualManagerWindows::OnFillCommandsListBackground(class CDC *,class CRect,int)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall
CMFCVisualManagerWindows::OnFillCommandsListBackground
          (CMFCVisualManagerWindows *this,CDC *param_1,LONG param_3,LONG param_4,LONG param_5,
          LONG param_6,int param_7)

{
  HBRUSH hbr;
  AFX_GLOBAL_DATA *pAVar1;
  ulong uVar2;
  HBRUSH hbr_00;
  HDC hDC;
  
  hbr_00 = (HBRUSH)0x0;
  if ((*(int *)(this + 4) == 0) || (*(int *)(this + 0x158) != 0)) {
    uVar2 = FUN_004a0e45(param_1,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    hDC = (HDC)0x0;
    if (param_1 != (CDC *)0x0) {
      hDC = *(HDC *)(param_1 + 4);
    }
    hbr = GetSysColorBrush(4);
    FillRect(hDC,(RECT *)&param_3,hbr);
    pAVar1 = GetGlobalData();
    if (param_7 == 0) {
      uVar2 = *(ulong *)(pAVar1 + 0x78);
    }
    else {
      if (pAVar1 != (AFX_GLOBAL_DATA *)0xffffff60) {
        hbr_00 = *(HBRUSH *)(pAVar1 + 0xa4);
      }
      FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_3,hbr_00);
      pAVar1 = GetGlobalData();
      uVar2 = *(ulong *)(pAVar1 + 0x78);
      pAVar1 = GetGlobalData();
      CDC::Draw3dRect(param_1,(tagRECT *)&param_3,*(ulong *)(pAVar1 + 0x78),uVar2);
      pAVar1 = GetGlobalData();
      uVar2 = *(ulong *)(pAVar1 + 0x40);
    }
  }
  return uVar2;
}

