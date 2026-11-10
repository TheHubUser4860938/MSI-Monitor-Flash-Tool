// rea decompile_all
// name: FUN_10019df0
// address: 0x10019df0
// body: available
// range: 0x10019df0-0x10019f7d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10019df0(void)

{
  int iVar1;
  char *in_ECX;
  int iVar2;
  wchar_t *pwVar3;
  
  iVar2 = DAT_1024be74;
  do {
    if (iVar2 < 1) {
      FUN_10048350(&DAT_1024a13c,L"HandshakeInitalBeforeISPGetAckSlave FAIL");
      return 0;
    }
    *in_ECX = 'j';
    FUN_10048350(&DAT_1024a13c,L"HandshakeInitalBeforeISPGetAckSlave Try 0x6A");
    FUN_10016860();
    iVar1 = (**(code **)(*DAT_10249d10 + 0x14))();
    if (((iVar1 != 2) || (DAT_1024a384 == 0)) || (iVar1 = FUN_10019030(), iVar1 == 0)) {
      iVar1 = 0;
      if (*in_ECX == 'n') {
        iVar1 = FUN_100192f0();
      }
      else if (*in_ECX == '|') {
        iVar1 = FUN_10019450();
      }
      FUN_10048350(&DAT_1024a13c,L"SwitchToDebugModeOneBankMode enumError:0x%X",iVar1);
      FUN_10016860();
      if ((iVar1 == 0) && (iVar1 = FUN_10019570(), iVar1 == 0)) {
        pwVar3 = L"HandshakeInitalBeforeISPGetAckSlave Get 0x6A";
        goto LAB_10019f51;
      }
    }
    *in_ECX = 'n';
    FUN_10048350(&DAT_1024a13c,L"HandshakeInitalBeforeISPGetAckSlave Try 0x6E");
    FUN_10016860();
    iVar1 = (**(code **)(*DAT_10249d10 + 0x14))();
    if (((iVar1 != 2) || (DAT_1024a384 == 0)) || (iVar1 = FUN_10019030(), iVar1 == 0)) {
      iVar1 = 0;
      if (*in_ECX == 'n') {
        iVar1 = FUN_100192f0();
      }
      else if (*in_ECX == '|') {
        iVar1 = FUN_10019450();
      }
      FUN_10048350(&DAT_1024a13c,L"SwitchToDebugModeOneBankMode enumError:0x%X",iVar1);
      FUN_10016860();
      if ((iVar1 == 0) && (iVar1 = FUN_10019570(), iVar1 == 0)) {
        *in_ECX = 'n';
        pwVar3 = L"HandshakeInitalBeforeISPGetAckSlave Get 0x6E";
LAB_10019f51:
        FUN_10048350(&DAT_1024a13c,pwVar3);
        FUN_10016860();
        return 1;
      }
    }
    iVar2 = iVar2 + -1;
  } while( true );
}

