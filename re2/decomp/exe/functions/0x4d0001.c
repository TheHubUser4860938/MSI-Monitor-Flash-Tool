// rea decompile_all
// name: FUN_004d0001
// address: 0x4d0001
// body: available
// range: 0x4d0001-0x4d01e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d0001(undefined4 param_1,LPRECT param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CMFCDynamicLayout *in_ECX;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  SetRectEmpty(param_2);
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  CMFCDynamicLayout::GetHostWndRect(in_ECX,(CRect *)&local_18);
  iVar1 = CRect::IsRectNull((CRect *)&local_18);
  if (iVar1 == 0) {
    iVar1 = FUN_0055bce0();
    iVar1 = local_18 + iVar1;
    param_2->left = iVar1;
    iVar2 = FUN_0055bce0();
    iVar2 = iVar2 + local_14;
    param_2->top = iVar2;
    iVar3 = FUN_0055bce0();
    param_2->right = iVar1 + iVar3;
    iVar1 = FUN_0055bce0();
    param_2->bottom = iVar2 + iVar1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

