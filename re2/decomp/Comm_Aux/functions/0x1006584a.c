// rea decompile_all
// name: CDataRecoveryHandler::CreateDocumentInfo
// address: 0x1006584a
// body: available
// range: 0x1006584a-0x1006597a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CDataRecoveryHandler::CreateDocumentInfo(class CDocument *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CDataRecoveryHandler::CreateDocumentInfo(CDataRecoveryHandler *this,CDocument *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_18 [4];
  char *local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x10065856;
  if ((((byte)this[0xb4] & 0x10) != 0) && (*(int *)(this + 0xc4) == 0)) {
    uVar2 = FUN_10048e90();
    FUN_10034c30(uVar2);
    local_8 = 0;
    iVar3 = CMap<CDocument*,CDocument*,ATL::CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_>,char_const*>
            ::Lookup((CMap<CDocument*,CDocument*,ATL::CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_>,char_const*>
                      *)(this + 0x58),param_1,
                     (CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_> *)local_14);
    if (iVar3 != 0) {
      CMap<CDocument*,CDocument*,ATL::CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_>,char_const*>
      ::RemoveKey((CMap<CDocument*,CDocument*,ATL::CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_>,char_const*>
                   *)(this + 0x58),param_1);
      CMap<CDocument*,CDocument*,ATL::CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_>,char_const*>
      ::RemoveKey((CMap<CDocument*,CDocument*,ATL::CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_>,char_const*>
                   *)(this + 0x74),param_1);
      CMap<ATL::CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_>,char_const*,CDocument*,CDocument*>
      ::RemoveKey((CMap<ATL::CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_>,char_const*,CDocument*,CDocument*>
                   *)(this + 0x20),local_14[0]);
      uVar2 = FUN_10048e90();
      FUN_10034c30(uVar2);
      local_8._0_1_ = 1;
      Lookup(local_14[0],local_18);
      pcVar1 = *(code **)(*(int *)this + 0x54);
      guard_check_icall(local_18);
      (*pcVar1)();
      CMap<ATL::CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_>,char_const*,ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>,char_const*>
      ::RemoveKey((CMap<ATL::CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_>,char_const*,ATL::CStringT<char,class_StrTraitMFC<char,class_ATL::ChTraitsCRT<char>_>_>,char_const*>
                   *)(this + 4),local_14[0]);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_10034f00();
    }
    pcVar1 = *(code **)(*(int *)this + 0x68);
    guard_check_icall(local_18,param_1);
    uVar2 = (*pcVar1)();
    local_8._0_1_ = 2;
    FUN_10034940(uVar2);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_10034f00();
    FUN_100bee0c(param_1);
    FUN_10034940(local_14);
    FUN_100652e7(local_14[0]);
    FUN_100352a0(&DAT_101e24d0);
    FUN_10034f00();
  }
  return 1;
}

