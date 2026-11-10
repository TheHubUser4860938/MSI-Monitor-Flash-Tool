// rea decompile_all
// name: FUN_10005590
// address: 0x10005590
// body: available
// range: 0x10005590-0x1000574f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100055eb to 0x10002610 FUN_10002610 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005590(undefined4 param_1,undefined4 param_2,void *param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  wchar_t *pwVar5;
  undefined4 *unaff_ESI;
  size_t unaff_EDI;
  wchar_t *pwVar6;
  void *local_b8;
  wchar_t *pwStack_b4;
  wchar_t awStack_b0 [2];
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined1 auStack_93 [111];
  uint uStack_24;
  void *pvStack_20;
  undefined4 uStack_18;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puVar1 = DAT_10064168;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_1005853b;
  local_c = ExceptionList;
  local_10 = (uint)DAT_10064168 ^ (uint)&local_b8;
  ExceptionList = &local_c;
  local_b8 = param_3;
  piVar2 = (int *)FUN_10038f10();
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0xc))();
    pwVar5 = (wchar_t *)(puVar3 + 4);
    uStack_4 = 0;
    awStack_b0[0] = L'\0';
    awStack_b0[1] = L'\0';
    pwStack_b4 = pwVar5;
    _memset(&uStack_ac,0,0x9c);
    uStack_ac = unaff_ESI[1];
    uStack_a8 = 2;
    if (0 < (int)unaff_EDI) {
      _memcpy(auStack_93,local_b8,unaff_EDI);
    }
    pwVar6 = awStack_b0;
    iVar4 = (**(code **)(*(int *)*unaff_ESI + 0xb0))((int *)*unaff_ESI,&DAT_1005d3f8,0x9c);
    if ((iVar4 < 0) || (puVar1 != &stack0xffffff40)) {
      if (unaff_ESI[4] == 1) {
        pwVar5 = pwVar6;
        FUN_100023c0(&stack0xffffff38,
                     L"WriteByte Failed! value is 0x%X\n\n Address: 0x%X\nSub-Address:0x%X\nData: 0x%X"
                    );
        AfxMessageBox(pwVar5,0,0);
      }
      uStack_18 = 0xffffffff;
      pwVar6 = pwVar5 + -2;
      LOCK();
      iVar4 = *(int *)pwVar6;
      *(int *)pwVar6 = *(int *)pwVar6 + -1;
      UNLOCK();
      if (iVar4 == 1 || iVar4 + -1 < 0) {
        (**(code **)(**(int **)(pwVar5 + -8) + 4))(pwVar5 + -8);
      }
    }
    else {
      uStack_18 = 0xffffffff;
      piVar2 = puVar3 + 3;
      LOCK();
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1 || iVar4 + -1 < 0) {
        (**(code **)(*(int *)*puVar3 + 4))(puVar3);
      }
    }
    ExceptionList = pvStack_20;
    __security_check_cookie(uStack_24 ^ (uint)&stack0xffffff34);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10002610((undefined4 *)0x80004005);
}

