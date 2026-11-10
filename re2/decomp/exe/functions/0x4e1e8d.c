// rea decompile_all
// name: FUN_004e1e8d
// address: 0x4e1e8d
// body: available
// range: 0x4e1e8d-0x4e1f18 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4e1f14 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004e1e8d(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  CObject *pCVar4;
  uint uVar5;
  CPaneFrameWnd *in_ECX;
  CObList local_30 [4];
  undefined4 *local_2c;
  CPaneFrameWnd *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_8 = 0x4e1e99;
  local_14 = in_ECX;
  CObList::CObList(local_30,10);
  local_8 = 0;
  CPaneContainerManager::AddPanesToList
            ((CPaneContainerManager *)(in_ECX + 400),local_30,(CObList *)0x0);
  puVar2 = local_2c;
  do {
    do {
      if (puVar2 == (undefined4 *)0x0) {
        CPaneFrameWnd::KillRollupTimer(in_ECX);
        goto LAB_004e1f06;
      }
      if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00429127();
      }
      puVar1 = puVar2 + 2;
      puVar2 = (undefined4 *)*puVar2;
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_005c4284,(CObject *)*puVar1);
      in_ECX = local_14;
    } while (pCVar4 == (CObject *)0x0);
    pcVar3 = *(code **)(*(int *)pCVar4 + 0x1c4);
    guard_check_icall();
    uVar5 = (*pcVar3)();
    in_ECX = local_14;
  } while ((uVar5 & 0x10) == 0);
LAB_004e1f06:
  CObList::~CObList(local_30);
  return;
}

