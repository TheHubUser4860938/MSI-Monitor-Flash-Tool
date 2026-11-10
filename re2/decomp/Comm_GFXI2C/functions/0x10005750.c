// rea decompile_all
// name: FUN_10005750
// address: 0x10005750
// body: available
// range: 0x10005750-0x10005970 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100057ac to 0x10002610 FUN_10002610 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_10005750(void *this,undefined4 param_1,undefined4 param_2)

{
  wchar_t *pwVar1;
  int *piVar2;
  int iVar3;
  undefined4 *unaff_ESI;
  wchar_t *pwStack_114;
  undefined1 *puStack_110;
  undefined1 *puStack_10c;
  int *piStack_108;
  undefined *puStack_104;
  int aiStack_ec [3];
  size_t sStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c0;
  undefined1 uStack_bc;
  uint uStack_44;
  void *pvStack_3c;
  undefined4 uStack_34;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_100584bb;
  local_14 = ExceptionList;
  local_1c = DAT_10064168 ^ (uint)aiStack_ec;
  ExceptionList = &local_14;
  aiStack_ec[2] = param_1;
  piVar2 = (int *)FUN_10038f10();
  if (piVar2 != (int *)0x0) {
    aiStack_ec[0] = (**(code **)(*piVar2 + 0xc))();
    aiStack_ec[0] = aiStack_ec[0] + 0x10;
    uStack_c = 0;
    aiStack_ec[1] = 0;
    sStack_e0 = 0;
    uStack_dc = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    puStack_104 = (undefined *)0x100057fe;
    _memset(&uStack_c0,0,0x9c);
    sStack_e0 = unaff_ESI[1];
    piStack_108 = (int *)*unaff_ESI;
    uStack_dc = 4;
    uStack_d0._0_2_ = CONCAT11((char)this,(char)((uint)this >> 8));
    uStack_d8 = 2;
    puStack_104 = &DAT_1005d408;
    puStack_10c = (undefined1 *)0x10005847;
    (**(code **)(*piStack_108 + 0xb0))();
    uStack_cc = param_2;
    puStack_10c = &stack0xffffff04;
    puStack_110 = &stack0xffffff2c;
    pwStack_114 = (wchar_t *)0x9c;
    uStack_d0 = 1;
    uStack_bc = 1;
    uStack_c0 = 0;
    iVar3 = (**(code **)(*(int *)*unaff_ESI + 0xac))((int *)*unaff_ESI,&DAT_1005d3f8);
    if ((iVar3 < 0) || (puStack_110 != (undefined1 *)0x0)) {
      if (unaff_ESI[4] == 1) {
        FUN_100023c0(&pwStack_114,
                     L"ReadByte Failed! value is 0x%X\n\n Address: 0x%X\nSub-Address:0x%X\nData: 0x%X"
                    );
        AfxMessageBox(pwStack_114,0,0);
      }
      uStack_34 = 0xffffffff;
      pwVar1 = pwStack_114 + -2;
      LOCK();
      iVar3 = *(int *)pwVar1;
      *(int *)pwVar1 = *(int *)pwVar1 + -1;
      UNLOCK();
      if (iVar3 == 1 || iVar3 + -1 < 0) {
        (**(code **)(**(int **)(pwStack_114 + -8) + 4))(pwStack_114 + -8);
      }
    }
    else {
      if (sStack_e0 != 0) {
        _memcpy(puStack_10c,(void *)((int)&uStack_d0 + 1),sStack_e0);
      }
      uStack_34 = 0xffffffff;
      pwVar1 = pwStack_114 + -2;
      LOCK();
      iVar3 = *(int *)pwVar1;
      *(int *)pwVar1 = *(int *)pwVar1 + -1;
      UNLOCK();
      if (iVar3 == 1 || iVar3 + -1 < 0) {
        (**(code **)(**(int **)(pwStack_114 + -8) + 4))(pwStack_114 + -8);
      }
    }
    ExceptionList = pvStack_3c;
    __security_check_cookie(uStack_44 ^ (uint)&pwStack_114);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10002610((undefined4 *)0x80004005);
}

