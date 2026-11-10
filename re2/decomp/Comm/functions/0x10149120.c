// rea decompile_all
// name: __EH_prolog3
// address: 0x10149120
// body: available
// range: 0x10149120-0x10149153 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: This is an inlined function */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    __EH_prolog3
   
   Libraries: Visual Studio 2015, Visual Studio 2017, Visual Studio 2019 */

void __EH_prolog3(int param_1)

{
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  uint auStack_1c [5];
  undefined1 local_8 [8];
  
  param_1 = -param_1;
  *(undefined4 *)((int)auStack_1c + param_1 + 0x10) = unaff_EBX;
  *(undefined4 *)((int)auStack_1c + param_1 + 0xc) = unaff_ESI;
  *(undefined4 *)((int)auStack_1c + param_1 + 8) = unaff_EDI;
  *(uint *)((int)auStack_1c + param_1 + 4) = DAT_101d3fec ^ (uint)&stack0x00000004;
  *(undefined4 *)((int)auStack_1c + param_1) = unaff_retaddr;
  ExceptionList = local_8;
  return;
}

