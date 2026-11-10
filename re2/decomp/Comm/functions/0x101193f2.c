// rea decompile_all
// name: CMFCRibbonGalleryIcon::SetACCData
// address: 0x101193f2
// body: available
// range: 0x101193f2-0x10119562 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCRibbonGalleryIcon::SetACCData(class CWnd *,class
   CAccessibilityData &)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCRibbonGalleryIcon::SetACCData
          (CMFCRibbonGalleryIcon *this,CWnd *param_1,CAccessibilityData *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_18 [4];
  undefined1 local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x101193fe;
  CMFCRibbonButton::SetACCData((CMFCRibbonButton *)this,param_1,param_2);
  iVar2 = *(int *)(this + 0x1c8);
  if (iVar2 == -3) {
    *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) | 0x40000000;
    *(undefined4 *)(param_2 + 0x18) = 0x3a;
    FUN_10003780(L"Open");
    pcVar1 = *(code **)(*(int *)this + 0xe4);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) | 8;
      FUN_10003780(L"Close");
    }
  }
  else if ((iVar2 < -2) || (-1 < iVar2)) {
    *(undefined4 *)(param_2 + 0x1c) = 0x300000;
    pcVar1 = *(code **)(*(int *)this + 0xd0);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) | 6;
    }
    pcVar1 = *(code **)(*(int *)this + 0xe0);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) | 0x10;
    }
    pcVar1 = *(code **)(*(int *)this + 0xc0);
    guard_check_icall(local_14);
    uVar3 = (*pcVar1)();
    local_8 = 1;
    FUN_100030d0(uVar3);
    local_8 = 0xffffffff;
    FUN_10003460();
    *(undefined4 *)(param_2 + 0x18) = 0x22;
    FUN_10003780(L"DoubleClick");
    return 1;
  }
  if (*(int *)(this + 0x1c8) == -3) {
    if (*(int *)(this + 0x1c4) != 0) {
      FUN_10003780(*(undefined4 *)(*(int *)(this + 0x1c4) + 0x60));
    }
  }
  else {
    FUN_10003390((*(int *)(this + 0x1c8) != -1) + 0x42db);
  }
  pcVar1 = *(code **)(*(int *)this + 0xc0);
  guard_check_icall(local_18);
  uVar3 = (*pcVar1)();
  local_8 = 0;
  FUN_100030d0(uVar3);
  FUN_10003460();
  return 1;
}

