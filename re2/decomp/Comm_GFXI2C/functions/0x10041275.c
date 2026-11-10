// rea decompile_all
// name: CWnd::ReflectLastMsg
// address: 0x10041275
// body: available
// range: 0x10041275-0x10041314 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: static int __stdcall CWnd::ReflectLastMsg(struct HWND__ *,long *)
   
   Library: Visual Studio 2008 Release */

int CWnd::ReflectLastMsg(HWND__ *param_1,long *param_2)

{
  CHandleMap *pCVar1;
  CWnd *this;
  HWND pHVar2;
  void *pvVar3;
  int iVar4;
  CWnd local_64 [32];
  undefined4 local_44;
  void *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x54;
  local_8 = 0x10041281;
  pCVar1 = afxMapHWND(0);
  if (pCVar1 != (CHandleMap *)0x0) {
    this = CMapPtrToPtr::GetValueAt((CMapPtrToPtr *)(pCVar1 + 0x1c),param_1);
    if (this != (CWnd *)0x0) {
      iVar4 = SendChildNotifyLastMsg(this,param_2);
      return iVar4;
    }
    pHVar2 = GetParent(param_1);
    pvVar3 = CMapPtrToPtr::GetValueAt((CMapPtrToPtr *)(pCVar1 + 0x1c),pHVar2);
    if (((pvVar3 != (void *)0x0) && (*(int *)((int)pvVar3 + 0x4c) != 0)) &&
       (local_14 = CMapPtrToPtr::GetValueAt
                             ((CMapPtrToPtr *)(*(int *)((int)pvVar3 + 0x4c) + 0x24),param_1),
       local_14 != (void *)0x0)) {
      CWnd(local_64,param_1);
      local_8 = 0;
      iVar4 = SendChildNotifyLastMsg(local_64,param_2);
      local_44 = 0;
      local_8 = 0xffffffff;
      ~CWnd(local_64);
      return (uint)(iVar4 != 0);
    }
  }
  return 0;
}

