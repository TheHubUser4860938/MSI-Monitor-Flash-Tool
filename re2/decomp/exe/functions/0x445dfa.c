// rea decompile_all
// name: ATL::COleDateTime::SetDateTime
// address: 0x445dfa
// body: available
// range: 0x445dfa-0x445e6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall ATL::COleDateTime::SetDateTime(int,int,int,int,int,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
ATL::COleDateTime::SetDateTime
          (COleDateTime *this,int param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6)

{
  int iVar1;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  _memset(&local_18,0,0x10);
  local_18 = (undefined2)param_1;
  local_16 = (undefined2)param_2;
  local_12 = (undefined2)param_3;
  local_10 = (undefined2)param_4;
  local_e = (undefined2)param_5;
  local_c = (undefined2)param_6;
  iVar1 = FUN_00441633(&local_18,this);
  *(uint *)(this + 8) = (uint)(iVar1 == 0);
  iVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar1;
}

