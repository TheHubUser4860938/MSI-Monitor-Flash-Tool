// rea decompile_all
// name: FUN_100337e0
// address: 0x100337e0
// body: available
// range: 0x100337e0-0x10033990 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10033818 to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100337e0(void)

{
  int *piVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  wchar_t *_Src;
  int local_1c;
  int local_18;
  wchar_t *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101a03d8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar6 = (int *)FUN_10048e90(DAT_10206460 ^ (uint)&stack0xfffffffc);
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_100351a0(0x80004005);
  }
  piVar7 = (int *)(**(code **)(*piVar6 + 0xc))();
  local_8 = 0;
  local_14 = (wchar_t *)(piVar7 + 4);
  piVar6 = (int *)FUN_10033640();
  local_8._0_1_ = 1;
  iVar5 = *piVar6;
  piVar6 = (int *)(iVar5 + -0x10);
  _Src = (wchar_t *)(piVar7 + 4);
  if (piVar6 != piVar7) {
    piVar1 = piVar7 + 3;
    if ((piVar7[3] < 0) || (*piVar6 != *piVar7)) {
      FUN_100351f0(iVar5,*(undefined4 *)(iVar5 + -0xc));
      _Src = local_14;
    }
    else {
      local_18 = FUN_100349e0(piVar6);
      LOCK();
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1 || iVar5 + -1 < 0) {
        (**(code **)(*(int *)*piVar7 + 4))(piVar7);
      }
      local_14 = (wchar_t *)(local_18 + 0x10);
      _Src = local_14;
    }
  }
  local_8._0_1_ = 0;
  LOCK();
  piVar6 = (int *)(local_1c + -4);
  iVar5 = *piVar6;
  *piVar6 = *piVar6 + -1;
  UNLOCK();
  if (iVar5 == 1 || iVar5 + -1 < 0) {
    (**(code **)(**(int **)(local_1c + -0x10) + 4))((undefined4 *)(local_1c + -0x10));
  }
  piVar6 = (int *)FUN_10033c90(&local_18,&local_14,L"Setting.ini");
  local_8._0_1_ = 2;
  pwVar2 = _Src + -8;
  iVar5 = *piVar6;
  pwVar3 = (wchar_t *)(iVar5 + -0x10);
  if (pwVar3 != pwVar2) {
    pwVar4 = _Src + -2;
    if ((*(int *)(_Src + -2) < 0) || (*(int *)pwVar3 != *(int *)pwVar2)) {
      FUN_100351f0(iVar5,*(undefined4 *)(iVar5 + -0xc));
      _Src = local_14;
    }
    else {
      iVar8 = FUN_100349e0(pwVar3);
      LOCK();
      iVar5 = *(int *)pwVar4;
      *(int *)pwVar4 = *(int *)pwVar4 + -1;
      UNLOCK();
      if (iVar5 == 1 || iVar5 + -1 < 0) {
        (**(code **)(**(int **)pwVar2 + 4))(pwVar2);
      }
      local_14 = (wchar_t *)(iVar8 + 0x10);
      _Src = local_14;
    }
  }
  local_8 = (uint)local_8._1_3_ << 8;
  LOCK();
  piVar6 = (int *)(local_18 + -4);
  iVar5 = *piVar6;
  *piVar6 = *piVar6 + -1;
  UNLOCK();
  if (iVar5 + -1 < 1) {
    (**(code **)(**(int **)(local_18 + -0x10) + 4))((undefined4 *)(local_18 + -0x10));
  }
  if (*(uint *)(_Src + -6) < 0x104) {
    _wcscpy_s(&DAT_10212800,0x104,_Src);
  }
  else {
    DAT_10212800 = 0;
  }
  local_8 = 0xffffffff;
  LOCK();
  pwVar2 = _Src + -2;
  iVar5 = *(int *)pwVar2;
  *(int *)pwVar2 = *(int *)pwVar2 + -1;
  UNLOCK();
  if (iVar5 == 1 || iVar5 + -1 < 0) {
    (**(code **)(**(int **)(_Src + -8) + 4))(_Src + -8);
  }
  ExceptionList = local_10;
  return;
}

