// rea decompile_all
// name: CMFCControlRenderer::GetImageCount
// address: 0x4b4869
// body: available
// range: 0x4b4869-0x4b48ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CMFCControlRenderer::GetImageCount(void)const 
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCControlRenderer::GetImageCount(CMFCControlRenderer *this)

{
  int iVar1;
  undefined1 local_1c [8];
  int local_14;
  
  iVar1 = *(int *)(this + 0xc);
  if (iVar1 == 1) {
    iVar1 = GetObjectW(*(HANDLE *)(this + 0x94),0x18,local_1c);
    if (iVar1 == 0x18) {
      iVar1 = local_14 / (*(int *)(this + 0x134) - *(int *)(this + 300));
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}

