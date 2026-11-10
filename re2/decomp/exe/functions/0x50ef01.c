// rea decompile_all
// name: FUN_0050ef01
// address: 0x50ef01
// body: available
// range: 0x50ef01-0x50f03e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x50f03d to 0x50f050 FUN_0050f050 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4
FUN_0050ef01(int param_1,IDataObject *param_2,undefined4 param_3,LONG param_4,LONG param_5,
            ulong *param_6)

{
  code *pcVar1;
  CWnd *pCVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  COleDataObject *pCVar9;
  LONG LVar10;
  LONG LVar11;
  COleDataObject local_40 [16];
  tagPOINT local_30;
  undefined4 local_24;
  ulong local_20;
  CWnd *local_1c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  local_8 = 0x50ef0d;
  piVar8 = (int *)(param_1 + -0x34);
  FUN_00434a7a(*(undefined4 *)(param_1 + -0x18));
  local_8 = 0;
  if ((param_2 != (IDataObject *)0x0) && (param_6 != (ulong *)0x0)) {
    local_24 = 0x8000ffff;
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    *(undefined4 *)(param_1 + -0xc) = 0xffff;
    pCVar2 = CWnd::FromHandle(*(HWND__ **)(param_1 + -0x14));
    local_1c = pCVar2;
    COleDataObject::COleDataObject(local_40);
    local_8 = CONCAT31(local_8._1_3_,2);
    COleDataObject::Attach(local_40,param_2,0);
    local_30.x = param_4;
    local_30.y = param_5;
    ScreenToClient(*(HWND *)(pCVar2 + 0x20),&local_30);
    iVar6 = *piVar8;
    pCVar2 = local_1c;
    guard_check_icall(local_1c,local_40,param_3,local_30.x,local_30.y);
    uVar3 = (**(code **)(iVar6 + 0x58))();
    uVar4 = _AfxFilterDropEffect(uVar3,*param_6);
    iVar6 = *piVar8;
    uVar3 = *param_6;
    pCVar9 = local_40;
    LVar10 = local_30.x;
    LVar11 = local_30.y;
    local_20 = uVar4;
    guard_check_icall(local_1c,pCVar9,uVar4,uVar3,local_30.x,local_30.y);
    uVar5 = (**(code **)(iVar6 + 0x60))();
    if (uVar5 == 0xffffffff) {
      if (local_20 == 0) {
        pcVar1 = *(code **)(*piVar8 + 100);
        guard_check_icall(local_1c);
        (*pcVar1)();
        uVar5 = local_20;
      }
      else {
        iVar6 = *piVar8;
        guard_check_icall(local_1c,local_40,local_20,local_30.x,local_30.y);
        iVar6 = (**(code **)(iVar6 + 0x5c))();
        uVar5 = local_20;
        if (iVar6 == 0) {
          uVar5 = 0;
        }
      }
    }
    _AfxRelease((IUnknown **)(param_1 + -0x10));
    *param_6 = uVar5;
    local_8 = CONCAT31(local_8._1_3_,3);
    COleDataObject::Release(local_40);
    uVar7 = FUN_0050f050(pCVar9,uVar4,uVar3,LVar10,LVar11,pCVar2);
    return uVar7;
  }
  guard_check_icall();
  return 0x80070057;
}

