// rea decompile_all
// name: CPaneFrameWnd::ArrangeCaptionButtons
// address: 0x100dbafa
// body: available
// range: 0x100dbafa-0x100dbbf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    protected: void __thiscall CPaneFrameWnd::ArrangeCaptionButtons(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPaneFrameWnd::ArrangeCaptionButtons(CPaneFrameWnd *this)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_34;
  int local_30;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  pcVar1 = *(code **)(*(int *)this + 0x1c8);
  guard_check_icall(&local_18);
  (*pcVar1)();
  CMFCCaptionButton::GetSize();
  iVar5 = local_10 - _DAT_102474ac;
  local_1c = ((local_c - local_30) - local_14) / 2 + local_14;
  iVar3 = local_18 + _DAT_102474ac;
  local_20 = *(int *)(this + 0x110);
  while (local_20 != 0) {
    piVar4 = (int *)FUN_10065af5(&local_20);
    iVar2 = *piVar4;
    if (*(int *)(iVar2 + 0xc) == 0) {
      if (*(int *)(iVar2 + 0x18) == 0) {
        iVar6 = iVar5 - local_34;
        if (iVar5 - local_34 <= local_18) {
          iVar6 = local_18;
        }
        *(int *)(iVar2 + 0x24) = iVar6;
        *(int *)(iVar2 + 0x28) = local_1c;
        *(undefined4 *)(iVar2 + 0xc) = 0;
        iVar5 = iVar6 - DAT_1023d898;
      }
      else {
        *(int *)(iVar2 + 0x24) = iVar3;
        *(int *)(iVar2 + 0x28) = local_1c;
        *(undefined4 *)(iVar2 + 0xc) = 0;
        iVar3 = iVar3 + DAT_1023d898 + local_34;
      }
    }
  }
  UpdateTooltips(this);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

