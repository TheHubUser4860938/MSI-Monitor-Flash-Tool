// rea decompile_all
// name: CMFCDynamicLayout::AddItem
// address: 0x10061520
// body: available
// range: 0x10061520-0x100615c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CMFCDynamicLayout::AddItem(struct HWND__ *,struct
   CMFCDynamicLayout::MoveSettings,struct CMFCDynamicLayout::SizeSettings)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCDynamicLayout::AddItem(CMFCDynamicLayout *this,HWND param_1)

{
  BOOL BVar1;
  HWND hWndParent;
  AFX_DYNAMIC_LAYOUT_ITEM *pAVar2;
  int iVar3;
  AFX_DYNAMIC_LAYOUT_ITEM *pAVar4;
  
  if ((param_1 != (HWND)0x0) && (BVar1 = IsWindow(param_1), BVar1 != 0)) {
    pAVar4 = (AFX_DYNAMIC_LAYOUT_ITEM *)0x0;
    if (*(int *)(this + 4) == 0) {
      hWndParent = (HWND)0x0;
    }
    else {
      hWndParent = *(HWND *)(*(int *)(this + 4) + 0x20);
    }
    BVar1 = IsChild(hWndParent,param_1);
    if ((BVar1 != 0) && (pAVar2 = FindItem(this,param_1), pAVar2 == (AFX_DYNAMIC_LAYOUT_ITEM *)0x0))
    {
      AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFormView_101b5ef8,*(CObject **)(this + 4));
      pAVar2 = (AFX_DYNAMIC_LAYOUT_ITEM *)FUN_10047eb4(0x38);
      if (pAVar2 != (AFX_DYNAMIC_LAYOUT_ITEM *)0x0) {
        pAVar4 = (AFX_DYNAMIC_LAYOUT_ITEM *)
                 AFX_DYNAMIC_LAYOUT_ITEM::AFX_DYNAMIC_LAYOUT_ITEM
                           (pAVar2,param_1,(MoveSettings *)&stack0x00000008,
                            (SizeSettings *)&stack0x00000010);
      }
      CorrectItem(this,pAVar4);
      iVar3 = FUN_10061be2(pAVar4);
      if (iVar3 != 0) {
        CList<HWND__*,HWND__*>::AddTail((CList<HWND__*,HWND__*> *)(this + 0x10),(HWND__ *)pAVar4);
      }
      return 1;
    }
  }
  return 0;
}

