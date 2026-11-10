// rea decompile_all
// name: FUN_10038350
// address: 0x10038350
// body: available
// range: 0x10038350-0x10038521 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10038350(CDataExchange *param_1)

{
  int in_ECX;
  
  DDX_Text(param_1,0xbc3,in_ECX + 0xa8);
  FUN_10056dbc(param_1,0xbc5,in_ECX + 0xb0);
  FUN_10056dbc(param_1,0xbc7,in_ECX + 0x130);
  DDX_Check(param_1,0xbc9,(int *)(in_ECX + 0x230));
  DDX_Check(param_1,0xbcb,(int *)(in_ECX + 0x234));
  DDX_Check(param_1,0xbcf,(int *)(in_ECX + 0x24c));
  DDX_Text(param_1,0xbcc,(uchar *)(in_ECX + 0x238));
  DDX_Check(param_1,0xbcd,(int *)(in_ECX + 0x23c));
  DDX_Check(param_1,0xbce,(int *)(in_ECX + 0x248));
  DDX_Check(param_1,0xbd1,(int *)(in_ECX + 0x250));
  FUN_10056dbc(param_1,0xbd2,in_ECX + 600);
  DDX_Check(param_1,0xbd4,(int *)(in_ECX + 0x2d8));
  DDX_Text(param_1,0xbd6,in_ECX + 0x2dc);
  DDX_Text(param_1,0xbd7,in_ECX + 0x2e0);
  DDX_Check(param_1,0xbd8,(int *)(in_ECX + 0x2e4));
  DDX_Check(param_1,0xbd9,(int *)(in_ECX + 0x2e8));
  DDX_Check(param_1,0xbda,(int *)(in_ECX + 0x2ec));
  DDX_Check(param_1,0xbdb,(int *)(in_ECX + 0x2f0));
  DDX_Check(param_1,0xbdc,(int *)(in_ECX + 0x2f4));
  DDX_Check(param_1,0xbdd,(int *)(in_ECX + 0x240));
  DDX_Text(param_1,0xbde,in_ECX + 0x244);
  DDX_Check(param_1,0xbdf,(int *)(in_ECX + 0x2f8));
  DDX_Check(param_1,0xbe0,(int *)(in_ECX + 0x2fc));
  DDX_Check(param_1,0xbe1,(int *)(in_ECX + 0x300));
  DDX_Check(param_1,0xbe2,(int *)(in_ECX + 0x304));
  return;
}

