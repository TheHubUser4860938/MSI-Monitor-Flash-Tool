// rea decompile_all
// name: OnDrawRibbonPanelCaption
// address: 0x4b8a44
// body: available
// range: 0x4b8a44-0x4b8b8a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual void __thiscall CMFCVisualManagerOffice2007::OnDrawRibbonPanelCaption(class CDC
   *,class CMFCRibbonPanel *,class CRect)
    public: virtual void __thiscall CMFCVisualManagerWindows7::OnDrawRibbonPanelCaption(class CDC
   *,class CMFCRibbonPanel *,class CRect)
   
   Library: Visual Studio 2015 Release */

void OnDrawRibbonPanelCaption
               (int *param_1,int param_2,int param_3,LONG param_4,int param_5,LONG param_6)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  CMFCVisualManagerOffice2007 *in_ECX;
  int local_14;
  
  iVar2 = CMFCVisualManagerOffice2007::CanDrawImage(in_ECX);
  if (iVar2 == 0) {
    CMFCVisualManager::OnDrawRibbonPanelCaption
              ((CMFCVisualManager *)in_ECX,param_1,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    iVar2 = FUN_0043970d(&PTR_s_CMFCRibbonMainPanel_005d0c80);
    if (iVar2 == 0) {
      FUN_00415a10(*(undefined4 *)(param_2 + 0xfc));
      if (*(int *)(local_14 + -0xc) != 0) {
        if (*(int *)(param_2 + 0x1b8) == 0) {
          InflateRect((LPRECT)&param_3,-1,-1);
          if ((param_5 - param_3 & 1U) == 0) {
            param_5 = param_5 + -1;
          }
          OffsetRect((LPRECT)&param_3,0,-1);
        }
        else {
          param_5 = *(int *)(param_2 + 0x188);
          InflateRect((LPRECT)&param_3,-1,-1);
          OffsetRect((LPRECT)&param_3,-1,-1);
        }
        if (*(int *)(param_2 + 0x68) == 0) {
          uVar3 = *(undefined4 *)(in_ECX + 0x9098);
        }
        else {
          uVar3 = *(undefined4 *)(in_ECX + 0x909c);
        }
        pcVar1 = *(code **)(*param_1 + 0x30);
        guard_check_icall(uVar3);
        uVar3 = (*pcVar1)();
        iVar2 = *param_1;
        guard_check_icall(local_14,*(undefined4 *)(local_14 + -0xc),&param_3,0x8825);
        (**(code **)(iVar2 + 0x68))();
        pcVar1 = *(code **)(*param_1 + 0x30);
        guard_check_icall(uVar3);
        (*pcVar1)();
      }
      FUN_0040efa0();
    }
  }
  return;
}

