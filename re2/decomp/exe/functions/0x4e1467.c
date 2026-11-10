// rea decompile_all
// name: FUN_004e1467
// address: 0x4e1467
// body: available
// range: 0x4e1467-0x4e14f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4e14f0 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004e1467(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  CObject *pCVar3;
  int in_ECX;
  undefined4 *puVar4;
  CObList local_30 [4];
  undefined4 *local_2c;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_8 = 0x4e1473;
  local_14 = in_ECX;
  CObList::CObList(local_30,10);
  local_8 = 0;
  CPaneContainerManager::AddPanesToList
            ((CPaneContainerManager *)(in_ECX + 400),local_30,(CObList *)0x0);
  puVar4 = local_2c;
  while( true ) {
    if (puVar4 == (undefined4 *)0x0) {
      PostMessageW(*(HWND *)(local_14 + 0x20),DAT_00615fa4,0,0);
      CObList::~CObList(local_30);
      return;
    }
    if (puVar4 == (undefined4 *)0x0) break;
    puVar1 = puVar4 + 2;
    puVar4 = (undefined4 *)*puVar4;
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_0060c780,(CObject *)*puVar1);
    pcVar2 = *(code **)(*(int *)pCVar3 + 0x2e0);
    guard_check_icall(0);
    (*pcVar2)();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00429127();
}

