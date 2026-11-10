// rea decompile_all
// name: CMFCVisualManagerOfficeXP::OnFillTab
// address: 0x10146ff0
// body: available
// range: 0x10146ff0-0x101470ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCVisualManagerOfficeXP::OnFillTab(class CDC *,class
   CRect,class CBrush *,int,int,class CMFCBaseTabCtrl const *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOfficeXP::OnFillTab
          (undefined4 param_1_00,int param_1,LONG param_3,LONG param_4,LONG param_5,LONG param_6,
          int param_7,undefined4 param_8,int param_9,int *param_10)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  ulong uVar5;
  HBRUSH hbr;
  undefined4 uVar6;
  undefined **local_18;
  HBRUSH local_14;
  CMFCVisualManager *local_10;
  undefined4 local_c;
  int local_8;
  
  piVar3 = param_10;
  iVar2 = param_7;
  local_8 = param_1;
  local_c = param_8;
  pcVar1 = *(code **)(*param_10 + 0x1dc);
  uVar6 = param_8;
  guard_check_icall(param_8);
  iVar4 = (*pcVar1)();
  if ((iVar4 == -1) || (param_9 != 0)) {
    pcVar1 = *(code **)(*piVar3 + 0x288);
    guard_check_icall(uVar6);
    iVar4 = (*pcVar1)();
    if (iVar4 == 0) {
      pcVar1 = *(code **)(*piVar3 + 0x28c);
      guard_check_icall(uVar6);
      iVar4 = (*pcVar1)();
      if (iVar4 == 0) {
        pcVar1 = *(code **)(*piVar3 + 0x290);
        guard_check_icall();
        iVar4 = (*pcVar1)();
        if (iVar4 == 0) {
          if (param_9 == 0) {
            return;
          }
          hbr = (HBRUSH)0x0;
          if (iVar2 != 0) {
            hbr = *(HBRUSH *)(iVar2 + 4);
          }
          FillRect(*(HDC *)(local_8 + 4),(RECT *)&param_3,hbr);
          return;
        }
      }
    }
    CMFCVisualManager::OnFillTab
              (local_10,local_8,param_3,param_4,param_5,param_6,iVar2,local_c,param_9,piVar3);
  }
  else {
    pcVar1 = *(code **)(*piVar3 + 0x1dc);
    guard_check_icall(local_c);
    uVar5 = (*pcVar1)();
    CBrush::CBrush((CBrush *)&local_18,uVar5);
    FillRect(*(HDC *)(local_8 + 4),(RECT *)&param_3,local_14);
    local_18 = CBrush::vftable;
    CImageList::~CImageList((CImageList *)&local_18);
  }
  return;
}

