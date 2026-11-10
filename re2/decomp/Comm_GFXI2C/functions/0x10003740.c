// rea decompile_all
// name: FUN_10003740
// address: 0x10003740
// body: available
// range: 0x10003740-0x10003896 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100037b8 to 0x10002610 FUN_10002610 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10003740(void)

{
  WCHAR WVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  WCHAR *pWVar5;
  undefined4 *puVar6;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *unaff_ESI;
  int aiStack_224 [2];
  WCHAR local_218;
  undefined1 local_216 [518];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_1005878d;
  local_c = ExceptionList;
  local_10 = DAT_10064168 ^ (uint)aiStack_224;
  uVar2 = DAT_10064168 ^ (uint)&stack0xfffffdd8;
  ExceptionList = &local_c;
  local_4 = 0;
  aiStack_224[1] = 0;
  local_218 = L'\0';
  _memset(local_216,0,0x206);
  piVar3 = (int *)FUN_10038f10();
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10002610((undefined4 *)0x80004005);
  }
  iVar4 = (**(code **)(*piVar3 + 0xc))(uVar2);
  *(int *)unaff_ESI = iVar4 + 0x10;
  local_4 = 0;
  aiStack_224[1] = 1;
  GetModuleFileNameW((HMODULE)0x0,&local_218,0x104);
  pWVar5 = &local_218;
  do {
    WVar1 = *pWVar5;
    pWVar5 = pWVar5 + 1;
  } while (WVar1 != L'\0');
  FUN_10002660(unaff_ESI,&local_218,(int)pWVar5 - (int)local_216 >> 1);
  _wcsrchr(*(wchar_t **)unaff_ESI,L'\\');
  puVar6 = (undefined4 *)
           ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::Left
                     (unaff_ESI,(int)aiStack_224);
  local_4 = 1;
  FID_conflict_operator_(unaff_ESI,puVar6);
  local_4 = local_4 & 0xffffff00;
  piVar3 = (int *)(aiStack_224[0] + -4);
  LOCK();
  iVar4 = *piVar3;
  *piVar3 = *piVar3 + -1;
  UNLOCK();
  if (iVar4 == 1 || iVar4 + -1 < 0) {
    (**(code **)(**(int **)(aiStack_224[0] + -0x10) + 4))((undefined4 *)(aiStack_224[0] + -0x10));
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)aiStack_224);
  return;
}

