// rea decompile_all
// name: COleControlContainer::GetAmbientProp
// address: 0x44003f
// body: available
// range: 0x44003f-0x44022e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4401b9 to 0x40ec50 FUN_0040ec50 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall COleControlContainer::GetAmbientProp(class COleControlSite
   *,long,struct tagVARIANT *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
COleControlContainer::GetAmbientProp
          (COleControlContainer *this,COleControlSite *param_1,long param_2,tagVARIANT *param_3)

{
  code *pcVar1;
  COLORREF CVar2;
  CFont *pCVar3;
  LCID LVar4;
  undefined4 uVar5;
  int iVar6;
  undefined2 uVar7;
  CWindowDC local_28 [4];
  WPARAM local_24;
  HDC local_20;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x44004b;
  switch(param_2) {
  case -0x2cc:
    *(undefined2 *)param_3 = 2;
    *(undefined2 *)(param_3 + 8) = 1;
    return 1;
  case -0x2cb:
  case -0x2ca:
  case -0x2c5:
  case -0x2c2:
    *(undefined2 *)param_3 = 0xb;
    uVar7 = 0xffff;
    goto LAB_00440079;
  case -0x2c9:
    *(undefined2 *)param_3 = 0xb;
    iVar6 = COleControlSite::IsDefaultButton(param_1);
    *(ushort *)(param_3 + 8) = -(ushort)(iVar6 != 0);
    break;
  case -0x2c8:
  case -0x2c7:
  case -0x2c6:
    *(undefined2 *)param_3 = 0xb;
    uVar7 = 0;
LAB_00440079:
    *(undefined2 *)(param_3 + 8) = uVar7;
    break;
  default:
    return 0;
  case -0x2c3:
    uVar5 = FUN_004295fe();
    FUN_0040eb30(uVar5);
    local_8 = 1;
    iVar6 = FUN_00435fce(0xf1c0);
    if (iVar6 != 0) {
      FUN_004160f0(iVar6,0xf1c0);
    }
    *(undefined2 *)param_3 = 8;
    iVar6 = Ordinal_4(local_14,*(undefined4 *)(local_14 + -0xc));
    if (iVar6 != 0) {
      *(int *)(param_3 + 8) = iVar6;
      FUN_0040efa0();
      return 1;
    }
LAB_004401b9:
                    /* WARNING: Subroutine does not return */
    FUN_0040ec50();
  case -0x2c1:
    *(undefined2 *)param_3 = 3;
    LVar4 = GetThreadLocale();
    *(LCID *)(param_3 + 8) = LVar4;
    break;
  case -0x2c0:
  case -0x2bd:
    if (*(int *)(this + 0x5c) == -1) {
      CWindowDC::CWindowDC(local_28,*(CWnd **)(this + 0x20));
      SendMessageW(*(HWND *)(*(int *)(this + 0x20) + 0x20),0x138,local_24,
                   *(LPARAM *)(*(int *)(this + 0x20) + 0x20));
      CVar2 = GetBkColor(local_20);
      *(COLORREF *)(this + 0x5c) = CVar2;
      CVar2 = GetTextColor(local_20);
      *(COLORREF *)(this + 0x60) = CVar2;
      CWindowDC::~CWindowDC(local_28);
    }
    *(undefined2 *)param_3 = 3;
    if (param_2 == -0x2bd) {
      uVar5 = *(undefined4 *)(this + 0x5c);
    }
    else {
      uVar5 = *(undefined4 *)(this + 0x60);
    }
    *(undefined4 *)(param_3 + 8) = uVar5;
    break;
  case -0x2bf:
    if (*(int *)(this + 100) == 0) {
      pCVar3 = CWnd::GetFont(*(CWnd **)(this + 0x20));
      CreateOleFont(this,pCVar3);
      if (*(int *)(this + 100) == 0) {
        return 0;
      }
    }
    *(undefined2 *)param_3 = 9;
    pcVar1 = *(code **)(**(int **)(this + 100) + 4);
    guard_check_icall(*(int **)(this + 100));
    (*pcVar1)();
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(this + 100);
    break;
  case -0x2be:
    uVar5 = FUN_004295fe();
    FUN_0040eb30(uVar5);
    local_8 = 0;
    *(undefined2 *)param_3 = 8;
    iVar6 = Ordinal_4(local_14,*(undefined4 *)(local_14 + -0xc));
    if (iVar6 == 0) goto LAB_004401b9;
    *(int *)(param_3 + 8) = iVar6;
    FUN_0040efa0();
  }
  return 1;
}

