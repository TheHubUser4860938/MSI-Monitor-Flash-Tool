// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnDrawRibbonCategoryTab
// address: 0x4b7b8a
// body: available
// range: 0x4b7b8a-0x4b7de4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual unsigned long __thiscall
   CMFCVisualManagerOffice2007::OnDrawRibbonCategoryTab(class CDC *,class CMFCRibbonTab *,int)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall
CMFCVisualManagerOffice2007::OnDrawRibbonCategoryTab
          (CMFCVisualManagerOffice2007 *this,CDC *param_1,CMFCRibbonTab *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  int local_30;
  ulong local_20;
  ulong local_1c;
  int local_18;
  CMFCVisualManagerOffice2007 *local_8;
  
  iVar7 = CanDrawImage(this);
  if (iVar7 == 0) {
    uVar8 = CMFCVisualManagerOffice2003::OnDrawRibbonCategoryTab
                      ((CMFCVisualManagerOffice2003 *)this,param_1,param_2,param_3);
    return uVar8;
  }
  bVar4 = true;
  iVar7 = *(int *)(param_2 + 0x88);
  iVar11 = *(int *)(iVar7 + 0x53c);
  if (param_3 == 0) {
LAB_004b7bf9:
    cVar6 = '\0';
    cVar5 = '\0';
  }
  else {
    if ((*(byte *)(iVar11 + 0x330) & 1) != 0) {
      pcVar3 = *(code **)(*(int *)param_2 + 0x1c4);
      guard_check_icall();
      iVar9 = (*pcVar3)();
      if (iVar9 == 0) goto LAB_004b7bf9;
    }
    cVar6 = '\x01';
    cVar5 = '\x01';
  }
  pcVar3 = *(code **)(*(int *)param_2 + 0xd8);
  guard_check_icall();
  iVar9 = (*pcVar3)();
  pcVar3 = *(code **)(*(int *)param_2 + 0xd4);
  guard_check_icall();
  iVar10 = (*pcVar3)();
  if ((iVar10 == 0) || ((*(byte *)(iVar11 + 0x330) & 1) == 0)) {
    bVar4 = false;
  }
  pcVar3 = *(code **)(*(int *)param_2 + 0xd0);
  guard_check_icall();
  iVar10 = (*pcVar3)();
  if ((iVar10 != 0) || (bVar4)) {
    pcVar3 = *(code **)(*(int *)param_2 + 0xe4);
    guard_check_icall();
    iVar10 = (*pcVar3)();
    if (iVar10 != 0) goto LAB_004b7c6d;
    bVar4 = true;
  }
  else {
LAB_004b7c6d:
    bVar4 = false;
  }
  local_18 = 0;
  local_30 = *(int *)(param_2 + 0x74);
  uVar1 = *(undefined4 *)(param_2 + 0x78);
  iVar10 = *(int *)(param_2 + 0x7c);
  iVar2 = *(int *)(param_2 + 0x80);
  if (((0x13 < *(int *)(this + 0xc000)) && (*(int *)(this + 0x462c) != 0)) &&
     (local_18 = *(int *)(iVar11 + 0x2cc), 0 < local_18)) {
    local_30 = local_30 + 1;
  }
  bVar12 = -cVar6 & 3;
  if (iVar9 != 0) {
    if (!bVar4) goto LAB_004b7cc6;
    bVar12 = cVar5 + 1;
  }
  if (bVar4) {
    bVar12 = bVar12 + 1;
  }
LAB_004b7cc6:
  local_8 = this + 0x4420;
  local_20 = *(ulong *)(this + 0x9084);
  local_1c = *(ulong *)(this + 37000);
  if ((*(int *)(iVar7 + 0x19c) != 0) || (iVar11 = FUN_0046dbb8(), iVar11 != 0)) {
    iVar11 = FUN_0046dbb8();
    if ((iVar11 == 0) && (bVar12 != 4)) {
      iVar7 = *(int *)(iVar7 + 0x19c) * 0x648 + 0x8b00;
    }
    else {
      iVar7 = 0x9790;
    }
    local_8 = this + iVar7 + 0x2f0;
    local_20 = *(ulong *)(this + iVar7 + 0x5e4);
    local_1c = *(ulong *)(this + iVar7 + 0x5e8);
  }
  iVar7 = *(int *)local_8;
  guard_check_icall(param_1,local_30,uVar1,iVar10,iVar2 + 1,bVar12,0xff);
  (**(code **)(iVar7 + 0x10))();
  if (0 < local_18) {
    if (local_18 * 0xff < 0x639c) {
      iVar7 = (local_18 * 0xff) / 100;
    }
    else {
      iVar7 = 0xff;
    }
    iVar11 = *(int *)(this + 0x4598);
    guard_check_icall(param_1,iVar10,uVar1,iVar10 + 1,iVar2,0,iVar7);
    (**(code **)(iVar11 + 0x10))();
  }
  if (cVar5 == '\0') {
    local_1c = local_20;
  }
  return local_1c;
}

