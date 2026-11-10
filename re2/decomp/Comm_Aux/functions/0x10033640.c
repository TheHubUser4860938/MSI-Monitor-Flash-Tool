// rea decompile_all
// name: FUN_10033640
// address: 0x10033640
// body: available
// range: 0x10033640-0x100337d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100336b5 to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10033640(void)

{
  WCHAR WVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *in_ECX;
  WCHAR *pWVar7;
  HMODULE in_EDX;
  int *piVar8;
  int *local_220;
  WCHAR local_21c;
  undefined1 local_21a [518];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101a038d;
  local_10 = ExceptionList;
  uVar3 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_220 = in_ECX;
  local_14 = uVar3;
  _memset(&local_21c,0,0x208);
  piVar4 = (int *)FUN_10048e90(uVar3);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_100351a0(0x80004005);
  }
  iVar5 = (**(code **)(*piVar4 + 0xc))();
  *in_ECX = iVar5 + 0x10;
  local_8 = 0;
  GetModuleFileNameW(in_EDX,&local_21c,0x104);
  pWVar7 = &local_21c;
  do {
    WVar1 = *pWVar7;
    pWVar7 = pWVar7 + 1;
  } while (WVar1 != L'\0');
  FUN_100351f0(&local_21c,(int)pWVar7 - (int)local_21a >> 1);
  iVar5 = FUN_10180644(*in_ECX,0x5c);
  if (iVar5 == 0) {
    iVar5 = -1;
  }
  else {
    iVar5 = iVar5 - *in_ECX >> 1;
  }
  piVar4 = (int *)FUN_10033e10(&local_220,iVar5 + 1);
  local_8 = 1;
  iVar5 = *piVar4;
  iVar2 = *in_ECX;
  piVar8 = (int *)(iVar2 + -0x10);
  piVar4 = (int *)(iVar5 + -0x10);
  if (piVar4 != piVar8) {
    if ((*(int *)(iVar2 + -4) < 0) || (*piVar4 != *piVar8)) {
      FUN_100351f0(iVar5,*(undefined4 *)(iVar5 + -0xc));
    }
    else {
      iVar6 = FUN_100349e0(piVar4);
      piVar4 = (int *)(iVar2 + -4);
      LOCK();
      iVar5 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar5 == 1 || iVar5 + -1 < 0) {
        (**(code **)(*(int *)*piVar8 + 4))(piVar8);
      }
      *in_ECX = iVar6 + 0x10;
    }
  }
  local_8 = local_8 & 0xffffff00;
  LOCK();
  piVar4 = local_220 + -1;
  iVar5 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar5 == 1 || iVar5 + -1 < 0) {
    (**(code **)(*(int *)local_220[-4] + 4))(local_220 + -4);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

