// rea decompile_all
// name: ATL::CRegKey::RecurseDeleteKey
// address: 0x4ebd97
// body: available
// range: 0x4ebd97-0x4ebe5a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: long __thiscall ATL::CRegKey::RecurseDeleteKey(wchar_t const *)
   
   Library: Visual Studio 2015 Release */

long __thiscall ATL::CRegKey::RecurseDeleteKey(CRegKey *this,wchar_t *param_1)

{
  int iVar1;
  LSTATUS LVar2;
  long lVar3;
  _FILETIME local_220;
  HKEY local_218;
  undefined4 local_214;
  undefined4 local_210;
  DWORD local_20c;
  wchar_t local_208 [256];
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_218 = (HKEY)0x0;
  local_214 = 0;
  local_210 = 0;
  iVar1 = Open((CRegKey *)&local_218,*(HKEY__ **)this,param_1,*(uint *)(this + 4) | 0x2001f);
  do {
    if (iVar1 != 0) {
LAB_004ebe3b:
      Close((CRegKey *)&local_218);
      lVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return lVar3;
    }
    local_20c = 0x100;
    LVar2 = RegEnumKeyExW(local_218,0,local_208,&local_20c,(LPDWORD)0x0,(LPWSTR)0x0,(LPDWORD)0x0,
                          &local_220);
    if (LVar2 != 0) {
      Close((CRegKey *)&local_218);
      DeleteSubKey(this,param_1);
      goto LAB_004ebe3b;
    }
    iVar1 = RecurseDeleteKey((CRegKey *)&local_218,local_208);
  } while( true );
}

