// rea decompile_all
// name: CMFCToolBarButton::ResetImageToDefault
// address: 0x1011ea4a
// body: available
// range: 0x1011ea4a-0x1011eb3e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBarButton::ResetImageToDefault(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCToolBarButton::ResetImageToDefault(CMFCToolBarButton *this)

{
  code *pcVar1;
  CUserTool *pCVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 local_18 [4];
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x1011ea56;
  if ((*(int *)(this + 4) == 0) && (0 < *(int *)(this + 0x20))) {
    if ((DAT_1020fed8 != (CUserToolsManager *)0x0) &&
       (pCVar2 = CUserToolsManager::FindTool(DAT_1020fed8,*(uint *)(this + 0x20)),
       pCVar2 != (CUserTool *)0x0)) {
      return;
    }
    iVar5 = *(int *)(this + 0xc);
    iVar3 = CMFCToolBar::GetDefaultImage(*(uint *)(this + 0x20));
    if (iVar3 < 0) {
      if (iVar5 != 0) {
        *(undefined4 *)(this + 0xc) = 0;
        *(undefined4 *)(this + 8) = 1;
        if (*(int *)(*(int *)(this + 0x2c) + -0xc) == 0) {
          uVar4 = FUN_10048e90();
          FUN_10034c30(uVar4);
          uVar4 = *(undefined4 *)(this + 0x20);
          local_8 = 0;
          iVar5 = FUN_10048ace(uVar4);
          if (((iVar5 != 0) && (iVar5 = FUN_10034d90(iVar5,uVar4), iVar5 != 0)) &&
             (iVar5 = FUN_10034010(10,0), iVar5 != -1)) {
            uVar4 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
                              (local_14,(int)local_18);
            local_8 = CONCAT31(local_8._1_3_,1);
            FUN_10034940(uVar4);
            FUN_10034f00();
          }
          FUN_10034f00();
        }
      }
    }
    else {
      pcVar1 = *(code **)(*(int *)this + 0xc0);
      guard_check_icall(iVar3);
      (*pcVar1)();
    }
  }
  return;
}

