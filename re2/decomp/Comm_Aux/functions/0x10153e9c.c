// rea decompile_all
// name: CMFCRibbonRecentFilesList::OnAfterChangeRect
// address: 0x10153e9c
// body: available
// range: 0x10153e9c-0x10153fb5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonRecentFilesList::OnAfterChangeRect(class CDC *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCRibbonRecentFilesList::OnAfterChangeRect(CMFCRibbonRecentFilesList *this,CDC *param_1)

{
  code *pcVar1;
  CMFCRibbonRecentFilesList *pCVar2;
  int *piVar3;
  undefined1 local_44 [4];
  int local_40;
  CMFCRibbonRecentFilesList *local_3c;
  CDC *local_38;
  CMFCRibbonRecentFilesList *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  local_2c = *(int *)(this + 0x78) + 2;
  local_38 = param_1;
  local_30 = 0;
  local_3c = this;
  if (0 < *(int *)(this + 0x114)) {
    local_34 = this + 0x74;
    do {
      pCVar2 = local_3c;
      piVar3 = (int *)FUN_10151a1d(local_30);
      piVar3 = (int *)*piVar3;
      pcVar1 = *(code **)(*piVar3 + 0x16c);
      guard_check_icall(*(undefined4 *)(pCVar2 + 0x94));
      (*pcVar1)();
      pcVar1 = *(code **)(*piVar3 + 0x180);
      guard_check_icall(param_1);
      (*pcVar1)();
      pcVar1 = *(code **)(*piVar3 + 0xf4);
      guard_check_icall(local_44,param_1);
      (*pcVar1)();
      local_18.left = *(LONG *)local_34;
      local_18.top = *(LONG *)(local_34 + 4);
      local_18.right = *(LONG *)(local_34 + 8);
      local_18.bottom = *(LONG *)(local_34 + 0xc);
      InflateRect(&local_18,-1,0);
      param_1 = local_38;
      local_18.top = local_2c;
      iStack_1c = local_40 + local_2c + 8;
      local_28 = local_18.left;
      iStack_24 = local_2c;
      iStack_20 = local_18.right;
      piVar3[0x1d] = local_18.left;
      piVar3[0x1e] = local_2c;
      piVar3[0x1f] = local_18.right;
      piVar3[0x20] = iStack_1c;
      pcVar1 = *(code **)(*piVar3 + 0x124);
      local_18.bottom = iStack_1c;
      guard_check_icall(local_38);
      (*pcVar1)();
      local_2c = local_18.bottom;
      local_30 = local_30 + 1;
    } while (local_30 < *(int *)(local_3c + 0x114));
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

