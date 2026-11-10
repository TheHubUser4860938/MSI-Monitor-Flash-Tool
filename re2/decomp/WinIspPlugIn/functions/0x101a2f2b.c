// rea decompile_all
// name: common_xtox<unsigned_long,wchar_t>
// address: 0x101a2f2b
// body: available
// range: 0x101a2f2b-0x101a2fb8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl common_xtox<unsigned long,wchar_t>(unsigned long,wchar_t * const,unsigned
   int,unsigned int,bool)
   
   Library: Visual Studio 2015 Release */

int __cdecl
common_xtox<unsigned_long,wchar_t>
          (ulong param_1,wchar_t *param_2,uint param_3,uint param_4,bool param_5)

{
  short sVar1;
  wchar_t *pwVar2;
  wchar_t wVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  
  pwVar7 = param_2;
  if (param_5) {
    *param_2 = L'-';
    pwVar7 = param_2 + 1;
    param_1 = -param_1;
  }
  uVar6 = (uint)param_5;
  pwVar2 = pwVar7;
  do {
    pwVar8 = pwVar2;
    sVar1 = (short)(param_1 % param_4);
    wVar3 = sVar1 + L'W';
    if (param_1 % param_4 < 10) {
      wVar3 = sVar1 + L'0';
    }
    *pwVar8 = wVar3;
    uVar6 = uVar6 + 1;
  } while ((param_1 / param_4 != 0) &&
          (param_1 = param_1 / param_4, pwVar2 = pwVar8 + 1, uVar6 < param_3));
  if (uVar6 < param_3) {
    pwVar8[1] = L'\0';
    do {
      wVar3 = *pwVar8;
      *pwVar8 = *pwVar7;
      pwVar8 = pwVar8 + -1;
      *pwVar7 = wVar3;
      pwVar7 = pwVar7 + 1;
    } while (pwVar7 < pwVar8);
    iVar5 = 0;
  }
  else {
    *param_2 = L'\0';
    piVar4 = __errno();
    iVar5 = 0x22;
    *piVar4 = 0x22;
    FUN_1019ab61();
  }
  return iVar5;
}

