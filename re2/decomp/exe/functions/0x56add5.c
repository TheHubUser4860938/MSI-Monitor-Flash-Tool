// rea decompile_all
// name: do_get_date
// address: 0x56add5
// body: available
// range: 0x56add5-0x56b27d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: virtual class std::istreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > __thiscall std::time_get<unsigned short,class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >
   >::do_get_date(class std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned
   short> >,class std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short>
   >,class std::ios_base &,int &,struct tm *)const 
    protected: virtual class std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >
   __thiscall std::time_get<wchar_t,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > >::do_get_date(class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> >,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> >,class std::ios_base &,int &,struct tm *)const 
   
   Library: Visual Studio 2015 Release */

void do_get_date(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,uint *param_7,int param_8)

{
  code *pcVar1;
  uint *puVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *in_ECX;
  int *piVar9;
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  undefined1 local_1c [4];
  int local_18;
  int *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0x56ade1;
  local_14 = in_ECX;
  uVar5 = FUN_00402ad0(local_24);
  local_8 = 0;
  piVar6 = (int *)use_facet<>(uVar5);
  local_8 = 0xffffffff;
  FUN_00402240();
  pcVar1 = *(code **)(*in_ECX + 0xc);
  guard_check_icall();
  local_18 = (*pcVar1)();
  if (local_18 == 0) {
    local_18 = 2;
  }
  cVar4 = equal(&param_4);
  puVar2 = param_7;
  if (cVar4 == '\0') {
    if ((char)param_3 == '\0') {
      Peek();
    }
    pcVar1 = *(code **)(*piVar6 + 0x10);
    guard_check_icall(4,CONCAT22((undefined2)param_4,param_3._2_2_));
    cVar4 = (*pcVar1)();
    if (cVar4 == '\0') {
      puVar7 = (undefined4 *)
               get_monthname(local_1c,param_2,
                             CONCAT22(param_3._2_2_,CONCAT11(param_3._1_1_,(char)param_3)),
                             CONCAT22(param_4._2_2_,(undefined2)param_4),param_5,param_6,puVar2,
                             param_8);
      param_2 = *puVar7;
      uVar5 = puVar7[1];
      local_18 = 2;
LAB_0056af15:
      param_3._0_1_ = (char)uVar5;
      param_3._1_1_ = (undefined1)((uint)uVar5 >> 8);
      param_3._2_2_ = (undefined2)((uint)uVar5 >> 0x10);
    }
    else if (local_18 == 2) {
      piVar9 = (int *)(param_8 + 0x10);
      uVar8 = Getint(local_14,&param_2,&param_4,1,0xc,piVar9,piVar6);
      *puVar2 = *puVar2 | uVar8;
      *piVar9 = *piVar9 + -1;
    }
    else {
      if (local_18 != 1) {
        puVar7 = (undefined4 *)
                 get_year(local_2c,param_2,
                          CONCAT22(param_3._2_2_,CONCAT11(param_3._1_1_,(char)param_3)),
                          CONCAT22(param_4._2_2_,(undefined2)param_4),param_5,param_6,puVar2,param_8
                         );
        param_2 = *puVar7;
        uVar5 = puVar7[1];
        goto LAB_0056af15;
      }
      uVar8 = Getint(local_14,&param_2,&param_4,1,0x1f,param_8 + 0xc,piVar6);
      *puVar2 = *puVar2 | uVar8;
    }
  }
  while (cVar4 = equal(&param_4), cVar4 == '\0') {
    if ((char)param_3 == '\0') {
      Peek();
    }
    pcVar1 = *(code **)(*piVar6 + 0x10);
    guard_check_icall(0x48,CONCAT22((undefined2)param_4,param_3._2_2_));
    cVar4 = (*pcVar1)();
    if (cVar4 == '\0') break;
    Inc();
  }
  cVar4 = equal(&param_4);
  if (cVar4 != '\0') goto LAB_0056afc8;
  if ((char)param_3 == '\0') {
    Peek();
  }
  pcVar1 = *(code **)(*piVar6 + 0x38);
  guard_check_icall(CONCAT22((undefined2)param_4,param_3._2_2_),0);
  cVar4 = (*pcVar1)();
  if (((cVar4 != ':') && (cVar4 != ',')) && (cVar4 != '/')) goto LAB_0056afc8;
  do {
    Inc();
LAB_0056afc8:
    cVar4 = equal(&param_4);
    if (cVar4 != '\0') break;
    if ((char)param_3 == '\0') {
      Peek();
    }
    pcVar1 = *(code **)(*piVar6 + 0x10);
    guard_check_icall(0x48,CONCAT22((undefined2)param_4,param_3._2_2_));
    cVar4 = (*pcVar1)();
  } while (cVar4 != '\0');
  cVar4 = equal(&param_4);
  if (cVar4 == '\0') {
    if ((char)param_3 == '\0') {
      Peek();
    }
    pcVar1 = *(code **)(*piVar6 + 0x10);
    guard_check_icall(4,CONCAT22((undefined2)param_4,param_3._2_2_));
    cVar4 = (*pcVar1)();
    iVar3 = local_18;
    if (cVar4 == '\0') {
      if (local_18 == 2) {
        *puVar2 = *puVar2 | 2;
      }
      else {
        puVar7 = (undefined4 *)
                 get_monthname(local_2c,param_2,
                               CONCAT22(param_3._2_2_,CONCAT11(param_3._1_1_,(char)param_3)),
                               CONCAT22(param_4._2_2_,(undefined2)param_4),param_5,param_6,puVar2,
                               param_8);
        param_2 = *puVar7;
        uVar5 = puVar7[1];
        param_3._0_1_ = (char)uVar5;
        param_3._1_1_ = (undefined1)((uint)uVar5 >> 8);
        param_3._2_2_ = (undefined2)((uint)uVar5 >> 0x10);
        if (iVar3 == 4) {
          local_18 = 3;
        }
      }
    }
    else if ((local_18 == 1) || (local_18 == 3)) {
      piVar9 = (int *)(param_8 + 0x10);
      uVar8 = Getint(local_14,&param_2,&param_4,1,0xc,piVar9,piVar6);
      *puVar2 = *puVar2 | uVar8;
      *piVar9 = *piVar9 + -1;
    }
    else {
      uVar8 = Getint(local_14,&param_2,&param_4,1,0x1f,param_8 + 0xc,piVar6);
      *puVar2 = *puVar2 | uVar8;
    }
  }
  while (cVar4 = equal(&param_4), cVar4 == '\0') {
    if ((char)param_3 == '\0') {
      Peek();
    }
    pcVar1 = *(code **)(*piVar6 + 0x10);
    guard_check_icall(0x48,CONCAT22((undefined2)param_4,param_3._2_2_));
    cVar4 = (*pcVar1)();
    if (cVar4 == '\0') break;
    Inc();
  }
  cVar4 = equal(&param_4);
  if (cVar4 != '\0') goto LAB_0056b160;
  if ((char)param_3 == '\0') {
    Peek();
  }
  pcVar1 = *(code **)(*piVar6 + 0x38);
  guard_check_icall(CONCAT22((undefined2)param_4,param_3._2_2_),0);
  cVar4 = (*pcVar1)();
  if (((cVar4 != ':') && (cVar4 != ',')) && (cVar4 != '/')) goto LAB_0056b160;
  do {
    Inc();
LAB_0056b160:
    cVar4 = equal(&param_4);
    if (cVar4 != '\0') break;
    if ((char)param_3 == '\0') {
      Peek();
    }
    pcVar1 = *(code **)(*piVar6 + 0x10);
    guard_check_icall(0x48,CONCAT22((undefined2)param_4,param_3._2_2_));
    cVar4 = (*pcVar1)();
  } while (cVar4 != '\0');
  cVar4 = equal(&param_4);
  if (cVar4 == '\0') {
    if ((char)param_3 == '\0') {
      Peek();
    }
    pcVar1 = *(code **)(*piVar6 + 0x10);
    guard_check_icall(4,CONCAT22((undefined2)param_4,param_3._2_2_));
    cVar4 = (*pcVar1)();
    if (cVar4 == '\0') {
      if (local_18 != 4) goto LAB_0056b180;
      puVar7 = (undefined4 *)
               get_monthname(local_2c,param_2,
                             CONCAT22(param_3._2_2_,CONCAT11(param_3._1_1_,(char)param_3)),
                             CONCAT22(param_4._2_2_,(undefined2)param_4),param_5,param_6,puVar2,
                             param_8);
    }
    else {
      if (local_18 == 4) {
        piVar9 = (int *)(param_8 + 0x10);
        uVar8 = Getint(local_14,&param_2,&param_4,1,0xc,piVar9,piVar6);
        *puVar2 = *puVar2 | uVar8;
        *piVar9 = *piVar9 + -1;
        goto LAB_0056b255;
      }
      if (local_18 == 3) {
        uVar8 = Getint(local_14,&param_2,&param_4,1,0x1f,param_8 + 0xc,piVar6);
        *puVar2 = *puVar2 | uVar8;
        goto LAB_0056b255;
      }
      puVar7 = (undefined4 *)
               get_year(local_34,param_2,
                        CONCAT22(param_3._2_2_,CONCAT11(param_3._1_1_,(char)param_3)),
                        CONCAT22(param_4._2_2_,(undefined2)param_4),param_5,param_6,puVar2,param_8);
    }
    param_2 = *puVar7;
    uVar5 = puVar7[1];
    param_3._0_1_ = (char)uVar5;
    param_3._1_1_ = (undefined1)((uint)uVar5 >> 8);
    param_3._2_2_ = (undefined2)((uint)uVar5 >> 0x10);
  }
  else {
LAB_0056b180:
    *puVar2 = *puVar2 | 2;
  }
LAB_0056b255:
  cVar4 = equal(&param_4);
  if (cVar4 != '\0') {
    *puVar2 = *puVar2 | 1;
  }
  *param_1 = param_2;
  param_1[1] = CONCAT22(param_3._2_2_,CONCAT11(param_3._1_1_,(char)param_3));
  return;
}

