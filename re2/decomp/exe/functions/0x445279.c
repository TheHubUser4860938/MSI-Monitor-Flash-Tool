// rea decompile_all
// name: COleControlSite::XOleIPSite::OnInPlaceDeactivate
// address: 0x445279
// body: available
// range: 0x445279-0x4452d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual long __stdcall COleControlSite::XOleIPSite::OnInPlaceDeactivate(void)
   
   Library: Visual Studio 2015 Release */

long COleControlSite::XOleIPSite::OnInPlaceDeactivate(void)

{
  int *piVar1;
  code *pcVar2;
  int in_stack_00000004;
  
  FUN_00434a7a(*(undefined4 *)(in_stack_00000004 + -0xb4));
  DetachWindow((COleControlSite *)(in_stack_00000004 + -0xd0));
  if (*(int *)(in_stack_00000004 + -0x5c) != 0) {
    piVar1 = *(int **)(in_stack_00000004 + -0x74);
    if (piVar1 != (int *)0x0) {
      pcVar2 = *(code **)(*piVar1 + 8);
      guard_check_icall(piVar1);
      (*pcVar2)();
      *(undefined4 *)(in_stack_00000004 + -0x74) = 0;
    }
    piVar1 = (int *)(*(int *)(in_stack_00000004 + -0xb0) + 0x74);
    *piVar1 = *piVar1 + -1;
    *(undefined4 *)(in_stack_00000004 + -0x5c) = 0;
  }
  guard_check_icall();
  return 0;
}

