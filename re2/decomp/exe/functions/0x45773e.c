// rea decompile_all
// name: CMFCToolBar::OnToolHitTest
// address: 0x45773e
// body: available
// range: 0x45773e-0x457a99 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual int __thiscall CMFCToolBar::OnToolHitTest(class CPoint,struct tagTOOLINFOW
   *)const 
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCToolBar::OnToolHitTest(CMFCToolBar *this,undefined4 param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  uint uVar2;
  CMFCToolBar *pCVar3;
  int iVar4;
  CFrameWnd *pCVar5;
  CFrameWnd *this_00;
  int iVar6;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_224 [4];
  CFrameWnd *local_220;
  CMFCToolBar *local_21c;
  int local_218;
  wchar_t local_214 [262];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x21c;
  local_8 = 0x45774d;
  local_21c = this;
  if ((DAT_0060c4f4 == 0) || (iVar6 = ::OnToolHitTest(param_2), iVar6 != -1)) goto LAB_00457a92;
  pcVar1 = *(code **)(*(int *)this + 0x390);
  guard_check_icall();
  iVar6 = (*pcVar1)();
  if ((iVar6 == -1) || ((iVar6 = FUN_00452f94(), iVar6 == 0 || (param_4 == 0)))) goto LAB_00457a92;
  FUN_004295fe();
  FUN_0040eb30();
  local_8 = 0;
  pcVar1 = *(code **)(*(int *)local_21c + 0x3ac);
  guard_check_icall();
  iVar4 = (*pcVar1)();
  if (iVar4 == 0) {
    uVar2 = *(uint *)(iVar6 + 0x20);
    if ((((uVar2 == 0) || (uVar2 == 0xffffffff)) || (*(int *)(iVar6 + 4) != 0)) &&
       (*(int *)(*(int *)(iVar6 + 0x2c) + -0xc) != 0)) {
      FUN_00415f50();
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
                ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_218,
                 L'&');
    }
    else if (((DAT_00616ad0 == 0) || (uVar2 < *(uint *)(DAT_00616ad0 + 0x24))) ||
            (*(uint *)(DAT_00616ad0 + 0x28) < uVar2)) {
      FUN_00435fd9(uVar2);
      AfxExtractSubString((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                          &local_218,local_214,1,L'\n');
    }
    else {
      FUN_00415f50();
    }
  }
  if (*(int *)(local_218 + -0xc) == 0) {
    FUN_0040efa0();
    goto LAB_00457a92;
  }
  if (((*(int *)(iVar6 + 0x20) != 0) && (*(int *)(iVar6 + 0x20) != -1)) && (DAT_0060c4f8 != 0)) {
    FUN_004295fe();
    FUN_0040eb30();
    pCVar3 = local_21c;
    local_8 = CONCAT31(local_8._1_3_,1);
    pCVar5 = AFXGetParentFrame((CWnd *)local_21c);
    if (pCVar5 != (CFrameWnd *)0x0) {
      this_00 = AFXGetParentFrame((CWnd *)pCVar3);
      local_220 = DAT_0061620c;
      pCVar5 = DAT_0061620c;
      if ((DAT_0061620c != (CFrameWnd *)0x0) ||
         (pCVar5 = CWnd::GetTopLevelFrame((CWnd *)this_00), local_220 = pCVar5,
         pCVar5 != (CFrameWnd *)0x0)) {
        local_220 = pCVar5;
        iVar4 = CKeyboardManager::FindDefaultAccelerator(*(uint *)(iVar6 + 0x20),local_224,pCVar5,1)
        ;
        if (iVar4 == 0) {
          pcVar1 = *(code **)(*(int *)pCVar5 + 0x170);
          guard_check_icall();
          pCVar5 = (CFrameWnd *)(*pcVar1)();
          iVar4 = CKeyboardManager::FindDefaultAccelerator
                            (*(uint *)(iVar6 + 0x20),local_224,pCVar5,iVar4);
          if (iVar4 == 0) goto LAB_0045798b;
        }
        ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)&local_218,L" (");
        FUN_004157a0();
        FUN_004153a0();
      }
    }
LAB_0045798b:
    local_8 = local_8 & 0xffffff00;
    FUN_0040efa0();
  }
  FUN_004295fe();
  FUN_0040eb30();
  local_8 = CONCAT31(local_8._1_3_,2);
  local_220 = CWnd::GetParentFrame((CWnd *)local_21c);
  if ((local_220 != (CFrameWnd *)0x0) && (*(int *)(local_220 + 0x20) != 0)) {
    pcVar1 = *(code **)(*(int *)local_220 + 0x174);
    guard_check_icall();
    (*pcVar1)();
  }
  local_220 = (CFrameWnd *)&stack0xfffffdbc;
  FUN_00415ee0(local_218 + -0x10);
  pCVar3 = local_21c;
  CTooltipManager::SetTooltipText(param_4,*(int *)(local_21c + 0xd08),2);
  pcVar1 = *(code **)(*(int *)pCVar3 + 0x36c);
  guard_check_icall();
  pCVar3 = local_21c;
  (*pcVar1)();
  *(uint *)(param_4 + 0xc) = -(uint)(*(int *)(iVar6 + 0x20) != -1) & *(uint *)(iVar6 + 0x20);
  *(int *)(param_4 + 8) = *(int *)(pCVar3 + 0x20);
  FUN_0040efa0();
  FUN_0040efa0();
LAB_00457a92:
  iVar6 = FUN_0055bae6();
  return iVar6;
}

