// rea decompile_all
// name: FUN_100144d0
// address: 0x100144d0
// body: available
// range: 0x100144d0-0x10014635 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100144d0(void)

{
  int in_ECX;
  
  switch(*(undefined4 *)(in_ECX + 0x420)) {
  case 0:
    *(undefined2 *)(in_ECX + 0x438) = 0xb201;
    break;
  case 1:
    *(undefined2 *)(in_ECX + 0x438) = 0xa201;
    break;
  case 2:
    *(undefined2 *)(in_ECX + 0x438) = 0x7202;
    break;
  case 3:
    *(undefined2 *)(in_ECX + 0x438) = 0x6202;
    break;
  case 4:
    *(undefined2 *)(in_ECX + 0x438) = 0x5202;
    break;
  case 5:
    *(undefined2 *)(in_ECX + 0x438) = 0x4204;
    break;
  case 6:
    *(undefined2 *)(in_ECX + 0x438) = 0x3204;
    break;
  case 7:
    *(undefined2 *)(in_ECX + 0x438) = 0x2210;
    break;
  default:
    *(undefined2 *)(in_ECX + 0x438) = 0x1220;
  }
  switch(*(undefined4 *)(in_ECX + 0x424)) {
  case 0:
    *(undefined2 *)(in_ECX + 0x43a) = 0xb201;
    break;
  default:
    *(undefined2 *)(in_ECX + 0x43a) = 0xa201;
    break;
  case 2:
    *(undefined2 *)(in_ECX + 0x43a) = 0x7202;
    break;
  case 3:
    *(undefined2 *)(in_ECX + 0x43a) = 0x6202;
    break;
  case 4:
    *(undefined2 *)(in_ECX + 0x43a) = 0x5202;
    break;
  case 5:
    *(undefined2 *)(in_ECX + 0x43a) = 0x4204;
    break;
  case 6:
    *(undefined2 *)(in_ECX + 0x43a) = 0x3204;
    break;
  case 7:
    *(undefined2 *)(in_ECX + 0x43a) = 0x2210;
    break;
  case 8:
    *(undefined2 *)(in_ECX + 0x43a) = 0x1220;
  }
  switch(*(undefined4 *)(in_ECX + 0x428)) {
  case 0:
    *(undefined4 *)(in_ECX + 0x43c) = 500;
    return;
  default:
    *(undefined4 *)(in_ECX + 0x43c) = 1000;
    return;
  case 2:
    *(undefined4 *)(in_ECX + 0x43c) = 0x5dc;
    return;
  case 3:
    *(undefined4 *)(in_ECX + 0x43c) = 2000;
    return;
  case 4:
    *(undefined4 *)(in_ECX + 0x43c) = 0x9c4;
    return;
  case 5:
    *(undefined4 *)(in_ECX + 0x43c) = 3000;
    return;
  case 6:
    *(undefined4 *)(in_ECX + 0x43c) = 0xdac;
    return;
  case 7:
    *(undefined4 *)(in_ECX + 0x43c) = 4000;
    return;
  case 8:
    *(undefined4 *)(in_ECX + 0x43c) = 0x1194;
    return;
  case 9:
    *(undefined4 *)(in_ECX + 0x43c) = 5000;
    return;
  }
}

