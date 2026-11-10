// rea decompile_all
// name: CMFCRibbonEdit::OnDrawLabelAndImage
// address: 0x10119d48
// body: available
// range: 0x10119d48-0x10119f00 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCRibbonEdit::OnDrawLabelAndImage(class CDC *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonEdit::OnDrawLabelAndImage(CMFCRibbonEdit *this,CDC *param_1)

{
  code *pcVar1;
  CDC *pCVar2;
  int iVar3;
  CMFCVisualManager *pCVar4;
  undefined4 uVar5;
  int local_30;
  int local_2c;
  CMFCRibbonEdit *local_28;
  int local_24;
  int local_20;
  CDC *local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  local_1c = param_1;
  local_28 = this;
  if ((*(int *)(this + 0xc4) == 0) && (*(int *)(this + 0xc0) == 0)) {
    pcVar1 = *(code **)(*(int *)this + 0x114);
    guard_check_icall(&local_30,1);
    (*pcVar1)();
    local_20 = *(int *)(this + 0x74);
    if ((local_30 != 0) || (local_2c != 0)) {
      local_18.top = *(LONG *)(this + 0x78);
      local_18.bottom = *(LONG *)(this + 0x80);
      local_18.left = *(int *)(this + 0x74) + *(int *)(this + 0x11c);
      local_18.right = local_18.left + local_30;
      iVar3 = ((local_18.bottom - local_18.top) - local_2c) / 2;
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      OffsetRect(&local_18,0,iVar3);
      pcVar1 = *(code **)(*(int *)this + 0x120);
      guard_check_icall(local_1c,1,local_18.left,local_18.top,local_18.right,local_18.bottom);
      (*pcVar1)();
      local_20 = local_18.right;
    }
    if ((0 < *(int *)(this + 0x10c)) && (*(int *)(this + 0xb8) == 0)) {
      local_24 = -1;
      pcVar1 = *(code **)(*(int *)this + 0xdc);
      guard_check_icall();
      iVar3 = (*pcVar1)();
      if (iVar3 != 0) {
        pCVar4 = CMFCVisualManager::GetInstance();
        iVar3 = *(int *)local_1c;
        pcVar1 = *(code **)(*(int *)pCVar4 + 0xc4);
        guard_check_icall();
        uVar5 = (*pcVar1)();
        guard_check_icall(uVar5);
        local_24 = (**(code **)(iVar3 + 0x30))();
        this = local_28;
      }
      pCVar2 = local_1c;
      local_18.left = *(int *)(this + 0x11c) + local_20;
      uVar5 = 0x824;
      local_18.top = *(LONG *)(this + 0x78);
      local_18.right = *(LONG *)(this + 0x7c);
      local_18.bottom = *(LONG *)(this + 0x80);
      if (*(int *)(this + 0x1d4) == 1) {
        uVar5 = 0x825;
      }
      else if (*(int *)(this + 0x1d4) == 2) {
        uVar5 = 0x826;
      }
      pcVar1 = *(code **)(*(int *)this + 0x260);
      guard_check_icall(local_1c,this + 0x60,local_18.left,local_18.top,local_18.right,
                        local_18.bottom,uVar5,0xffffffff);
      (*pcVar1)();
      if (local_24 != -1) {
        pcVar1 = *(code **)(*(int *)pCVar2 + 0x30);
        guard_check_icall(local_24);
        (*pcVar1)();
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

