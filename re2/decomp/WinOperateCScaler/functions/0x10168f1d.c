// rea decompile_all
// name: std::money_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::do_put
// address: 0x10168f1d
// body: available
// range: 0x10168f1d-0x10169051 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual class std::ostreambuf_iterator<char,struct std::char_traits<char> >
   __thiscall std::money_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char>
   > >::do_put(class std::ostreambuf_iterator<char,struct std::char_traits<char> >,bool,class
   std::ios_base &,char,class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> > const &)const 
   
   Library: Visual Studio 2015 Release */

void __thiscall
std::money_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::do_put
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,char *param_8)

{
  code *pcVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 local_50 [8];
  money_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c;
  undefined1 local_38 [16];
  int local_28;
  undefined4 local_24;
  undefined4 local_20 [2];
  char local_16;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x40;
  local_8 = 0x10168f29;
  local_44 = param_2;
  local_40 = param_6;
  uVar2 = FUN_100103a0(local_50);
  local_8 = 0;
  piVar3 = (int *)FUN_10005f00(uVar2);
  local_8 = 0xffffffff;
  FUN_10007650();
  pcVar1 = *(code **)(*piVar3 + 0x1c);
  guard_check_icall("0123456789-","0123456789-",local_20);
  (*pcVar1)();
  uVar7 = 0;
  uVar6 = local_3c >> 8;
  local_3c = local_3c & 0xffffff00;
  if (*(int *)(param_8 + 0x10) != 0) {
    pcVar4 = param_8;
    if (0xf < *(uint *)(param_8 + 0x14)) {
      pcVar4 = *(char **)param_8;
    }
    if (*pcVar4 == local_16) {
      local_3c = CONCAT31((int3)uVar6,1);
      uVar7 = 1;
    }
  }
  uVar6 = uVar7;
  if (uVar7 < *(uint *)(param_8 + 0x10)) {
    do {
      pcVar4 = param_8;
      if (0xf < *(uint *)(param_8 + 0x14)) {
        pcVar4 = *(char **)param_8;
      }
      uVar5 = _Find_elem<char>((char *)local_20,pcVar4[uVar6]);
    } while ((uVar5 < 10) && (uVar6 = uVar6 + 1, uVar6 < *(uint *)(param_8 + 0x10)));
  }
  if (0xf < *(uint *)(param_8 + 0x14)) {
    param_8 = *(char **)param_8;
  }
  local_28 = 0;
  local_24 = 0xf;
  local_38[0] = 0;
  FUN_10003c70(param_8 + uVar7,uVar6 - uVar7);
  local_8 = 1;
  if (local_28 == 0) {
    FUN_1000f7d0(1,local_20[0]);
  }
  FUN_10001d90(local_38);
  _Putmfld(local_48,local_44,param_3,param_4,param_5,local_40,param_7,local_3c);
  FUN_10003850(1,0);
  FUN_10154478();
  return;
}

