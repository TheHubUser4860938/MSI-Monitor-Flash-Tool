// rea decompile_all
// name: CGlobalUtils::CanBeAttached
// address: 0x100f5da3
// body: available
// range: 0x100f5da3-0x100f5df1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CGlobalUtils::CanBeAttached(class CWnd *)const 
   
   Library: Visual Studio 2015 Release */

int __thiscall CGlobalUtils::CanBeAttached(CGlobalUtils *this,CWnd *param_1)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = FUN_1004e58b(&PTR_s_CPaneFrameWnd_10205d4c);
  if (iVar1 == 0) {
    iVar1 = FUN_1004e58b(&PTR_s_CPane_101ba9ec);
    if (iVar1 == 0) {
      return 0;
    }
    pcVar2 = *(code **)(*(int *)param_1 + 0x18c);
  }
  else {
    pcVar2 = *(code **)(*(int *)param_1 + 0x174);
  }
  guard_check_icall();
  iVar1 = (*pcVar2)();
  return iVar1;
}

