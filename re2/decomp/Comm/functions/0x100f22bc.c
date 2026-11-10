// rea decompile_all
// name: FUN_100f22bc
// address: 0x100f22bc
// body: available
// range: 0x100f22bc-0x100f23b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100f23b1 to 0x100f23c7 FUN_100f23c7 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4
FUN_100f22bc(int param_1,IDataObject *param_2,undefined4 param_3,LONG param_4,LONG param_5,
            ulong *param_6)

{
  _func_5420 *p_Var1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  LONG LVar5;
  IDataObject *This;
  LONG LVar6;
  COleDataObject local_40 [16];
  tagPOINT local_30;
  undefined4 local_24;
  undefined4 local_20;
  CWnd *local_1c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  local_8 = 0x100f22c8;
  FUN_10018f0d(*(undefined4 *)(param_1 + -0x18));
  local_20 = 0;
  local_8 = 0;
  if ((param_2 != (IDataObject *)0x0) && (param_6 != (ulong *)0x0)) {
    local_24 = 0x8000ffff;
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    p_Var1 = param_2->lpVtbl->AddRef;
    This = param_2;
    guard_check_icall();
    (*p_Var1)(This);
    _AfxRelease((IUnknown **)(param_1 + -0x10));
    *(IUnknown **)(param_1 + -0x10) = (IUnknown *)param_2;
    local_1c = CWnd::FromHandle(*(HWND__ **)(param_1 + -0x14));
    local_30.x = param_4;
    local_30.y = param_5;
    ScreenToClient(*(HWND *)(local_1c + 0x20),&local_30);
    iVar2 = *(int *)(param_1 + -0x34);
    uVar4 = param_3;
    LVar5 = local_30.x;
    LVar6 = local_30.y;
    guard_check_icall(local_1c,param_3,local_30.x,local_30.y);
    uVar3 = (**(code **)(iVar2 + 0x68))();
    if (-1 < (int)uVar3) {
      COleDataObject::COleDataObject(local_40);
      local_8._0_1_ = 2;
      COleDataObject::Attach(local_40,param_2,0);
      iVar2 = *(int *)(param_1 + -0x34);
      guard_check_icall(local_1c,local_40,param_3,local_30.x,local_30.y);
      uVar3 = (**(code **)(iVar2 + 0x54))();
      local_8._0_1_ = 3;
      COleDataObject::Release(local_40);
    }
    uVar3 = _AfxFilterDropEffect(uVar3,*param_6);
    *param_6 = uVar3;
    uVar4 = FUN_100f23c7(uVar4,LVar5,LVar6);
    return uVar4;
  }
  guard_check_icall();
  return 0x80070057;
}

