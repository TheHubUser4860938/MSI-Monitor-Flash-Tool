// rea decompile_all
// name: CTabbedPane::ResetTabs
// address: 0x46ca62
// body: available
// range: 0x46ca62-0x46cb9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: static void __stdcall CTabbedPane::ResetTabs(void)
   
   Library: Visual Studio 2015 Release */

void CTabbedPane::ResetTabs(void)

{
  HWND hWnd;
  code *pcVar1;
  BOOL BVar2;
  CWnd *pCVar3;
  CObject *pCVar4;
  CMFCVisualManager *pCVar5;
  undefined4 uVar6;
  int iVar7;
  undefined **local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  CObject *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x46ca6e;
  local_18 = DAT_0060c634;
  while (local_18 != (undefined4 *)0x0) {
    hWnd = (HWND)local_18[2];
    local_18 = (undefined4 *)*local_18;
    BVar2 = IsWindow(hWnd);
    if (BVar2 != 0) {
      pCVar3 = CWnd::FromHandlePermanent(hWnd);
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CTabbedPane_0060c64c,(CObject *)pCVar3);
      if (pCVar4 != (CObject *)0x0) {
        pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_005c65ac,
                                    *(CObject **)(pCVar4 + 0x370));
        local_14 = pCVar4;
        pCVar5 = CMFCVisualManager::GetInstance();
        iVar7 = *(int *)pCVar4;
        pcVar1 = *(code **)(*(int *)pCVar5 + 0x130);
        guard_check_icall(1);
        uVar6 = (*pcVar1)();
        guard_check_icall(uVar6);
        (**(code **)(iVar7 + 0x244))();
        pCVar5 = CMFCVisualManager::GetInstance();
        pcVar1 = *(code **)(*(int *)pCVar5 + 0x134);
        guard_check_icall();
        iVar7 = (*pcVar1)();
        pCVar4 = local_14;
        CMFCTabCtrl::SetDrawFrame((CMFCTabCtrl *)local_14,iVar7);
        CMFCTabCtrl::ModifyTabStyle((CMFCTabCtrl *)pCVar4,DAT_00616098);
        pcVar1 = *(code **)(*(int *)pCVar4 + 0x184);
        guard_check_icall();
        (*pcVar1)();
        if (DAT_006160a0 == 0) {
          CMFCBaseTabCtrl::EnableAutoColor((CMFCBaseTabCtrl *)pCVar4,0);
          local_2c = CArray<unsigned_long,unsigned_long>::vftable;
          local_28 = 0;
          local_1c = 0;
          local_20 = 0;
          local_24 = 0;
          local_8 = 0;
          CMFCBaseTabCtrl::SetAutoColors
                    ((CMFCBaseTabCtrl *)pCVar4,(CArray<unsigned_long,unsigned_long> *)&local_2c);
          local_8 = 0xffffffff;
          CArray<unsigned_long,unsigned_long>::~CArray<unsigned_long,unsigned_long>
                    ((CArray<unsigned_long,unsigned_long> *)&local_2c);
        }
        else {
          CMFCBaseTabCtrl::EnableAutoColor((CMFCBaseTabCtrl *)pCVar4,1);
          CMFCBaseTabCtrl::SetAutoColors
                    ((CMFCBaseTabCtrl *)pCVar4,
                     (CArray<unsigned_long,unsigned_long> *)&PTR_vftable_0060c61c);
        }
      }
    }
  }
  return;
}

