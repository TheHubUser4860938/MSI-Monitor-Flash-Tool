// rea decompile_all
// name: Getfmt
// address: 0x10188d49
// body: available
// range: 0x10188d49-0x10188e94 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: class std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short>
   > __thiscall std::time_get<unsigned short,class std::istreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > >::_Getfmt(class std::istreambuf_iterator<unsigned
   short,struct std::char_traits<unsigned short> >,class std::istreambuf_iterator<unsigned
   short,struct std::char_traits<unsigned short> >,class std::ios_base &,int &,struct tm *,char
   const *)const 
    protected: class std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > __thiscall
   std::time_get<wchar_t,class std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >
   >::_Getfmt(class std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >,class
   std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >,class std::ios_base &,int
   &,struct tm *,char const *)const 
   
   Library: Visual Studio 2015 Release */

void Getfmt(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
           undefined4 param_5,undefined4 param_6,uint *param_7,undefined4 param_8,char *param_9)

{
  int iVar1;
  code *pcVar2;
  uint *puVar3;
  char cVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  int *local_18;
  int *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x10188d55;
  uVar5 = FUN_100072b0(local_20);
  local_8 = 0;
  piVar6 = (int *)use_facet<>(uVar5);
  local_8 = 0xffffffff;
  local_14 = piVar6;
  FUN_10006a30();
  puVar3 = param_7;
  pcVar8 = param_9;
  do {
    cVar4 = *pcVar8;
    if (cVar4 == '\0') {
LAB_10188e6c:
      cVar4 = equal(&param_4);
      if (cVar4 != '\0') {
        *puVar3 = *puVar3 | 1;
      }
      *param_1 = param_2;
      param_1[1] = CONCAT22(param_3._2_2_,CONCAT11(param_3._1_1_,(char)param_3));
      return;
    }
    if (cVar4 == '%') {
      pcVar8 = pcVar8 + 1;
      iVar1 = *local_18;
      guard_check_icall(local_28,param_2,
                        CONCAT22(param_3._2_2_,CONCAT11(param_3._1_1_,(char)param_3)),
                        CONCAT22(param_4._2_2_,(undefined2)param_4),param_5,param_6,puVar3,param_8,
                        *pcVar8,0);
      puVar7 = (undefined4 *)(**(code **)(iVar1 + 0x24))();
      param_2 = *puVar7;
      uVar5 = puVar7[1];
      param_3._0_1_ = (char)uVar5;
      param_3._1_1_ = (undefined1)((uint)uVar5 >> 8);
      param_3._2_2_ = (undefined2)((uint)uVar5 >> 0x10);
    }
    else if (cVar4 == ' ') {
      cVar4 = equal(&param_4);
      while (cVar4 == '\0') {
        if ((char)param_3 == '\0') {
          Peek();
        }
        pcVar2 = *(code **)(*piVar6 + 0x10);
        guard_check_icall(0x48,CONCAT22((undefined2)param_4,param_3._2_2_));
        cVar4 = (*pcVar2)();
        if (cVar4 == '\0') break;
        Inc();
        cVar4 = equal(&param_4);
        piVar6 = local_14;
      }
    }
    else {
      if ((char)param_3 == '\0') {
        Peek();
      }
      pcVar2 = *(code **)(*piVar6 + 0x38);
      guard_check_icall(CONCAT22((undefined2)param_4,param_3._2_2_),0);
      cVar4 = (*pcVar2)();
      if (cVar4 != *pcVar8) {
        *puVar3 = *puVar3 | 2;
        goto LAB_10188e6c;
      }
      Inc();
    }
    pcVar8 = pcVar8 + 1;
    piVar6 = local_14;
  } while( true );
}

