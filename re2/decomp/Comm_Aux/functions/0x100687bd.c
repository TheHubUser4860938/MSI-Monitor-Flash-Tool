// rea decompile_all
// name: ATL::CTime::GetAsSystemTime
// address: 0x100687bd
// body: available
// range: 0x100687bd-0x10068839 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: bool __thiscall ATL::CTime::GetAsSystemTime(struct _SYSTEMTIME &)const 
   
   Library: Visual Studio 2015 Release */

bool __thiscall ATL::CTime::GetAsSystemTime(CTime *this,_SYSTEMTIME *param_1)

{
  undefined1 uVar1;
  WORD *pWVar2;
  undefined1 local_2c [36];
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  pWVar2 = (WORD *)FUN_1005c0f4(local_2c);
  if (pWVar2 != (WORD *)0x0) {
    param_1->wYear = pWVar2[10] + 0x76c;
    param_1->wMonth = pWVar2[8] + 1;
    param_1->wDayOfWeek = pWVar2[0xc];
    param_1->wDay = pWVar2[6];
    param_1->wHour = pWVar2[4];
    param_1->wMinute = pWVar2[2];
    param_1->wSecond = *pWVar2;
    param_1->wMilliseconds = 0;
  }
  uVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar1;
}

