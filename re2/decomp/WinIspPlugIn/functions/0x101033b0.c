// rea decompile_all
// name: DrawRibbonText
// address: 0x101033b0
// body: available
// range: 0x101033b0-0x101034c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CMFCRibbonButton::DrawRibbonText(class CDC *,class
   ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > > const &,class
   CRect,unsigned int,unsigned long)
    public: virtual int __thiscall CMFCRibbonButton::DrawRibbonText(class CDC *,class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > const &,class
   CRect,unsigned int,unsigned long)
   
   Library: Visual Studio 2015 Release */

CDC * DrawRibbonText(CDC *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8)

{
  code *pcVar1;
  int iVar2;
  CDC *this;
  HWND pHVar3;
  CWnd *pCVar4;
  CMFCVisualManager *pCVar5;
  int iVar6;
  int in_ECX;
  int local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_14 [4];
  undefined1 *local_10;
  CDC *local_c;
  int *local_8;
  
  local_c = param_1;
  local_8 = param_2;
  if (DAT_10245bb4 == 0) {
    iVar6 = -1;
    if (param_8 != -1) {
      pcVar1 = *(code **)(*(int *)param_1 + 0x30);
      puStack_28 = (undefined4 *)0x1010347b;
      guard_check_icall();
      puStack_28 = (undefined4 *)0x1010347f;
      iVar6 = (*pcVar1)();
    }
    iStack_30 = *local_8;
    puStack_28 = &param_3;
    iVar2 = *(int *)param_1;
    uStack_2c = *(undefined4 *)(iStack_30 + -0xc);
    iStack_34 = 0x1010349b;
    guard_check_icall();
    iStack_34 = 0x101034a0;
    local_c = (CDC *)(**(code **)(iVar2 + 0x68))();
    if (iVar6 != -1) {
      pcVar1 = *(code **)(*(int *)param_1 + 0x30);
      uStack_38 = 0x101034b5;
      iStack_34 = iVar6;
      guard_check_icall();
      uStack_38 = 0x101034b9;
      (*pcVar1)();
    }
  }
  else {
    iVar6 = *(int *)(in_ECX + 0x84);
    if ((iVar6 != 0) && (*(int *)(iVar6 + 0x20) != 0)) {
      puStack_28 = (undefined4 *)0x101033eb;
      pHVar3 = GetParent(*(HWND *)(iVar6 + 0x20));
      puStack_28 = (undefined4 *)0x101033f1;
      pCVar4 = CWnd::FromHandle(pHVar3);
      puStack_28 = (undefined4 *)0x101033fa;
      IsZoomed(*(HWND *)(pCVar4 + 0x20));
    }
    pCVar5 = CMFCVisualManager::GetInstance();
    puStack_28 = (undefined4 *)0x0;
    uStack_2c = param_7;
    local_10 = (undefined1 *)&local_40;
    uStack_3c = param_3;
    uStack_38 = param_4;
    iStack_34 = param_5;
    iStack_30 = param_6;
    local_40 = FUN_10047580(*local_8 + -0x10);
    this = local_c;
    local_40 = local_40 + 0x10;
    pcVar1 = *(code **)(*(int *)pCVar5 + 0x2cc);
    guard_check_icall(local_c);
    (*pcVar1)();
    iVar6 = CDC::GetTextExtent(this,local_14);
    local_c = *(CDC **)(iVar6 + 4);
  }
  return local_c;
}

