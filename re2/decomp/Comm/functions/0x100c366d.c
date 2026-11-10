// rea decompile_all
// name: LoadState
// address: 0x100c366d
// body: available
// range: 0x100c366d-0x100c370e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: virtual int __thiscall CBaseTabbedPane::LoadState(char const *,int,unsigned int)
    protected: virtual int __thiscall CBaseTabbedPane::LoadState(wchar_t const *,int,unsigned int)
   
   Library: Visual Studio 2015 Release */

undefined4 LoadState(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  CObject *pCVar3;
  CBaseTabbedPane *in_ECX;
  int iVar4;
  
  CBaseTabbedPane::FillDefaultTabsOrderArray(in_ECX);
  FUN_100f50ad(param_1,param_2,param_3);
  pcVar1 = *(code **)(**(int **)(in_ECX + 0x370) + 0x1ac);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      pcVar1 = *(code **)(**(int **)(in_ECX + 0x370) + 0x1b0);
      guard_check_icall(iVar4);
      pCVar3 = (CObject *)(*pcVar1)();
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_101874c4,pCVar3);
      if (pCVar3 != (CObject *)0x0) {
        pcVar1 = *(code **)(*(int *)pCVar3 + 0x22c);
        guard_check_icall(param_1,param_2,param_3);
        (*pcVar1)();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return 1;
}

