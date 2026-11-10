// rea decompile_all
// name: try_get_module
// address: 0x101610ab
// body: available
// range: 0x101610ab-0x10161125 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    struct HINSTANCE__ * __cdecl try_get_module(enum `anonymous namespace'::module_id)
    struct HINSTANCE__ * __cdecl try_get_module(enum `anonymous namespace'::module_id)
   
   Library: Visual Studio 2015 Release */

HMODULE try_get_module(int param_1)

{
  uint *puVar1;
  uint uVar2;
  LPCWSTR lpLibFileName;
  HMODULE hLibModule;
  DWORD DVar3;
  
  puVar1 = &DAT_101debd8 + param_1;
  uVar2 = *puVar1;
  if (uVar2 == 0) {
    lpLibFileName = (LPCWSTR)(&PTR_u_api_ms_win_appmodel_runtime_l1_1_101ae0b0)[param_1];
    hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0x800);
    if (hLibModule == (HMODULE)0x0) {
      DVar3 = GetLastError();
      if (DVar3 == 0x57) {
        hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0);
      }
      else {
        hLibModule = (HMODULE)0x0;
      }
      if (hLibModule == (HMODULE)0x0) {
        LOCK();
        *puVar1 = 0xffffffff;
        UNLOCK();
        return (HMODULE)0x0;
      }
    }
    LOCK();
    uVar2 = *puVar1;
    *puVar1 = (uint)hLibModule;
    UNLOCK();
    if (uVar2 != 0) {
      FreeLibrary(hLibModule);
    }
  }
  else {
    hLibModule = (HMODULE)(-(uint)(uVar2 != 0xffffffff) & uVar2);
  }
  return hLibModule;
}

