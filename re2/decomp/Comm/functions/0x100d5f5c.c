// rea decompile_all
// name: CMFCRibbonPanel::ShowDefaultButton
// address: 0x100d5f5c
// body: available
// range: 0x100d5f5c-0x100d601a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonPanel::ShowDefaultButton(class CDC *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonPanel::ShowDefaultButton(CMFCRibbonPanel *this,CDC *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_14 [4];
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  pcVar1 = *(code **)(*(int *)(this + 0x2e0) + 0xf8);
  guard_check_icall(local_14,param_1);
  piVar3 = (int *)(*pcVar1)();
  local_c = 0;
  local_10 = *piVar3;
  if (0 < *(int *)(this + 0x4e4)) {
    do {
      piVar3 = (int *)FUN_100d7168(local_c);
      iVar2 = *piVar3;
      local_c = local_c + 1;
      *(undefined4 *)(iVar2 + 0x74) = 0;
      *(undefined4 *)(iVar2 + 0x78) = 0;
      *(undefined4 *)(iVar2 + 0x7c) = 0;
      *(undefined4 *)(iVar2 + 0x80) = 0;
    } while (local_c < *(int *)(this + 0x4e4));
  }
  *(undefined4 *)(this + 0xac) = 0;
  *(int *)(this + 0xd4) = *(int *)(this + 0xcc) + local_10;
  *(int *)(this + 0x354) = *(int *)(this + 0xcc);
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x358) = *(undefined4 *)(this + 0xd0);
  *(undefined4 *)(this + 0x35c) = *(undefined4 *)(this + 0xd4);
  *(undefined4 *)(this + 0x360) = *(undefined4 *)(this + 0xd8);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

