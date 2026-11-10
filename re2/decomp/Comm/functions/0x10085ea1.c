// rea decompile_all
// name: CFrameWnd::OnCmdMsg
// address: 0x10085ea1
// body: available
// range: 0x10085ea1-0x10085f42 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CFrameWnd::OnCmdMsg(unsigned int,int,void *,struct
   AFX_CMDHANDLERINFO *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CFrameWnd::OnCmdMsg(CFrameWnd *this,uint param_1,int param_2,void *param_3,
                   AFX_CMDHANDLERINFO *param_4)

{
  code *pcVar1;
  int iVar2;
  AFX_MODULE_STATE *pAVar3;
  int iVar4;
  CPushRoutingFrame local_20 [12];
  int *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x10085ead;
  CPushRoutingFrame::CPushRoutingFrame(local_20,this);
  local_14 = *(int **)(this + 0xdc);
  iVar4 = 0;
  local_8 = 0;
  if (local_14 == (int *)0x0) {
LAB_10085eeb:
    iVar2 = FUN_1001689f(param_1,param_2,param_3,param_4);
    if (iVar2 == 0) {
      pAVar3 = AfxGetModuleState();
      if (*(int **)(pAVar3 + 4) == (int *)0x0) goto LAB_10085f31;
      pcVar1 = *(code **)(**(int **)(pAVar3 + 4) + 0xc);
      guard_check_icall(param_1,param_2,param_3,param_4);
      iVar2 = (*pcVar1)();
      if (iVar2 == 0) goto LAB_10085f31;
    }
  }
  else {
    pcVar1 = *(code **)(*local_14 + 0xc);
    guard_check_icall(param_1,param_2,param_3,param_4);
    iVar2 = (*pcVar1)();
    if (iVar2 == 0) goto LAB_10085eeb;
  }
  iVar4 = 1;
LAB_10085f31:
  CPushRoutingFrame::~CPushRoutingFrame(local_20);
  return iVar4;
}

