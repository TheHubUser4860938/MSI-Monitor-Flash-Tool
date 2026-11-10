// rea decompile_all
// name: FUN_1000db70
// address: 0x1000db70
// body: available
// range: 0x1000db70-0x1000dc33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000dc33 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000db70(uint param_1,char param_2)

{
  code *pcVar1;
  int in_ECX;
  uint uVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [24];
  
  *(uint *)(in_ECX + 0xc) = param_1 & 0x17;
  uVar2 = *(uint *)(in_ECX + 0x10) & param_1 & 0x17;
  if (uVar2 == 0) {
    return;
  }
  if (param_2 == '\0') {
    local_24 = 1;
    if ((uVar2 & 4) != 0) goto LAB_1000dbb2;
    if ((uVar2 & 2) == 0) goto LAB_1000dc08;
  }
  else {
    __CxxThrowException_8(0,0);
LAB_1000dbb2:
    local_20 = FUN_100108f0();
    FUN_1000dab0("ios_base::badbit set",&local_24);
    __CxxThrowException_8(local_1c,&DAT_101ce658);
  }
  local_20 = FUN_100108f0();
  FUN_1000dab0("ios_base::failbit set",&local_24);
  __CxxThrowException_8(local_1c,&DAT_101ce658);
LAB_1000dc08:
  local_20 = FUN_100108f0();
  FUN_1000dab0("ios_base::eofbit set",&local_24);
  __CxxThrowException_8(local_1c,&DAT_101ce658);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

