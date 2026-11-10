// rea decompile_all
// name: CMFCVisualManagerOfficeXP::OnDrawCaptionBarButtonBorder
// address: 0x1010cef0
// body: available
// range: 0x1010cef0-0x1010cf79 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCVisualManagerOfficeXP::OnDrawCaptionBarButtonBorder(class
   CDC *,class CMFCCaptionBar *,class CRect,int,int,int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOfficeXP::OnDrawCaptionBarButtonBorder
          (CMFCVisualManagerOfficeXP *this,CDC *param_1,int param_2,LONG param_4,LONG param_5,
          LONG param_6,LONG param_7,int param_8,int param_9,undefined4 param_10,undefined4 param_11,
          int param_12)

{
  AFX_GLOBAL_DATA *pAVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*(int *)(param_2 + 0x2c4) == 0) {
    CMFCVisualManager::OnDrawCaptionBarButtonBorder
              ((CMFCVisualManager *)this,param_1,param_2,param_4,param_5,param_6,param_7,param_8,
               param_9,param_10,param_11,param_12);
  }
  else {
    if (param_9 == 0) {
      if (param_12 != 0) {
        return;
      }
      pAVar1 = GetGlobalData();
      uVar3 = *(ulong *)(pAVar1 + 0x60);
      pAVar1 = GetGlobalData();
      uVar2 = *(ulong *)(pAVar1 + 0x60);
    }
    else if (((param_12 == 0) || (param_8 == 0)) ||
            (uVar2 = *(ulong *)(this + 0xd4), uVar3 = uVar2, uVar2 == 0xffffffff)) {
      uVar2 = *(ulong *)(this + 0xe8);
      uVar3 = uVar2;
    }
    CDC::Draw3dRect(param_1,(tagRECT *)&param_4,uVar2,uVar3);
  }
  return;
}

