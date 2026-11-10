// rea decompile_all
// name: CWnd::SubclassDlgItem
// address: 0x431efb
// body: available
// range: 0x431efb-0x431f76 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CWnd::SubclassDlgItem(unsigned int,class CWnd *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CWnd::SubclassDlgItem(CWnd *this,uint param_1,CWnd *param_2)

{
  code *pcVar1;
  HWND pHVar2;
  int iVar3;
  
  pHVar2 = ::GetDlgItem(*(HWND *)(param_2 + 0x20),param_1);
  if (pHVar2 == (HWND)0x0) {
    if (*(int **)(param_2 + 0x70) != (int *)0x0) {
      pcVar1 = *(code **)(**(int **)(param_2 + 0x70) + 0x54);
      guard_check_icall(param_1);
      iVar3 = (*pcVar1)();
      if (iVar3 != 0) {
        SubclassWindow(this,*(HWND__ **)(iVar3 + 0x24));
        pHVar2 = GetParent(*(HWND *)(iVar3 + 0x24));
        if (*(HWND *)(param_2 + 0x20) != pHVar2) {
          AttachControlSite(this,param_2,0);
        }
        return 1;
      }
    }
    iVar3 = 0;
  }
  else {
    iVar3 = SubclassWindow(this,pHVar2);
  }
  return iVar3;
}

