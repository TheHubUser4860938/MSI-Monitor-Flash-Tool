// rea decompile_all
// name: CDockSite::CalcFixedLayout
// address: 0x49b13f
// body: available
// range: 0x49b13f-0x49b231 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CSize __thiscall CDockSite::CalcFixedLayout(int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDockSite::CalcFixedLayout(CDockSite *this,int param_1,int param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 in_stack_0000000c;
  int local_34;
  int local_30;
  int local_28;
  int local_24;
  int local_20;
  CDockingPanesRow *local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  pcVar1 = *(code **)(*(int *)this + 0x164);
  guard_check_icall();
  local_24 = (*pcVar1)();
  local_20 = *(int *)(this + 0x130);
  while (local_20 != 0) {
    puVar2 = (undefined4 *)FUN_004ead48(&local_20);
    local_1c = (CDockingPanesRow *)*puVar2;
    pcVar1 = *(code **)(*(int *)local_1c + 0x58);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 != 0) {
      local_28 = *(int *)(local_1c + 0xc);
      pcVar1 = *(code **)(*(int *)local_1c + 0x18);
      guard_check_icall(&local_34,param_2,in_stack_0000000c);
      (*pcVar1)();
      iVar3 = local_30;
      if (local_24 == 0) {
        iVar3 = local_34;
      }
      if ((iVar3 != local_28) && (0 < iVar3)) {
        ResizeRow(this,local_1c,iVar3,0);
      }
    }
  }
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect(*(HWND *)(this + 0x20),&local_18);
  *(LONG *)param_1 = local_18.right - local_18.left;
  *(LONG *)(param_1 + 4) = local_18.bottom - local_18.top;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

