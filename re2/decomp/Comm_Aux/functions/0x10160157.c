// rea decompile_all
// name: CFrameWnd::CanEnterHelpMode
// address: 0x10160157
// body: available
// range: 0x10160157-0x101601bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CFrameWnd::CanEnterHelpMode(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CFrameWnd::CanEnterHelpMode(CFrameWnd *this)

{
  AFX_MODULE_STATE *pAVar1;
  int iVar2;
  CFrameWnd *local_c;
  CFrameWnd *pCStack_8;
  
  local_c = this;
  pCStack_8 = this;
  if ((DAT_1020db64 == (HCURSOR)0x0) &&
     (DAT_1020db64 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f8b), DAT_1020db64 == (HCURSOR)0x0)) {
    pAVar1 = AfxGetModuleState();
    DAT_1020db64 = LoadCursorW(*(HINSTANCE *)(pAVar1 + 0xc),(LPCWSTR)0x7901);
    if (DAT_1020db64 == (HCURSOR)0x0) {
      return 0;
    }
  }
  iVar2 = *(int *)this;
  guard_check_icall(0xe145,0,0,&local_c);
  iVar2 = (**(code **)(iVar2 + 0xc))();
  return iVar2;
}

