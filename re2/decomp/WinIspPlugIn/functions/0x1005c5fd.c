// rea decompile_all
// name: CDataRecoveryHandler::AutosaveDocumentInfo
// address: 0x1005c5fd
// body: available
// range: 0x1005c5fd-0x1005c823 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CDataRecoveryHandler::AutosaveDocumentInfo(class CDocument *,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CDataRecoveryHandler::AutosaveDocumentInfo
          (CDataRecoveryHandler *this,CDocument *param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_20 [4];
  undefined4 local_1c;
  undefined1 local_18 [4];
  int local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x1005c609;
  if ((((byte)this[0xb4] & 0xc) == 0) || (param_1 == (CDocument *)0x0)) {
    return 0;
  }
  uVar2 = FUN_10049868();
  FUN_100476a0(uVar2);
  local_8 = 0;
  CMap<CDocument*,CDocument*,ATL::CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_>,char_const*>
  ::Lookup((CMap<CDocument*,CDocument*,ATL::CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_>,char_const*>
            *)(this + 0x58),param_1,
           (CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_> *)local_14);
  if (*(int *)(local_14[0] + -0xc) == 0) {
    pcVar1 = *(code **)(*(int *)this + 0x68);
    guard_check_icall(&local_1c,param_1);
    uVar2 = (*pcVar1)();
    local_8._0_1_ = 1;
    FUN_100475f0(uVar2);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_100476d0();
    FUN_100bfb26(param_1);
    FUN_100475f0(local_14);
    if (*(int *)(local_14[0] + -0xc) == 0) goto LAB_1005c80d;
  }
  uVar2 = FUN_10049868();
  FUN_100476a0(uVar2);
  local_8._0_1_ = 2;
  uVar2 = FUN_10049868();
  FUN_100476a0(uVar2);
  local_8 = CONCAT31(local_8._1_3_,3);
  pcVar1 = *(code **)(*(int *)param_1 + 0x60);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  if (iVar3 == 0) {
    iVar3 = Lookup(local_14[0],local_18);
    FUN_1005c258(local_14[0]);
    FUN_10047140(&PTR_1020e6b0);
    if (iVar3 != 0) {
      pcVar1 = *(code **)(*(int *)this + 0x54);
      guard_check_icall(local_18);
      (*pcVar1)();
    }
  }
  else {
    iVar3 = Lookup(local_14[0],local_18);
    if (iVar3 == 0) {
      FUN_1005c258(local_14[0]);
      FUN_10047140(&PTR_1020e6b0);
    }
    if (((byte)this[0xb4] & 0xc) != 0) {
      pcVar1 = *(code **)(*(int *)this + 0x6c);
      guard_check_icall(local_20,local_14);
      uVar2 = (*pcVar1)();
      local_8._0_1_ = 4;
      FUN_100475f0(uVar2);
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_100476d0();
      pcVar1 = *(code **)(*(int *)param_1 + 0xe0);
      guard_check_icall(local_1c,0);
      iVar3 = (*pcVar1)();
      if (iVar3 != 0) {
        FUN_1005c258(local_14[0]);
        FUN_100475f0(&local_1c);
        iVar3 = FUN_10046c20(local_1c);
        if (iVar3 != 0) {
          pcVar1 = *(code **)(*(int *)this + 0x54);
          guard_check_icall(local_18);
          (*pcVar1)();
        }
        pcVar1 = *(code **)(*(int *)param_1 + 100);
        guard_check_icall(param_2 != 0);
        (*pcVar1)();
      }
    }
  }
  FUN_100476d0();
  FUN_100476d0();
LAB_1005c80d:
  FUN_100476d0();
  return 1;
}

