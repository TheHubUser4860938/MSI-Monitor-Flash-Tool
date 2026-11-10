// rea decompile_all
// name: std::time_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::do_put
// address: 0x101691c7
// body: available
// range: 0x101691c7-0x10169293 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual class std::ostreambuf_iterator<char,struct std::char_traits<char> >
   __thiscall std::time_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> >
   >::do_put(class std::ostreambuf_iterator<char,struct std::char_traits<char> >,class std::ios_base
   &,char,struct tm const *,char,char)const 
   
   Library: Visual Studio 2015 Release */

void __thiscall
std::time_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::do_put
          (time_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *this,
          undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,tm *param_7,undefined1 param_8,char param_9)

{
  char ****ppppcVar1;
  size_t sVar2;
  int iVar3;
  char ***local_34 [4];
  size_t local_24;
  uint local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_24 = 0;
  local_18 = 0;
  local_20 = 0xf;
  local_34[0] = (char ***)((uint)local_34[0] & 0xffffff00);
  local_8 = 0;
  if (param_9 == '\0') {
    local_1c._0_3_ = CONCAT12(param_8,0x2521);
    local_1c = (uint)(uint3)local_1c;
  }
  else {
    local_1c._0_3_ = CONCAT12(param_9,0x2521);
    local_1c = CONCAT13(param_8,(uint3)local_1c);
  }
  iVar3 = 0x10;
  while( true ) {
    FUN_1000f7d0(iVar3,0);
    ppppcVar1 = (char ****)local_34[0];
    if (local_20 < 0x10) {
      ppppcVar1 = local_34;
    }
    sVar2 = __Strftime((char *)ppppcVar1,local_24,(char *)&local_1c,param_7,*(void **)(this + 8));
    if (sVar2 != 0) break;
    iVar3 = iVar3 * 2;
  }
  ppppcVar1 = (char ****)local_34[0];
  if (local_20 < 0x10) {
    ppppcVar1 = local_34;
  }
  copy<char*,std::ostreambuf_iterator<char,std::char_traits<char>_>_>
            (param_2,(char *)((int)ppppcVar1 + 1),(char *)((int)ppppcVar1 + sVar2),param_3,param_4);
  FUN_10003850(1,0);
  FUN_10154478();
  return;
}

