// rea decompile_all
// name: ATL::_ATL_SAFE_ALLOCA_IMPL::_AtlVerifyStackAvailable
// address: 0x44f6c9
// body: available
// range: 0x44f6c9-0x44f70a inclusive
// range: 0x44f72b-0x44f73c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4_GS replaced with injection: SEH_prolog4 */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    bool __cdecl ATL::_ATL_SAFE_ALLOCA_IMPL::_AtlVerifyStackAvailable(unsigned long)
   
   Library: Visual Studio 2015 Release */

bool __cdecl ATL::_ATL_SAFE_ALLOCA_IMPL::_AtlVerifyStackAvailable(ulong param_1)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 local_38 [4];
  ulong local_28;
  undefined1 local_21;
  undefined1 *local_1c;
  undefined4 uStack_c;
  undefined4 local_8;
  
  uStack_c = 0x44f6d5;
  local_8 = 0;
  local_28 = 0;
  lVar2 = AtlAdd<unsigned_long>(&local_28,param_1,0x2000);
  if (lVar2 < 0) {
    local_21 = 0;
  }
  else {
    local_1c = local_38 + -local_28;
  }
  local_8 = 0xfffffffe;
  uVar1 = FUN_0055bc99();
  return (bool)uVar1;
}

