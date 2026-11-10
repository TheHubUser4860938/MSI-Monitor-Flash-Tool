// rea decompile_all
// name: CFrameWnd::OnToolTipText
// address: 0x4d6f80
// body: available
// range: 0x4d6f80-0x4d708a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4d6f99 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: int __thiscall CFrameWnd::OnToolTipText(unsigned int,struct tagNMHDR *,long *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CFrameWnd::OnToolTipText(CFrameWnd *this,uint param_1,tagNMHDR *param_2,long *param_3)

{
  undefined4 uVar1;
  HWND hWnd;
  int iVar2;
  wchar_t *local_218;
  wchar_t local_214 [262];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x208;
  local_8 = 0x4d6f8f;
  if ((param_2 == (tagNMHDR *)0x0) || (param_3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
  uVar1 = FUN_004295fe();
  FUN_0040eb30(uVar1);
  hWnd = *(HWND *)(param_2 + 4);
  local_8 = 0;
  if (((*(int *)(param_2 + 8) == -0x208) && (((byte)param_2[100] & 1) != 0)) ||
     ((*(int *)(param_2 + 8) == -0x212 && (((byte)param_2[0xb4] & 1) != 0)))) {
    hWnd = (HWND)GetDlgCtrlID(hWnd);
  }
  if (hWnd != (HWND)0x0) {
    iVar2 = FUN_00435fd9(hWnd,local_214,0x100);
    if (iVar2 == 0) {
      FUN_0040efa0();
      goto LAB_004d7083;
    }
    AfxExtractSubString((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                        &local_218,local_214,1,L'\n');
  }
  if (*(int *)(param_2 + 8) == -0x208) {
    ATL::_wcstombsz((char *)(param_2 + 0x10),local_218,0x50);
  }
  else {
    uVar1 = FUN_0057efe7(param_2 + 0x10,0x50,local_218,0xffffffff);
    FUN_00416060(uVar1);
  }
  *param_3 = 0;
  SetWindowPos(*(HWND *)param_2,(HWND)0x0,0,0,0,0,0x213);
  FUN_0040efa0();
LAB_004d7083:
  iVar2 = FUN_0055bae6();
  return iVar2;
}

