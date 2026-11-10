// rea decompile_all
// name: COleControlSite::XRowsetNotify::OnFieldChange
// address: 0x44514b
// body: available
// range: 0x44514b-0x445217 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual long __stdcall COleControlSite::XRowsetNotify::OnFieldChange(struct IRowset
   *,unsigned long,unsigned long,unsigned long * const,unsigned long,unsigned long,int)
   
   Library: Visual Studio 2015 Release */

long COleControlSite::XRowsetNotify::OnFieldChange
               (IRowset *param_1,ulong param_2,ulong param_3,ulong *param_4,ulong param_5,
               ulong param_6,int param_7)

{
  CDataSourceControl *this;
  code *pcVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  long local_1c;
  undefined4 local_18;
  undefined4 local_14;
  CDataSourceControl *local_10;
  IRowset *local_c;
  
  local_c = param_1 + -0xec;
  FUN_00434a7a(*(undefined4 *)(param_1 + -0xd0));
  uVar2 = 0;
  if (param_7 == 0) {
    uVar2 = 1;
  }
  else if (param_7 == 1) {
    uVar2 = 4;
  }
  else if (param_7 == 2) {
    uVar2 = 6;
  }
  else if (param_7 == 3) {
    uVar2 = 5;
  }
  else if (param_7 == 4) {
    uVar2 = 7;
    this = *(CDataSourceControl **)(local_c + 0x90);
    lVar3 = 0;
    local_10 = this;
    if (this == (CDataSourceControl *)0x0) goto LAB_00445205;
    if (*(int *)(this + 0x44) == 0) {
      *(undefined4 *)(this + 0x44) = 1;
      CDataSourceControl::GetBoundClientRow(this);
      *(undefined4 *)(this + 0x44) = 0;
      pcVar1 = *(code **)(*(int *)this + 0x14);
      guard_check_icall();
      (*pcVar1)();
    }
  }
  local_30 = 0xffffffff;
  local_34 = 3;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_14 = 6;
  local_18 = uVar2;
  FUN_004450e2(&local_34);
  lVar3 = local_1c;
LAB_00445205:
  guard_check_icall();
  return lVar3;
}

