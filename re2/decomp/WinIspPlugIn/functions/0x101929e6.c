// rea decompile_all
// name: std::time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::_Getfmt
// address: 0x101929e6
// body: available
// range: 0x101929e6-0x10192b0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: class std::istreambuf_iterator<char,struct std::char_traits<char> > __thiscall
   std::time_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> >
   >::_Getfmt(class std::istreambuf_iterator<char,struct std::char_traits<char> >,class
   std::istreambuf_iterator<char,struct std::char_traits<char> >,class std::ios_base &,int &,struct
   tm *,char const *)const 
   
   Library: Visual Studio 2015 Release */

void __thiscall
std::time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::_Getfmt
          (undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,uint *param_8,undefined4 param_9,
          char *param_10)

{
  int iVar1;
  code *pcVar2;
  uint *puVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  int *local_18;
  int *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x101929f2;
  uVar6 = FUN_100072b0(local_20);
  local_8 = 0;
  piVar7 = (int *)FUN_1000c530(uVar6);
  local_8 = 0xffffffff;
  local_14 = piVar7;
  FUN_10006a30();
  puVar3 = param_8;
  pcVar9 = param_10;
  do {
    cVar4 = *pcVar9;
    if (cVar4 == '\0') {
LAB_10192ae5:
      bVar5 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                        ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,
                         (istreambuf_iterator<char,struct_std::char_traits<char>_> *)&param_5);
      if (bVar5) {
        *puVar3 = *puVar3 | 1;
      }
      *param_2 = param_3;
      param_2[1] = CONCAT22(param_4._2_2_,CONCAT11(param_4._1_1_,(char)param_4));
      return;
    }
    if (cVar4 == '%') {
      pcVar9 = pcVar9 + 1;
      iVar1 = *local_18;
      guard_check_icall(local_28,param_3,
                        CONCAT22(param_4._2_2_,CONCAT11(param_4._1_1_,(char)param_4)),param_5,
                        param_6,param_7,puVar3,param_9,*pcVar9,0);
      puVar8 = (undefined4 *)(**(code **)(iVar1 + 0x24))();
      param_3 = *puVar8;
      uVar6 = puVar8[1];
      param_4._0_1_ = (char)uVar6;
      param_4._1_1_ = (byte)((uint)uVar6 >> 8);
      param_4._2_2_ = (undefined2)((uint)uVar6 >> 0x10);
      piVar7 = local_14;
    }
    else if (cVar4 == ' ') {
      while (bVar5 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                               ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,
                                (istreambuf_iterator<char,struct_std::char_traits<char>_> *)&param_5
                               ), !bVar5) {
        if ((char)param_4 == '\0') {
          istreambuf_iterator<char,std::char_traits<char>_>::_Peek
                    ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
        }
        if ((*(byte *)(piVar7[3] + (uint)param_4._1_1_ * 2) & 0x48) == 0) break;
        istreambuf_iterator<char,std::char_traits<char>_>::_Inc
                  ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
      }
    }
    else {
      if ((char)param_4 == '\0') {
        istreambuf_iterator<char,std::char_traits<char>_>::_Peek
                  ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
      }
      pcVar2 = *(code **)(*piVar7 + 0x28);
      guard_check_icall(CONCAT13(param_5._0_1_,CONCAT21(param_4._2_2_,param_4._1_1_)),0);
      cVar4 = (*pcVar2)();
      if (cVar4 != *pcVar9) {
        *puVar3 = *puVar3 | 2;
        goto LAB_10192ae5;
      }
      istreambuf_iterator<char,std::char_traits<char>_>::_Inc
                ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
      piVar7 = local_14;
    }
    pcVar9 = pcVar9 + 1;
  } while( true );
}

