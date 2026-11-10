// rea decompile_all
// name: do_get
// address: 0x1018ef1b
// body: available
// range: 0x1018ef1b-0x1018f206 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: virtual class std::istreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > __thiscall std::time_get<unsigned short,class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > >::do_get(class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >,class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >,class
   std::ios_base &,int &,struct tm *,char,char)const 
    protected: virtual class std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >
   __thiscall std::time_get<wchar_t,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > >::do_get(class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> >,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> >,class std::ios_base &,int &,struct tm *,char,char)const 
   
   Library: Visual Studio 2015 Release */

void do_get(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
           undefined4 param_5,undefined4 param_6,uint *param_7,int param_8,undefined1 param_9)

{
  uint *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  uint local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x1018ef27;
  uVar3 = FUN_100072b0(local_1c);
  local_8 = 0;
  FUN_1003ca30(uVar3);
  local_8 = 0xffffffff;
  FUN_10006a30();
  puVar1 = param_7;
  local_14 = 0;
  *param_7 = 0;
  switch(param_9) {
  case 0x41:
  case 0x61:
    puVar4 = (undefined4 *)
             get_weekday(local_1c,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    goto LAB_1018ef94;
  case 0x42:
  case 0x62:
  case 0x68:
    puVar4 = (undefined4 *)
             get_monthname(local_1c,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    goto LAB_1018ef94;
  case 0x43:
    uVar6 = Getint();
    uVar7 = *puVar1;
    *puVar1 = uVar6 | uVar7;
    if (((uVar6 | uVar7) & 2) != 0) goto LAB_1018f1de;
    uVar7 = (local_14 - 0x13) * 100;
    goto LAB_1018f017;
  case 0x44:
    pcVar8 = "%m / %d / %y";
    break;
  default:
    *param_7 = 2;
    goto LAB_1018f1de;
  case 0x48:
    goto LAB_1018f02e;
  case 0x49:
    uVar6 = Getint();
    uVar7 = *puVar1;
    *puVar1 = uVar6 | uVar7;
    if (((uVar6 | uVar7) & 2) == 0) {
      *(uint *)(param_8 + 8) = -(uint)(local_14 != 0xc) & local_14;
    }
    goto LAB_1018f1de;
  case 0x4d:
    goto LAB_1018f02e;
  case 0x52:
    pcVar8 = "%H : %M";
    break;
  case 0x53:
    goto LAB_1018f02e;
  case 0x54:
  case 0x58:
    pcVar8 = "%H : %M : %S";
    break;
  case 0x55:
  case 0x57:
    goto LAB_1018f02e;
  case 0x59:
    puVar4 = (undefined4 *)
             get_year(local_24,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    goto LAB_1018ef94;
  case 99:
    pcVar8 = "%b %d %H : %M : %S %Y";
    break;
  case 100:
  case 0x65:
    goto LAB_1018f02e;
  case 0x6a:
    goto LAB_1018f02e;
  case 0x6d:
    uVar6 = Getint();
    uVar7 = *puVar1;
    *puVar1 = uVar6 | uVar7;
    if (((uVar6 | uVar7) & 2) == 0) {
      *(uint *)(param_8 + 0x10) = local_14 - 1;
    }
    goto LAB_1018f1de;
  case 0x6e:
  case 0x74:
    pcVar8 = " ";
    break;
  case 0x70:
    iVar5 = _Getloctxt<>(&param_2,&param_4,0,":AM:am:PM:pm");
    if (iVar5 < 0) {
      *puVar1 = *puVar1 | 2;
    }
    else if (1 < iVar5) {
      *(int *)(param_8 + 8) = *(int *)(param_8 + 8) + 0xc;
    }
    goto LAB_1018f1de;
  case 0x72:
    pcVar8 = "%I : %M : %S %p";
    break;
  case 0x77:
LAB_1018f02e:
    uVar7 = Getint();
    *puVar1 = *puVar1 | uVar7;
    goto LAB_1018f1de;
  case 0x78:
    pcVar8 = "%d / %m / %y";
    break;
  case 0x79:
    uVar6 = Getint();
    uVar7 = *puVar1;
    *puVar1 = uVar6 | uVar7;
    if (((uVar6 | uVar7) & 2) != 0) goto LAB_1018f1de;
    uVar7 = local_14;
    if ((int)local_14 < 0x45) {
      uVar7 = local_14 + 100;
    }
LAB_1018f017:
    *(uint *)(param_8 + 0x14) = uVar7;
    goto LAB_1018f1de;
  }
  puVar4 = (undefined4 *)
           Getfmt(local_1c,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pcVar8);
LAB_1018ef94:
  param_2 = *puVar4;
  param_3 = puVar4[1];
LAB_1018f1de:
  cVar2 = equal(&param_4);
  if (cVar2 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

