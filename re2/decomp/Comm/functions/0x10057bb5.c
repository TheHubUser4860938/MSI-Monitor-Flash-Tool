// rea decompile_all
// name: CMFCVisualManager::OnDrawRibbonPanelCaption
// address: 0x10057bb5
// body: available
// range: 0x10057bb5-0x10057cc1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawRibbonPanelCaption(class CDC *,class
   CMFCRibbonPanel *,class CRect)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManager::OnDrawRibbonPanelCaption
          (undefined4 param_1_00,int *param_1,int param_2,undefined4 param_4,undefined4 param_5,
          int param_6)

{
  code *pcVar1;
  int iVar2;
  AFX_GLOBAL_DATA *pAVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined **local_20;
  HBRUSH local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_8 = 0x10057bc1;
  if (*(int *)(param_2 + 0x68) == 0) {
    pAVar3 = GetGlobalData();
    uVar5 = *(undefined4 *)(pAVar3 + 0x84);
  }
  else {
    pAVar3 = GetGlobalData();
    uVar5 = *(undefined4 *)(pAVar3 + 0x74);
  }
  pcVar1 = *(code **)(*param_1 + 0x30);
  guard_check_icall(uVar5);
  local_18 = (*pcVar1)();
  InflateRect((LPRECT)&param_4,-1,-1);
  param_6 = param_6 + -2;
  if (*(int *)(param_2 + 0x68) == 0) {
    pAVar3 = GetGlobalData();
    uVar4 = *(ulong *)(pAVar3 + 0x80);
  }
  else {
    pAVar3 = GetGlobalData();
    uVar4 = *(ulong *)(pAVar3 + 0x7c);
  }
  CBrush::CBrush((CBrush *)&local_20,uVar4);
  local_8 = 0;
  FillRect((HDC)param_1[1],(RECT *)&param_4,local_1c);
  FUN_100037c0(*(undefined4 *)(param_2 + 0xfc));
  local_8 = CONCAT31(local_8._1_3_,1);
  if (*(int *)(param_2 + 0x1b8) != 0) {
    param_6 = *(int *)(param_2 + 0x188);
  }
  iVar2 = *param_1;
  guard_check_icall(local_14,*(undefined4 *)(local_14 + -0xc),&param_4,0x8825);
  (**(code **)(iVar2 + 0x68))();
  pcVar1 = *(code **)(*param_1 + 0x30);
  guard_check_icall(local_18);
  (*pcVar1)();
  FUN_10003460();
  local_20 = CBrush::vftable;
  CImageList::~CImageList((CImageList *)&local_20);
  return;
}

