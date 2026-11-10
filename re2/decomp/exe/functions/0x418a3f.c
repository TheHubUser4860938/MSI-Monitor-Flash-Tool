// rea decompile_all
// name: FUN_00418a3f
// address: 0x418a3f
// body: available
// range: 0x418a3f-0x418ace inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x418aca to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00418a3f(_ITEMIDLIST *param_1,LPITEMIDLIST *param_2)

{
  uint uVar1;
  int iVar2;
  HRESULT HVar3;
  _ITEMIDLIST *p_Var4;
  LPITEMIDLIST pIVar5;
  CShellManager *in_ECX;
  int iVar6;
  ushort local_8;
  
  uVar1 = CShellManager::GetItemCount(in_ECX,param_1);
  if (uVar1 == 0) {
    iVar2 = -1;
  }
  else if (uVar1 == 1) {
    HVar3 = SHGetSpecialFolderLocation((HWND)0x0,0,param_2);
    if (HVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00429127();
    }
    iVar2 = 0;
  }
  else {
    local_8 = 0;
    iVar2 = uVar1 - 1;
    p_Var4 = param_1;
    for (iVar6 = iVar2; iVar6 != 0; iVar6 = iVar6 + -1) {
      local_8 = local_8 + (p_Var4->mkid).cb;
      p_Var4 = CShellManager::GetNextItem(in_ECX,p_Var4);
    }
    pIVar5 = (LPITEMIDLIST)FUN_0041895c(local_8 + 2);
    *param_2 = pIVar5;
    FUN_005734b0(pIVar5,param_1,(uint)local_8);
  }
  return iVar2;
}

