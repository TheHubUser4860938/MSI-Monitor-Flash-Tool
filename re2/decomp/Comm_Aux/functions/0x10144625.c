// rea decompile_all
// name: CMFCVisualManagerOfficeXP::OnDrawPropertySheetListItem
// address: 0x10144625
// body: available
// range: 0x10144625-0x101446a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual unsigned long __thiscall
   CMFCVisualManagerOfficeXP::OnDrawPropertySheetListItem(class CDC *,class CMFCPropertySheet
   *,class CRect,int,int)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall
CMFCVisualManagerOfficeXP::OnDrawPropertySheetListItem
          (CMFCVisualManagerOfficeXP *this,CDC *param_1,undefined4 param_2,LONG param_4,LONG param_5
          ,LONG param_6,LONG param_7,int param_8,int param_9)

{
  code *pcVar1;
  AFX_GLOBAL_DATA *pAVar2;
  CMFCVisualManagerOfficeXP *pCVar3;
  
  pCVar3 = (CMFCVisualManagerOfficeXP *)0x0;
  if (param_9 == 0) {
    if (param_8 != 0) {
      pCVar3 = this + 0x11c;
    }
  }
  else {
    pCVar3 = this + (uint)(param_8 == 0) * 8 + 0x124;
  }
  pcVar1 = *(code **)(*(int *)this + 0x314);
  guard_check_icall(param_1,param_4,param_5,param_6,param_7,pCVar3,0);
  (*pcVar1)();
  CDC::Draw3dRect(param_1,(tagRECT *)&param_4,*(ulong *)(this + 0xe8),*(ulong *)(this + 0xe8));
  pAVar2 = GetGlobalData();
  return *(ulong *)(pAVar2 + 0x28);
}

