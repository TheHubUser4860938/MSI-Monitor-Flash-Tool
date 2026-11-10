// rea decompile_all
// name: CMFCDynamicLayout::LoadResource
// address: 0x10037513
// body: available
// range: 0x10037513-0x10037589 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: static int __cdecl CMFCDynamicLayout::LoadResource(class CWnd *,void *,unsigned long)
   
   Library: Visual Studio 2015 Release */

int __cdecl CMFCDynamicLayout::LoadResource(CWnd *param_1,void *param_2,ulong param_3)

{
  BOOL BVar1;
  int iVar2;
  undefined **local_2c [9];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x1003751f;
  if ((((param_1 != (CWnd *)0x0) && (*(int *)(param_1 + 0x20) != 0)) &&
      (BVar1 = IsWindow(*(HWND *)(param_1 + 0x20)), BVar1 != 0)) && (param_2 != (void *)0x0)) {
    CList<CMFCDynamicLayoutData::Item,CMFCDynamicLayoutData::Item&>::
    CList<CMFCDynamicLayoutData::Item,CMFCDynamicLayoutData::Item&>
              ((CList<CMFCDynamicLayoutData::Item,CMFCDynamicLayoutData::Item&> *)local_2c,10);
    local_8 = 0;
    iVar2 = CMFCDynamicLayoutData::ReadResource((CMFCDynamicLayoutData *)local_2c,param_2,param_3);
    CMFCDynamicLayoutData::ApplyLayoutDataTo((CMFCDynamicLayoutData *)local_2c,param_1,0);
    local_8 = 1;
    local_2c[0] = CList<CMFCDynamicLayoutData::Item,CMFCDynamicLayoutData::Item&>::vftable;
    CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)local_2c);
    return iVar2;
  }
  return 0;
}

