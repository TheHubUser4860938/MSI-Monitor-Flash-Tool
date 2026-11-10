// rea decompile_all
// name: COutlookCustomizeButton::OnDraw
// address: 0x101096e7
// body: available
// range: 0x101096e7-0x101097b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall COutlookCustomizeButton::OnDraw(class CDC *,class CRect const
   &,class CMFCToolBarImages *,int,int,int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
COutlookCustomizeButton::OnDraw
          (COutlookCustomizeButton *this,CDC *param_1,CRect *param_2,CMFCToolBarImages *param_3,
          int param_4,int param_5,int param_6,int param_7,int param_8)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar3 = 1;
  *(undefined4 *)(this + 0x100) = 1;
  if (param_6 == 0) {
    pcVar1 = *(code **)(*(int *)this + 0x70);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 == 0) {
      iVar3 = 0;
    }
  }
  CMFCToolBarButton::FillInterior((CMFCToolBarButton *)this,param_1,param_2,iVar3,0);
  FUN_10084bc5(&local_c);
  iVar3 = ((*(int *)(param_2 + 8) - *(int *)param_2) - local_c) / 2;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  iVar3 = *(int *)param_2 + iVar3;
  iVar2 = ((*(int *)(param_2 + 0xc) + local_8 * -2) - *(int *)(param_2 + 4)) / 2;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  iVar2 = *(int *)(param_2 + 4) + iVar2;
  local_14 = 0;
  local_10 = 0;
  local_1c = iVar3;
  local_18 = iVar2;
  CMenuImages::Draw(param_1,0xb,(CPoint *)&local_1c,0,(CSize *)&local_14);
  local_10 = local_8 + iVar2;
  local_1c = 0;
  local_18 = 0;
  local_14 = iVar3;
  CMenuImages::Draw(param_1,0,(CPoint *)&local_14,0,(CSize *)&local_1c);
  return;
}

