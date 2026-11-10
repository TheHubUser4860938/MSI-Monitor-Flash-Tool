// rea decompile_all
// name: AddTab
// address: 0x484867
// body: available
// range: 0x484867-0x4848c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual void __thiscall CMFCBaseTabCtrl::AddTab(class CWnd *,char const *,unsigned
   int,int)
    public: virtual void __thiscall CMFCBaseTabCtrl::AddTab(class CWnd *,wchar_t const *,unsigned
   int,int)
   
   Library: Visual Studio 2015 Release */

void AddTab(CWnd *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  
  if (((param_1 != (CWnd *)0x0) && (*(int *)(param_1 + 0x20) != 0)) &&
     (iVar2 = CWnd::GetDlgCtrlID(param_1), iVar2 == -1)) {
    return;
  }
  pcVar1 = *(code **)(*in_ECX + 0x2c4);
  guard_check_icall(param_1,param_2,param_4);
  uVar3 = (*pcVar1)();
  pcVar1 = *(code **)(*in_ECX + 0x194);
  guard_check_icall(uVar3,param_2,0xffffffff,param_3,param_4);
  (*pcVar1)();
  return;
}

