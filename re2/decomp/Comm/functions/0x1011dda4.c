// rea decompile_all
// name: CMFCRibbonRecentFilesList::OnMenuKey
// address: 0x1011dda4
// body: available
// range: 0x1011dda4-0x1011dea8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual int __thiscall CMFCRibbonRecentFilesList::OnMenuKey(unsigned int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCRibbonRecentFilesList::OnMenuKey(CMFCRibbonRecentFilesList *this,uint param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  CObject *pCVar3;
  int iVar4;
  int iVar5;
  WCHAR local_18 [2];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x1011ddb0;
  iVar5 = 0;
  if (0 < *(int *)(this + 0x114)) {
    do {
      puVar2 = (undefined4 *)FUN_100d7168(iVar5);
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonButton_101963ec,
                                  (CObject *)*puVar2);
      if (pCVar3 != (CObject *)0x0) {
        FUN_100037c0(*(undefined4 *)(pCVar3 + 0x60));
        local_8 = 0;
        iVar4 = FUN_10010f20(0x26,0);
        if ((-1 < iVar4) && (iVar4 < *(int *)(local_14 + -0xc) + -1)) {
          local_18[0] = FUN_10011080(iVar4 + 1);
          local_18[1] = 0;
          CharUpperW(local_18);
          if ((ushort)local_18[0] == param_1) {
            pcVar1 = *(code **)(*(int *)pCVar3 + 0xdc);
            guard_check_icall();
            iVar4 = (*pcVar1)();
            if (iVar4 == 0) {
              pcVar1 = *(code **)(*(int *)pCVar3 + 0x264);
              guard_check_icall(*(undefined4 *)(pCVar3 + 0x74),*(undefined4 *)(pCVar3 + 0x78));
              (*pcVar1)();
              FUN_10003460();
              return 1;
            }
          }
        }
        local_8 = 0xffffffff;
        FUN_10003460();
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(this + 0x114));
  }
  return 0;
}

