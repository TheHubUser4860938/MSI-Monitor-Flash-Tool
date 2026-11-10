// rea decompile_all
// name: CMFCRibbonCategory::OnKey
// address: 0x100d7ef7
// body: available
// range: 0x100d7ef7-0x100d816e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCRibbonCategory::OnKey(unsigned int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCRibbonCategory::OnKey(CMFCRibbonCategory *this,uint param_1)

{
  code *pcVar1;
  CMFCRibbonBaseElement *pCVar2;
  int *piVar3;
  BOOL BVar4;
  int iVar5;
  BOOL BVar6;
  CMFCRibbonBaseElement *pCVar7;
  undefined **local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  CMFCRibbonBaseElement *local_34;
  CMFCRibbonBaseElement *local_30;
  int local_2c;
  CMFCRibbonCategory *local_28;
  RECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x38;
  local_8 = 0x100d7f03;
  local_34 = (CMFCRibbonBaseElement *)param_1;
  local_28 = this;
  if (param_1 != 9) {
    if ((param_1 == 0xd) || (param_1 == 0x20)) {
      pCVar7 = GetFocused(this);
      if (pCVar7 != (CMFCRibbonBaseElement *)0x0) {
        pcVar1 = *(code **)(*(int *)pCVar7 + 0x1dc);
        guard_check_icall(0);
        (*pcVar1)();
      }
      goto LAB_100d8094;
    }
    if ((param_1 < 0x25) || (0x28 < param_1)) goto LAB_100d8094;
  }
  local_44 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_48 = CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>::vftable;
  local_8 = 0;
  GetVisibleElements(this,(CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*> *)&local_48);
  if (local_40 == 0) {
    CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>::
    ~CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>
              ((CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*> *)&local_48);
  }
  else {
    local_30 = GetFocused(this);
    if (local_30 == (CMFCRibbonBaseElement *)0x0) {
      local_2c = 0;
      pCVar7 = (CMFCRibbonBaseElement *)0x0;
      if (0 < local_40) {
        do {
          piVar3 = (int *)FUN_100d7168(local_2c);
          pCVar7 = (CMFCRibbonBaseElement *)*piVar3;
          pcVar1 = *(code **)(*(int *)pCVar7 + 0x11c);
          local_34 = pCVar7;
          guard_check_icall();
          iVar5 = (*pcVar1)();
          if (iVar5 != 0) {
            local_24.left = *(LONG *)(pCVar7 + 0x74);
            local_24.top = *(LONG *)(pCVar7 + 0x78);
            local_24.right = *(LONG *)(pCVar7 + 0x7c);
            local_24.bottom = *(LONG *)(pCVar7 + 0x80);
            BVar4 = IsRectEmpty(&local_24);
            pCVar7 = local_34;
            this = local_28;
            if (BVar4 == 0) break;
          }
          local_2c = local_2c + 1;
          pCVar7 = (CMFCRibbonBaseElement *)0x0;
          this = local_28;
        } while (local_2c < local_40);
      }
    }
    else {
      local_2c = 0;
      local_24.left = *(LONG *)(this + 0x21c);
      local_24.top = *(LONG *)(this + 0x220);
      local_24.right = *(LONG *)(this + 0x224);
      local_24.bottom = *(LONG *)(this + 0x228);
      BVar4 = IsRectEmpty(&local_24);
      local_24.left = *(LONG *)(local_28 + 0x3e4);
      local_24.top = *(LONG *)(local_28 + 1000);
      local_24.right = *(LONG *)(local_28 + 0x3ec);
      local_24.bottom = *(LONG *)(local_28 + 0x3f0);
      BVar6 = IsRectEmpty(&local_24);
      pCVar7 = CMFCRibbonBar::FindNextFocusedElement
                         (local_34,&local_48,*(undefined4 *)(local_28 + 0x7c),
                          *(undefined4 *)(local_28 + 0x80),*(undefined4 *)(local_28 + 0x84),
                          *(undefined4 *)(local_28 + 0x88),local_30,BVar4 == 0,BVar6 == 0,&local_2c)
      ;
      this = local_28;
      if (local_2c != 0) {
        if (local_2c == -2) {
          pCVar7 = (CMFCRibbonBaseElement *)FUN_100d72c3();
        }
        else if ((local_2c == -1) || (local_2c == 1)) {
          pcVar1 = *(code **)(*(int *)local_28 + 0xe0);
          guard_check_icall(local_2c < 0,0);
          (*pcVar1)();
        }
        else if (local_2c == 2) {
          pCVar7 = GetLastVisibleElement(local_28);
        }
      }
    }
    local_8 = 0xffffffff;
    CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>::
    ~CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>
              ((CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*> *)&local_48);
    if ((pCVar7 != local_30) && (pCVar7 != (CMFCRibbonBaseElement *)0x0)) {
      if (*(CMFCRibbonBar **)(this + 0x53c) != (CMFCRibbonBar *)0x0) {
        CMFCRibbonBar::DeactivateKeyboardFocus(*(CMFCRibbonBar **)(this + 0x53c),0);
      }
      if (local_30 != (CMFCRibbonBaseElement *)0x0) {
        *(int *)(local_30 + 0xcc) = 0;
        *(int *)(local_30 + 200) = 0;
        pcVar1 = *(code **)(*(int *)local_30 + 0x224);
        guard_check_icall(0);
        pCVar2 = local_30;
        (*pcVar1)();
        pcVar1 = *(code **)(*(int *)pCVar2 + 0x1b8);
        guard_check_icall();
        (*pcVar1)();
      }
      *(int *)(pCVar7 + 0xcc) = 1;
      pcVar1 = *(code **)(*(int *)pCVar7 + 0x224);
      guard_check_icall(1);
      (*pcVar1)();
      pcVar1 = *(code **)(*(int *)pCVar7 + 0x1b8);
      guard_check_icall();
      (*pcVar1)();
    }
  }
LAB_100d8094:
  iVar5 = FUN_101490fe();
  return iVar5;
}

