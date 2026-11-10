// rea decompile_all
// name: __beginthread
// address: 0x57f1ec
// body: available
// range: 0x57f1ec-0x57f277 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __beginthread
   
   Library: Visual Studio 2015 Release */

uintptr_t __cdecl __beginthread(_StartAddress *_StartAddress,uint _StackSize,void *_ArgList)

{
  int *piVar1;
  __acrt_thread_parameter *lpParameter;
  HANDLE hThread;
  DWORD DVar2;
  DWORD local_c;
  thread_parameter_free_policy local_5;
  
  if (_StartAddress == (_StartAddress *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_0057662d();
    return 0xffffffff;
  }
  lpParameter = create_thread_parameter(_StartAddress,_ArgList);
  if (lpParameter != (__acrt_thread_parameter *)0x0) {
    local_c = 0;
    hThread = CreateThread((LPSECURITY_ATTRIBUTES)0x0,_StackSize,
                           (LPTHREAD_START_ROUTINE)&LAB_0057f096,lpParameter,4,&local_c);
    if (hThread != (HANDLE)0x0) {
      *(HANDLE *)(lpParameter + 8) = hThread;
      DVar2 = ResumeThread(hThread);
      if (DVar2 != 0xffffffff) {
        lpParameter = (__acrt_thread_parameter *)0x0;
        goto LAB_0057f254;
      }
    }
    DVar2 = GetLastError();
    ___acrt_errno_map_os_error(DVar2);
  }
  hThread = (HANDLE)0xffffffff;
LAB_0057f254:
  _anon_58BB9154::thread_parameter_free_policy::operator()(&local_5,lpParameter);
  return (uintptr_t)hThread;
}

