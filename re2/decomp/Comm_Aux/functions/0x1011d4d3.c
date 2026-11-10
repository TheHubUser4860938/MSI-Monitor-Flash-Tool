// rea decompile_all
// name: CMFCToolBarButton::IsFirstInGroup
// address: 0x1011d4d3
// body: available
// range: 0x1011d4d3-0x1011d56e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCToolBarButton::IsFirstInGroup(void)const 
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCToolBarButton::IsFirstInGroup(CMFCToolBarButton *this)

{
  code *pcVar1;
  CObject *pCVar2;
  int iVar3;
  CMFCToolBarButton *pCVar4;
  int iVar5;
  int local_8;
  
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_10205ab0,
                              *(CObject **)(this + 0x6c));
  if ((pCVar2 != (CObject *)0x0) && (this != *(CMFCToolBarButton **)(pCVar2 + 0xd14))) {
    local_8 = 0;
    iVar5 = 1;
    iVar3 = FUN_10094a15();
    if (0 < iVar3) {
      do {
        pCVar4 = (CMFCToolBarButton *)FUN_10094903(local_8);
        if (pCVar4 == this) {
          return iVar5;
        }
        if (*(int *)(pCVar4 + 0x50) != 0) {
          if ((*(int *)(pCVar4 + 0x10) == 0) && (((byte)pCVar4[0x24] & 1) == 0)) {
            pcVar1 = *(code **)(*(int *)pCVar4 + 0x38);
            guard_check_icall();
            iVar3 = (*pcVar1)();
            if (iVar3 == 0) {
              iVar5 = 0;
              goto LAB_1011d550;
            }
          }
          iVar5 = 1;
        }
LAB_1011d550:
        local_8 = local_8 + 1;
        iVar3 = FUN_10094a15();
      } while (local_8 < iVar3);
    }
  }
  return 0;
}

