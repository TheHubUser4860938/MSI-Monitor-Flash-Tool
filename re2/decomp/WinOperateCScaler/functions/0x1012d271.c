// rea decompile_all
// name: FUN_1012d271
// address: 0x1012d271
// body: available
// range: 0x1012d271-0x1012d335 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1012d331 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_1012d271(int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  CPane *in_ECX;
  undefined4 *puVar3;
  CObList local_44 [4];
  undefined4 *local_40;
  CObject *local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x34;
  local_8 = 0x1012d27d;
  FUN_1005878b(param_1);
  if (param_1 != 0) {
    CObList::CObList(local_44,10);
    local_8 = 0;
    CDockingPanesRow::GetGroupFromPane(*(CDockingPanesRow **)(in_ECX + 0xbc),in_ECX,local_44);
    puVar3 = local_40;
    while (puVar3 != (undefined4 *)0x0) {
      if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1001d023();
      }
      puVar1 = puVar3 + 2;
      puVar3 = (undefined4 *)*puVar3;
      local_28 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_101b279c,(CObject *)*puVar1);
      if (local_28 != (CObject *)in_ECX) {
        pcVar2 = *(code **)(*(int *)local_28 + 0x290);
        guard_check_icall(0);
        (*pcVar2)();
      }
    }
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    SetRectEmpty(&local_24);
    pcVar2 = *(code **)(**(int **)(in_ECX + 0xb8) + 0x298);
    guard_check_icall(&local_24);
    (*pcVar2)();
    CObList::~CObList(local_44);
  }
  FUN_10154478();
  return;
}

