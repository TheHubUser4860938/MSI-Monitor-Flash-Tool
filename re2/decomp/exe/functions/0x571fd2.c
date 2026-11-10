// rea decompile_all
// name: CallCatchBlock
// address: 0x571fd2
// body: available
// range: 0x571fd2-0x57205b inclusive
// range: 0x5720ec-0x572106 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void * __cdecl CallCatchBlock(struct EHExceptionRecord *,struct EHRegistrationNode *,struct
   _CONTEXT *,struct _s_FuncInfo const *,void *,int,unsigned long)
   
   Library: Visual Studio 2015 Release */

void * __cdecl
CallCatchBlock(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
              _s_FuncInfo *param_4,void *param_5,int param_6,ulong param_7)

{
  int iVar1;
  undefined1 local_4c [8];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  void *local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_006079e8;
  uStack_c = 0x571fde;
  local_20 = param_5;
  local_40 = 0;
  local_30 = *(undefined4 *)(param_2 + -4);
  local_34 = __CreateFrameInfo(local_4c,*(undefined4 *)(param_1 + 0x18));
  iVar1 = ___vcrt_getptd();
  local_38 = *(undefined4 *)(iVar1 + 0x10);
  iVar1 = ___vcrt_getptd();
  local_3c = *(undefined4 *)(iVar1 + 0x14);
  iVar1 = ___vcrt_getptd();
  *(EHExceptionRecord **)(iVar1 + 0x10) = param_1;
  iVar1 = ___vcrt_getptd();
  *(_CONTEXT **)(iVar1 + 0x14) = param_3;
  local_44 = 1;
  local_8 = (undefined *)0x1;
  local_20 = _CallCatchBlock2(param_2,param_4,param_5,param_6,param_7);
  local_8 = (undefined *)0xfffffffe;
  local_44 = 0;
  FUN_0057210d();
  return param_2;
}

