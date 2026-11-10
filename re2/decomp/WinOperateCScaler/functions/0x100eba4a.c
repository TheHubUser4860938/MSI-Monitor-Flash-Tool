// rea decompile_all
// name: CFrameImpl::LoadLargeIconsState
// address: 0x100eba4a
// body: available
// range: 0x100eba4a-0x100ebaa2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: int __thiscall CFrameImpl::LoadLargeIconsState(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CFrameImpl::LoadLargeIconsState(CFrameImpl *this)

{
  AFX_MODULE_STATE *pAVar1;
  CObject *this_00;
  undefined4 *puVar2;
  int iVar3;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x100eba56;
  pAVar1 = AfxGetModuleState();
  this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CWinAppEx_101b8db0,*(CObject **)(pAVar1 + 4))
  ;
  if (this_00 == (CObject *)0x0) {
    iVar3 = 0;
  }
  else {
    puVar2 = (undefined4 *)CWinAppEx::GetRegSectionPath((CWinAppEx *)this_00,(wchar_t *)local_14);
    local_8 = 0;
    iVar3 = CMFCToolBar::LoadLargeIconsState((wchar_t *)*puVar2);
    ATL::CStringData::Release((CStringData *)(local_14[0] + -0x10));
  }
  return iVar3;
}

