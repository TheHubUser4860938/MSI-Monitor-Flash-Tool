// rea decompile_all
// name: CMFCColorBar::CreateControl
// address: 0x4ab1a1
// body: available
// range: 0x4ab1a1-0x4ab328 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCColorBar::CreateControl(class CWnd *,class CRect const
   &,unsigned int,int,class CPalette *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCColorBar::CreateControl
          (CMFCColorBar *this,CWnd *param_1,CRect *param_2,uint param_3,int param_4,
          CPalette *param_5)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  CWnd *pCVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  CMFCToolBar::EnableLargeIcons((CMFCToolBar *)this,0);
  if (0 < param_4) goto LAB_004ab248;
  if (param_5 == (CPalette *)0x0) {
    local_20 = 0x14;
LAB_004ab1f7:
    iVar5 = local_20;
    do {
      iVar2 = ((*(int *)(param_2 + 8) + *(int *)(this + 0xdec) * -2) - *(int *)param_2) / iVar5;
      if ((iVar2 != 0) &&
         (iVar2 = (local_20 / iVar5) * iVar2,
         iVar4 = (*(int *)(param_2 + 0xc) + *(int *)(this + 0xde8) * -2) - *(int *)(param_2 + 4),
         iVar2 - iVar4 != 0 && iVar4 <= iVar2)) {
        param_4 = iVar5 + 1;
        if (0 < param_4) goto LAB_004ab248;
        break;
      }
      iVar5 = iVar5 + -1;
    } while (0 < iVar5);
  }
  else {
    local_20 = CPalette::GetEntryCount(param_5);
    if (0 < local_20) goto LAB_004ab1f7;
  }
  param_4 = -1;
LAB_004ab248:
  uVar9 = 0;
  uVar8 = 0;
  pcVar1 = *(code **)(*(int *)this + 0x450);
  uVar7 = 0x50002000;
  pCVar6 = param_1;
  uVar3 = param_3;
  guard_check_icall(param_1,0x50002000,param_3,param_5,param_4,0,0);
  iVar5 = (*pcVar1)();
  if (iVar5 != 0) {
    iVar5 = *(int *)this;
    pcVar1 = *(code **)(iVar5 + 0x1c0);
    guard_check_icall(pCVar6,uVar7,uVar3,param_5,param_4,uVar8,uVar9);
    uVar3 = (*pcVar1)();
    pcVar1 = *(code **)(iVar5 + 0x1e4);
    guard_check_icall(uVar3 & 0xffbff0ff);
    (*pcVar1)();
    local_18 = *(undefined4 *)param_2;
    uStack_14 = *(undefined4 *)(param_2 + 4);
    uStack_10 = *(undefined4 *)(param_2 + 8);
    uStack_c = *(undefined4 *)(param_2 + 0xc);
    pcVar1 = *(code **)(*(int *)this + 0x234);
    guard_check_icall(&local_18,1,0);
    (*pcVar1)();
    FUN_004aaf32(1,1);
    pcVar1 = *(code **)(*(int *)this + 0x238);
    guard_check_icall(&DAT_00614a70,0xffffffff,0xffffffff,0xffffffff,0xffffffff,0x13,0);
    (*pcVar1)();
    if (param_1 == (CWnd *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)(param_1 + 0x20);
    }
    *(undefined4 *)(this + 0x5c) = uVar7;
    *(uint *)(this + 0xe04) = param_3;
    *(undefined4 *)(this + 0xbb4) = 0;
  }
  iVar5 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar5;
}

