// rea decompile_all
// name: CMFCToolBar::OnToolHitTest
// address: 0x10063696
// body: available
// range: 0x10063696-0x100639f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  local_8 = 0x100636a5;
  local_21c = this;
  if ((DAT_101d35b4 == 0) || (iVar6 = ::OnToolHitTest(param_2), iVar6 != -1)) goto LAB_100639ea;
  pcVar1 = *(code **)(*(int *)this + 0x390);
  guard_check_icall();
  iVar6 = (*pcVar1)();
  if ((iVar6 == -1) || ((iVar6 = FUN_1005f070(), iVar6 == 0 || (param_4 == 0)))) goto LAB_100639ea;
  FUN_10013071();
  FUN_10003190();
  local_8 = 0;
  pcVar1 = *(code **)(*(int *)local_21c + 0x3ac);
  guard_check_icall();
  iVar4 = (*pcVar1)();
  if (iVar4 == 0) {
    uVar2 = *(uint *)(iVar6 + 0x20);
    if ((((uVar2 == 0) || (uVar2 == 0xffffffff)) || (*(int *)(iVar6 + 4) != 0)) &&
       (*(int *)(*(int *)(iVar6 + 0x2c) + -0xc) != 0)) {
      FUN_100030d0();
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
                ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_218,
                 L'&');
    }
    else if (((DAT_101dc968 == 0) || (uVar2 < *(uint *)(DAT_101dc968 + 0x24))) ||
            (*(uint *)(DAT_101dc968 + 0x28) < uVar2)) {
      FUN_10012cae(uVar2);
      AfxExtractSubString((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                          &local_218,local_214,1,L'\n');
    }
    else {
      FUN_100030d0();
    }
  }
  if (*(int *)(local_218 + -0xc) == 0) {
    FUN_10003460();
    goto LAB_100639ea;
  }
  if (((*(int *)(iVar6 + 0x20) != 0) && (*(int *)(iVar6 + 0x20) != -1)) && (DAT_101d35b8 != 0)) {
    FUN_10013071();
    FUN_10003190();
    pCVar3 = local_21c;
    local_8 = CONCAT31(local_8._1_3_,1);
    pCVar5 = AFXGetParentFrame((CWnd *)local_21c);
    if (pCVar5 != (CFrameWnd *)0x0) {
      this_00 = AFXGetParentFrame((CWnd *)pCVar3);
      local_220 = DAT_101dc4c4;
      pCVar5 = DAT_101dc4c4;
      if ((DAT_101dc4c4 != (CFrameWnd *)0x0) ||
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
          if (iVar4 == 0) goto LAB_100638e3;
        }
        ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)&local_218,L" (");
        FUN_100123a8();
        ATL::CSimpleStringT<wchar_t,0>::AppendChar((CSimpleStringT<wchar_t,0> *)&local_218,L')');
      }
    }
LAB_100638e3:
    local_8 = local_8 & 0xffffff00;
    FUN_10003460();
  }
  FUN_10013071();
  FUN_10003190();
  local_8 = CONCAT31(local_8._1_3_,2);
  local_220 = CWnd::GetParentFrame((CWnd *)local_21c);
  if ((local_220 != (CFrameWnd *)0x0) && (*(int *)(local_220 + 0x20) != 0)) {
    pcVar1 = *(code **)(*(int *)local_220 + 0x174);
    guard_check_icall();
    (*pcVar1)();
  }
  local_220 = (CFrameWnd *)&stack0xfffffdbc;
  FUN_10003060(local_218 + -0x10);
  pCVar3 = local_21c;
  CTooltipManager::SetTooltipText(param_4,*(int *)(local_21c + 0xd08),2);
  pcVar1 = *(code **)(*(int *)pCVar3 + 0x36c);
  guard_check_icall();
  pCVar3 = local_21c;
  (*pcVar1)();
  *(uint *)(param_4 + 0xc) = -(uint)(*(int *)(iVar6 + 0x20) != -1) & *(uint *)(iVar6 + 0x20);
  *(int *)(param_4 + 8) = *(int *)(pCVar3 + 0x20);
  FUN_10003460();
  FUN_10003460();
LAB_100639ea:
  iVar6 = FUN_101490fe();
  return iVar6;
}

