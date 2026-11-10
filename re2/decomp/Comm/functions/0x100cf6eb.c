// rea decompile_all
// name: CMFCRibbonPanel
// address: 0x100cf6eb
// body: available
// range: 0x100cf6eb-0x100cf7d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: __thiscall CMFCRibbonPanel::CMFCRibbonPanel(char const *,struct HICON__ *)
    protected: __thiscall CMFCRibbonPanel::CMFCRibbonPanel(wchar_t const *,struct HICON__ *)
   
   Library: Visual Studio 2015 Release */

void CMFCRibbonPanel(char *param_1,HICON__ *param_2)

{
  undefined4 uVar1;
  CMFCBaseAccessibleObject *in_ECX;
  
  CMFCBaseAccessibleObject::CMFCBaseAccessibleObject(in_ECX);
  *(undefined ***)in_ECX = CMFCRibbonPanel::vftable;
  *(undefined4 *)(in_ECX + 0xbc) = 0;
  *(undefined4 *)(in_ECX + 0xc0) = 0;
  *(undefined4 *)(in_ECX + 0xc4) = 0;
  *(undefined4 *)(in_ECX + 200) = 0;
  *(undefined4 *)(in_ECX + 0xcc) = 0;
  *(undefined4 *)(in_ECX + 0xd0) = 0;
  *(undefined4 *)(in_ECX + 0xd4) = 0;
  *(undefined4 *)(in_ECX + 0xd8) = 0;
  *(undefined4 *)(in_ECX + 0xdc) = 0;
  *(undefined4 *)(in_ECX + 0xe0) = 0;
  *(undefined4 *)(in_ECX + 0xe4) = 0;
  *(undefined4 *)(in_ECX + 0xe8) = 0;
  *(undefined4 *)(in_ECX + 0xec) = 0;
  *(undefined4 *)(in_ECX + 0xf0) = 0;
  *(undefined4 *)(in_ECX + 0xf4) = 0;
  *(undefined4 *)(in_ECX + 0xf8) = 0;
  uVar1 = FUN_10013071();
  FUN_10003190(uVar1);
  CMFCRibbonLaunchButton::CMFCRibbonLaunchButton((CMFCRibbonLaunchButton *)(in_ECX + 0x114));
  CMFCRibbonDefaultPanelButton::CMFCRibbonDefaultPanelButton
            ((CMFCRibbonDefaultPanelButton *)(in_ECX + 0x2e0),(CMFCRibbonPanel *)in_ECX);
  CMap<int,int,int,int>::CMap<int,int,int,int>((CMap<int,int,int,int> *)(in_ECX + 0x4ac),10);
  CArray<int,int>::CArray<int,int>((CArray<int,int> *)(in_ECX + 0x4c8));
  CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>::
  CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*>
            ((CArray<CMFCRibbonBaseElement*,CMFCRibbonBaseElement*> *)(in_ECX + 0x4dc));
  CMFCRibbonPanel::CommonInit((CMFCRibbonPanel *)in_ECX,param_1,param_2);
  return;
}

