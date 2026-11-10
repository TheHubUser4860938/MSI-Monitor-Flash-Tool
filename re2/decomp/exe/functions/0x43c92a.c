// rea decompile_all
// name: CDataRecoveryHandler::QueryRestoreAutosavedDocuments
// address: 0x43c92a
// body: available
// range: 0x43c92a-0x43cc18 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CDataRecoveryHandler::QueryRestoreAutosavedDocuments(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDataRecoveryHandler::QueryRestoreAutosavedDocuments(CDataRecoveryHandler *this)

{
  int iVar1;
  undefined4 uVar2;
  AFX_MODULE_STATE *pAVar3;
  int iVar4;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  wchar_t *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x43c936;
  iVar1 = _AfxIsTaskDialogSupported();
  if (iVar1 == 0) {
    uVar2 = FUN_004295fe();
    FUN_0040eb30(uVar2);
    local_8 = 5;
    uVar2 = FUN_004295fe();
    FUN_0040eb30(uVar2);
    local_8 = CONCAT31(local_8._1_3_,6);
    iVar1 = FUN_00435fce(0xf2e4);
    if (iVar1 != 0) {
      FUN_004160f0(iVar1,0xf2e4);
    }
    ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)local_14,L"\r\n");
    iVar1 = FUN_00435fce(0xf2e5);
    if (iVar1 != 0) {
      FUN_004160f0(iVar1,0xf2e5);
    }
    iVar1 = local_18;
    FUN_004157a0(local_18,*(undefined4 *)(local_18 + -0xc));
    ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)local_14,L"\r\n\r\n");
    iVar4 = FUN_00435fce(0xf2e6);
    if (iVar4 != 0) {
      FUN_004160f0(iVar4,0xf2e6);
      iVar1 = local_18;
    }
    FUN_004157a0(iVar1,*(undefined4 *)(iVar1 + -0xc));
    ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)local_14,L"\r\n\r\n");
    iVar4 = FUN_00435fce(0xf2e7);
    if (iVar4 != 0) {
      FUN_004160f0(iVar4,0xf2e7);
      iVar1 = local_18;
    }
    FUN_004157a0(iVar1,*(undefined4 *)(iVar1 + -0xc));
    local_28 = AfxMessageBox(local_14[0],4,0);
    FUN_0040efa0();
  }
  else {
    uVar2 = FUN_004295fe();
    FUN_0040eb30(uVar2);
    local_8 = 0;
    iVar1 = FUN_00435fce(0xf2e4);
    if (iVar1 != 0) {
      FUN_004160f0(iVar1,0xf2e4);
    }
    uVar2 = FUN_004295fe();
    FUN_0040eb30(uVar2);
    local_8 = CONCAT31(local_8._1_3_,1);
    iVar1 = FUN_00435fce(0xf2e5);
    if (iVar1 != 0) {
      FUN_004160f0(iVar1,0xf2e5);
    }
    ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)&local_18,L"\r\n");
    FUN_004157a0(local_20,*(undefined4 *)(local_20 + -0xc));
    uVar2 = FUN_004295fe();
    FUN_0040eb30(uVar2);
    local_8 = CONCAT31(local_8._1_3_,2);
    iVar1 = FUN_00435fce(0xf2e6);
    if (iVar1 != 0) {
      FUN_004160f0(iVar1,0xf2e6);
    }
    uVar2 = FUN_004295fe();
    FUN_0040eb30(uVar2);
    local_8 = CONCAT31(local_8._1_3_,3);
    iVar1 = FUN_00435fce(0xf2e7);
    if (iVar1 != 0) {
      FUN_004160f0(iVar1,0xf2e7);
    }
    pAVar3 = AfxGetModuleState();
    FUN_00415a10(*(undefined4 *)(*(int *)(pAVar3 + 4) + 0x50));
    local_8 = CONCAT31(local_8._1_3_,4);
    iVar1 = CTaskDialog::ShowDialog
                      ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_1c,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_18,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_24,0xf2e8,0xf2e9,0,0x10,
                       (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       local_14);
    FUN_0040efa0();
    local_28 = (iVar1 != 0xf2e8) + 6;
    FUN_0040efa0();
    FUN_0040efa0();
    FUN_0040efa0();
  }
  local_8 = 0xffffffff;
  FUN_0040efa0();
  local_1c = -(uint)(*(int *)(this + 0x10) != 0);
  while (local_1c != 0) {
    uVar2 = FUN_004295fe();
    FUN_0040eb30(uVar2);
    local_8 = 7;
    uVar2 = FUN_004295fe();
    FUN_0040eb30(uVar2);
    local_8 = CONCAT31(local_8._1_3_,8);
    FUN_0043c565(&local_1c,&local_20,&local_24);
    if (*(int *)(local_24 + -0xc) != 0) {
      uVar2 = FUN_0054980b(local_20);
      *(bool *)uVar2 = local_28 == 6;
    }
    FUN_0040efa0();
    local_8 = 0xffffffff;
    FUN_0040efa0();
  }
  return;
}

