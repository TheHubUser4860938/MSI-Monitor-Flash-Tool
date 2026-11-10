// rea decompile_all
// name: FUN_100f1dde
// address: 0x100f1dde
// body: available
// range: 0x100f1dde-0x100f1f95 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100f1eb5 to 0x100f1fc8 FUN_100f1fc8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100f1ee8 to 0x100f1fc8 FUN_100f1fc8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100f1f4d to 0x100f1fc8 FUN_100f1fc8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100f1f58 to 0x100f1fc8 FUN_100f1fc8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100f1f94 to 0x100f1fc8 FUN_100f1fc8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_100f1dde(undefined4 param_1,int param_2)

{
  code *pcVar1;
  undefined3 uVar2;
  ushort *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  COleDataObject *in_ECX;
  undefined4 uVar7;
  undefined1 local_50 [16];
  undefined4 local_40;
  tagSTGMEDIUM local_3c;
  tagSTGMEDIUM local_30;
  COleStreamFile *local_20;
  undefined4 local_1c;
  int *local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x40;
  local_8 = 0x100f1dea;
  COleDataObject::EnsureClipboardObject(in_ECX);
  if (*(int *)in_ECX == 0) {
    return 0;
  }
  if (((short)param_1 == 0) && (param_2 == 0)) {
    return 0;
  }
  puVar3 = (ushort *)FUN_100128de(param_2,param_1,local_50);
  local_40 = 0x27;
  iVar4 = **(int **)in_ECX;
  guard_check_icall(*(int **)in_ECX,puVar3,&local_30);
  iVar4 = (**(code **)(iVar4 + 0xc))();
  if (iVar4 < 0) {
    return 0;
  }
  if (local_30.pUnkForRelease != (IUnknown *)0x0) {
    local_3c.tymed = 0;
    local_3c.pUnkForRelease = (IUnknown *)0x0;
    if ((puVar3 == (ushort *)0x0) ||
       (iVar4 = _AfxCopyStgMedium(*puVar3,&local_3c,&local_30), iVar4 == 0)) {
      ReleaseStgMedium(&local_30);
      return 0;
    }
    ReleaseStgMedium(&local_30);
    local_30.tymed = local_3c.tymed;
    local_30.u = local_3c.u;
    local_30.pUnkForRelease = local_3c.pUnkForRelease;
  }
  uVar5 = FUN_10013071();
  FUN_10003190(uVar5);
  local_18 = (int *)0x0;
  local_8._1_3_ = 0;
  uVar2 = local_8._1_3_;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  if (local_30.tymed == 1) {
LAB_100f1f5a:
    local_8._1_3_ = uVar2;
    local_20 = (COleStreamFile *)FUN_10011f7d(0x38);
    local_8._0_1_ = 3;
    if (local_20 == (COleStreamFile *)0x0) {
      local_18 = (int *)0x0;
    }
    else {
      local_18 = (int *)CSharedFile::CSharedFile((CSharedFile *)local_20,2,0x1000);
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_10133fa5(local_30.u.hBitmap,1);
    uVar5 = FUN_100f1fc8();
    return uVar5;
  }
  if (local_30.tymed == 2) {
    local_8._1_3_ = uVar2;
    FUN_10003780(local_30.u.hBitmap);
    local_20 = (COleStreamFile *)FUN_10011f7d(0x14);
    local_8._0_1_ = 2;
    if (local_20 == (COleStreamFile *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)CFile::CFile((CFile *)local_20);
    }
    uVar7 = 0;
    uVar5 = 0x12;
    pcVar1 = *(code **)(*piVar6 + 0x24);
    local_8 = CONCAT31(local_8._1_3_,1);
    local_18 = piVar6;
    guard_check_icall(local_1c,0x12,0);
    iVar4 = (*pcVar1)();
    if (iVar4 != 0) {
      CoTaskMemFree(local_30.u.hMetaFilePict);
      uVar5 = FUN_100f1fc8(uVar5,uVar7);
      return uVar5;
    }
    pcVar1 = *(code **)(*piVar6 + 4);
    guard_check_icall(1);
    (*pcVar1)();
  }
  else {
    if (local_30.tymed != 4) {
      if (local_30.tymed != 0x20) {
        ReleaseStgMedium(&local_30);
        uVar5 = FUN_100f1fc8();
        return uVar5;
      }
      goto LAB_100f1f5a;
    }
    local_20 = (COleStreamFile *)FUN_10011f7d(0x1c);
    local_8 = CONCAT31(local_8._1_3_,4);
    if (local_20 != (COleStreamFile *)0x0) {
      COleStreamFile::COleStreamFile(local_20,local_30.u.pstm);
      uVar5 = FUN_100f1fc8();
      return uVar5;
    }
  }
  uVar5 = FUN_100f1fc8();
  return uVar5;
}

