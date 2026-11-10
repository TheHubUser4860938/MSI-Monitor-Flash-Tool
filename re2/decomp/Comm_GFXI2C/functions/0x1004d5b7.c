// rea decompile_all
// name: __mtinit
// address: 0x1004d5b7
// body: available
// range: 0x1004d5b7-0x1004d743 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __mtinit
   
   Library: Visual Studio 2008 Release */

int __cdecl __mtinit(void)

{
  HMODULE hModule;
  BOOL BVar1;
  int iVar2;
  code *pcVar3;
  _ptiddata _Ptd;
  DWORD DVar4;
  code *pcVar5;
  _ptiddata p_Var6;
  
  hModule = GetModuleHandleW(L"KERNEL32.DLL");
  if (hModule == (HMODULE)0x0) {
    hModule = (HMODULE)__crt_waiting_on_module_handle(L"KERNEL32.DLL");
  }
  if (hModule != (HMODULE)0x0) {
    DAT_10068f78 = GetProcAddress(hModule,"FlsAlloc");
    DAT_10068f7c = GetProcAddress(hModule,"FlsGetValue");
    DAT_10068f80 = GetProcAddress(hModule,"FlsSetValue");
    DAT_10068f84 = GetProcAddress(hModule,"FlsFree");
    if ((((DAT_10068f78 == (FARPROC)0x0) || (DAT_10068f7c == (FARPROC)0x0)) ||
        (DAT_10068f80 == (FARPROC)0x0)) || (DAT_10068f84 == (FARPROC)0x0)) {
      DAT_10068f7c = TlsGetValue_exref;
      DAT_10068f78 = (FARPROC)&LAB_1004d226;
      DAT_10068f80 = TlsSetValue_exref;
      DAT_10068f84 = TlsFree_exref;
    }
    DAT_100642f4 = TlsAlloc();
    if (DAT_100642f4 == 0xffffffff) {
      return 0;
    }
    BVar1 = TlsSetValue(DAT_100642f4,DAT_10068f7c);
    if (BVar1 == 0) {
      return 0;
    }
    __init_pointers();
    DAT_10068f78 = (FARPROC)__encode_pointer((int)DAT_10068f78);
    DAT_10068f7c = (FARPROC)__encode_pointer((int)DAT_10068f7c);
    DAT_10068f80 = (FARPROC)__encode_pointer((int)DAT_10068f80);
    DAT_10068f84 = (FARPROC)__encode_pointer((int)DAT_10068f84);
    iVar2 = __mtinitlocks();
    if (iVar2 != 0) {
      pcVar5 = __freefls_4;
      pcVar3 = (code *)__decode_pointer((int)DAT_10068f78);
      DAT_100642f0 = (*pcVar3)(pcVar5);
      if ((DAT_100642f0 != -1) && (_Ptd = __calloc_crt(1,0x214), _Ptd != (_ptiddata)0x0)) {
        iVar2 = DAT_100642f0;
        p_Var6 = _Ptd;
        pcVar3 = (code *)__decode_pointer((int)DAT_10068f80);
        iVar2 = (*pcVar3)(iVar2,p_Var6);
        if (iVar2 != 0) {
          __initptd(_Ptd,(pthreadlocinfo)0x0);
          DVar4 = GetCurrentThreadId();
          _Ptd->_thandle = 0xffffffff;
          _Ptd->_tid = DVar4;
          return 1;
        }
      }
    }
  }
  __mtterm();
  return 0;
}

