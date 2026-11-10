// rea decompile_all
// name: CMFCPropertyGridCtrl::get_accName
// address: 0x53c2d2
// body: available
// range: 0x53c2d2-0x53c3ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x53c34e to 0x40ec50 FUN_0040ec50 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __thiscall CMFCPropertyGridCtrl::get_accName(struct tagVARIANT,wchar_t * *)
   
   Library: Visual Studio 2015 Release */

long __thiscall
CMFCPropertyGridCtrl::get_accName
          (CMFCPropertyGridCtrl *this,short param_2,undefined4 param_3,int param_4,
          undefined4 param_5,int *param_6)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined1 local_1c [8];
  uint local_14 [3];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x53c2de;
  local_14[0] = 0;
  if (param_6 == (int *)0x0) {
    return -0x7ff8ffa9;
  }
  if ((param_2 == 3) && (param_4 == 0)) {
    uVar2 = FUN_004295fe();
    FUN_0040eb30(uVar2);
    local_8 = 0;
    CWnd::GetWindowTextW
              ((CWnd *)this,
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14);
    if (*(int *)(local_14[0] + -0xc) == 0) {
      iVar3 = Ordinal_2(L"PropertyList");
      goto LAB_0053c3ef;
    }
    iVar3 = Ordinal_4(local_14[0],*(undefined4 *)(local_14[0] + -0xc));
  }
  else {
    piVar4 = *(int **)(this + 0x404);
    if (piVar4 == (int *)0x0) {
      return 0;
    }
    if (piVar4[0x16] == 0) {
      piVar4 = (int *)FUN_00415a10(piVar4[0x22]);
      uVar5 = 2;
    }
    else {
      pcVar1 = *(code **)(*piVar4 + 0x24);
      guard_check_icall(local_1c);
      piVar4 = (int *)(*pcVar1)();
      uVar5 = 1;
    }
    local_14[0] = uVar5;
    local_8 = uVar5;
    iVar3 = FUN_00415ee0(*piVar4 + -0x10);
    local_8 = 3;
    local_14[0] = iVar3;
    if ((uVar5 & 2) != 0) {
      uVar5 = uVar5 & 0xfffffffd;
      FUN_0040efa0();
    }
    local_8 = CONCAT31(local_8._1_3_,5);
    if ((uVar5 & 1) != 0) {
      FUN_0040efa0();
    }
    iVar3 = Ordinal_4(iVar3 + 0x10,*(undefined4 *)(iVar3 + 4));
  }
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0040ec50();
  }
LAB_0053c3ef:
  *param_6 = iVar3;
  FUN_0040efa0();
  return 0;
}

