// rea decompile_all
// name: CPropertyPage::OnNotify
// address: 0x1006488e
// body: available
// range: 0x1006488e-0x100649f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CPropertyPage::OnNotify(unsigned int,long,long *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CPropertyPage::OnNotify(CPropertyPage *this,uint param_1,long param_2,long *param_3)

{
  int iVar1;
  HWND pHVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  
  iVar1 = FUN_100559cd(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(HWND *)param_2 != *(HWND *)(this + 0x20)) &&
     (pHVar2 = GetParent(*(HWND *)(this + 0x20)), *(HWND *)param_2 != pHVar2)) {
LAB_100649ee:
    return 0;
  }
  switch(*(undefined4 *)(param_2 + 8)) {
  case 0xffffff2f:
    pcVar5 = *(code **)(*(int *)this + 0x19c);
    goto LAB_10064940;
  case 0xffffff30:
    pcVar5 = *(code **)(*(int *)this + 0x1ac);
    guard_check_icall();
    uVar3 = (*pcVar5)();
    break;
  case 0xffffff31:
    pcVar5 = *(code **)(*(int *)this + 0x1a4);
    goto LAB_1006499b;
  case 0xffffff32:
    pcVar5 = *(code **)(*(int *)this + 0x1a0);
LAB_1006499b:
    guard_check_icall();
    lVar4 = (*pcVar5)();
    uVar3 = MapWizardResult(this,lVar4);
    break;
  case 0xffffff33:
    SendMessageW(*(HWND *)(this + 0x20),0x111,0xe146,0);
    return 1;
  default:
    goto LAB_100649ee;
  case 0xffffff35:
    pcVar5 = *(code **)(*(int *)this + 400);
    guard_check_icall();
    (*pcVar5)();
    return 1;
  case 0xffffff36:
    pcVar5 = *(code **)(*(int *)this + 0x18c);
    guard_check_icall();
    iVar1 = (*pcVar5)();
    uVar3 = (-(uint)(iVar1 != 0) & 0xfffffffe) + 2;
    break;
  case 0xffffff37:
    pcVar5 = *(code **)(*(int *)this + 0x198);
LAB_10064940:
    guard_check_icall();
    iVar1 = (*pcVar5)();
    uVar3 = (uint)(iVar1 == 0);
    break;
  case 0xffffff38:
    pcVar5 = *(code **)(*(int *)this + 0x1b0);
    guard_check_icall();
    iVar1 = (*pcVar5)();
    if ((((iVar1 != 0) && ((*(byte *)(iVar1 + 0x60) & 0x10) == 0)) && (*(int *)(iVar1 + 0xd4) == 0))
       && ((*(uint *)(iVar1 + 0x84) & 0x4000) == 0)) {
      *param_3 = -1;
      return 1;
    }
    pcVar5 = *(code **)(*(int *)this + 0x194);
    guard_check_icall();
    iVar1 = (*pcVar5)();
    uVar3 = (iVar1 != 0) - 1;
  }
  *param_3 = uVar3;
  return 1;
}

