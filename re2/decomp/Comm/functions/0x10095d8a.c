// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnDrawMenuBorder
// address: 0x10095d8a
// body: available
// range: 0x10095d8a-0x10095fa3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2007::OnDrawMenuBorder(class CDC *,class
   CMFCPopupMenu *,class CRect)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2007::OnDrawMenuBorder
          (CMFCVisualManagerOffice2007 *this,undefined4 param_1,CMFCPopupMenu *param_2,
          undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  code *pcVar1;
  int iVar2;
  CObject *pCVar3;
  CMFCPopupMenu *this_00;
  CObject *local_c;
  
  iVar2 = CanDrawImage(this);
  if (iVar2 == 0) goto LAB_10095da0;
  if (param_2 == (CMFCPopupMenu *)0x0) {
LAB_10095f21:
    local_c = (CObject *)0x0;
    this_00 = param_2;
    if (param_2 != (CMFCPopupMenu *)0x0) {
      do {
        if (*(int *)(this_00 + 0x158) == 0) break;
        local_c = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_101874c4,
                                     *(CObject **)(*(int *)(this_00 + 0x158) + 0x6c));
        this_00 = CMFCPopupMenu::GetParentPopupMenu(this_00);
      } while (this_00 != (CMFCPopupMenu *)0x0);
      if ((local_c != (CObject *)0x0) &&
         (iVar2 = FUN_10019d4f(&PTR_s_CMFCPopupMenuBar_101d3928), iVar2 == 0)) {
LAB_10095da0:
        CMFCVisualManagerOffice2003::OnDrawMenuBorder
                  ((CMFCVisualManagerOffice2003 *)this,param_1,param_2,param_4,param_5,param_6,
                   param_7);
        return;
      }
    }
  }
  else {
    pcVar1 = *(code **)(*(int *)param_2 + 0x1c8);
    guard_check_icall();
    pCVar3 = (CObject *)(*pcVar1)();
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonPanelMenuBar_101a0508,pCVar3);
    if (pCVar3 == (CObject *)0x0) goto LAB_10095f21;
    iVar2 = CMFCRibbonPanelMenuBar::IsMainPanel((CMFCRibbonPanelMenuBar *)pCVar3);
    if (iVar2 == 0) {
      if (*(int *)(pCVar3 + 0xdd8) == 0) {
        if ((*(int *)(pCVar3 + 0xde0) != 0) && (*(int *)(this + 0x8554) != 0)) {
          iVar2 = *(int *)(this + 0x84c0);
          guard_check_icall(param_1,param_4,param_5,param_6,param_7,0,0xff);
          goto LAB_10095f98;
        }
        if (*(int *)(pCVar3 + 0xeb4) == 0) {
          if ((*(int *)(pCVar3 + 0xde8) != 0) && (*(int *)(this + 0x86cc) != 0)) {
            iVar2 = *(int *)(this + 0x8638);
            guard_check_icall(param_1,param_4,param_5,param_6,param_7,0,0xff);
            goto LAB_10095f98;
          }
          if (*(int *)(pCVar3 + 0xea4) == 0) goto LAB_10095f21;
        }
        if (*(int *)(this + 0xc000) != 10) {
          return;
        }
        iVar2 = *(int *)(this + 0x42a8);
        guard_check_icall(param_1,param_4,param_5,param_6,param_7,0,0xff);
        goto LAB_10095f98;
      }
      goto LAB_10095f21;
    }
    if (*(int *)(this + 0x4efc) != 0) {
      iVar2 = *(int *)(this + 0x4e68);
      guard_check_icall(param_1,param_4,param_5,param_6,param_7,0,0xff);
      goto LAB_10095f98;
    }
  }
  iVar2 = *(int *)(this + 0x2548);
  guard_check_icall(param_1,param_4,param_5,param_6,param_7,0,0xff);
LAB_10095f98:
  (**(code **)(iVar2 + 0x14))();
  return;
}

