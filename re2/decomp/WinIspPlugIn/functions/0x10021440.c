// rea decompile_all
// name: FUN_10021440
// address: 0x10021440
// body: available
// range: 0x10021440-0x100216d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10021440(void)

{
  int iVar1;
  int in_ECX;
  int in_EDX;
  code *pcVar2;
  wchar_t *pwVar3;
  undefined1 local_6;
  undefined1 local_5;
  
  local_5 = 0;
  if (DAT_1024be84 != 0) {
    FUN_10048350(&DAT_1024a13c,L"IspFinishBeforeResetFlag:%d, exit ISP",DAT_1024be84);
    FUN_1003fc00();
    FUN_10016860();
    return 0;
  }
  FUN_1001b860();
  if (DAT_1024a2f4 == 2) {
    return 0;
  }
  if ((DAT_1024a2d4 == 5) && (in_ECX != 2)) {
    return 0;
  }
  iVar1 = FUN_1001b990();
  pcVar2 = Sleep_exref;
  if (iVar1 != 0) {
    return iVar1;
  }
  if (DAT_1024be80 == 0) {
    if (in_ECX == 2) {
      pwVar3 = L"\nWait fSor IC Reset and Signature Result, it will take more than %d ms...";
    }
    else {
      pwVar3 = L"\nWait for IC Reset, it will take more than %d ms...";
    }
    FUN_10048350(&DAT_1024a13c,pwVar3,DAT_1024a374);
    FUN_1003fc00();
    FUN_10016860();
    Sleep(DAT_1024a374);
    iVar1 = FUN_10017780();
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_10018ff0();
    if (iVar1 != 0) {
      return iVar1;
    }
    if (in_ECX != 2) {
      local_6 = 7;
      iVar1 = (**(code **)(*DAT_10249d10 + 0x74))(0x6a,0xca,1,&local_6,0);
      if (iVar1 != 0) {
        pwVar3 = L"SwitchCodeOneBootMode Fail!, ErrorCode: 0x%x";
        goto LAB_10021565;
      }
      iVar1 = FUN_100192d0();
      pcVar2 = Sleep_exref;
      if (iVar1 != 0) {
        return iVar1;
      }
      goto LAB_100215f6;
    }
    iVar1 = FUN_100216e0();
    if (iVar1 == 0) goto LAB_1002158c;
  }
  else {
    FUN_10048350(&DAT_1024a13c,L"Auto Swtich Code:%d ",DAT_1024be80);
    FUN_1003fc00();
    FUN_10016860();
LAB_100215f6:
    if (((in_EDX != 7) || (DAT_1024be68 == 0)) && ((DAT_1024be80 == 0 || (in_ECX != 2)))) {
      return 0;
    }
    FUN_10048350(&DAT_1024a13c,
                 L"Wait for Copy or Digital Siganture Result, it will take more than %d ms...",
                 DAT_1024be6c);
    FUN_1003fc00();
    FUN_10016860();
    (*pcVar2)(DAT_1024be6c);
    iVar1 = FUN_10017780();
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_10018ff0();
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_100216e0();
    if (iVar1 == 0) {
      if (in_ECX != 2) {
        iVar1 = FUN_100192d0();
        if (iVar1 == 0) {
          return 0;
        }
        return iVar1;
      }
LAB_1002158c:
      FUN_10048350(&DAT_1024a13c,L" Sign Verify  Fail!, enumSignStatus: 0x%x",3);
      FUN_10016860();
      return 0xd64;
    }
  }
  pwVar3 = L" GetSignatueOrCopyResultOneBootMode Fail!, ErrorCode: 0x%x";
LAB_10021565:
  FUN_10048350(&DAT_1024a13c,pwVar3,iVar1);
  FUN_10016860();
  return iVar1;
}

