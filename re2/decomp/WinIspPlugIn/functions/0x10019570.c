// rea decompile_all
// name: FUN_10019570
// address: 0x10019570
// body: available
// range: 0x10019570-0x1001963a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10019570(void)

{
  int iVar1;
  int iVar2;
  char local_c;
  undefined2 local_b;
  undefined1 local_9;
  undefined1 local_5;
  
  local_c = '\0';
  local_b = 0;
  local_9 = 0;
  iVar2 = DAT_1024be74;
  while( true ) {
    if (iVar2 < 1) {
      return 0xd21;
    }
    local_5 = 1;
    iVar1 = (**(code **)(*DAT_10249d10 + 0x74))(0x6a,0xca,1,&local_5,0);
    if (iVar1 != 0) break;
    Sleep(DAT_1024be70);
    iVar1 = (**(code **)(*DAT_10249d10 + 0x78))(0x6a,0xca,2,&local_c,0);
    FUN_10048350(&DAT_1024a13c,
                 L"EnableIspProgramChannelOneBankMode enumError:0x%X data: 0x%02X, 0x%02X",iVar1,
                 local_c,(char)local_b);
    FUN_10016860();
    if (((local_c == -0x36) && ((char)local_b == '\0')) && (iVar1 == 0)) {
      return 0;
    }
    iVar2 = iVar2 + -1;
  }
  return iVar1;
}

