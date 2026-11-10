// rea decompile_all
// name: FUN_100f224c
// address: 0x100f224c
// body: available
// range: 0x100f224c-0x100f2333 inclusive
// range: 0x100f235b-0x100f2364 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100f225f to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int * FUN_100f224c(COleDataObject *param_1)

{
  code *pcVar1;
  ushort uVar2;
  int iVar3;
  CFile *pCVar4;
  int *piVar5;
  CArchive local_6c [84];
  int *local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x5c;
  local_8 = 0x100f2258;
  if ((param_1 != (COleDataObject *)0x0) &&
     (iVar3 = COleDataObject::IsDataAvailable(param_1,DAT_1020bbf8,(tagFORMATETC *)0x0), iVar3 != 0)
     ) {
    local_8 = 0;
    local_18 = (int *)0x0;
    uVar2 = CMFCToolBarButton::GetClipboardFormat();
    pCVar4 = (CFile *)FUN_100fd13e(uVar2,0);
    if (pCVar4 == (CFile *)0x0) {
      return (int *)0x0;
    }
    CArchive::CArchive(local_6c,pCVar4,1,0x1000,(void *)0x0);
    local_8 = CONCAT31(local_8._1_3_,1);
    iVar3 = FUN_1003c67f(0,0,0);
    if ((iVar3 != 0) && (piVar5 = (int *)FUN_1002505f(), local_18 = piVar5, piVar5 != (int *)0x0)) {
      iVar3 = FUN_100250d6(&PTR_s_CMFCToolBarButton_10201a94);
      if (iVar3 == 0) {
        pcVar1 = *(code **)(*piVar5 + 4);
        guard_check_icall(1);
        (*pcVar1)();
        piVar5 = (int *)0x0;
        local_18 = (int *)0x0;
      }
      else {
        pcVar1 = *(code **)(*piVar5 + 8);
        guard_check_icall(local_6c);
        (*pcVar1)();
      }
      CArchive::Close(local_6c);
      pcVar1 = *(code **)(*(int *)pCVar4 + 4);
      guard_check_icall(1);
      (*pcVar1)();
      CArchive::~CArchive(local_6c);
      return piVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1001d023();
}

