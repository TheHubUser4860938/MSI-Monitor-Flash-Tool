// rea decompile_all
// name: std::time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::do_get_date
// address: 0x5702d7
// body: available
// range: 0x5702d7-0x570730 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual class std::istreambuf_iterator<char,struct std::char_traits<char> >
   __thiscall std::time_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> >
   >::do_get_date(class std::istreambuf_iterator<char,struct std::char_traits<char> >,class
   std::istreambuf_iterator<char,struct std::char_traits<char> >,class std::ios_base &,int &,struct
   tm *)const 
   
   Library: Visual Studio 2015 Release */

void __thiscall
std::time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::do_get_date
          (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *this,
          undefined4 *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,uint *param_8,int param_9)

{
  code *pcVar1;
  uint *puVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *ptVar10;
  ctype<char> *pcVar11;
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  undefined1 local_1c [4];
  int local_18;
  time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0x5702e3;
  local_14 = this;
  uVar6 = FUN_00402ad0(local_24);
  local_8 = 0;
  piVar7 = (int *)FUN_00405f50(uVar6);
  local_8 = 0xffffffff;
  FUN_00402240();
  pcVar1 = *(code **)(*(int *)this + 0xc);
  guard_check_icall();
  local_18 = (*pcVar1)();
  if (local_18 == 0) {
    local_18 = 2;
  }
  iVar3 = local_18;
  bVar4 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                    ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,
                     (istreambuf_iterator<char,struct_std::char_traits<char>_> *)&param_5);
  puVar2 = param_8;
  if (!bVar4) {
    uVar6 = CONCAT22(param_4._2_2_,CONCAT11(param_4._1_1_,(char)param_4));
    if ((char)param_4 == '\0') {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek
                ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
      uVar6 = CONCAT22(param_4._2_2_,CONCAT11(param_4._1_1_,(char)param_4));
    }
    ptVar10 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
              (uint)param_4._1_1_;
    if (((uint)(int)*(short *)(piVar7[3] + (int)ptVar10 * 2) >> 2 & 1) == 0) {
      puVar8 = (undefined4 *)
               get_monthname(local_1c,param_3,uVar6,param_5,param_6,param_7,puVar2,param_9);
      param_3 = *puVar8;
      uVar6 = puVar8[1];
      local_18 = 2;
LAB_0057040a:
      param_4._0_1_ = (char)uVar6;
      param_4._1_1_ = (byte)((uint)uVar6 >> 8);
      param_4._2_2_ = (undefined2)((uint)uVar6 >> 0x10);
    }
    else if (iVar3 == 2) {
      pcVar11 = (ctype<char> *)(param_9 + 0x10);
      uVar9 = _Getint(ptVar10,(istreambuf_iterator<char,std::char_traits<char>_> *)local_14,
                      (istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,(int)&param_5,1,
                      (int *)0xc,pcVar11);
      *puVar2 = *puVar2 | uVar9;
      *(int *)pcVar11 = *(int *)pcVar11 + -1;
    }
    else {
      if (iVar3 != 1) {
        puVar8 = (undefined4 *)
                 get_year(local_2c,param_3,uVar6,param_5,param_6,param_7,puVar2,param_9);
        param_3 = *puVar8;
        uVar6 = puVar8[1];
        goto LAB_0057040a;
      }
      uVar9 = _Getint(ptVar10,(istreambuf_iterator<char,std::char_traits<char>_> *)local_14,
                      (istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,(int)&param_5,1,
                      (int *)0x1f,(ctype<char> *)(param_9 + 0xc));
      *puVar2 = *puVar2 | uVar9;
    }
  }
  while (bVar4 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                           ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,
                            (istreambuf_iterator<char,struct_std::char_traits<char>_> *)&param_5),
        !bVar4) {
    if ((char)param_4 == '\0') {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek
                ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
    }
    if ((*(byte *)(piVar7[3] + (uint)param_4._1_1_ * 2) & 0x48) == 0) break;
    istreambuf_iterator<char,std::char_traits<char>_>::_Inc
              ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
  }
  bVar4 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                    ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,
                     (istreambuf_iterator<char,struct_std::char_traits<char>_> *)&param_5);
  if (bVar4) goto LAB_005704a5;
  if ((char)param_4 == '\0') {
    istreambuf_iterator<char,std::char_traits<char>_>::_Peek
              ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
  }
  pcVar1 = *(code **)(*piVar7 + 0x28);
  guard_check_icall(CONCAT13(param_5._0_1_,CONCAT21(param_4._2_2_,param_4._1_1_)),0);
  cVar5 = (*pcVar1)();
  if (((cVar5 != ':') && (cVar5 != ',')) && (cVar5 != '/')) goto LAB_005704a5;
  do {
    istreambuf_iterator<char,std::char_traits<char>_>::_Inc
              ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
LAB_005704a5:
    bVar4 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                      ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,
                       (istreambuf_iterator<char,struct_std::char_traits<char>_> *)&param_5);
    if (bVar4) break;
    if ((char)param_4 == '\0') {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek
                ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
    }
  } while ((*(byte *)(piVar7[3] + (uint)param_4._1_1_ * 2) & 0x48) != 0);
  bVar4 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                    ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,
                     (istreambuf_iterator<char,struct_std::char_traits<char>_> *)&param_5);
  if (!bVar4) {
    uVar6 = CONCAT22(param_4._2_2_,CONCAT11(param_4._1_1_,(char)param_4));
    if ((char)param_4 == '\0') {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek
                ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
      uVar6 = CONCAT22(param_4._2_2_,CONCAT11(param_4._1_1_,(char)param_4));
    }
    iVar3 = local_18;
    ptVar10 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
              (uint)param_4._1_1_;
    if (((uint)(int)*(short *)(piVar7[3] + (int)ptVar10 * 2) >> 2 & 1) == 0) {
      if (local_18 == 2) {
        *puVar2 = *puVar2 | 2;
      }
      else {
        puVar8 = (undefined4 *)
                 get_monthname(local_2c,param_3,uVar6,param_5,param_6,param_7,puVar2,param_9);
        param_3 = *puVar8;
        uVar6 = puVar8[1];
        param_4._0_1_ = (char)uVar6;
        param_4._1_1_ = (byte)((uint)uVar6 >> 8);
        param_4._2_2_ = (undefined2)((uint)uVar6 >> 0x10);
        if (iVar3 == 4) {
          local_18 = 3;
        }
      }
    }
    else if ((local_18 == 1) || (local_18 == 3)) {
      pcVar11 = (ctype<char> *)(param_9 + 0x10);
      uVar9 = _Getint(ptVar10,(istreambuf_iterator<char,std::char_traits<char>_> *)local_14,
                      (istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,(int)&param_5,1,
                      (int *)0xc,pcVar11);
      *puVar2 = *puVar2 | uVar9;
      *(int *)pcVar11 = *(int *)pcVar11 + -1;
    }
    else {
      uVar9 = _Getint(ptVar10,(istreambuf_iterator<char,std::char_traits<char>_> *)local_14,
                      (istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,(int)&param_5,1,
                      (int *)0x1f,(ctype<char> *)(param_9 + 0xc));
      *puVar2 = *puVar2 | uVar9;
    }
  }
  while (bVar4 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                           ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,
                            (istreambuf_iterator<char,struct_std::char_traits<char>_> *)&param_5),
        !bVar4) {
    if ((char)param_4 == '\0') {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek
                ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
    }
    if ((*(byte *)(piVar7[3] + (uint)param_4._1_1_ * 2) & 0x48) == 0) break;
    istreambuf_iterator<char,std::char_traits<char>_>::_Inc
              ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
  }
  bVar4 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                    ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,
                     (istreambuf_iterator<char,struct_std::char_traits<char>_> *)&param_5);
  if (bVar4) goto LAB_0057061a;
  if ((char)param_4 == '\0') {
    istreambuf_iterator<char,std::char_traits<char>_>::_Peek
              ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
  }
  pcVar1 = *(code **)(*piVar7 + 0x28);
  guard_check_icall(CONCAT13(param_5._0_1_,CONCAT21(param_4._2_2_,param_4._1_1_)),0);
  cVar5 = (*pcVar1)();
  if (((cVar5 != ':') && (cVar5 != ',')) && (cVar5 != '/')) goto LAB_0057061a;
  do {
    istreambuf_iterator<char,std::char_traits<char>_>::_Inc
              ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
LAB_0057061a:
    bVar4 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                      ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,
                       (istreambuf_iterator<char,struct_std::char_traits<char>_> *)&param_5);
    if (bVar4) break;
    if ((char)param_4 == '\0') {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek
                ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
    }
  } while ((*(byte *)(piVar7[3] + (uint)param_4._1_1_ * 2) & 0x48) != 0);
  bVar4 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                    ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,
                     (istreambuf_iterator<char,struct_std::char_traits<char>_> *)&param_5);
  if (bVar4) {
LAB_0057063a:
    *puVar2 = *puVar2 | 2;
  }
  else {
    uVar6 = CONCAT22(param_4._2_2_,CONCAT11(param_4._1_1_,(char)param_4));
    if ((char)param_4 == '\0') {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek
                ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
      uVar6 = CONCAT22(param_4._2_2_,CONCAT11(param_4._1_1_,(char)param_4));
    }
    ptVar10 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
              (uint)param_4._1_1_;
    if (((uint)(int)*(short *)(piVar7[3] + (int)ptVar10 * 2) >> 2 & 1) == 0) {
      if (local_18 != 4) goto LAB_0057063a;
      puVar8 = (undefined4 *)
               get_monthname(local_2c,param_3,uVar6,param_5,param_6,param_7,puVar2,param_9);
    }
    else {
      if (local_18 == 4) {
        pcVar11 = (ctype<char> *)(param_9 + 0x10);
        uVar9 = _Getint(ptVar10,(istreambuf_iterator<char,std::char_traits<char>_> *)local_14,
                        (istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,(int)&param_5,
                        1,(int *)0xc,pcVar11);
        *puVar2 = *puVar2 | uVar9;
        *(int *)pcVar11 = *(int *)pcVar11 + -1;
        goto LAB_00570708;
      }
      if (local_18 == 3) {
        uVar9 = _Getint(ptVar10,(istreambuf_iterator<char,std::char_traits<char>_> *)local_14,
                        (istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,(int)&param_5,
                        1,(int *)0x1f,(ctype<char> *)(param_9 + 0xc));
        *puVar2 = *puVar2 | uVar9;
        goto LAB_00570708;
      }
      puVar8 = (undefined4 *)get_year(local_34,param_3,uVar6,param_5,param_6,param_7,puVar2,param_9)
      ;
    }
    param_3 = *puVar8;
    uVar6 = puVar8[1];
    param_4._0_1_ = (char)uVar6;
    param_4._1_1_ = (byte)((uint)uVar6 >> 8);
    param_4._2_2_ = (undefined2)((uint)uVar6 >> 0x10);
  }
LAB_00570708:
  bVar4 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                    ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,
                     (istreambuf_iterator<char,struct_std::char_traits<char>_> *)&param_5);
  if (bVar4) {
    *puVar2 = *puVar2 | 1;
  }
  *param_2 = param_3;
  param_2[1] = CONCAT22(param_4._2_2_,CONCAT11(param_4._1_1_,(char)param_4));
  return;
}

