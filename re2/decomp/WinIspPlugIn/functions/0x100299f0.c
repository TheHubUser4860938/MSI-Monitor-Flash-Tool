// rea decompile_all
// name: FUN_100299f0
// address: 0x100299f0
// body: available
// range: 0x100299f0-0x10029d6e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100299f0(void)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int in_EDX;
  wchar_t *pwVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c1b38;
  local_10 = ExceptionList;
  uVar1 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar2 = (**(code **)(*DAT_10249d10 + 0x14))(uVar1);
  if (iVar2 != 8) {
    FUN_10048350(&DAT_1024a13c,L"The Comm Type Must be TypeCUSB, ErrorCode: 0x%x",0x13);
    FUN_1003fc00();
    FUN_10016860();
    goto LAB_10029d49;
  }
  if ((DAT_1024be84 == 0) && (DAT_1024a3b8 == 0)) {
    FUN_1001b860();
    if (((DAT_1024a2f4 == 2) || (DAT_1024a2d4 == 5)) ||
       ((DAT_1024be7c != 0 && (iVar2 = (**(code **)(*DAT_10249d10 + 0x10c))(), iVar2 != 0))))
    goto LAB_10029d49;
    if (in_ECX == 2) {
      FUN_10048350(&DAT_1024a13c,L"\nWait for Signature Result, it will take more than %d ms...",
                   DAT_1024a374);
      FUN_1003fc00();
      FUN_10016860();
      Sleep(DAT_1024a374);
      iVar2 = FUN_100218b0();
      if (iVar2 == 0) {
        FUN_10048350(&DAT_1024a13c,L" Sign Verify  Fail!, enumSignStatus: 0x%x",3);
        FUN_10016860();
        goto LAB_10029d49;
      }
    }
    else {
      FUN_10048350(&DAT_1024a13c,L"\nWait for IC Reset, it will take more than %d ms...",
                   DAT_1024a374);
      FUN_1003fc00();
      FUN_10016860();
      Sleep(DAT_1024a374);
      if ((DAT_1024be80 != 0) || (DAT_1024a3b8 != 0)) {
        FUN_10048350(&DAT_1024a13c,L"Auto Switch Code:%d, isp finish",DAT_1024be80);
        FUN_1003fc00();
        FUN_10016860();
        goto LAB_10029d49;
      }
      iVar2 = FUN_10021a60();
      if (((iVar2 != 0) || (in_EDX != 7)) || (DAT_1024be68 == 0)) goto LAB_10029d49;
      FUN_10048350(&DAT_1024a13c,L"\nWait for Copy Result, it will take more than %d ms...",
                   DAT_1024be6c);
      FUN_1003fc00();
      FUN_10016860();
      Sleep(DAT_1024be6c);
      if ((DAT_1024be7c != 0) && (iVar2 = (**(code **)(*DAT_10249d10 + 0x10c))(), iVar2 != 0))
      goto LAB_10029d49;
      iVar2 = FUN_100218b0();
      if (iVar2 == 0) {
        FUN_10048350(&DAT_1024a13c,L" Copy Result Fail:%d ",0);
        FUN_10016860();
        FUN_10048350(&DAT_1024a13c,L"Copy Result");
        FUN_1003fc00();
        FUN_10016860();
        goto LAB_10029d49;
      }
    }
    pwVar3 = L" GetSignatueOrCopyResultOneBootMode Fail!, ErrorCode: 0x%x";
  }
  else {
    FUN_10048350(&DAT_1024a13c,L"IspFinishBeforeResetFlag:%d, exit ISP",DAT_1024be84);
    FUN_1003fc00();
    FUN_10016860();
    iVar2 = (**(code **)(*DAT_10249d10 + 0xec))();
    if (iVar2 == 0) goto LAB_10029d49;
    pwVar3 = L" Scaler Run Fail!, ErrorCode: 0x%x";
  }
  FUN_10048350(&DAT_1024a13c,pwVar3,iVar2);
  FUN_10016860();
LAB_10029d49:
  FUN_10048130();
  ExceptionList = local_10;
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}

