// rea decompile_all
// name: CMFCToolBarButton::IsLastInGroup
// address: 0x100e73a7
// body: available
// range: 0x100e73a7-0x100e7456 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCToolBarButton::IsLastInGroup(void)const 
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCToolBarButton::IsLastInGroup(CMFCToolBarButton *this)

{
  code *pcVar1;
  bool bVar2;
  CObject *pCVar3;
  int iVar4;
  CMFCToolBarButton *pCVar5;
  int iVar6;
  
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_101d3640,
                              *(CObject **)(this + 0x6c));
  if ((pCVar3 == (CObject *)0x0) ||
     (pCVar5 = *(CMFCToolBarButton **)(pCVar3 + 0xd14), this == pCVar5)) {
    return 0;
  }
  bVar2 = true;
  iVar4 = FUN_1005f182();
  if (pCVar5 != (CMFCToolBarButton *)0x0) {
    iVar4 = iVar4 + -1;
  }
joined_r0x100e73ef:
  do {
    iVar4 = iVar4 + -1;
    if (iVar4 < 0) {
      return 0;
    }
    pCVar5 = (CMFCToolBarButton *)FUN_1005f070(iVar4);
    if (pCVar5 == this) {
      if ((!bVar2) && (*(int *)(pCVar5 + 0x10) == 0)) {
        return 0;
      }
      return 1;
    }
  } while (*(int *)(pCVar5 + 0x50) == 0);
  if (((byte)pCVar5[0x24] & 1) == 0) goto code_r0x100e740c;
  goto LAB_100e7423;
code_r0x100e740c:
  pcVar1 = *(code **)(*(int *)pCVar5 + 0x38);
  guard_check_icall();
  iVar6 = (*pcVar1)();
  bVar2 = false;
  if (iVar6 != 0) {
LAB_100e7423:
    bVar2 = true;
  }
  goto joined_r0x100e73ef;
}

