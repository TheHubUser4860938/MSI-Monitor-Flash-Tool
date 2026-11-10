// rea decompile_all
// name: CWinThread::Run
// address: 0x1003cb22
// body: available
// range: 0x1003cb22-0x1003cbb5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CWinThread::Run(void)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __thiscall CWinThread::Run(CWinThread *this)

{
  bool bVar1;
  _AFX_THREAD_STATE *p_Var2;
  BOOL BVar3;
  int iVar4;
  int local_c;
  
  p_Var2 = AfxGetThreadState();
  bVar1 = true;
  local_c = 0;
  do {
    if (bVar1) {
      do {
        BVar3 = PeekMessageW((LPMSG)(p_Var2 + 0x30),(HWND)0x0,0,0,0);
        if (BVar3 != 0) break;
        iVar4 = (**(code **)(*(int *)this + 0x60))(local_c);
        local_c = local_c + 1;
        if (iVar4 == 0) {
          bVar1 = false;
        }
      } while (bVar1);
    }
    do {
      iVar4 = (**(code **)(*(int *)this + 0x5c))();
      if (iVar4 == 0) {
        iVar4 = (**(code **)(*(int *)this + 0x68))();
        return iVar4;
      }
      iVar4 = (**(code **)(*(int *)this + 100))((LPMSG)(p_Var2 + 0x30));
      if (iVar4 != 0) {
        bVar1 = true;
        local_c = 0;
      }
      BVar3 = PeekMessageW((LPMSG)(p_Var2 + 0x30),(HWND)0x0,0,0,0);
    } while (BVar3 != 0);
  } while( true );
}

