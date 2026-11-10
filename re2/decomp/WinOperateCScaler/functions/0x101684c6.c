// rea decompile_all
// name: std::time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::do_get
// address: 0x101684c6
// body: available
// range: 0x101684c6-0x101687b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual class std::istreambuf_iterator<char,struct std::char_traits<char> >
   __thiscall std::time_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> >
   >::do_get(class std::istreambuf_iterator<char,struct std::char_traits<char> >,class
   std::istreambuf_iterator<char,struct std::char_traits<char> >,class std::ios_base &,int &,struct
   tm *,char,char)const 
   
   Library: Visual Studio 2015 Release */

void __thiscall
std::time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::do_get
          (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *this,
          undefined4 *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,uint *param_8,ctype<char> *param_9,char param_10)

{
  uint *puVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  ctype<char> *pcVar5;
  uint uVar6;
  time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *this_00;
  uint uVar7;
  int iVar8;
  int *piVar9;
  char *pcVar10;
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  uint local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x101684d2;
  uVar3 = FUN_100103a0(local_1c);
  local_8 = 0;
  FUN_10005f00(uVar3);
  local_8 = 0xffffffff;
  FUN_10007650();
  puVar1 = param_8;
  this_00 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
            (param_10 + -0x41);
  local_14[0] = 0;
  *param_8 = 0;
  switch(param_10) {
  case 'A':
  case 'a':
    puVar4 = (undefined4 *)
             get_weekday(local_1c,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    goto LAB_1016853f;
  case 'B':
  case 'b':
  case 'h':
    puVar4 = (undefined4 *)
             get_monthname(local_1c,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    goto LAB_1016853f;
  case 'C':
    uVar6 = _Getint(this_00,(istreambuf_iterator<char,std::char_traits<char>_> *)this,
                    (istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,(int)&param_5,0,
                    (int *)0x63,(ctype<char> *)local_14);
    uVar7 = *puVar1;
    *puVar1 = uVar6 | uVar7;
    if (((uVar6 | uVar7) & 2) != 0) goto LAB_10168789;
    uVar7 = (local_14[0] - 0x13) * 100;
    goto LAB_101685c2;
  case 'D':
    pcVar10 = "%m / %d / %y";
    break;
  default:
    *param_8 = 2;
    goto LAB_10168789;
  case 'H':
    pcVar5 = param_9 + 8;
    piVar9 = (int *)0x17;
    goto LAB_10168605;
  case 'I':
    uVar6 = _Getint(this_00,(istreambuf_iterator<char,std::char_traits<char>_> *)this,
                    (istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,(int)&param_5,1,
                    (int *)0xc,(ctype<char> *)local_14);
    uVar7 = *puVar1;
    *puVar1 = uVar6 | uVar7;
    if (((uVar6 | uVar7) & 2) == 0) {
      *(uint *)(param_9 + 8) = -(uint)(local_14[0] != 0xc) & local_14[0];
    }
    goto LAB_10168789;
  case 'M':
    pcVar5 = param_9 + 4;
    piVar9 = (int *)0x3b;
    goto LAB_10168605;
  case 'R':
    pcVar10 = "%H : %M";
    break;
  case 'S':
    piVar9 = (int *)0x3c;
    pcVar5 = param_9;
    goto LAB_10168605;
  case 'T':
  case 'X':
    pcVar10 = "%H : %M : %S";
    break;
  case 'U':
  case 'W':
    piVar9 = (int *)0x35;
    pcVar5 = param_9 + 0x1c;
    goto LAB_10168605;
  case 'Y':
    puVar4 = (undefined4 *)
             get_year(local_24,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    goto LAB_1016853f;
  case 'c':
    pcVar10 = "%b %d %H : %M : %S %Y";
    break;
  case 'd':
  case 'e':
    pcVar5 = param_9 + 0xc;
    piVar9 = (int *)0x1f;
    goto LAB_101685d7;
  case 'j':
    pcVar5 = param_9 + 0x1c;
    piVar9 = (int *)0x16e;
LAB_101685d7:
    iVar8 = 1;
    goto LAB_101685d9;
  case 'm':
    uVar6 = _Getint(this_00,(istreambuf_iterator<char,std::char_traits<char>_> *)this,
                    (istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,(int)&param_5,1,
                    (int *)0xc,(ctype<char> *)local_14);
    uVar7 = *puVar1;
    *puVar1 = uVar6 | uVar7;
    if (((uVar6 | uVar7) & 2) == 0) {
      *(uint *)(param_9 + 0x10) = local_14[0] - 1;
    }
    goto LAB_10168789;
  case 'n':
  case 't':
    pcVar10 = " ";
    break;
  case 'p':
    iVar8 = _Getloctxt<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>
                      ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,
                       (istreambuf_iterator<char,std::char_traits<char>_> *)&param_5,0,
                       ":AM:am:PM:pm");
    if (iVar8 < 0) {
      *puVar1 = *puVar1 | 2;
    }
    else if (1 < iVar8) {
      *(int *)(param_9 + 8) = *(int *)(param_9 + 8) + 0xc;
    }
    goto LAB_10168789;
  case 'r':
    pcVar10 = "%I : %M : %S %p";
    break;
  case 'w':
    piVar9 = (int *)0x6;
    pcVar5 = param_9 + 0x18;
LAB_10168605:
    iVar8 = 0;
LAB_101685d9:
    uVar7 = _Getint(this_00,(istreambuf_iterator<char,std::char_traits<char>_> *)this,
                    (istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,(int)&param_5,
                    iVar8,piVar9,pcVar5);
    *puVar1 = *puVar1 | uVar7;
    goto LAB_10168789;
  case 'x':
    pcVar10 = "%d / %m / %y";
    break;
  case 'y':
    uVar6 = _Getint(this_00,(istreambuf_iterator<char,std::char_traits<char>_> *)this,
                    (istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,(int)&param_5,0,
                    (int *)0x63,(ctype<char> *)local_14);
    uVar7 = *puVar1;
    *puVar1 = uVar6 | uVar7;
    if (((uVar6 | uVar7) & 2) != 0) goto LAB_10168789;
    uVar7 = local_14[0];
    if ((int)local_14[0] < 0x45) {
      uVar7 = local_14[0] + 100;
    }
LAB_101685c2:
    *(uint *)(param_9 + 0x14) = uVar7;
    goto LAB_10168789;
  }
  puVar4 = (undefined4 *)
           _Getfmt(this,local_1c,param_3,param_4,param_5,param_6,param_7,param_8,param_9,pcVar10);
LAB_1016853f:
  param_3 = *puVar4;
  param_4 = puVar4[1];
LAB_10168789:
  bVar2 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                    ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,
                     (istreambuf_iterator<char,struct_std::char_traits<char>_> *)&param_5);
  if (bVar2) {
    *puVar1 = *puVar1 | 1;
  }
  *param_2 = param_3;
  param_2[1] = param_4;
  return;
}

