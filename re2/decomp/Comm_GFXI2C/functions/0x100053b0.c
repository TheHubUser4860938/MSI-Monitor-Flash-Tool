// rea decompile_all
// name: FUN_100053b0
// address: 0x100053b0
// body: available
// range: 0x100053b0-0x10005581 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10005409 to 0x10002610 FUN_10002610 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100053b0(undefined4 param_1,byte param_2,size_t param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  wchar_t *pwVar5;
  undefined4 *unaff_ESI;
  undefined4 *_Dst;
  wchar_t *pwVar6;
  size_t local_bc;
  wchar_t *pwStack_b8;
  wchar_t awStack_b4 [2];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined1 uStack_98;
  uint uStack_24;
  void *pvStack_20;
  undefined4 uStack_18;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puVar1 = DAT_10064168;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_100584fb;
  local_c = ExceptionList;
  local_10 = (uint)DAT_10064168 ^ (uint)&local_bc;
  ExceptionList = &local_c;
  local_bc = param_3;
  piVar2 = (int *)FUN_10038f10();
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0xc))();
    pwVar5 = (wchar_t *)(puVar3 + 4);
    uStack_4 = 0;
    awStack_b4[0] = L'\0';
    awStack_b4[1] = L'\0';
    pwStack_b8 = pwVar5;
    _memset(&uStack_b0,0,0x9c);
    uStack_b0 = unaff_ESI[1];
    uStack_a0 = (uint)param_2;
    uStack_a8 = param_4;
    pwVar6 = awStack_b4;
    _Dst = &uStack_b0;
    uStack_a4 = param_1;
    uStack_ac = 1;
    uStack_98 = 1;
    uStack_9c = 0;
    iVar4 = (**(code **)(*(int *)*unaff_ESI + 0xac))((int *)*unaff_ESI,&DAT_1005d3f8,0x9c);
    if ((iVar4 < 0) || (puVar1 != &stack0xffffff3c)) {
      if (unaff_ESI[4] == 1) {
        pwVar5 = pwVar6;
        FUN_100023c0(&stack0xffffff34,
                     L"ReadByte Failed! value is 0x%X\n\n Address: 0x%X\nSub-Address:0x%X\nData: 0x%X"
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
      if (local_bc != 0) {
        _memcpy(_Dst,(void *)((int)&uStack_ac + 1),local_bc);
      }
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
    __security_check_cookie(uStack_24 ^ (uint)&stack0xffffff30);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10002610((undefined4 *)0x80004005);
}

