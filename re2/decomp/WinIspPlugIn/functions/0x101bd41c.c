// rea decompile_all
// name: FUN_101bd41c
// address: 0x101bd41c
// body: available
// range: 0x101bd41c-0x101bd4dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x101bd4dc with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_101bd41c(short *param_1)

{
  short sVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  wchar_t local_f8 [120];
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  iVar3 = FUN_101af88f();
  iVar4 = ___acrt_GetLocaleInfoEx_16
                    (param_1,(-(uint)(*(int *)(iVar3 + 0x60) != 0) & 0xfffff002) + 0x1001,local_f8,
                     0x78);
  if (iVar4 == 0) {
    *(undefined4 *)(iVar3 + 0x58) = 0;
  }
  else {
    iVar4 = __wcsicmp(*(wchar_t **)(iVar3 + 0x50),local_f8);
    if (iVar4 == 0) {
      psVar5 = param_1;
      do {
        sVar1 = *psVar5;
        psVar5 = psVar5 + 1;
      } while (sVar1 != 0);
      iVar4 = FUN_101a26b7(iVar3 + 0x2a0,0x55,param_1,((int)psVar5 - (int)(param_1 + 1) >> 1) + 1);
      if (iVar4 != 0) {
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(uint *)(iVar3 + 0x58) = *(uint *)(iVar3 + 0x58) | 4;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

