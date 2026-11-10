// rea decompile_all
// name: std::use_facet<std::moneypunct<char,0>_>
// address: 0x56df3b
// body: available
// range: 0x56df3b-0x56dfd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    class std::moneypunct<char,0> const & __cdecl std::use_facet<class std::moneypunct<char,0>
   >(class std::locale const &)
   
   Library: Visual Studio 2015 Release */

moneypunct<char,0> * __cdecl std::use_facet<std::moneypunct<char,0>_>(locale *param_1)

{
  code *pcVar1;
  moneypunct<char,0> *pmVar2;
  undefined4 uVar3;
  moneypunct<char,0> *pmVar4;
  int iVar5;
  undefined1 local_24 [12];
  _Lockit local_18 [4];
  moneypunct<char,0> *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x56df47;
  _Lockit::_Lockit(local_18,0);
  pmVar2 = DAT_00618b44;
  local_8 = 0;
  local_14[0] = DAT_00618b44;
  uVar3 = FUN_004021b0();
  pmVar4 = (moneypunct<char,0> *)FUN_004022b0(uVar3);
  if ((pmVar4 == (moneypunct<char,0> *)0x0) &&
     (pmVar4 = pmVar2, pmVar2 == (moneypunct<char,0> *)0x0)) {
    iVar5 = ::Getcat(local_14,param_1);
    if (iVar5 == -1) {
      FUN_00401f60();
      __CxxThrowException_8(local_24,&DAT_00608294);
    }
    pmVar4 = local_14[0];
    DAT_00618b44 = local_14[0];
    pcVar1 = *(code **)(*(int *)local_14[0] + 4);
    guard_check_icall();
    (*pcVar1)();
    _Facet_Register((_Facet_base *)pmVar4);
  }
  FUN_0055c830();
  return pmVar4;
}

