// rea decompile_all
// name: OnDrawRibbonCategoryScroll
// address: 0x100cebd0
// body: available
// range: 0x100cebd0-0x100cecee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual void __thiscall CMFCVisualManagerOffice2007::OnDrawRibbonCategoryScroll(class
   CDC *,class CRibbonCategoryScroll *)
    public: virtual void __thiscall CMFCVisualManagerWindows7::OnDrawRibbonCategoryScroll(class CDC
   *,class CRibbonCategoryScroll *)
   
   Library: Visual Studio 2015 Release */

void OnDrawRibbonCategoryScroll(CDC *param_1,CRibbonCategoryScroll *param_2)

{
  code *pcVar1;
  int iVar2;
  AFX_GLOBAL_DATA *pAVar3;
  uint uVar4;
  CMFCVisualManagerOffice2007 *in_ECX;
  undefined4 uVar5;
  undefined4 local_24;
  CRibbonCategoryScroll *local_20;
  CMFCVisualManagerOffice2007 *local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  local_20 = param_2;
  local_1c = in_ECX;
  iVar2 = CMFCVisualManagerOffice2007::CanDrawImage(in_ECX);
  if (iVar2 == 0) {
    CMFCVisualManagerOfficeXP::OnDrawRibbonCategoryScroll
              ((CMFCVisualManagerOfficeXP *)in_ECX,param_1,param_2);
  }
  else {
    local_18 = *(undefined4 *)(param_2 + 0x74);
    local_1c = local_1c + (-(uint)(*(int *)(param_2 + 0x1c4) != 0) & 0xfffffe88) + 0x4888;
    uStack_14 = *(undefined4 *)(param_2 + 0x78);
    uStack_10 = *(undefined4 *)(param_2 + 0x7c);
    uStack_c = *(undefined4 *)(param_2 + 0x80);
    pcVar1 = *(code **)(*(int *)param_2 + 0xd8);
    uVar5 = 0;
    guard_check_icall();
    iVar2 = (*pcVar1)();
    pcVar1 = *(code **)(*(int *)param_2 + 0xd0);
    if (iVar2 == 0) {
      guard_check_icall();
      iVar2 = (*pcVar1)();
      if (iVar2 != 0) {
        uVar5 = 1;
      }
    }
    else {
      uVar5 = 1;
      guard_check_icall();
      iVar2 = (*pcVar1)();
      if (iVar2 != 0) {
        uVar5 = 2;
      }
    }
    iVar2 = *(int *)local_1c;
    guard_check_icall(param_1,local_18,uStack_14,uStack_10,uStack_c,uVar5,0xff);
    (**(code **)(iVar2 + 0x10))();
    uVar4 = *(uint *)(local_20 + 0x1c4);
    pAVar3 = GetGlobalData();
    if (*(int *)(pAVar3 + 0x198) != 0) {
      uVar4 = (uint)(uVar4 == 0);
    }
    local_24 = 0;
    local_20 = (CRibbonCategoryScroll *)0x0;
    CMenuImages::Draw(param_1,(-(uint)(uVar4 != 0) & 3) + 0xe,(CRect *)&local_18,0,
                      (CSize *)&local_24);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

