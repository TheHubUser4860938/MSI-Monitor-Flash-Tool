// rea decompile_all
// name: CGlobalUtils::SetNewParent
// address: 0x449450
// body: available
// range: 0x449450-0x449540 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CGlobalUtils::SetNewParent(class CObList &,class CWnd *,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CGlobalUtils::SetNewParent(CGlobalUtils *this,CObList *param_1,CWnd *param_2,int param_3)

{
  CWnd *this_00;
  code *pcVar1;
  undefined4 *puVar2;
  ulong uVar3;
  int iVar4;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_1c = *(int *)(param_1 + 4);
  while (local_1c != 0) {
    puVar2 = (undefined4 *)FUN_004ead48(&local_1c);
    this_00 = (CWnd *)*puVar2;
    if ((param_3 == 0) || (uVar3 = CWnd::GetExStyle(this_00), (uVar3 & 0x10000000) != 0)) {
      iVar4 = FUN_0043970d(&PTR_s_CPaneDivider_005c46c4);
      if (iVar4 == 0) {
        CWnd::ShowWindow(this_00,0);
        CWnd::SetParent(this_00,param_2);
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        GetWindowRect(*(HWND *)(this_00 + 0x20),&local_18);
        CWnd::ScreenToClient(param_2,&local_18);
        pcVar1 = *(code **)(*(int *)this_00 + 0x238);
        guard_check_icall(0,local_18.left - local_18.right,local_18.top - local_18.bottom,100,100,
                          0x15,0);
        (*pcVar1)();
        CWnd::ShowWindow(this_00,5);
      }
      else {
        CWnd::SetParent(this_00,param_2);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

