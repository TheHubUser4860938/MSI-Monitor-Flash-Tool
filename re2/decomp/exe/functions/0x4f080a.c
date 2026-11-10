// rea decompile_all
// name: OnFloatStatus
// address: 0x4f080a
// body: available
// range: 0x4f080a-0x4f08b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: long __thiscall CMiniFrameWnd::OnFloatStatus(unsigned int,long)
    protected: long __thiscall CPaneFrameWnd::OnFloatStatus(unsigned int,long)
   
   Library: Visual Studio 2015 Release */

undefined4 OnFloatStatus(uint param_1)

{
  ulong uVar1;
  CWnd *in_ECX;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = CWnd::GetExStyle(in_ECX);
  if (((uVar1 & 0x100) != 0) && ((param_1 & 0x40) != 0)) {
    uVar2 = 1;
  }
  if ((param_1 & 3) != 0) {
    CWnd::SetWindowPos(in_ECX,(CWnd *)0x0,0,0,0,0,(-(uint)((param_1 & 1) != 0) & 0xffffffc0) + 0x97)
    ;
  }
  if ((param_1 & 0x30) != 0) {
    CWnd::EnableWindow(in_ECX,param_1 >> 4 & 1);
  }
  if ((param_1 & 0xc) != 0) {
    uVar1 = CWnd::GetExStyle(in_ECX);
    if ((uVar1 & 0x100) != 0) {
      CWnd::ModifyStyle(in_ECX,0x100,0,0);
      SendMessageW(*(HWND *)(in_ECX + 0x20),0x86,param_1 >> 2 & 1,0);
      CWnd::ModifyStyle(in_ECX,0,0x100,0);
    }
  }
  return uVar2;
}

