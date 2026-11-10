// rea decompile_all
// name: _AfxDispatchCmdMsg
// address: 0x1003c30b
// body: available
// range: 0x1003c30b-0x1003c411 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003c317 to 0x10038e31 FUN_10038e31 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __stdcall _AfxDispatchCmdMsg(class CCmdTarget *,unsigned int,int,void (__thiscall
   CCmdTarget::*)(void),void *,unsigned int,struct AFX_CMDHANDLERINFO *)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int _AfxDispatchCmdMsg(CCmdTarget *param_1,uint param_2,int param_3,_func_void *param_4,
                      void *param_5,uint param_6,AFX_CMDHANDLERINFO *param_7)

{
  uint uVar1;
  
  if (param_1 == (CCmdTarget *)0x0) {
LAB_1003c317:
                    /* WARNING: Subroutine does not return */
    FUN_10038e31();
  }
  uVar1 = 1;
  if (param_7 != (AFX_CMDHANDLERINFO *)0x0) {
    *(CCmdTarget **)param_7 = param_1;
    *(_func_void **)(param_7 + 4) = param_4;
    return 1;
  }
  switch(param_6) {
  case 0x39:
    (*param_4)();
    break;
  case 0x3a:
    uVar1 = (*param_4)();
    break;
  case 0x3b:
    param_5 = (void *)param_2;
    goto LAB_1003c360;
  case 0x3c:
    param_5 = (void *)param_2;
    goto LAB_1003c401;
  case 0x3d:
    if (param_5 == (void *)0x0) goto LAB_1003c317;
    (*param_4)(*(undefined4 *)((int)param_5 + 4),*(undefined4 *)param_5);
    break;
  case 0x3e:
    if (param_5 == (void *)0x0) goto LAB_1003c317;
    uVar1 = (*param_4)(*(undefined4 *)((int)param_5 + 4),*(undefined4 *)param_5);
    break;
  case 0x3f:
    if (param_5 == (void *)0x0) goto LAB_1003c317;
    (*param_4)(param_2,*(undefined4 *)((int)param_5 + 4),*(undefined4 *)param_5);
    break;
  case 0x40:
    if (param_5 == (void *)0x0) goto LAB_1003c317;
    uVar1 = (*param_4)(param_2,*(undefined4 *)((int)param_5 + 4),*(undefined4 *)param_5);
    break;
  case 0x41:
    if (param_5 == (void *)0x0) goto LAB_1003c317;
    (*param_4)(param_5);
    goto LAB_1003c3d4;
  case 0x42:
    if (param_5 == (void *)0x0) goto LAB_1003c317;
    (*param_4)(param_5,param_2);
LAB_1003c3d4:
    uVar1 = (uint)(*(int *)((int)param_5 + 0x1c) == 0);
    *(undefined4 *)((int)param_5 + 0x1c) = 0;
    break;
  case 0x43:
LAB_1003c360:
    (*param_4)(param_5);
    break;
  case 0x44:
LAB_1003c401:
    uVar1 = (*param_4)(param_5);
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}

