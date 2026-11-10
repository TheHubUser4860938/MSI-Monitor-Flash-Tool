// rea decompile_all
// name: AfxUnregisterWndClasses
// address: 0x1001965c
// body: available
// range: 0x1001965c-0x10019700 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall AfxUnregisterWndClasses(void)
   
   Library: Visual Studio 2015 Release */

void AfxUnregisterWndClasses(void)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  undefined4 uVar3;
  undefined1 local_1c [4];
  undefined4 local_18;
  int local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x10019668;
  AfxGetModuleState();
  FUN_10019bf6(1);
  local_18 = 0;
  FUN_1001978e(local_14,&DAT_1017fd3c,&local_18);
  local_8 = 0;
  iVar1 = *(int *)(local_14[0] + -0xc);
  while (iVar1 != 0) {
    pAVar2 = AfxGetModuleState();
    FID_conflict__IsolationAwareUnregisterClassW_8(local_14[0],*(undefined4 *)(pAVar2 + 8));
    uVar3 = FUN_1001978e(local_1c,&DAT_1017fd3c,&local_18);
    local_8._0_1_ = 1;
    FUN_100030d0(uVar3);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_10003460();
    iVar1 = *(int *)(local_14[0] + -0xc);
  }
  FUN_10003400();
  FUN_10019c6a(1);
  FUN_10003460();
  return;
}

