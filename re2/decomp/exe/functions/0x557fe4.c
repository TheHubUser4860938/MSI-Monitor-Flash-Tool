// rea decompile_all
// name: CCheckListBox::SetSelectionCheck
// address: 0x557fe4
// body: available
// range: 0x557fe4-0x558083 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: void __thiscall CCheckListBox::SetSelectionCheck(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CCheckListBox::SetSelectionCheck(CCheckListBox *this,int param_1)

{
  WPARAM wParam;
  int iVar1;
  int iVar2;
  undefined **local_24;
  LPARAM local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x557ff0;
  iVar2 = 0;
  wParam = SendMessageW(*(HWND *)(this + 0x20),400,0,0);
  if (0 < (int)wParam) {
    local_24 = CArray<int,int_const&>::vftable;
    local_20 = 0;
    local_14 = 0;
    local_18 = 0;
    local_1c = 0;
    local_8 = 0;
    FUN_00558084(wParam,0xffffffff);
    SendMessageW(*(HWND *)(this + 0x20),0x191,wParam,local_20);
    if (0 < (int)wParam) {
      do {
        iVar1 = IsEnabled(this,*(int *)(local_20 + iVar2 * 4));
        if (iVar1 != 0) {
          SetCheck(this,*(int *)(local_20 + iVar2 * 4),param_1);
          FUN_0055704c(*(undefined4 *)(local_20 + iVar2 * 4));
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)wParam);
    }
    CArray<int,int_const&>::~CArray<int,int_const&>((CArray<int,int_const&> *)&local_24);
  }
  return;
}

