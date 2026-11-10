// rea decompile_all
// name: CMFCRibbonMainPanel::GetPreferedMenuLocation
// address: 0x1011d9e9
// body: available
// range: 0x1011d9e9-0x1011da67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCRibbonMainPanel::GetPreferedMenuLocation(class CRect &)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCRibbonMainPanel::GetPreferedMenuLocation(CMFCRibbonMainPanel *this,CRect *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  AFX_GLOBAL_DATA *pAVar4;
  CMFCVisualManager *pCVar5;
  int iVar6;
  
  iVar6 = *(int *)(this + 0x510);
  if (iVar6 != 0) {
    uVar1 = *(undefined4 *)(iVar6 + 0x78);
    uVar2 = *(undefined4 *)(iVar6 + 0x7c);
    uVar3 = *(undefined4 *)(iVar6 + 0x80);
    *(undefined4 *)param_1 = *(undefined4 *)(iVar6 + 0x74);
    *(undefined4 *)(param_1 + 4) = uVar1;
    *(undefined4 *)(param_1 + 8) = uVar2;
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    InflateRect((LPRECT)param_1,-1,-1);
    if (((DAT_101d3ad4 == 0) || (DAT_101daf90 != 0)) ||
       (pAVar4 = GetGlobalData(), *(int *)(pAVar4 + 0x1ac) < 9)) {
      iVar6 = 0;
    }
    else {
      pCVar5 = CMFCVisualManager::GetInstance();
      iVar6 = *(int *)(pCVar5 + 0x7c);
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (-3 - iVar6);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (-3 - iVar6);
    return 1;
  }
  return 0;
}

