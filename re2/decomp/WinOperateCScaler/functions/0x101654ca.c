// rea decompile_all
// name: do_put
// address: 0x101654ca
// body: available
// range: 0x101654ca-0x1016562f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: virtual class std::ostreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > __thiscall std::num_put<unsigned short,class
   std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > >::do_put(class
   std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >,class
   std::ios_base &,unsigned short,bool)const 
    protected: virtual class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >
   __thiscall std::num_put<wchar_t,class std::ostreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > >::do_put(class std::ostreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> >,class std::ios_base &,wchar_t,bool)const 
   
   Library: Visual Studio 2015 Release */

void do_put(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined2 param_5,
           char param_6)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined1 local_4c [4];
  undefined4 *local_48;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> local_44 [24];
  undefined4 local_2c;
  undefined4 local_1c;
  uint local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x44;
  local_8 = 0x101654d6;
  if ((*(uint *)(param_4 + 0x14) & 0x4000) == 0) {
    iVar1 = *in_ECX;
    guard_check_icall(param_1,param_2,param_3,param_4,param_5,param_6);
    (**(code **)(iVar1 + 0x24))();
  }
  else {
    uVar2 = FUN_100103a0(local_4c);
    local_8 = 0;
    use_facet<>(uVar2);
    FUN_10007650();
    local_1c = 0;
    local_18 = 7;
    local_2c = (undefined4 *)((uint)local_2c._2_2_ << 0x10);
    local_8 = 1;
    if (param_6 == '\0') {
      uVar2 = curr_symbol(local_44);
    }
    else {
      uVar2 = positive_sign(local_44);
    }
    FID_conflict_assign(uVar2);
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::_Tidy
              (local_44,true,0);
    if ((*(uint *)(param_4 + 0x14) & 0x1c0) != 0x40) {
      Rep();
    }
    local_48 = local_2c;
    if (local_18 < 8) {
      local_48 = &local_2c;
    }
    Put();
    *(undefined4 *)(param_4 + 0x20) = 0;
    *(undefined4 *)(param_4 + 0x24) = 0;
    Rep();
    std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::_Tidy
              ((basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)&local_2c
               ,true,0);
  }
  FUN_10154478();
  return;
}

