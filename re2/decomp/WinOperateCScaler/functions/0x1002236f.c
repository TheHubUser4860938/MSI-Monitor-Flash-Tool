// rea decompile_all
// name: CWinApp::RegisterWithRestartManager
// address: 0x1002236f
// body: available
// range: 0x1002236f-0x100225cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual long __thiscall CWinApp::RegisterWithRestartManager(int,class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > const &)
   
   Library: Visual Studio 2015 Release */

long __thiscall
CWinApp::RegisterWithRestartManager
          (CWinApp *this,int param_1,
          CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  long lVar7;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  int *local_40;
  int local_38;
  wchar_t *local_34;
  int local_30;
  int *local_2c;
  CWinApp *local_28;
  GUID local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  local_8 = 0x1002237b;
  local_28 = this;
  uVar3 = FUN_1001e20a();
  FUN_1001d224(uVar3);
  local_8 = 0;
  uVar3 = FUN_1001e20a();
  FUN_1001d224(uVar3);
  local_8._0_1_ = 1;
  iVar4 = FUN_100187a0(*(int *)param_2 + -0x10);
  local_38 = iVar4 + 0x10;
  local_8._0_1_ = 2;
  uVar2 = (undefined1)local_8;
  local_8._0_1_ = 2;
  if (*(int *)(iVar4 + 4) == 0) {
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
    uVar3 = FUN_1001e20a();
    FUN_1001d224(uVar3);
    local_8._0_1_ = 3;
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (this_00,(wchar_t *)&local_38,L"%08lX-%04X-%04x-%02X%02X-%02X%02X%02X%02X%02X%02X",
               local_24.Data1,local_24._4_4_ & 0xffff,(uint)local_24._4_4_ >> 0x10,
               local_24.Data4._0_4_ & 0xff,(uint)local_24.Data4._0_4_ >> 8 & 0xff,
               (uint)local_24.Data4._0_4_ >> 0x10 & 0xff,(uint)local_24.Data4._0_4_ >> 0x18,
               local_24.Data4._4_4_ & 0xff,(uint)local_24.Data4._4_4_ >> 8 & 0xff,
               (uint)local_24.Data4._4_4_ >> 0x10 & 0xff,(uint)local_24.Data4._4_4_ >> 0x18);
    local_8._0_1_ = 2;
    ATL::CStringData::Release((CStringData *)((int)local_2c + -0x10));
    uVar2 = (undefined1)local_8;
  }
  local_8._0_1_ = uVar2;
  ATL::CSimpleStringT<wchar_t,0>::Append
            ((CSimpleStringT<wchar_t,0> *)&local_30,*(wchar_t **)(this + 0x48));
  ATL::CSimpleStringT<wchar_t,0>::Append
            ((CSimpleStringT<wchar_t,0> *)&local_34,L"RestartByRestartManager");
  ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)&local_34,L":");
  FUN_1001d630(local_38,*(undefined4 *)(local_38 + -0xc));
  iVar4 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                    ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_30
                     ,local_34,0);
  if (iVar4 == -1) {
    ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)&local_30,L" /");
    FUN_1001d630(local_34,*(undefined4 *)(local_34 + -6));
  }
  pcVar1 = *(code **)(*(int *)this + 0xfc);
  guard_check_icall();
  local_2c = (int *)(*pcVar1)();
  if (local_2c != (int *)0x0) {
    pcVar1 = *(code **)(*local_2c + 0x24);
    guard_check_icall(&local_38);
    (*pcVar1)();
  }
  if (param_1 == 0) {
    puVar5 = (undefined4 *)FUN_10021708(local_30);
    uVar3 = *puVar5;
    iVar4 = *(int *)this;
    pcVar1 = *(code **)(iVar4 + 0xf0);
    local_8 = CONCAT31(local_8._1_3_,5);
    guard_check_icall(0,0,0,0);
    uVar6 = (*pcVar1)();
    pcVar1 = *(code **)(iVar4 + 0xcc);
    guard_check_icall(uVar3,uVar6);
    (*pcVar1)();
    local_40 = local_2c;
  }
  else {
    puVar5 = (undefined4 *)FUN_10021708(local_30);
    local_2c = (int *)*puVar5;
    iVar4 = *(int *)this;
    local_8 = CONCAT31(local_8._1_3_,4);
    pcVar1 = *(code **)(iVar4 + 0xf8);
    guard_check_icall(0);
    uVar3 = (*pcVar1)();
    pcVar1 = *(code **)(*(int *)local_28 + 0xf4);
    guard_check_icall(uVar3);
    uVar3 = (*pcVar1)();
    pcVar1 = *(code **)(*(int *)local_28 + 0xf0);
    guard_check_icall(AfxApplicationRecoveryWrapper,uVar3);
    uVar3 = (*pcVar1)();
    pcVar1 = *(code **)(iVar4 + 0xcc);
    guard_check_icall(local_2c,uVar3);
    (*pcVar1)();
  }
  Ordinal_6(local_40);
  ATL::CStringData::Release((CStringData *)(local_38 + -0x10));
  ATL::CStringData::Release((CStringData *)(local_34 + -8));
  ATL::CStringData::Release((CStringData *)(local_30 + -0x10));
  lVar7 = FUN_10154478();
  return lVar7;
}

