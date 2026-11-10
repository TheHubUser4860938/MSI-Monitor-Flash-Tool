// rea decompile_all
// name: CMFCTasksPane::CreateFonts
// address: 0x101415fb
// body: available
// range: 0x101415fb-0x101416ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCTasksPane::CreateFonts(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCTasksPane::CreateFonts(CMFCTasksPane *this)

{
  CGdiObject *this_00;
  CGdiObject *this_01;
  CGdiObject *this_02;
  void *pvVar1;
  CGdiObject *pCVar2;
  HFONT pHVar3;
  LOGFONTW local_64;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  this_00 = (CGdiObject *)(this + 0x3dc);
  if ((this_00 != (CGdiObject *)0x0) && (*(int *)(this + 0x3e0) != 0)) {
    CGdiObject::DeleteObject(this_00);
  }
  this_01 = (CGdiObject *)(this + 0x3e4);
  if ((this_01 != (CGdiObject *)0x0) && (*(int *)(this + 1000) != 0)) {
    CGdiObject::DeleteObject(this_01);
  }
  this_02 = (CGdiObject *)(this + 0x3ec);
  if ((this_02 != (CGdiObject *)0x0) && (*(int *)(this + 0x3f0) != 0)) {
    CGdiObject::DeleteObject(this_02);
  }
  pvVar1 = *(void **)(this + 0x3d8);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = GetStockObject(0x11);
  }
  pCVar2 = CGdiObject::FromHandle(pvVar1);
  _memset(&local_64,0,0x5c);
  GetObjectW(*(HANDLE *)(pCVar2 + 4),0x5c,&local_64);
  local_64.lfWeight = 700;
  pHVar3 = CreateFontIndirectW(&local_64);
  CMenu::Attach((CMenu *)this_00,(HMENU__ *)pHVar3);
  local_64.lfUnderline = '\x01';
  pHVar3 = CreateFontIndirectW(&local_64);
  CMenu::Attach((CMenu *)this_01,(HMENU__ *)pHVar3);
  local_64.lfWeight = 400;
  local_64.lfUnderline = '\x01';
  pHVar3 = CreateFontIndirectW(&local_64);
  CMenu::Attach((CMenu *)this_02,(HMENU__ *)pHVar3);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

