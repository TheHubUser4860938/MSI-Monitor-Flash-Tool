// rea decompile_all
// name: FUN_100c3c6f
// address: 0x100c3c6f
// body: available
// range: 0x100c3c6f-0x100c3d3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_100c3c6f(CWnd *param_1,int param_2,CToolTipCtrl *param_3,undefined4 *param_4)

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
  local_8 = 0x100c3c7b;
  if ((in_ECX[0x1f] == 0) || (DAT_10205a24 == 0)) {
    return 0;
  }
  uVar2 = FUN_10048e90();
  FUN_10034c30(uVar2);
  local_8 = 0;
  pcVar1 = *(code **)(*in_ECX + 0xa8);
  guard_check_icall(local_14);
  iVar3 = (*pcVar1)();
  if (iVar3 != 0) {
    FUN_10034940(local_14);
  }
  if (DAT_10205c6c == 0) {
    param_1 = (CWnd *)in_ECX[0x2d];
LAB_100c3d17:
    if (param_1 == (CWnd *)0x0) goto LAB_100c3d2a;
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
      goto LAB_100c3d17;
    }
    uVar7 = param_2 + 1;
    ptVar6 = (tagRECT *)(in_ECX + 0x15);
    pwVar5 = (wchar_t *)*param_4;
  }
  CToolTipCtrl::AddTool(param_3,param_1,pwVar5,ptVar6,uVar7);
LAB_100c3d2a:
  FUN_10034f00();
  return 1;
}

