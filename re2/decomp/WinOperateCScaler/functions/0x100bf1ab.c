// rea decompile_all
// name: LoadFrame
// address: 0x100bf1ab
// body: available
// range: 0x100bf1ab-0x100bf1dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall COleDocIPFrameWndEx::LoadFrame(unsigned int,unsigned long,class
   CWnd *,struct CCreateContext *)
    public: virtual int __thiscall COleIPFrameWndEx::LoadFrame(unsigned int,unsigned long,class CWnd
   *,struct CCreateContext *)
   
   Library: Visual Studio 2015 Release */

void LoadFrame(uint param_1,ulong param_2,CWnd *param_3,CCreateContext *param_4)

{
  CFrameWnd *in_ECX;
  
  *(uint *)(in_ECX + 0x1b4) = param_1;
  CFrameImpl::LoadLargeIconsState((CFrameImpl *)(in_ECX + 0x1a8));
  CFrameWnd::LoadFrame(in_ECX,param_1,param_2,param_3,param_4);
  return;
}

