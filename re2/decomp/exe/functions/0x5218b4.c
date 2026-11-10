// rea decompile_all
// name: ATL::COleDateTime::operator=
// address: 0x5218b4
// body: available
// range: 0x5218b4-0x521911 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_20 = (undefined4)*param_1;
  local_1c = *(undefined4 *)((int)param_1 + 4);
  bVar1 = CTime::GetAsSystemTime((CTime *)&local_20,&local_18);
  if (bVar1) {
    iVar2 = FUN_00441633(&local_18,this);
    if (iVar2 != 0) {
      uVar3 = 0;
      goto LAB_005218fc;
    }
  }
  uVar3 = 1;
LAB_005218fc:
  *(undefined4 *)(this + 8) = uVar3;
  pCVar4 = (COleDateTime *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pCVar4;
}

