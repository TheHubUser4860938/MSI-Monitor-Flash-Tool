// rea decompile_all
// name: CMFCRibbonCmdUI::Enable
// address: 0x1015137c
// body: available
// range: 0x1015137c-0x10151421 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCRibbonCmdUI::Enable(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonCmdUI::Enable(CMFCRibbonCmdUI *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  *(undefined4 *)(this + 0x18) = 1;
  pcVar1 = *(code **)(**(int **)(this + 0x28) + 0xdc);
  guard_check_icall();
  uVar3 = (*pcVar1)();
  if (uVar3 != (param_1 == 0)) {
    *(uint *)(*(int *)(this + 0x28) + 0xd4) = (uint)(param_1 == 0);
    pcVar1 = *(code **)(**(int **)(this + 0x28) + 0x238);
    guard_check_icall(param_1 != 0);
    (*pcVar1)();
    iVar2 = *(int *)(this + 0x28);
    local_18.left = *(LONG *)(iVar2 + 0x74);
    local_18.top = *(LONG *)(iVar2 + 0x78);
    local_18.right = *(LONG *)(iVar2 + 0x7c);
    local_18.bottom = *(LONG *)(iVar2 + 0x80);
    RedrawWindow(*(HWND *)(*(int *)(this + 0x14) + 0x20),&local_18,(HRGN)0x0,0x105);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

