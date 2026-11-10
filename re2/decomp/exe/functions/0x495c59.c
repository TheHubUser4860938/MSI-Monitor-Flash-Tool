// rea decompile_all
// name: OnCreate
// address: 0x495c59
// body: available
// range: 0x495c59-0x495c99 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall CFrameWndEx::OnCreate(struct tagCREATESTRUCTA *)
    public: int __thiscall CFrameWndEx::OnCreate(struct tagCREATESTRUCTW *)
   
   Library: Visual Studio 2015 Release */

undefined4 OnCreate(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  CFrameWnd *in_ECX;
  
  iVar1 = FUN_004d5eda(param_1);
  if (iVar1 == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    *(uint *)(in_ECX + 0x158) = *(uint *)(param_1 + 0x20) >> 0x17 & 1;
    CFrameImpl::AddFrame(in_ECX);
    CFrameImpl::OnChangeVisualManager((CFrameImpl *)(in_ECX + 0x134));
    uVar2 = 0;
  }
  return uVar2;
}

