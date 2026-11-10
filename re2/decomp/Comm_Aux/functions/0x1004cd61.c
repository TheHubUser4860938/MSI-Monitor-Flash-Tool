// rea decompile_all
// name: FUN_1004cd61
// address: 0x1004cd61
// body: available
// range: 0x1004cd61-0x1004ceae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004cead to 0x1004ced7 FUN_1004ced7 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_1004cd61(DLGTEMPLATE *param_1,int param_2,int param_3)

{
  int *piVar1;
  code *pcVar2;
  AFX_MODULE_STATE *pAVar3;
  int iVar4;
  undefined4 uVar5;
  HGLOBAL hMem;
  int *in_ECX;
  undefined1 local_50 [16];
  CDialogTemplate local_40 [16];
  undefined4 local_30;
  HGLOBAL local_2c;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_24 [4];
  undefined4 local_20;
  int *local_1c;
  DLGTEMPLATE *local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x40;
  local_8 = 0x1004cd6d;
  if (param_3 == 0) {
    pAVar3 = AfxGetModuleState();
    param_3 = *(int *)(pAVar3 + 0xc);
  }
  pAVar3 = AfxGetModuleState();
  local_30 = 0;
  local_8 = 0;
  piVar1 = *(int **)(pAVar3 + 0x3c);
  local_2c = (HGLOBAL)0x0;
  local_1c = piVar1;
  AfxEndDeferRegisterClass(0x10);
  AfxEndDeferRegisterClass(0xfc000);
  FUN_1004f737();
  AfxRegisterMFCCtrlClasses();
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*in_ECX + 0x15c);
    guard_check_icall(local_50);
    iVar4 = (*pcVar2)();
    if (iVar4 == 0) {
      return 0;
    }
    pcVar2 = *(code **)(*local_1c + 0x14);
    guard_check_icall(local_50,param_1);
    param_1 = (DLGTEMPLATE *)(*pcVar2)();
  }
  if (param_1 == (DLGTEMPLATE *)0x0) {
    return 0;
  }
  local_18 = param_1;
  uVar5 = FUN_10048e90();
  FUN_10034c30(uVar5);
  local_8._0_1_ = 1;
  local_20 = (uint)local_20._2_2_ << 0x10;
  iVar4 = CDialogTemplate::GetFont(local_18,local_24,(ushort *)&local_20);
  if (iVar4 == 0) {
    FUN_1005f4b9(local_18);
    local_8._0_1_ = 2;
    CDialogTemplate::SetSystemFont(local_40,(ushort)local_20);
    hMem = (HGLOBAL)FUN_1005f502();
    local_8._0_1_ = 1;
    local_2c = hMem;
    CDialogTemplate::~CDialogTemplate(local_40);
    if (hMem != (HGLOBAL)0x0) {
      local_18 = GlobalLock(hMem);
    }
  }
  in_ECX[0x1a] = -1;
  in_ECX[0x18] = in_ECX[0x18] | 0x10;
  FUN_1004f656(in_ECX);
  uVar5 = 0;
  if (param_2 != 0) {
    uVar5 = *(undefined4 *)(param_2 + 0x20);
  }
  local_18 = (DLGTEMPLATE *)
             FID_conflict__IsolationAwareCreateDialogIndirectParamA_20
                       (param_3,local_18,uVar5,AfxDlgProc,0);
  FUN_10034f00();
  uVar5 = FUN_1004ced7();
  return uVar5;
}

