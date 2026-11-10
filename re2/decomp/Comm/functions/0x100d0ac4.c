// rea decompile_all
// name: CMFCRibbonPanel::GetHeight
// address: 0x100d0ac4
// body: available
// range: 0x100d0ac4-0x100d0c4c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCRibbonPanel::GetHeight(class CDC *)const 
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCRibbonPanel::GetHeight(CMFCRibbonPanel *this,CDC *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [4];
  int local_54;
  undefined1 local_50 [4];
  int *local_4c;
  CDC *local_48;
  tagTEXTMETRICW local_44;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  local_48 = param_1;
  pcVar1 = *(code **)(*(int *)(this + 0x2e0) + 0x180);
  guard_check_icall(param_1);
  (*pcVar1)();
  iVar4 = 0;
  local_54 = 0;
  if (*(int *)(this + 0x108) != 0) {
    GetTextMetricsW(*(HDC *)(local_48 + 8),&local_44);
    iVar2 = CMFCRibbonCategory::GetImageSize(*(CMFCRibbonCategory **)(this + 0x108),(int)local_58);
    if (local_44.tmHeight < *(int *)(iVar2 + 4)) {
      iVar2 = CMFCRibbonCategory::GetImageSize(*(CMFCRibbonCategory **)(this + 0x108),(int)local_50)
      ;
      local_44.tmHeight = *(int *)(iVar2 + 4);
    }
    local_54 = local_44.tmHeight + 6;
  }
  local_54 = local_54 * 3;
  pcVar1 = *(code **)(*(int *)(this + 0x2e0) + 0xf8);
  guard_check_icall(local_50,local_48);
  iVar2 = (*pcVar1)();
  if (local_54 <= *(int *)(iVar2 + 4)) {
    pcVar1 = *(code **)(*(int *)(this + 0x2e0) + 0xf8);
    guard_check_icall(local_60,local_48);
    iVar2 = (*pcVar1)();
    local_54 = *(int *)(iVar2 + 4);
  }
  if (0 < *(int *)(this + 0x4e4)) {
    do {
      puVar3 = (undefined4 *)FUN_100d7168(iVar4);
      local_4c = (int *)*puVar3;
      pcVar1 = *(code **)(*local_4c + 0x180);
      guard_check_icall(local_48);
      (*pcVar1)();
      pcVar1 = *(code **)(*local_4c + 0xf8);
      guard_check_icall(local_60,local_48);
      iVar2 = (*pcVar1)();
      if (local_54 <= *(int *)(iVar2 + 4)) {
        pcVar1 = *(code **)(*local_4c + 0xf8);
        guard_check_icall(local_68,local_48);
        iVar2 = (*pcVar1)();
        local_54 = *(int *)(iVar2 + 4);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(this + 0x4e4));
  }
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}

