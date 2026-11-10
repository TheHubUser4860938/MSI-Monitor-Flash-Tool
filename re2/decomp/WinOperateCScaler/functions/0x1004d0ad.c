// rea decompile_all
// name: CMFCPropertyGridCtrl::get_accName
// address: 0x1004d0ad
// body: available
// range: 0x1004d0ad-0x1004d1da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004d129 to 0x10018fb0 FUN_10018fb0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  CStringData *pCVar5;
  uint uVar6;
  int local_1c;
  int local_18;
  CStringData *local_14 [3];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x1004d0b9;
  local_14[0] = (CStringData *)0x0;
  if (param_6 == (int *)0x0) {
    return -0x7ff8ffa9;
  }
  if ((param_2 == 3) && (param_4 == 0)) {
    uVar2 = FUN_1001e20a();
    FUN_1001d224(uVar2);
    local_8 = 0;
    CWnd::GetWindowTextW
              ((CWnd *)this,
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14);
    if (*(int *)(local_14[0] + -0xc) == 0) {
      iVar3 = Ordinal_2(L"PropertyList");
    }
    else {
      iVar3 = Ordinal_4(local_14[0],*(undefined4 *)(local_14[0] + -0xc));
      if (iVar3 == 0) goto LAB_1004d129;
    }
    pCVar5 = local_14[0] + -0x10;
  }
  else {
    piVar4 = *(int **)(this + 0x404);
    if (piVar4 == (int *)0x0) {
      return 0;
    }
    if (piVar4[0x16] == 0) {
      piVar4 = (int *)FUN_100185a0(piVar4[0x22]);
      uVar6 = 2;
    }
    else {
      pcVar1 = *(code **)(*piVar4 + 0x24);
      guard_check_icall(&local_1c);
      piVar4 = (int *)(*pcVar1)();
      uVar6 = 1;
    }
    local_14[0] = (CStringData *)uVar6;
    local_8 = uVar6;
    pCVar5 = (CStringData *)FUN_100187a0(*piVar4 + -0x10);
    local_8 = 3;
    local_14[0] = pCVar5;
    if ((uVar6 & 2) != 0) {
      uVar6 = uVar6 & 0xfffffffd;
      ATL::CStringData::Release((CStringData *)(local_18 + -0x10));
    }
    local_8 = CONCAT31(local_8._1_3_,5);
    if ((uVar6 & 1) != 0) {
      ATL::CStringData::Release((CStringData *)(local_1c + -0x10));
    }
    iVar3 = Ordinal_4(pCVar5 + 0x10,*(undefined4 *)(pCVar5 + 4));
    pCVar5 = local_14[0];
    if (iVar3 == 0) {
LAB_1004d129:
                    /* WARNING: Subroutine does not return */
      FUN_10018fb0();
    }
  }
  *param_6 = iVar3;
  ATL::CStringData::Release(pCVar5);
  return 0;
}

