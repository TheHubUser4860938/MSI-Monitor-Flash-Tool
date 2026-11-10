// rea decompile_all
// name: AfxUnregisterWndClasses
// address: 0x4d268c
// body: available
// range: 0x4d268c-0x4d2730 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  local_8 = 0x4d2698;
  AfxGetModuleState();
  FUN_004cfaea(1);
  local_18 = 0;
  FUN_0043de73(local_14,&DAT_005af15c,&local_18);
  local_8 = 0;
  iVar1 = *(int *)(local_14[0] + -0xc);
  while (iVar1 != 0) {
    pAVar2 = AfxGetModuleState();
    FID_conflict__IsolationAwareUnregisterClassW_8(local_14[0],*(undefined4 *)(pAVar2 + 8));
    uVar3 = FUN_0043de73(local_1c,&DAT_005af15c,&local_18);
    local_8._0_1_ = 1;
    FUN_00415f50(uVar3);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_0040efa0();
    iVar1 = *(int *)(local_14[0] + -0xc);
  }
  FUN_00415d60();
  FUN_004cfb5e(1);
  FUN_0040efa0();
  return;
}

