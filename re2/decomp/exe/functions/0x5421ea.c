// rea decompile_all
// name: COleMessageFilter::XMessageFilter::RetryRejectedCall
// address: 0x5421ea
// body: available
// range: 0x5421ea-0x542257 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual unsigned long __stdcall
   COleMessageFilter::XMessageFilter::RetryRejectedCall(struct HTASK__ *,unsigned long,unsigned
   long)
   
   Library: Visual Studio 2015 Release */

ulong COleMessageFilter::XMessageFilter::RetryRejectedCall
                (HTASK__ *param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  int iVar3;
  int in_stack_00000010;
  
  FUN_00434a7a(param_1[-9].unused);
  if (in_stack_00000010 == 1) {
    uVar2 = 0xffffffff;
  }
  else if ((uint)param_1[-3].unused < param_3) {
    if (param_1[-6].unused != 0) {
      pcVar1 = *(code **)(param_1[-0x10].unused + 0x60);
      guard_check_icall(param_2);
      iVar3 = (*pcVar1)();
      uVar2 = 0xffffffff;
      if ((iVar3 == -1) || (uVar2 = 0, iVar3 == 2)) goto LAB_00542246;
    }
    uVar2 = param_1[-3].unused;
  }
  else {
    uVar2 = 0;
  }
LAB_00542246:
  guard_check_icall();
  return uVar2;
}

