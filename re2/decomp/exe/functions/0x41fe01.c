// rea decompile_all
// name: CMFCVisualManager::OnFillBarBackground
// address: 0x41fe01
// body: available
// range: 0x41fe01-0x41ff77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnFillBarBackground(class CDC *,class
   CBasePane *,class CRect,class CRect,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManager::OnFillBarBackground
          (CMFCVisualManager *this,CDC *param_1,CObject *param_2,LONG param_4,LONG param_5,
          LONG param_6,LONG param_7)

{
  code *pcVar1;
  CObject *pCVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  int iVar5;
  AFX_GLOBAL_DATA *pAVar6;
  BOOL BVar7;
  tagRECT *ptVar8;
  HBRUSH hbr;
  
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CReBar_005b8314,param_2);
  if (pCVar2 == (CObject *)0x0) {
    pHVar3 = GetParent(*(HWND *)(param_2 + 0x20));
    pCVar4 = CWnd::FromHandle(pHVar3);
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CReBar_005b8314,(CObject *)pCVar4);
    if (pCVar2 == (CObject *)0x0) {
      iVar5 = FUN_0043970d(&PTR_s_CMFCOutlookBarPane_0060c66c);
      if (iVar5 != 0) {
        pcVar1 = *(code **)(*(int *)param_2 + 0x434);
        guard_check_icall(param_1,param_4,param_5,param_6,param_7);
        (*pcVar1)();
        return;
      }
      iVar5 = FUN_0043970d(&PTR_s_CMFCCaptionBar_005ba198);
      if (iVar5 == 0) {
        iVar5 = FUN_0043970d(&PTR_s_CMFCPopupMenuBar_0060c6b4);
        if ((iVar5 == 0) || (*(int *)(param_2 + 0xd80) == 0)) {
          if (*(int *)(param_2 + 0x8c) == 0) {
            pAVar6 = GetGlobalData();
            pAVar6 = pAVar6 + 0xd0;
          }
          else {
            pAVar6 = GetGlobalData();
            pAVar6 = pAVar6 + 0x98;
          }
          BVar7 = IsRectEmpty((RECT *)&stack0x0000001c);
          ptVar8 = (tagRECT *)&param_4;
          if (BVar7 == 0) {
            ptVar8 = (tagRECT *)&stack0x0000001c;
          }
          CDC::FillRect(param_1,ptVar8,(CBrush *)pAVar6);
          return;
        }
        pAVar6 = GetGlobalData();
        pAVar6 = pAVar6 + 200;
      }
      else {
        if (*(int *)(param_2 + 0x2c4) == 0) {
          iVar5 = *(int *)(param_2 + 700);
          if (iVar5 == -1) {
            pAVar6 = GetGlobalData();
            iVar5 = *(int *)(pAVar6 + 0x58);
          }
          FUN_0044847c(&stack0x0000001c,iVar5);
          return;
        }
        pAVar6 = GetGlobalData();
        pAVar6 = pAVar6 + 0xd0;
      }
      hbr = (HBRUSH)0x0;
      if (pAVar6 != (AFX_GLOBAL_DATA *)0x0) {
        hbr = *(HBRUSH *)(pAVar6 + 4);
      }
      FillRect(*(HDC *)(param_1 + 4),(RECT *)&stack0x0000001c,hbr);
      return;
    }
  }
  iVar5 = *(int *)this;
  guard_check_icall(param_1,param_2,param_4,param_5,param_6,param_7);
  (**(code **)(iVar5 + 0x1c))();
  return;
}

