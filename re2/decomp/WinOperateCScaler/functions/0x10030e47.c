// rea decompile_all
// name: CDataRecoveryHandler::GenerateAutosaveFileName
// address: 0x10030e47
// body: available
// range: 0x10030e47-0x10030f9a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > > __thiscall CDataRecoveryHandler::GenerateAutosaveFileName(class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > const &)const
   
   
   Library: Visual Studio 2015 Release */

void __thiscall
CDataRecoveryHandler::GenerateAutosaveFileName
          (CDataRecoveryHandler *this,
          CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  int *in_stack_00000008;
  int local_34 [2];
  int local_2c;
  CDataRecoveryHandler *local_28;
  GUID local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0;
  local_34[1] = 0;
  iVar1 = *(int *)(*in_stack_00000008 + -0xc);
  local_28 = this;
  iVar3 = FUN_1016e179(*in_stack_00000008,0x5c);
  if (iVar3 == 0) {
    iVar3 = -1;
  }
  else {
    iVar3 = iVar3 - *in_stack_00000008 >> 1;
  }
  FUN_10018e20(local_34,(iVar1 - iVar3) + -1);
  local_8 = 1;
  local_24.Data1 = 0;
  local_24.Data2 = 0;
  local_24.Data3 = 0;
  local_24.Data4[0] = '\0';
  local_24.Data4[1] = '\0';
  local_24.Data4[2] = '\0';
  local_24.Data4[3] = '\0';
  local_24.Data4[4] = '\0';
  local_24.Data4[5] = '\0';
  local_24.Data4[6] = '\0';
  local_24.Data4[7] = '\0';
  CoCreateGuid(&local_24);
  uVar4 = FUN_1001e20a();
  FUN_1001d224(uVar4);
  local_8._0_1_ = 2;
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this_00,(wchar_t *)&local_2c,L"%08lX%04X%04x%02X%02X%02X%02X%02X%02X%02X%02X",
             local_24.Data1,local_24._4_4_ & 0xffff,(uint)local_24._4_4_ >> 0x10,
             local_24.Data4._0_4_ & 0xff,(uint)local_24.Data4._0_4_ >> 8 & 0xff,
             (uint)local_24.Data4._0_4_ >> 0x10 & 0xff,(uint)local_24.Data4._0_4_ >> 0x18,
             local_24.Data4._4_4_ & 0xff,(uint)local_24.Data4._4_4_ >> 8 & 0xff,
             (uint)local_24.Data4._4_4_ >> 0x10 & 0xff,(uint)local_24.Data4._4_4_ >> 0x18);
  uVar4 = FUN_1001e20a();
  FUN_1001d224(uVar4);
  local_34[1] = 1;
  pcVar2 = *(code **)(*(int *)local_28 + 0x18);
  guard_check_icall(&local_28);
  uVar4 = (*pcVar2)();
  local_8._0_1_ = 3;
  FUN_10018680(uVar4);
  local_8 = CONCAT31(local_8._1_3_,2);
  ATL::CStringData::Release((CStringData *)(local_28 + -0x10));
  ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)param_1,L"\\");
  FUN_1001d630(local_2c,*(undefined4 *)(local_2c + -0xc));
  ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)param_1,L".");
  FUN_1001d630(local_34[0],*(undefined4 *)(local_34[0] + -0xc));
  ATL::CStringData::Release((CStringData *)(local_2c + -0x10));
  ATL::CStringData::Release((CStringData *)(local_34[0] + -0x10));
  FUN_10154478();
  return;
}

