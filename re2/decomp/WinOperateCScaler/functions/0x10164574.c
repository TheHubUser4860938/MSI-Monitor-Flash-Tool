// rea decompile_all
// name: do_put
// address: 0x10164574
// body: available
// range: 0x10164574-0x1016469b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: virtual class std::ostreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > __thiscall std::money_put<unsigned short,class
   std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > >::do_put(class
   std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >,bool,class
   std::ios_base &,unsigned short,class std::basic_string<unsigned short,struct
   std::char_traits<unsigned short>,class std::allocator<unsigned short> > const &)const 
    protected: virtual class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >
   __thiscall std::money_put<wchar_t,class std::ostreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > >::do_put(class std::ostreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> >,bool,class std::ios_base &,wchar_t,class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> > const
   &)const 
   
   Library: Visual Studio 2015 Release */

void do_put(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
           undefined4 param_5,undefined4 param_6,short *param_7)

{
  code *pcVar1;
  undefined4 uVar2;
  int *piVar3;
  short *psVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 local_5c [12];
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> local_44 [16];
  int local_34;
  undefined4 local_2c [5];
  short local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x4c;
  local_8 = 0x10164580;
  local_50 = param_1;
  local_4c = param_5;
  uVar2 = FUN_100103a0(local_5c);
  local_8 = 0;
  piVar3 = (int *)use_facet<>(uVar2);
  local_8 = 0xffffffff;
  FUN_10007650();
  pcVar1 = *(code **)(*piVar3 + 0x2c);
  guard_check_icall("0123456789-","%.0Lf",local_2c);
  (*pcVar1)();
  uVar7 = 0;
  uVar6 = local_48 >> 8;
  local_48 = local_48 & 0xffffff00;
  if (*(int *)(param_7 + 8) != 0) {
    psVar4 = param_7;
    if (7 < *(uint *)(param_7 + 10)) {
      psVar4 = *(short **)param_7;
    }
    if (*psVar4 == local_18) {
      local_48 = CONCAT31((int3)uVar6,1);
      uVar7 = 1;
    }
  }
  uVar6 = uVar7;
  if (uVar7 < *(uint *)(param_7 + 8)) {
    do {
      psVar4 = param_7;
      if (7 < *(uint *)(param_7 + 10)) {
        psVar4 = *(short **)param_7;
      }
      uVar5 = _Find_elem<>(local_2c,psVar4[uVar6]);
    } while ((uVar5 < 10) && (uVar6 = uVar6 + 1, uVar6 < *(uint *)(param_7 + 8)));
  }
  if (7 < *(uint *)(param_7 + 10)) {
    param_7 = *(short **)param_7;
  }
  basic_string<>(param_7 + uVar7,uVar6 - uVar7);
  local_8 = 1;
  if (local_34 == 0) {
    FUN_10161623(1,local_2c[0]);
  }
  basic_string<>(local_44);
  Putmfld(local_50,param_2,param_3,param_4,local_4c,param_6,local_48);
  std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::_Tidy
            (local_44,true,0);
  FUN_10154478();
  return;
}

