// rea decompile_all
// name: CMFCRibbonCategory::OnDrawImage
// address: 0x1010dffe
// body: available
// range: 0x1010dffe-0x1010e0e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCRibbonCategory::OnDrawImage(class CDC *,class CRect,class
   CMFCRibbonBaseElement *,int,int,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCRibbonCategory::OnDrawImage
          (CMFCRibbonCategory *this,CDC *param_1,int param_3,int param_4,int param_5,int param_6,
          int *param_7,int param_8,int param_9,int param_10)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  AFX_GLOBAL_DATA *pAVar4;
  CMFCToolBarImages *this_00;
  int iVar5;
  int iVar6;
  uchar uVar7;
  undefined1 local_24 [12];
  CMFCToolBarImages *local_18;
  CDC *local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  local_14 = param_1;
  local_8 = param_7;
  this_00 = (CMFCToolBarImages *)(this + (-(uint)(param_8 != 0) & 0x118) + 0x578);
  if (param_9 < *(int *)(this_00 + 4)) {
    local_18 = this_00;
    GetImageSize(this,(int)&local_10);
    if (param_10 != 0) {
      iVar2 = ((param_6 - param_4) - local_c) / 2;
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      iVar3 = ((param_5 - param_3) - local_10) / 2;
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      param_3 = param_3 + iVar3;
      param_4 = param_4 + iVar2;
    }
    pAVar4 = GetGlobalData();
    CMFCToolBarImages::SetTransparentColor(this_00,*(ulong *)(pAVar4 + 0x1c));
    CMFCToolBarImages::PrepareDrawImage(this_00,local_24,local_10,local_c,0);
    uVar7 = 0xff;
    iVar6 = 0;
    iVar5 = 0;
    iVar3 = 0;
    pcVar1 = *(code **)(*local_8 + 0xdc);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    CMFCToolBarImages::Draw
              (local_18,local_14,param_3,param_4,param_9,0,iVar2,iVar3,iVar5,iVar6,uVar7);
    FUN_100860d3(local_24);
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

