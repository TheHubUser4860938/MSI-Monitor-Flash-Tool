// rea decompile_all
// name: FUN_1014f44b
// address: 0x1014f44b
// body: available
// range: 0x1014f44b-0x1014f4c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1014f4c5 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014f44b(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  code *pcVar4;
  
  uVar1 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  iVar2 = ___acrt_getptd_noexit();
  if (((iVar2 == 0) || (pcVar4 = *(code **)(iVar2 + 0x35c), pcVar4 == (code *)0x0)) &&
     (bVar3 = (byte)DAT_101d3fec & 0x1f,
     pcVar4 = (code *)((DAT_101d3fec ^ _DAT_101de6fc) >> bVar3 |
                      (DAT_101d3fec ^ _DAT_101de6fc) << 0x20 - bVar3), pcVar4 == (code *)0x0)) {
    __invoke_watson(param_1,param_2,param_3,param_4,param_5);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  guard_check_icall(param_1,param_2,param_3,param_4,param_5);
  (*pcVar4)();
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}

