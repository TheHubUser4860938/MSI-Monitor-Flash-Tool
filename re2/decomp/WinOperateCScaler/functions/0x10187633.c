// rea decompile_all
// name: write_buffer_nolock<wchar_t>
// address: 0x10187633
// body: available
// range: 0x10187633-0x10187706 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    bool __cdecl write_buffer_nolock<wchar_t>(wchar_t,class __crt_stdio_stream)
   
   Library: Visual Studio 2015 Release */

bool __cdecl write_buffer_nolock<wchar_t>(undefined2 param_1,FILE *param_2)

{
  uint _FileHandle;
  undefined *puVar1;
  int iVar2;
  uint _MaxCharCount;
  int unaff_EDI;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  
  _FileHandle = __fileno(param_2);
  if ((param_2->_flag & 0xc0U) == 0) {
    iVar2 = __write(_FileHandle,&param_1,2);
    cVar4 = '\x01' - (iVar2 != 2);
  }
  else {
    uVar3 = 0;
    _MaxCharCount = (int)param_2->_ptr - param_2->_cnt;
    param_2->_ptr = (char *)(param_2->_cnt + 2);
    param_2->_base = (char *)(param_2->_bufsiz + -2);
    if ((int)_MaxCharCount < 1) {
      if ((_FileHandle == 0xffffffff) || (_FileHandle == 0xfffffffe)) {
        puVar1 = &DAT_102021b8;
      }
      else {
        puVar1 = (undefined *)((_FileHandle & 0x3f) * 0x30 + (&DAT_1020d928)[(int)_FileHandle >> 6])
        ;
      }
      if (((puVar1[0x28] & 0x20) != 0) &&
         (lVar5 = __lseeki64(_FileHandle,0x200000000,unaff_EDI), lVar5 == -1)) {
        LOCK();
        param_2->_flag = param_2->_flag | 0x10;
        UNLOCK();
        return true;
      }
    }
    else {
      uVar3 = __write(_FileHandle,(void *)param_2->_cnt,_MaxCharCount);
    }
    *(undefined2 *)param_2->_cnt = param_1;
    cVar4 = uVar3 == _MaxCharCount;
  }
  return (bool)cVar4;
}

