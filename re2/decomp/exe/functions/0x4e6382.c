// rea decompile_all
// name: CMFCToolBarButton
// address: 0x4e6382
// body: available
// range: 0x4e6382-0x4e646b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall CMFCToolBarButton::CMFCToolBarButton(unsigned int,int,char const *,int,int)
    public: __thiscall CMFCToolBarButton::CMFCToolBarButton(unsigned int,int,wchar_t const
   *,int,int)
   
   Library: Visual Studio 2015 Release */

void CMFCToolBarButton(undefined4 param_1,int param_2,undefined **param_3,undefined4 param_4,
                      undefined4 param_5)

{
  undefined4 uVar1;
  CCommandManager *pCVar2;
  CMFCToolBarButton *in_ECX;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  *(undefined ***)in_ECX = CMFCToolBarButton::vftable;
  uVar1 = FUN_004295fe();
  FUN_0040eb30(uVar1);
  uVar1 = FUN_004295fe();
  FUN_0040eb30(uVar1);
  *(undefined4 *)(in_ECX + 0x54) = 0;
  *(undefined4 *)(in_ECX + 0x58) = 0;
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  *(undefined4 *)(in_ECX + 0x60) = 0;
  *(undefined4 *)(in_ECX + 100) = 0;
  *(undefined4 *)(in_ECX + 0x68) = 0;
  FUN_004e68c1();
  *(undefined4 *)(in_ECX + 0x3c) = param_5;
  *(undefined4 *)(in_ECX + 0x20) = param_1;
  *(undefined4 *)(in_ECX + 4) = param_4;
  CMFCToolBarButton::SetImage(in_ECX,param_2);
  if (param_3 == (undefined **)0x0) {
    param_3 = &PTR_005e8934;
  }
  FUN_00415ad0(param_3);
  uVar3 = *(uint *)(in_ECX + 0x20);
  if ((uVar3 != 0) && (*(int *)(in_ECX + 0x3c) == 0)) {
    if (*(int *)(in_ECX + 4) == 0) {
      iVar5 = 0;
      if (*(int *)(in_ECX + 0x34) == -1) {
        pCVar2 = (CCommandManager *)FUN_004b1aad();
        iVar5 = CCommandManager::GetCmdImage(pCVar2,uVar3,iVar5);
        *(int *)(in_ECX + 0x34) = iVar5;
        return;
      }
      iVar4 = *(int *)(in_ECX + 0x34);
    }
    else {
      iVar5 = 1;
      if (*(int *)(in_ECX + 0x38) == -1) {
        pCVar2 = (CCommandManager *)FUN_004b1aad();
        iVar5 = CCommandManager::GetCmdImage(pCVar2,uVar3,iVar5);
        *(int *)(in_ECX + 0x38) = iVar5;
        return;
      }
      iVar4 = *(int *)(in_ECX + 0x38);
    }
    pCVar2 = (CCommandManager *)FUN_004b1aad();
    CCommandManager::SetCmdImage(pCVar2,uVar3,iVar4,iVar5);
  }
  return;
}

