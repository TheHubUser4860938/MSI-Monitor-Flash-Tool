// rea decompile_all
// name: RegisterWithRestartManager
// address: 0x1004d108
// body: available
// range: 0x1004d108-0x1004d365 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual long __thiscall CWinApp::RegisterWithRestartManager(int,class
   ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > > const &)
    public: virtual long __thiscall CWinApp::RegisterWithRestartManager(int,class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > const &)
   
   Library: Visual Studio 2015 Release */

void RegisterWithRestartManager(int param_1,int *param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *in_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  int *local_40;
  int local_38;
  int local_34;
  undefined4 local_30;
  int *local_2c;
  int *local_28;
  GUID local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  local_8 = 0x1004d114;
  local_28 = in_ECX;
  uVar3 = FUN_10049868();
  FUN_100476a0(uVar3);
  local_8 = 0;
  uVar3 = FUN_10049868();
  FUN_100476a0(uVar3);
  local_8._0_1_ = 1;
  iVar4 = FUN_10047580(*param_2 + -0x10);
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
    uVar3 = FUN_10049868();
    FUN_100476a0(uVar3);
    local_8._0_1_ = 3;
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (this,(wchar_t *)&local_38,L"%08lX-%04X-%04x-%02X%02X-%02X%02X%02X%02X%02X%02X",
               local_24.Data1,local_24._4_4_ & 0xffff,(uint)local_24._4_4_ >> 0x10,
               local_24.Data4._0_4_ & 0xff,(uint)local_24.Data4._0_4_ >> 8 & 0xff,
               (uint)local_24.Data4._0_4_ >> 0x10 & 0xff,(uint)local_24.Data4._0_4_ >> 0x18,
               local_24.Data4._4_4_ & 0xff,(uint)local_24.Data4._4_4_ >> 8 & 0xff,
               (uint)local_24.Data4._4_4_ >> 0x10 & 0xff,(uint)local_24.Data4._4_4_ >> 0x18);
    local_8._0_1_ = 2;
    FUN_100476d0();
    uVar2 = (undefined1)local_8;
  }
  local_8._0_1_ = uVar2;
  FUN_10047140(in_ECX[0x12]);
  FUN_100479f0(L"RestartByRestartManager");
  FUN_100479f0(&DAT_1021a708);
  FUN_10047a30(local_38,*(undefined4 *)(local_38 + -0xc));
  iVar4 = FUN_100477c0(local_34,0);
  if (iVar4 == -1) {
    FUN_100479f0(&DAT_101d4abc);
    FUN_10047a30(local_34,*(undefined4 *)(local_34 + -0xc));
  }
  pcVar1 = *(code **)(*in_ECX + 0xfc);
  guard_check_icall();
  local_2c = (int *)(*pcVar1)();
  if (local_2c != (int *)0x0) {
    pcVar1 = *(code **)(*local_2c + 0x24);
    guard_check_icall(&local_38);
    (*pcVar1)();
  }
  if (param_1 == 0) {
    puVar5 = (undefined4 *)FUN_1004c57b(local_30);
    uVar3 = *puVar5;
    iVar4 = *in_ECX;
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
    puVar5 = (undefined4 *)FUN_1004c57b(local_30);
    local_2c = (int *)*puVar5;
    iVar4 = *in_ECX;
    local_8 = CONCAT31(local_8._1_3_,4);
    pcVar1 = *(code **)(iVar4 + 0xf8);
    guard_check_icall(0);
    uVar3 = (*pcVar1)();
    pcVar1 = *(code **)(*local_28 + 0xf4);
    guard_check_icall(uVar3);
    uVar3 = (*pcVar1)();
    pcVar1 = *(code **)(*local_28 + 0xf0);
    guard_check_icall(AfxApplicationRecoveryWrapper,uVar3);
    uVar3 = (*pcVar1)();
    pcVar1 = *(code **)(iVar4 + 0xcc);
    guard_check_icall(local_2c,uVar3);
    (*pcVar1)();
  }
  Ordinal_6(local_40);
  FUN_100476d0();
  FUN_100476d0();
  FUN_100476d0();
  FUN_1018015d();
  return;
}

