// rea decompile_all
// name: CPaneFrameWnd::GetCaptionButtonTotalWidth
// address: 0x100db6a1
// body: available
// range: 0x100db6a1-0x100db710 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CPaneFrameWnd::GetCaptionButtonTotalWidth(void)const 
   
   Library: Visual Studio 2015 Release */

int __thiscall CPaneFrameWnd::GetCaptionButtonTotalWidth(CPaneFrameWnd *this)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int local_1c;
  undefined1 local_18 [16];
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  local_1c = *(int *)(this + 0x10c);
  while (local_1c != 0) {
    piVar2 = (int *)FUN_10094d55(&local_1c);
    pcVar1 = *(code **)(*piVar2 + 0xc);
    guard_check_icall(local_18);
    (*pcVar1)();
  }
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}

