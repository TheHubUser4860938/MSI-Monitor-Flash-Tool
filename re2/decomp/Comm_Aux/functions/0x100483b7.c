// rea decompile_all
// name: COleException::Process
// address: 0x100483b7
// body: available
// range: 0x100483b7-0x10048408 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static long __stdcall COleException::Process(class CException const *)
   
   Library: Visual Studio 2015 Release */

long COleException::Process(CException *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_1004e58b(&PTR_s_COleException_101afcf4);
  if (iVar1 == 0) {
    iVar1 = FUN_1004e58b(&PTR_s_CMemoryException_101afd90);
    if (iVar1 == 0) {
      iVar1 = FUN_1004e58b(&PTR_s_CNotSupportedException_101afdc8);
      lVar2 = (-(uint)(iVar1 != 0) & 0xffff4002) + 0x8000ffff;
    }
    else {
      lVar2 = -0x7ff8fff2;
    }
  }
  else {
    lVar2 = *(long *)(param_1 + 8);
  }
  return lVar2;
}

