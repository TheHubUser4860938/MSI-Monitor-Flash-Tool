// rea decompile_all
// name: FUN_004d0517
// address: 0x4d0517
// body: available
// range: 0x4d0517-0x4d0666 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d0517(int param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  CMFCDynamicLayout *in_ECX;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  CMFCDynamicLayout::GetHostWndRect(in_ECX,(CRect *)&local_18);
  iVar3 = CRect::IsRectNull((CRect *)&local_18);
  if (iVar3 == 0) {
    CMFCDynamicLayout::GetItemRect(in_ECX,(AFX_DYNAMIC_LAYOUT_ITEM *)&local_28);
    dVar1 = (double)(local_10 - local_18) * 0.01;
    dVar2 = (double)(local_c - local_14) * 0.01;
    *(double *)(param_1 + 8) = (double)local_28;
    *(double *)(param_1 + 0x10) = (double)local_24;
    if (0 < *(int *)(param_1 + 0x28)) {
      *(double *)(param_1 + 8) = (double)local_28 - (double)*(int *)(param_1 + 0x28) * dVar1;
    }
    if (0 < *(int *)(param_1 + 0x2c)) {
      *(double *)(param_1 + 0x10) = (double)local_24 - (double)*(int *)(param_1 + 0x2c) * dVar2;
    }
    *(double *)(param_1 + 0x18) = (double)(local_20 - local_28);
    *(double *)(param_1 + 0x20) = (double)(local_1c - local_24);
    if (0 < *(int *)(param_1 + 0x30)) {
      *(double *)(param_1 + 0x18) =
           (double)(local_20 - local_28) - (double)*(int *)(param_1 + 0x30) * dVar1;
    }
    if (0 < *(int *)(param_1 + 0x34)) {
      *(double *)(param_1 + 0x20) =
           (double)(local_1c - local_24) - dVar2 * (double)*(int *)(param_1 + 0x34);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

