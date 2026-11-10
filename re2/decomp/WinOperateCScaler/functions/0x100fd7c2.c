// rea decompile_all
// name: FUN_100fd7c2
// address: 0x100fd7c2
// body: available
// range: 0x100fd7c2-0x100fd897 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100fd7eb to 0x100fd8a9 FUN_100fd8a9 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100fd896 to 0x100fd8a9 FUN_100fd8a9 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void FUN_100fd7c2(int param_1,undefined4 param_2,LONG param_3,LONG param_4,ulong *param_5)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  LONG LVar4;
  LONG LVar5;
  COleDataObject local_3c [16];
  tagPOINT local_2c;
  undefined4 local_20;
  CWnd *local_1c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_8 = 0x100fd7ce;
  FUN_10024293(*(undefined4 *)(param_1 + -0x18));
  local_8 = 0;
  if (param_5 == (ulong *)0x0) {
    FUN_100fd8a9();
    return;
  }
  local_20 = 0x8000ffff;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  local_1c = CWnd::FromHandle(*(HWND__ **)(param_1 + -0x14));
  local_2c.x = param_3;
  local_2c.y = param_4;
  ScreenToClient(*(HWND *)(local_1c + 0x20),&local_2c);
  iVar1 = *(int *)(param_1 + -0x34);
  uVar3 = param_2;
  LVar4 = local_2c.x;
  LVar5 = local_2c.y;
  guard_check_icall(local_1c,param_2,local_2c.x,local_2c.y);
  uVar2 = (**(code **)(iVar1 + 0x68))();
  if (-1 < (int)uVar2) {
    COleDataObject::COleDataObject(local_3c);
    local_8._0_1_ = 2;
    COleDataObject::Attach(local_3c,*(IDataObject **)(param_1 + -0x10),0);
    iVar1 = *(int *)(param_1 + -0x34);
    guard_check_icall(local_1c,local_3c,param_2,local_2c.x,local_2c.y);
    uVar2 = (**(code **)(iVar1 + 0x58))();
    local_8._0_1_ = 3;
    COleDataObject::Release(local_3c);
  }
  uVar2 = _AfxFilterDropEffect(uVar2,*param_5);
  *param_5 = uVar2;
  FUN_100fd8a9(uVar3,LVar4,LVar5);
  return;
}

