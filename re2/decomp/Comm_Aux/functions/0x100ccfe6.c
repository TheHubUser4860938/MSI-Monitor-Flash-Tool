// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnDrawRibbonApplicationButton
// address: 0x100ccfe6
// body: available
// range: 0x100ccfe6-0x100cd12d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2007::OnDrawRibbonApplicationButton(class
   CDC *,class CMFCRibbonButton *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2007::OnDrawRibbonApplicationButton
          (CMFCVisualManagerOffice2007 *this,CDC *param_1,CMFCRibbonButton *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  iVar2 = CanDrawImage(this);
  if (iVar2 == 0) {
    CMFCVisualManager::OnDrawRibbonApplicationButton((CMFCVisualManager *)this,param_1,param_2);
    goto LAB_100cd11b;
  }
  pcVar1 = *(code **)(*(int *)param_2 + 0xd0);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if (iVar2 == 0) {
    pcVar1 = *(code **)(*(int *)param_2 + 0xd4);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) goto LAB_100cd050;
    iVar2 = 0;
  }
  else {
LAB_100cd050:
    iVar2 = 1;
  }
  pcVar1 = *(code **)(*(int *)param_2 + 0xd8);
  guard_check_icall();
  local_1c = (*pcVar1)();
  pcVar1 = *(code **)(*(int *)param_2 + 0xe4);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  if (iVar3 != 0) {
    local_1c = 1;
    iVar2 = 1;
  }
  local_18.left = *(LONG *)(param_2 + 0x74);
  local_18.top = *(LONG *)(param_2 + 0x78);
  local_18.right = *(LONG *)(param_2 + 0x7c);
  local_18.bottom = *(LONG *)(param_2 + 0x80);
  OffsetRect(&local_18,1,-1);
  if (local_1c == 0) {
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = 1;
    }
  }
  else {
    iVar3 = iVar2 * 2;
  }
  uVar4 = 3;
  if ((*(int *)(this + 0x6cf8) - *(int *)(this + 0x6cf0) <= local_18.right - local_18.left) &&
     (*(int *)(this + 0x6cfc) - *(int *)(this + 0x6cf4) <= local_18.bottom - local_18.top)) {
    uVar4 = 1;
  }
  iVar2 = *(int *)(this + 0x6bc8);
  guard_check_icall(param_1,local_18.left,local_18.top,local_18.right,local_18.bottom,uVar4,uVar4,
                    iVar3,0xff);
  (**(code **)(iVar2 + 0x18))();
LAB_100cd11b:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

