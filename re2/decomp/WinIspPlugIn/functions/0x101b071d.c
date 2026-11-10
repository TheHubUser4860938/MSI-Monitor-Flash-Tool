// rea decompile_all
// name: write_text_ansi_nolock
// address: 0x101b071d
// body: available
// range: 0x101b071d-0x101b07fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    struct `anonymous namespace'::write_result __cdecl write_text_ansi_nolock(int,char const *
   const,unsigned int)
   
   Library: Visual Studio 2015 Release */

void __cdecl write_text_ansi_nolock(int param_1,char *param_2,uint param_3)

{
  char cVar1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD DVar3;
  char *pcVar4;
  int in_stack_00000010;
  uint local_1410;
  char *local_140c;
  char local_1408 [5120];
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  hFile = *(HANDLE *)((&DAT_102498c8)[(int)param_2 >> 6] + 0x18 + ((uint)param_2 & 0x3f) * 0x30);
  *(undefined4 *)param_1 = 0;
  local_140c = (char *)(in_stack_00000010 + param_3);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  do {
    if (local_140c <= param_3) break;
    pcVar4 = local_1408;
    do {
      if (local_140c <= param_3) break;
      cVar1 = *(char *)param_3;
      param_3 = param_3 + 1;
      if (cVar1 == '\n') {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        *pcVar4 = '\r';
        pcVar4 = pcVar4 + 1;
      }
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (pcVar4 < local_1408 + 0x13ff);
    BVar2 = WriteFile(hFile,local_1408,(int)pcVar4 - (int)local_1408,&local_1410,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      *(DWORD *)param_1 = DVar3;
      break;
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + local_1410;
  } while ((uint)((int)pcVar4 - (int)local_1408) <= local_1410);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

