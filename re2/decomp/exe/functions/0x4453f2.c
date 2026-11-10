// rea decompile_all
// name: COleControlSite::XRowsetNotify::OnRowChange
// address: 0x4453f2
// body: available
// range: 0x4453f2-0x44554b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual long __stdcall COleControlSite::XRowsetNotify::OnRowChange(struct IRowset
   *,unsigned long,unsigned long const * const,unsigned long,unsigned long,int)
   
   Library: Visual Studio 2015 Release */

long COleControlSite::XRowsetNotify::OnRowChange
               (IRowset *param_1,ulong param_2,ulong *param_3,ulong param_4,ulong param_5,
               int param_6)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_20;
  int local_1c;
  int local_18;
  IRowset *local_14;
  CDataSourceControl *local_10;
  int local_c;
  
  local_14 = param_1 + -0xec;
  FUN_00434a7a(*(undefined4 *)(param_1 + -0xd0));
  lVar3 = 0;
  local_c = 0;
  if (param_6 == 0) {
    local_c = 1;
  }
  else if (param_6 == 1) {
    local_c = 4;
  }
  else if (param_6 == 2) {
    local_c = 6;
  }
  else if (param_6 == 3) {
    local_c = 5;
  }
  else if (param_6 == 4) {
    local_c = 7;
  }
  if (param_5 == 4) {
    iVar4 = 7;
  }
  else if (param_5 == 6) {
    iVar4 = 3;
  }
  else if (param_5 == 8) {
    iVar4 = 5;
  }
  else {
    iVar4 = 0;
    if (param_5 == 0xd) {
      iVar4 = 2;
    }
  }
  local_10 = *(CDataSourceControl **)(param_1 + -0x5c);
  if (local_10 == (CDataSourceControl *)0x0) goto LAB_00445539;
  if (iVar4 == 2) {
    if (local_c != 4) {
LAB_004454ac:
      if ((local_c == 6) && (iVar4 == 5)) goto LAB_004454b6;
      goto LAB_00445501;
    }
    pcVar1 = *(code **)(*(int *)local_10 + 0x18);
    guard_check_icall();
    (*pcVar1)();
  }
  else {
    if ((iVar4 != 7) || (param_3 != (ulong *)0x1)) goto LAB_004454ac;
LAB_004454b6:
    pcVar1 = *(code **)(*(int *)local_10 + 0x18);
    guard_check_icall();
    (*pcVar1)();
    *(undefined4 *)(*(int *)(local_10 + 0x50) + 0xc) = *(undefined4 *)param_4;
    iVar2 = *(int *)(local_10 + 0x44);
    *(undefined4 *)(local_10 + 0x44) = 1;
    CDataSourceControl::GetBoundClientRow(local_10);
    *(int *)(local_10 + 0x44) = iVar2;
    if (iVar2 == 0) {
      pcVar1 = *(code **)(*(int *)local_10 + 0x14);
      guard_check_icall();
      (*pcVar1)();
    }
LAB_00445501:
    if (iVar4 == 0) goto LAB_00445539;
  }
  local_34 = 0xffffffff;
  local_1c = local_c;
  local_38 = 3;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = iVar4;
  FUN_004450e2(&local_38);
  if (local_20 < 0) {
    lVar3 = local_20;
  }
LAB_00445539:
  guard_check_icall();
  return lVar3;
}

