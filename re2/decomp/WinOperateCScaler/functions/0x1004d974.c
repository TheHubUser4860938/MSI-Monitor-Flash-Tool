// rea decompile_all
// name: CMFCShellTreeCtrl::InitTree
// address: 0x1004d974
// body: available
// range: 0x1004d974-0x1004d9e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCShellTreeCtrl::InitTree(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCShellTreeCtrl::InitTree(CMFCShellTreeCtrl *this)

{
  UINT UVar1;
  _IMAGELIST *p_Var2;
  CImageList *pCVar3;
  int iVar4;
  SHFILEINFOW local_4c8;
  WCHAR local_214 [262];
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  UVar1 = GetWindowsDirectoryW(local_214,0x104);
  if (UVar1 != 0) {
    iVar4 = 0;
    p_Var2 = (_IMAGELIST *)SHGetFileInfoW(local_214,0,&local_4c8,0x2b4,0x4001);
    pCVar3 = CImageList::FromHandle(p_Var2);
    CTreeCtrl::SetImageList((CTreeCtrl *)this,pCVar3,iVar4);
  }
  Refresh(this);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

