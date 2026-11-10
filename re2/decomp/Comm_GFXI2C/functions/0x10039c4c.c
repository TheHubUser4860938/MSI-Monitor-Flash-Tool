// rea decompile_all
// name: FUN_10039c4c
// address: 0x10039c4c
// body: available
// range: 0x10039c4c-0x10039d77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10039d76 to 0x10039d9c FUN_10039d9c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

bool __thiscall FUN_10039c4c(void *this,LPCDLGTEMPLATEW param_1,int param_2,HINSTANCE param_3)

{
  int *piVar1;
  bool bVar2;
  AFX_MODULE_STATE *pAVar3;
  int iVar4;
  HWND hWndParent;
  undefined1 local_4c [16];
  CDialogTemplate local_3c [16];
  int *local_2c;
  void *local_24;
  int local_20;
  ushort local_1c [2];
  HGLOBAL local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x3c;
  local_8 = 0x10039c58;
  local_24 = this;
  if (param_3 == (HINSTANCE)0x0) {
    pAVar3 = AfxGetModuleState();
    param_3 = *(HINSTANCE *)(pAVar3 + 0xc);
  }
  pAVar3 = AfxGetModuleState();
  piVar1 = *(int **)(pAVar3 + 0x3c);
  local_18 = (HGLOBAL)0x0;
  local_8 = 0;
  local_2c = piVar1;
  AfxEndDeferRegisterClass(0x10);
  AfxEndDeferRegisterClass(0xfc000);
  AfxInitNetworkAddressControl();
  if (piVar1 != (int *)0x0) {
    iVar4 = (**(code **)(*(int *)this + 0x134))(local_4c);
    if (iVar4 == 0) {
      return false;
    }
    param_1 = (LPCDLGTEMPLATEW)(**(code **)(*piVar1 + 0x14))(local_4c,param_1);
  }
  if (param_1 == (DLGTEMPLATE *)0x0) {
    return false;
  }
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)&local_20);
  local_8._0_1_ = 1;
  local_1c[0] = 0;
  local_1c[1] = 0;
  iVar4 = CDialogTemplate::GetFont
                    (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             &local_20,local_1c);
  if (iVar4 == 0) {
    FUN_100454c2(local_3c,param_1);
    local_8._0_1_ = 2;
    CDialogTemplate::SetSystemFont(local_3c,local_1c[0]);
    local_18 = (HGLOBAL)FUN_1004515a((undefined4 *)local_3c);
    local_8._0_1_ = 1;
    FUN_1004514c((undefined4 *)local_3c);
    if (local_18 != (HGLOBAL)0x0) {
      param_1 = GlobalLock(local_18);
    }
  }
  *(undefined4 *)((int)this + 0x44) = 0xffffffff;
  *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 0x10;
  AfxHookWindowCreate(this);
  if (param_2 == 0) {
    hWndParent = (HWND)0x0;
  }
  else {
    hWndParent = *(HWND *)(param_2 + 0x20);
  }
  CreateDialogIndirectParamW(param_3,param_1,hWndParent,AfxDlgProc,0);
  FUN_100024a0((undefined4 *)(local_20 + -0x10));
  local_8 = 0xffffffff;
  bVar2 = FUN_10039d9c();
  return bVar2;
}

