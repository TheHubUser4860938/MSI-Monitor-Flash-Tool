// rea decompile_all
// name: GetDocumentListName
// address: 0x1003101a
// body: available
// range: 0x1003101a-0x100310e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Type propagation algorithm not settling */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual class ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > >
   __thiscall CDataRecoveryHandler::GetDocumentListName(class CDocument *)const 
    public: virtual class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > > __thiscall CDataRecoveryHandler::GetDocumentListName(class
   CDocument *)const 
   
   Library: Visual Studio 2015 Release */

int * GetDocumentListName(int *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int local_20 [6];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_20[2] = 0;
  local_8 = 0;
  iVar2 = FUN_100187a0(*(int *)(param_2 + 0x24) + -0x10);
  *param_1 = iVar2 + 0x10;
  local_8 = 0;
  local_20[2] = 1;
  if (*(int *)(iVar2 + 4) == 0) {
    FUN_10018680(param_2 + 0x20);
    uVar3 = FUN_1001e20a();
    FUN_1001d224(uVar3);
    local_8 = 1;
    if (*(int **)(param_2 + 0x28) != (int *)0x0) {
      pcVar1 = *(code **)(**(int **)(param_2 + 0x28) + 100);
      guard_check_icall(local_20 + 3,4);
      iVar2 = (*pcVar1)();
      if ((iVar2 != 0) && (*(int *)(local_20[3] + -0xc) != 0)) {
        local_20[1] = 0;
        piVar4 = (int *)FUN_10024b14(local_20,&DAT_101ac254,local_20 + 1);
        local_8 = CONCAT31(local_8._1_3_,2);
        FUN_1001d630(*piVar4,*(undefined4 *)(*piVar4 + -0xc));
        ATL::CStringData::Release((CStringData *)(local_20[0] + -0x10));
      }
    }
    ATL::CStringData::Release((CStringData *)(local_20[3] + -0x10));
  }
  return param_1;
}

