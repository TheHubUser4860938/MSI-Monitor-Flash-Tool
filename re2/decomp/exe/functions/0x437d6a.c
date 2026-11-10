// rea decompile_all
// name: CommonInit
// address: 0x437d6a
// body: available
// range: 0x437d6a-0x437de8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x437d7e to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x437dca to 0x4d36dd FUN_004d36dd (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: void __thiscall CStdioFile::CommonInit(char const *,unsigned int,class
   ATL::CAtlTransactionManager *)
    protected: void __thiscall CStdioFile::CommonInit(wchar_t const *,unsigned int,class
   ATL::CAtlTransactionManager *)
   
   Library: Visual Studio 2015 Release */

void CommonInit(int param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  undefined **local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x437d76;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
  in_ECX[4] = param_3;
  in_ECX[5] = 0;
  CFileException(0,0xffffffff,0);
  local_8 = 0;
  pcVar1 = *(code **)(*in_ECX + 0x24);
  guard_check_icall(param_1,param_2,local_24);
  iVar2 = (*pcVar1)();
  if (iVar2 == 0) {
    uVar3 = FUN_0040ee70();
                    /* WARNING: Subroutine does not return */
    FUN_004d36dd(local_1c,local_18,uVar3);
  }
  local_24[0] = CFileException::vftable;
  FUN_0040efa0();
  return;
}

