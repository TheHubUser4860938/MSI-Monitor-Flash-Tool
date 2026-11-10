// rea decompile_all
// name: CEnumArray::XEnumVOID::Next
// address: 0x1016b0db
// body: available
// range: 0x1016b0db-0x1016b143 inclusive
// range: 0x1016b157-0x1016b17a inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __stdcall CEnumArray::XEnumVOID::Next(unsigned long,void *,unsigned long *)
   
   Library: Visual Studio 2015 Release */

long CEnumArray::XEnumVOID::Next(ulong param_1,void *param_2,ulong *param_3)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  int *in_stack_00000010;
  
  FUN_100500c4(*(undefined4 *)(param_1 - 0x1c));
  pvVar3 = param_2;
  if (in_stack_00000010 != (int *)0x0) {
    *in_stack_00000010 = 0;
  }
  for (; pvVar3 != (void *)0x0; pvVar3 = (void *)((int)pvVar3 + -1)) {
    pcVar1 = *(code **)(*(int *)(param_1 - 0x38) + 0x50);
    guard_check_icall(param_3);
    iVar2 = (*pcVar1)();
    if (iVar2 == 0) break;
    param_3 = (ulong *)((int)param_3 + *(int *)(param_1 - 0x18));
  }
  if (in_stack_00000010 != (int *)0x0) {
    *in_stack_00000010 = (int)param_2 - (int)pvVar3;
  }
  guard_check_icall();
  return (uint)(pvVar3 != (void *)0x0);
}

