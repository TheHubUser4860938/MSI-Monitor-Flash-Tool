// rea decompile_all
// name: shortsort
// address: 0x101be9c0
// body: available
// range: 0x101be9c0-0x101be9ec inclusive
// range: 0x101be9f0-0x101bea55 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    void __cdecl shortsort(char *,char *,unsigned int,int (__cdecl*)(void const *,void const *))
   
   Library: Visual Studio 2015 Release */

void __cdecl
shortsort(char *param_1,char *param_2,uint param_3,_func_int_void_ptr_void_ptr *param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  
  uVar5 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  for (; pcVar2 = param_1, pcVar3 = param_1, param_1 < param_2; param_2 = param_2 + -param_3) {
    while (pcVar3 = pcVar3 + param_3, pcVar3 <= param_2) {
      pcVar7 = pcVar3;
      pcVar8 = pcVar2;
      guard_check_icall();
      iVar6 = (*param_4)(pcVar7,pcVar8);
      if (0 < iVar6) {
        pcVar2 = pcVar3;
      }
    }
    uVar4 = param_3;
    pcVar3 = param_2;
    if (pcVar2 != param_2) {
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        pcVar7 = pcVar3 + 1;
        cVar1 = pcVar7[(int)(pcVar2 + (-1 - (int)param_2))];
        pcVar7[(int)(pcVar2 + (-1 - (int)param_2))] = *pcVar3;
        *pcVar3 = cVar1;
        pcVar3 = pcVar7;
      }
    }
  }
  __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
  return;
}

