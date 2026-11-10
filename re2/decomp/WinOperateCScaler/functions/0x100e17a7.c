// rea decompile_all
// name: CMFCRibbonPanel::accNavigate
// address: 0x100e17a7
// body: available
// range: 0x100e17a7-0x100e18e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual long __thiscall CMFCRibbonPanel::accNavigate(long,struct tagVARIANT,struct
   tagVARIANT *)
   
   Library: Visual Studio 2015 Release */

long __thiscall
CMFCRibbonPanel::accNavigate
          (CMFCRibbonPanel *this,int param_1,short param_3,undefined4 param_4,int param_5,
          undefined4 param_6,undefined2 *param_7)

{
  int iVar1;
  int iVar2;
  CMFCRibbonPanel *this_00;
  IDispatch *pIVar3;
  long lVar4;
  undefined **local_28;
  undefined4 local_24;
  IDispatch *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  if ((param_7 == (undefined2 *)0x0) || (*param_7 = 0, param_3 != 3)) {
    return -0x7ff8ffa9;
  }
  lVar4 = 0;
  local_28 = CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>::vftable;
  local_24 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = (IDispatch *)0x0;
  local_8 = 0;
  GetVisibleElements(this,(CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*> *)&local_28);
  if (param_1 == 3) {
LAB_100e1897:
    if (param_5 == 0) {
      if (*(CMFCRibbonCategory **)(this + 0x108) != (CMFCRibbonCategory *)0x0) {
        iVar2 = CMFCRibbonCategory::GetPanelIndex(*(CMFCRibbonCategory **)(this + 0x108),this);
        iVar2 = iVar2 + -1;
        if (-1 < iVar2) {
LAB_100e18c1:
          this_00 = CMFCRibbonCategory::GetPanel(*(CMFCRibbonCategory **)(this + 0x108),iVar2);
          if (this_00 != (CMFCRibbonPanel *)0x0) {
            *param_7 = 9;
            pIVar3 = CCmdTarget::GetIDispatch((CCmdTarget *)this_00,1);
LAB_100e18df:
            *(IDispatch **)(param_7 + 4) = pIVar3;
            goto LAB_100e185c;
          }
        }
      }
    }
    else {
      *param_7 = 3;
      *(int *)(param_7 + 4) = param_5 + -1;
      if (0 < param_5 + -1) goto LAB_100e185c;
LAB_100e1854:
      *param_7 = 0;
    }
  }
  else if (3 < param_1) {
    if (param_1 < 6) {
      if (param_5 != 0) {
        *param_7 = 3;
        *(int *)(param_7 + 4) = param_5 + 1;
        if (param_5 + 1 <= (int)local_20) goto LAB_100e185c;
        goto LAB_100e1854;
      }
      if (*(CMFCRibbonCategory **)(this + 0x108) != (CMFCRibbonCategory *)0x0) {
        local_14 = CMFCRibbonCategory::GetPanelIndex(*(CMFCRibbonCategory **)(this + 0x108),this);
        local_14 = local_14 + 1;
        iVar1 = FUN_100e2961();
        iVar2 = local_14;
        if (local_14 < iVar1) goto LAB_100e18c1;
      }
    }
    else {
      if (param_1 == 6) goto LAB_100e1897;
      if (param_1 == 7) {
        if (param_5 == 0) {
          *param_7 = 3;
          *(undefined4 *)(param_7 + 4) = 1;
          goto LAB_100e185c;
        }
      }
      else if ((param_1 == 8) && (param_5 == 0)) {
        *param_7 = 3;
        pIVar3 = local_20;
        goto LAB_100e18df;
      }
    }
  }
  lVar4 = 1;
LAB_100e185c:
  CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>::
  ~CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>
            ((CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*> *)&local_28);
  return lVar4;
}

