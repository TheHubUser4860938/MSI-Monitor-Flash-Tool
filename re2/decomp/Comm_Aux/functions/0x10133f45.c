// rea decompile_all
// name: CMFCOutlookBarTabCtrl::GetTabArea
// address: 0x10133f45
// body: available
// range: 0x10133f45-0x10133ff6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCOutlookBarTabCtrl::GetTabArea(class CRect &,class CRect
   &)const 
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCOutlookBarTabCtrl::GetTabArea(CMFCOutlookBarTabCtrl *this,CRect *param_1,CRect *param_2)

{
  int iVar1;
  BOOL BVar2;
  int iVar3;
  CRect *pCVar4;
  
  SetRectEmpty((LPRECT)param_1);
  SetRectEmpty((LPRECT)param_2);
  iVar3 = 0;
  if (0 < *(int *)(this + 0xbc)) {
    do {
      iVar1 = FUN_10067dc8(iVar3);
      pCVar4 = param_1;
      if (iVar3 == 0) {
LAB_10133f8c:
        *(undefined4 *)pCVar4 = *(undefined4 *)(iVar1 + 0x10);
        *(undefined4 *)(pCVar4 + 4) = *(undefined4 *)(iVar1 + 0x14);
        *(undefined4 *)(pCVar4 + 8) = *(undefined4 *)(iVar1 + 0x18);
        *(undefined4 *)(pCVar4 + 0xc) = *(undefined4 *)(iVar1 + 0x1c);
      }
      else if (*(int *)(param_1 + 0xc) == *(int *)(iVar1 + 0x14)) {
        *(int *)(param_1 + 0xc) =
             *(int *)(param_1 + 0xc) + (*(int *)(iVar1 + 0x1c) - *(int *)(iVar1 + 0x14));
      }
      else {
        BVar2 = IsRectEmpty((RECT *)param_2);
        pCVar4 = param_2;
        if (BVar2 != 0) goto LAB_10133f8c;
        *(int *)(param_2 + 0xc) =
             *(int *)(param_2 + 0xc) + (*(int *)(iVar1 + 0x1c) - *(int *)(iVar1 + 0x14));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(this + 0xbc));
  }
  CWnd::ClientToScreen((CWnd *)this,(tagRECT *)param_1);
  CWnd::ClientToScreen((CWnd *)this,(tagRECT *)param_2);
  return;
}

