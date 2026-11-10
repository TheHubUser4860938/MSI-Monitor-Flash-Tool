// rea decompile_all
// name: FID_conflict:AfxCtxRegisterClassA
// address: 0x1003eb22
// body: available
// range: 0x1003eb22-0x1003eb7c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    unsigned short __cdecl AfxCtxRegisterClassA(struct tagWNDCLASSA const *)
    unsigned short __cdecl AfxCtxRegisterClassW(struct tagWNDCLASSW const *)
   
   Library: Visual Studio 2008 Release */

uint __cdecl FID_conflict_AfxCtxRegisterClassA(WNDCLASSW *param_1)

{
  ATOM AVar1;
  AFX_MODULE_STATE *pAVar2;
  eActCtxResult eVar3;
  uint uVar4;
  undefined2 extraout_var;
  ulong *puVar5;
  ulong local_24;
  uint local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_1005ff48;
  uStack_c = 0x1003eb2e;
  local_24 = 0;
  puVar5 = &local_24;
  pAVar2 = AfxGetModuleState();
  eVar3 = AfxActivateActCtxWrapper(*(void **)(pAVar2 + 0x80),puVar5);
  local_20 = 0;
  if (eVar3 == 0) {
    uVar4 = 0;
  }
  else {
    local_8 = (undefined *)0x0;
    AVar1 = RegisterClassW(param_1);
    local_20 = (uint)AVar1;
    local_8 = (undefined *)0xfffffffe;
    FUN_1003eb7d();
    uVar4 = CONCAT22(extraout_var,(undefined2)local_20);
  }
  return uVar4;
}

