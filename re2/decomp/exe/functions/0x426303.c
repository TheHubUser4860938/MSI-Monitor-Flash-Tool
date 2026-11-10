// rea decompile_all
// name: AFX_GLOBAL_DATA::OnSettingChange
// address: 0x426303
// body: available
// range: 0x426303-0x4263ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall AFX_GLOBAL_DATA::OnSettingChange(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall AFX_GLOBAL_DATA::OnSettingChange(AFX_GLOBAL_DATA *this)

{
  LPRECT lprc;
  AFX_GLOBAL_DATA *pvParam;
  int iVar1;
  BOOL BVar2;
  
  *(undefined4 *)(this + 0xc) = 1;
  iVar1 = GetSystemMetrics(0x31);
  *(int *)(this + 0x114) = iVar1;
  iVar1 = GetSystemMetrics(0x32);
  lprc = (LPRECT)(this + 0x16c);
  *(int *)(this + 0x118) = iVar1;
  SetRectEmpty(lprc);
  BVar2 = EnumDisplayMonitors((HDC)0x0,(LPCRECT)0x0,InfoEnumProc,(LPARAM)lprc);
  if (BVar2 == 0) {
    SystemParametersInfoW(0x30,0,lprc,0);
  }
  pvParam = this + 400;
  DAT_00612d9c = 0;
  *(int *)pvParam = 0;
  *(undefined4 *)(this + 0x194) = 0;
  if (*(int *)(this + 0x180) == 0) {
    SystemParametersInfoW(0x1002,0,pvParam,0);
    if (*(int *)pvParam != 0) {
      SystemParametersInfoW(0x1012,0,this + 0x194,0);
    }
  }
  *(undefined4 *)(this + 0x1c8) = 0;
  *(undefined4 *)(this + 0x1a8) = 1;
  SystemParametersInfoW(0x100a,0,this + 0x1a4,0);
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x1a0) = *(undefined4 *)(this + 0x1a4);
  return;
}

