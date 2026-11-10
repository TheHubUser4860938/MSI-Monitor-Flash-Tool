// rea decompile_all
// name: AdjustOption
// address: 0x1003b580
// body: available
// range: 0x1003b580-0x1003b5fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 AdjustOption(void)

{
  uint uVar1;
  AFX_MODULE_STATE *pAVar2;
  undefined4 extraout_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x3b580  1  AdjustOption */
  local_8 = 0xffffffff;
  puStack_c = &LAB_101a0c23;
  local_10 = ExceptionList;
  uVar1 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  pAVar2 = AfxGetModuleState();
  FUN_100583d1(pAVar2);
  local_8 = 0;
  FUN_10038070(extraout_ECX);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_1004d03c(uVar1);
  FUN_10038280();
  guard_check_icall();
  ExceptionList = local_10;
  return 0;
}

