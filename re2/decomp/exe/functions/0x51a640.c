// rea decompile_all
// name: FUN_0051a640
// address: 0x51a640
// body: available
// range: 0x51a640-0x51a710 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_0051a640(CWnd *param_1,int param_2,CToolTipCtrl *param_3,undefined4 *param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  int *in_ECX;
  wchar_t *pwVar5;
  tagRECT *ptVar6;
  uint uVar7;
  undefined1 local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x51a64c;
  if ((in_ECX[0x1f] == 0) || (DAT_0060c4f4 == 0)) {
    return 0;
  }
  uVar2 = FUN_004295fe();
  FUN_0040eb30(uVar2);
  local_8 = 0;
  pcVar1 = *(code **)(*in_ECX + 0xa8);
  guard_check_icall(local_14);
  iVar3 = (*pcVar1)();
  if (iVar3 != 0) {
    FUN_00415f50(local_14);
  }
  if (DAT_0060ca9c == 0) {
    param_1 = (CWnd *)in_ECX[0x2d];
LAB_0051a6e8:
    if (param_1 == (CWnd *)0x0) goto LAB_0051a6fb;
    uVar7 = 0;
    ptVar6 = (tagRECT *)0x0;
    pwVar5 = (wchar_t *)*param_4;
  }
  else {
    if (((CWnd *)in_ECX[0x2d] != (CWnd *)0x0) &&
       (uVar4 = CWnd::GetExStyle((CWnd *)in_ECX[0x2d]), ((byte)uVar4 & 3) == 2)) {
      pcVar1 = *(code **)(*in_ECX + 0xdc);
      guard_check_icall();
      param_1 = (CWnd *)(*pcVar1)();
      goto LAB_0051a6e8;
    }
    uVar7 = param_2 + 1;
    ptVar6 = (tagRECT *)(in_ECX + 0x15);
    pwVar5 = (wchar_t *)*param_4;
  }
  CToolTipCtrl::AddTool(param_3,param_1,pwVar5,ptVar6,uVar7);
LAB_0051a6fb:
  FUN_0040efa0();
  return 1;
}

