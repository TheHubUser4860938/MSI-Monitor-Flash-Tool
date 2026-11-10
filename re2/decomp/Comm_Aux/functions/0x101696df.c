// rea decompile_all
// name: CControlBar::SetStatusText
// address: 0x101696df
// body: available
// range: 0x101696df-0x1016977b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CControlBar::SetStatusText(int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CControlBar::SetStatusText(CControlBar *this,int param_1)

{
  CWnd *pCVar1;
  AFX_MODULE_THREAD_STATE *pAVar2;
  
  pCVar1 = CWnd::GetOwner((CWnd *)this);
  pAVar2 = AfxGetModuleThreadState();
  if (param_1 == -1) {
    *(undefined4 *)(pAVar2 + 0x50) = 0;
    if (((byte)this[0xac] & 8) == 0) {
      KillTimer(*(HWND *)(this + 0x20),0xec09);
      return 0;
    }
    SendMessageW(*(HWND *)(pCVar1 + 0x20),0x375,0xe001,0);
    *(uint *)(this + 0xac) = *(uint *)(this + 0xac) & 0xfffffff7;
  }
  else {
    if ((((byte)this[0xac] & 8) != 0) && (*(int *)(pAVar2 + 0x4c) == param_1)) {
      return 0;
    }
    *(CControlBar **)(pAVar2 + 0x50) = this;
    SendMessageW(*(HWND *)(pCVar1 + 0x20),0x362,param_1,0);
    *(uint *)(this + 0xac) = *(uint *)(this + 0xac) | 8;
    ResetTimer(this,0xec0a,200);
  }
  return 1;
}

