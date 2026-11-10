// rea decompile_all
// name: ungetwc_text_mode_nolock
// address: 0x101a11d8
// body: available
// range: 0x101a11d8-0x101a12e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    unsigned short __cdecl ungetwc_text_mode_nolock(unsigned short,class __crt_stdio_stream)
   
   Library: Visual Studio 2015 Release */

ushort __cdecl ungetwc_text_mode_nolock(uint param_1,FILE *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  errno_t eVar5;
  char *pcVar6;
  undefined4 local_14;
  char local_10;
  uint local_f;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  iVar2 = __fileno(param_2);
  if ((iVar2 == -1) || (iVar2 = __fileno(param_2), iVar2 == -2)) {
    puVar4 = &DAT_1023e1b8;
  }
  else {
    iVar2 = __fileno(param_2);
    uVar3 = __fileno(param_2);
    puVar4 = (undefined *)((uVar3 & 0x3f) * 0x30 + (&DAT_102498c8)[iVar2 >> 6]);
  }
  local_14 = 0;
  local_10 = '\0';
  local_f = 0;
  if (puVar4[0x29] == '\0') {
    eVar5 = _wctomb_s(&local_14,&local_10,5,(wchar_t)param_1);
    if (eVar5 != 0) goto LAB_101a12d1;
  }
  else {
    local_10 = (char)param_1;
    local_f = param_1 >> 8 & 0xff;
    local_14 = 2;
  }
  pcVar6 = (char *)(param_2->_cnt + local_14);
  iVar2 = local_14;
  if (param_2->_ptr < pcVar6) {
    if ((param_2->_base != (char *)0x0) || (param_2->_bufsiz < local_14)) goto LAB_101a12d1;
    param_2->_ptr = pcVar6;
  }
  while (-1 < iVar2 + -1) {
    param_2->_ptr = param_2->_ptr + -1;
    *param_2->_ptr = *(char *)((int)&local_14 + iVar2 + 3);
    iVar2 = iVar2 + -1;
  }
  param_2->_base = param_2->_base + local_14;
  LOCK();
  param_2->_flag = param_2->_flag & 0xfffffff7;
  UNLOCK();
  LOCK();
  param_2->_flag = param_2->_flag | 1;
  UNLOCK();
LAB_101a12d1:
  uVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return uVar1;
}

