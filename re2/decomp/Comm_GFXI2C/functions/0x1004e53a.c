// rea decompile_all
// name: __NMSG_WRITE
// address: 0x1004e53a
// body: available
// range: 0x1004e53a-0x1004e6e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __NMSG_WRITE
   
   Library: Visual Studio 2008 Release */

void __cdecl __NMSG_WRITE(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  errno_t eVar4;
  DWORD DVar5;
  size_t sVar6;
  HANDLE hFile;
  DWORD *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  DWORD local_c;
  uint local_8;
  
  local_8 = 0;
  do {
    if (param_1 == (&DAT_10064420)[local_8 * 2]) break;
    local_8 = local_8 + 1;
  } while (local_8 < 0x17);
  uVar2 = local_8;
  if (local_8 < 0x17) {
    iVar3 = __set_error_mode(3);
    if ((iVar3 == 1) || ((iVar3 = __set_error_mode(3), iVar3 == 0 && (DAT_10068c04 == 1)))) {
      hFile = GetStdHandle(0xfffffff4);
      if ((hFile != (HANDLE)0x0) && (hFile != (HANDLE)0xffffffff)) {
        lpOverlapped = (LPOVERLAPPED)0x0;
        lpNumberOfBytesWritten = &local_c;
        puVar1 = (undefined4 *)(uVar2 * 8 + 0x10064424);
        sVar6 = _strlen((char *)*puVar1);
        WriteFile(hFile,(LPCVOID)*puVar1,sVar6,lpNumberOfBytesWritten,lpOverlapped);
      }
    }
    else if (param_1 != 0xfc) {
      eVar4 = _strcpy_s(&DAT_100690e8,0x314,"Runtime Error!\n\nProgram: ");
      if (eVar4 != 0) {
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      DAT_10069205 = 0;
      DVar5 = GetModuleFileNameA((HMODULE)0x0,&DAT_10069101,0x104);
      if ((DVar5 == 0) &&
         (eVar4 = _strcpy_s(&DAT_10069101,0x2fb,"<program name unknown>"), eVar4 != 0)) {
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      sVar6 = _strlen(&DAT_10069101);
      if (0x3c < sVar6 + 1) {
        sVar6 = _strlen(&DAT_10069101);
        eVar4 = _strncpy_s((char *)(sVar6 + 0x100690c6),
                           (int)&DAT_100693fc - (int)(sVar6 + 0x100690c6),"...",3);
        if (eVar4 != 0) {
          __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      eVar4 = _strcat_s(&DAT_100690e8,0x314,"\n\n");
      if (eVar4 != 0) {
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      eVar4 = _strcat_s(&DAT_100690e8,0x314,*(char **)(local_8 * 8 + 0x10064424));
      if (eVar4 != 0) {
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      ___crtMessageBoxA(&DAT_100690e8,"Microsoft Visual C++ Runtime Library",0x12010);
    }
  }
  return;
}

