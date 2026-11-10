// rea decompile_all
// name: _AfxTaskDialogIndirect
// address: 0x1005d935
// body: available
// range: 0x1005d935-0x1005d998 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Different Base Names
    long __cdecl _AfxRegisterApplicationRecoveryCallback(unsigned long (__stdcall*)(void *),void
   *,unsigned long,unsigned long)
    long __cdecl _AfxSHCreateItemFromParsingName(wchar_t const *,struct IBindCtx *,struct _GUID
   const &,void * *)
    long __cdecl _AfxSHGetKnownFolderPath(struct _GUID const &,unsigned long,void *,wchar_t * *)
    long __cdecl _AfxTaskDialogIndirect(struct _TASKDIALOGCONFIG const *,int *,int *,int *)
   
   Library: Visual Studio 2015 Release */

long __cdecl
_AfxTaskDialogIndirect(_TASKDIALOGCONFIG *param_1,int *param_2,int *param_3,int *param_4)

{
  HMODULE hModule;
  FARPROC Ptr;
  int iVar1;
  
  if (DAT_1020dbe8 == (PVOID)0x0) {
    hModule = GetModuleHandleW(L"comctl32.dll");
    if (hModule == (HMODULE)0x0) {
      return -0x7fffbffb;
    }
    Ptr = GetProcAddress(hModule,"TaskDialogIndirect");
    DAT_1020dbe8 = EncodePointer(Ptr);
  }
  else {
    Ptr = DecodePointer(DAT_1020dbe8);
  }
  if (Ptr == (FARPROC)0x0) {
    return -0x7fffbffb;
  }
  guard_check_icall(param_1,param_2,param_3,param_4);
  iVar1 = (*Ptr)();
  return iVar1;
}

