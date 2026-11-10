// rea decompile_all
// name: CWnd::CreateRunDlgIndirect
// address: 0x424d05
// body: available
// range: 0x424d05-0x424d61 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CWnd::CreateRunDlgIndirect(struct DLGTEMPLATE const *,class CWnd
   *,struct HINSTANCE__ *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CWnd::CreateRunDlgIndirect(CWnd *this,DLGTEMPLATE *param_1,CWnd *param_2,HINSTANCE__ *param_3)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = FUN_00424a87(param_1,param_2,param_3);
  if (iVar1 != 0) {
    if (((byte)this[0x60] & 0x10) != 0) {
      uVar2 = GetExStyle(this);
      RunModalLoop(this,(uVar2 & 0x100 | 0x400) >> 8);
    }
    if (*(int *)(this + 0x20) != 0) {
      SetWindowPos(this,(CWnd *)0x0,0,0,0,0,0x97);
    }
  }
  return iVar1;
}

