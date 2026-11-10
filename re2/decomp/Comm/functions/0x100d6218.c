// rea decompile_all
// name: CMFCRibbonPanel::accHitTest
// address: 0x100d6218
// body: available
// range: 0x100d6218-0x100d635d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual long __thiscall CMFCRibbonPanel::accHitTest(long,long,struct tagVARIANT *)
   
   Library: Visual Studio 2015 Release */

long __thiscall
CMFCRibbonPanel::accHitTest(CMFCRibbonPanel *this,long param_1,long param_2,tagVARIANT *param_3)

{
  code *pcVar1;
  POINT pt;
  int iVar2;
  BOOL BVar3;
  long lVar4;
  int iVar5;
  undefined **local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  CMFCRibbonPanel *local_38;
  int *local_34;
  tagVARIANT *local_30;
  tagPOINT local_2c;
  RECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x40;
  local_8 = 0x100d6224;
  local_30 = param_3;
  local_38 = this;
  if (param_3 != (tagVARIANT *)0x0) {
    *(undefined2 *)param_3 = 3;
    iVar5 = 0;
    *(undefined4 *)(param_3 + 8) = 0;
    pcVar1 = *(code **)(*(int *)this + 0xa4);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if ((((iVar2 != 0) && (*(int *)(iVar2 + 0x20) != 0)) && (*(int *)(this + 0x108) != 0)) &&
       ((local_3c = *(int *)(*(int *)(this + 0x108) + 0x53c), local_3c != 0 &&
        (*(int *)(local_3c + 0x20) != 0)))) {
      local_2c.x = param_1;
      local_2c.y = param_2;
      pcVar1 = *(code **)(*(int *)this + 0xa4);
      guard_check_icall();
      iVar2 = (*pcVar1)();
      ScreenToClient(*(HWND *)(iVar2 + 0x20),&local_2c);
      local_50 = CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>::vftable;
      local_4c = 0;
      local_40 = 0;
      local_44 = 0;
      local_48 = 0;
      local_8 = 0;
      GetVisibleElements(this,(CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*> *)&local_50);
      if (0 < local_48) {
        do {
          local_34 = (int *)FUN_100d7168(iVar5);
          local_34 = (int *)*local_34;
          if (local_34 != (int *)0x0) {
            local_24.left = local_34[0x1d];
            local_24.top = local_34[0x1e];
            local_24.right = local_34[0x1f];
            local_24.bottom = local_34[0x20];
            pt.y = local_2c.y;
            pt.x = local_2c.x;
            BVar3 = PtInRect(&local_24,pt);
            if (BVar3 != 0) {
              *(int *)(local_30 + 8) = iVar5 + 1;
              pcVar1 = *(code **)(*local_34 + 0xac);
              guard_check_icall(local_3c,local_38 + 0x20);
              (*pcVar1)();
              break;
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < local_48);
      }
      CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>::
      ~CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>
                ((CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*> *)&local_50);
    }
  }
  lVar4 = FUN_101490fe();
  return lVar4;
}

