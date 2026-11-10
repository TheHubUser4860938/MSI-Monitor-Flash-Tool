// rea decompile_all
// name: CWnd::ReflectLastMsg
// address: 0x1001fa42
// body: available
// range: 0x1001fa42-0x1001faea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: static int __stdcall CWnd::ReflectLastMsg(struct HWND__ *,long *)
   
   Library: Visual Studio 2015 Release */

int CWnd::ReflectLastMsg(HWND__ *param_1,long *param_2)

{
  CHandleMap *pCVar1;
  int iVar2;
  HWND pHVar3;
  CWnd local_90 [32];
  undefined4 local_70;
  int local_1c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x80;
  local_8 = 0x1001fa51;
  pCVar1 = afxMapHWND(0);
  if (pCVar1 != (CHandleMap *)0x0) {
    iVar2 = FUN_10029eb5(param_1);
    if (iVar2 != 0) {
      iVar2 = FUN_1002009a(param_2);
      return iVar2;
    }
    pHVar3 = GetParent(param_1);
    iVar2 = FUN_10029eb5(pHVar3);
    if (((iVar2 != 0) && (*(int *)(iVar2 + 0x70) != 0)) &&
       (local_1c = FUN_10029eb5(param_1), local_1c != 0)) {
      CWnd(local_90,param_1);
      local_8 = 0;
      iVar2 = FUN_1002009a(param_2);
      local_70 = 0;
      ~CWnd(local_90);
      return (uint)(iVar2 != 0);
    }
  }
  return 0;
}

