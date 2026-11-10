// rea decompile_all
// name: parse_command_line<wchar_t>
// address: 0x588704
// body: available
// range: 0x588704-0x588889 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    void __cdecl parse_command_line<wchar_t>(wchar_t *,wchar_t * *,wchar_t *,unsigned int *,unsigned
   int *)
   
   Library: Visual Studio 2015 Release */

void __cdecl
parse_command_line<wchar_t>
          (wchar_t *param_1,wchar_t **param_2,wchar_t *param_3,uint *param_4,uint *param_5)

{
  bool bVar1;
  bool bVar2;
  wchar_t wVar3;
  uint uVar4;
  
  bVar1 = false;
  bVar2 = false;
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (wchar_t **)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  do {
    wVar3 = L'\"';
    if (*param_1 == L'\"') {
      bVar1 = !bVar1;
      bVar2 = bVar1;
    }
    else {
      *param_5 = *param_5 + 1;
      if (param_3 != (wchar_t *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      wVar3 = *param_1;
      if (wVar3 == L'\0') goto LAB_00588790;
    }
    param_1 = param_1 + 1;
  } while ((bVar2) || ((wVar3 != L' ' && (wVar3 != L'\t'))));
  if (param_3 != (wchar_t *)0x0) {
    param_3[-1] = L'\0';
  }
LAB_00588790:
  bVar1 = false;
  while (*param_1 != L'\0') {
    for (; (*param_1 == L' ' || (*param_1 == L'\t')); param_1 = param_1 + 1) {
    }
    if (*param_1 == L'\0') break;
    if (param_2 != (wchar_t **)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar2 = true;
      uVar4 = 0;
      for (; *param_1 == L'\\'; param_1 = param_1 + 1) {
        uVar4 = uVar4 + 1;
      }
      if (*param_1 == L'\"') {
        if ((uVar4 & 1) == 0) {
          if ((bVar1) && (param_1[1] == L'\"')) {
            param_1 = param_1 + 1;
          }
          else {
            bVar1 = !bVar1;
            bVar2 = false;
          }
        }
        uVar4 = uVar4 >> 1;
      }
      while (uVar4 != 0) {
        uVar4 = uVar4 - 1;
        if (param_3 != (wchar_t *)0x0) {
          *param_3 = L'\\';
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      wVar3 = *param_1;
      if ((wVar3 == L'\0') || ((!bVar1 && ((wVar3 == L' ' || (wVar3 == L'\t')))))) break;
      if (bVar2) {
        if (param_3 != (wchar_t *)0x0) {
          *param_3 = wVar3;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      param_1 = param_1 + 1;
    }
    if (param_3 != (wchar_t *)0x0) {
      *param_3 = L'\0';
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (param_2 != (wchar_t **)0x0) {
    *param_2 = (wchar_t *)0x0;
  }
  *param_4 = *param_4 + 1;
  return;
}

