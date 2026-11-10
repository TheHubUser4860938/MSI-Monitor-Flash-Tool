// rea decompile_all
// name: operator()<>
// address: 0x5963cd
// body: available
// range: 0x5963cd-0x596417 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Multiple Matches With Same Base Name
    public: void (__cdecl*__thiscall __crt_seh_guarded_call<void (__cdecl*)(int)>::operator()<class
   <lambda_a048d3beccc847880fc8490e18b82769>,class <lambda_ec61778202f4f5fc7e7711acc23c3bca> &,class
   <lambda_f7496a158712204296dd6628a163878e> >(class <lambda_a048d3beccc847880fc8490e18b82769>
   &&,class <lambda_ec61778202f4f5fc7e7711acc23c3bca> &,class
   <lambda_f7496a158712204296dd6628a163878e> &&))(int)
    public: void (__cdecl*__thiscall __crt_seh_guarded_call<void (__cdecl*)(int)>::operator()<class
   <lambda_cbab9ec6f41b0180b23cc171c22676b0>,class <lambda_44731a7d0e6d81c3e6aa82d741081786> &,class
   <lambda_4b292cb8dd18144e164572427af410ab> >(class <lambda_cbab9ec6f41b0180b23cc171c22676b0>
   &&,class <lambda_44731a7d0e6d81c3e6aa82d741081786> &,class
   <lambda_4b292cb8dd18144e164572427af410ab> &&))(int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

uint operator()<>(undefined4 *param_1)

{
  byte bVar1;
  uint uVar2;
  
  ___acrt_lock(*param_1);
  bVar1 = (byte)DAT_0060cff4 & 0x1f;
  uVar2 = DAT_0060cff4 ^ _DAT_0061948c;
  FUN_0059641b();
  return uVar2 >> bVar1 | uVar2 << 0x20 - bVar1;
}

