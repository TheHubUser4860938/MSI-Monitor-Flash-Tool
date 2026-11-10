// rea decompile_all
// name: ATL::COleDateTime::operator=
// address: 0x1003e2c0
// body: available
// range: 0x1003e2c0-0x1003e31d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class ATL::COleDateTime & __thiscall ATL::COleDateTime::operator=(__int64 const &)
   
   Library: Visual Studio 2015 Release */

COleDateTime * __thiscall ATL::COleDateTime::operator=(COleDateTime *this,__int64 *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  COleDateTime *pCVar4;
  undefined4 local_20;
  undefined4 local_1c;
  _SYSTEMTIME local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  local_20 = (undefined4)*param_1;
  local_1c = *(undefined4 *)((int)param_1 + 4);
  bVar1 = CTime::GetAsSystemTime((CTime *)&local_20,&local_18);
  if (bVar1) {
    iVar2 = FUN_1002647b(&local_18,this);
    if (iVar2 != 0) {
      uVar3 = 0;
      goto LAB_1003e308;
    }
  }
  uVar3 = 1;
LAB_1003e308:
  *(undefined4 *)(this + 8) = uVar3;
  pCVar4 = (COleDateTime *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pCVar4;
}

