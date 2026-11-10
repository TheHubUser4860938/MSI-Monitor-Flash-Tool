// rea decompile_all
// name: CMFCRibbonButtonsGroup::OnDraw
// address: 0x1013bc35
// body: available
// range: 0x1013bc35-0x1013bd8c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonButtonsGroup::OnDraw(class CDC *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonButtonsGroup::OnDraw(CMFCRibbonButtonsGroup *this,CDC *param_1)

{
  code *pcVar1;
  CMFCRibbonButtonsGroup *pCVar2;
  tagSIZE tVar3;
  CMFCRibbonButtonsGroup *pCVar4;
  BOOL BVar5;
  CMFCVisualManager *pCVar6;
  int iVar7;
  int *piVar8;
  CStringData *this_00;
  CSize *this_01;
  undefined1 *puVar9;
  LONG LVar10;
  undefined1 local_2c [8];
  CStringData *local_24;
  int local_20;
  int local_1c;
  CMFCRibbonButtonsGroup *local_18;
  CMFCRibbonButtonsGroup *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x1013bc41;
  local_14 = this;
  BVar5 = IsRectEmpty((RECT *)(this + 0x74));
  if (BVar5 == 0) {
    pCVar6 = CMFCVisualManager::GetInstance();
    pcVar1 = *(code **)(*(int *)pCVar6 + 0x264);
    guard_check_icall(param_1,local_14,((RECT *)(this + 0x74))->left,*(undefined4 *)(this + 0x78),
                      *(undefined4 *)(this + 0x7c),*(undefined4 *)(this + 0x80));
    iVar7 = (*pcVar1)();
    local_20 = -1;
    if (iVar7 != -1) {
      pcVar1 = *(code **)(*(int *)param_1 + 0x30);
      guard_check_icall(iVar7);
      local_20 = (*pcVar1)();
    }
    pCVar4 = local_14;
    local_1c = 0;
    if (0 < *(int *)(local_14 + 0x114)) {
      do {
        piVar8 = (int *)FUN_1009f8c7(local_1c);
        pCVar2 = (CMFCRibbonButtonsGroup *)*piVar8;
        local_14 = pCVar2;
        BVar5 = IsRectEmpty((RECT *)(pCVar2 + 0x74));
        if (BVar5 == 0) {
          local_18 = pCVar2 + 0x60;
          this_00 = (CStringData *)FUN_100187a0(*(int *)local_18 + -0x10);
          local_24 = this_00 + 0x10;
          puVar9 = local_2c;
          local_8 = 0;
          LVar10 = 1;
          pcVar1 = *(code **)(*(int *)pCVar2 + 0x114);
          guard_check_icall(puVar9,1,0,0);
          this_01 = (CSize *)(*pcVar1)();
          tVar3.cy = LVar10;
          tVar3.cx = (LONG)puVar9;
          iVar7 = CSize::operator!=(this_01,tVar3);
          if (iVar7 != 0) {
            FUN_10018940();
          }
          pcVar1 = *(code **)(*(int *)local_14 + 0x17c);
          guard_check_icall(param_1);
          (*pcVar1)();
          FUN_10018680(&local_24);
          local_8 = 0xffffffff;
          ATL::CStringData::Release(this_00);
        }
        local_1c = local_1c + 1;
      } while (local_1c < *(int *)(pCVar4 + 0x114));
    }
    if (local_20 != -1) {
      pcVar1 = *(code **)(*(int *)param_1 + 0x30);
      guard_check_icall(local_20);
      (*pcVar1)();
    }
  }
  return;
}

