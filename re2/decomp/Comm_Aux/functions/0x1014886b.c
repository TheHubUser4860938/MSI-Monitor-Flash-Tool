// rea decompile_all
// name: CMFCVisualManagerOffice2003::OnDrawComboBorder
// address: 0x1014886b
// body: available
// range: 0x1014886b-0x10148905 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2003::OnDrawComboBorder(class CDC *,class
   CRect,int,int,int,class CMFCToolBarComboBoxButton *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2003::OnDrawComboBorder
          (CMFCVisualManagerOffice2003 *this,CDC *param_1,LONG param_3,LONG param_4,LONG param_5,
          LONG param_6,int param_7,int param_8,int param_9,undefined4 param_10)

{
  int iVar1;
  undefined4 uVar2;
  AFX_GLOBAL_DATA *pAVar3;
  int iVar4;
  ulong uVar5;
  
  uVar2 = param_10;
  pAVar3 = GetGlobalData();
  if (8 < *(int *)(pAVar3 + 0x1ac)) {
    pAVar3 = GetGlobalData();
    iVar4 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar3);
    iVar1 = param_7;
    if (iVar4 == 0) {
      if (((param_9 == 0) && (param_8 == 0)) && (param_7 == 0)) {
        return;
      }
      InflateRect((LPRECT)&param_3,-1,-1);
      if (iVar1 == 0) {
        uVar5 = *(ulong *)(this + 0xe8);
      }
      else {
        pAVar3 = GetGlobalData();
        uVar5 = *(ulong *)(pAVar3 + 0x20);
      }
      CDC::Draw3dRect(param_1,(tagRECT *)&param_3,uVar5,uVar5);
      return;
    }
  }
  CMFCVisualManagerOfficeXP::OnDrawComboBorder
            ((CMFCVisualManagerOfficeXP *)this,param_1,param_3,param_4,param_5,param_6,param_7,
             param_8,param_9,uVar2);
  return;
}

