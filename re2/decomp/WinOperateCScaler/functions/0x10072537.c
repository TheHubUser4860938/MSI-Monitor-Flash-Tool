// rea decompile_all
// name: CMFCToolBar::UpdateTooltips
// address: 0x10072537
// body: available
// range: 0x10072537-0x10072660 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCToolBar::UpdateTooltips(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCToolBar::UpdateTooltips(CMFCToolBar *this)

{
  code *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_218;
  wchar_t local_214 [262];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20c;
  local_8 = 0x10072546;
  if ((*(int *)(this + 0xd08) != 0) && (*(int *)(*(int *)(this + 0xd08) + 0x20) != 0)) {
    iVar5 = 0;
    while (-1 < *(int *)(this + 0xbfc)) {
      *(int *)(this + 0xbfc) = *(int *)(this + 0xbfc) + -1;
      CToolTipCtrl::DelTool(*(CToolTipCtrl **)(this + 0xd08),(CWnd *)this,*(uint *)(this + 0xbfc));
    }
    *(undefined4 *)(this + 0xbfc) = 0;
    if (0 < *(int *)(this + 0xc48)) {
      do {
        piVar2 = (int *)FUN_1006a5a5(iVar5);
        if (piVar2[9] != 1) {
          uVar3 = FUN_1001e20a();
          FUN_1001d224(uVar3);
          local_8 = 0;
          FUN_1001de50(piVar2[8],local_214,0x100);
          AfxExtractSubString((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                              &local_218,local_214,1,L'\n');
          pcVar1 = *(code **)(*piVar2 + 0xac);
          guard_check_icall(this,iVar5,*(undefined4 *)(this + 0xd08),&local_218);
          iVar4 = (*pcVar1)();
          if (iVar4 == 0) {
            CToolTipCtrl::AddTool
                      (*(CToolTipCtrl **)(this + 0xd08),(CWnd *)this,(wchar_t *)0xffffffff,
                       (tagRECT *)(piVar2 + 0x15),iVar5 + 1);
          }
          *(int *)(this + 0xbfc) = *(int *)(this + 0xbfc) + 1;
          local_8 = 0xffffffff;
          ATL::CStringData::Release((CStringData *)(local_218 + -0x10));
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(this + 0xc48));
    }
  }
  FUN_10154478();
  return;
}

