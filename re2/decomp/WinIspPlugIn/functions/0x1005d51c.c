// rea decompile_all
// name: ATL::CRegKey::QueryStringValue
// address: 0x1005d51c
// body: available
// range: 0x1005d51c-0x1005d58f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: long __thiscall ATL::CRegKey::QueryStringValue(wchar_t const *,wchar_t *,unsigned long
   *)
   
   Library: Visual Studio 2015 Release */

long __thiscall
ATL::CRegKey::QueryStringValue(CRegKey *this,wchar_t *param_1,wchar_t *param_2,ulong *param_3)

{
  LSTATUS LVar1;
  long lVar2;
  uint local_c;
  CRegKey *local_8;
  
  local_c = *param_3 * 2;
  *param_3 = 0;
  local_8 = this;
  LVar1 = RegQueryValueExW(*(HKEY *)this,param_1,(LPDWORD)0x0,(LPDWORD)&local_8,(LPBYTE)param_2,
                           &local_c);
  if (LVar1 != 0) {
    return LVar1;
  }
  if ((local_8 == (CRegKey *)0x1) || (local_8 == (CRegKey *)0x2)) {
    if (param_2 != (wchar_t *)0x0) {
      if (local_c == 0) {
        *param_2 = L'\0';
      }
      else if (((local_c & 1) != 0) ||
              (*(short *)((int)param_2 + ((local_c & 0xfffffffe) - 2)) != 0)) goto LAB_1005d55a;
    }
    lVar2 = 0;
    *param_3 = local_c >> 1;
  }
  else {
LAB_1005d55a:
    lVar2 = 0xd;
  }
  return lVar2;
}

