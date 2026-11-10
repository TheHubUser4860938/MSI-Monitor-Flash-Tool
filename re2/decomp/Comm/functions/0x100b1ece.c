// rea decompile_all
// name: CMDIFrameWndEx::ControlBarToTabbedDocument
// address: 0x100b1ece
// body: available
// range: 0x100b1ece-0x100b1fcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual class CMDIChildWndEx * __thiscall
   CMDIFrameWndEx::ControlBarToTabbedDocument(class CDockablePane *)
   
   Library: Visual Studio 2015 Release */

CMDIChildWndEx * __thiscall
CMDIFrameWndEx::ControlBarToTabbedDocument(CMDIFrameWndEx *this,CDockablePane *param_1)

{
  code *pcVar1;
  CMDIChildWndEx *pCVar2;
  undefined4 uVar3;
  LRESULT LVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined4 uVar9;
  CMDIChildWndEx *local_18;
  undefined4 local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x100b1eda;
  pCVar2 = (CMDIChildWndEx *)FUN_10011f7d(0x4e0);
  local_18 = (CMDIChildWndEx *)0x0;
  local_8 = 0;
  if (pCVar2 == (CMDIChildWndEx *)0x0) {
    pCVar2 = (CMDIChildWndEx *)0x0;
  }
  else {
    pCVar2 = (CMDIChildWndEx *)CMDIChildWndEx::CMDIChildWndEx(pCVar2);
  }
  local_8 = 0xffffffff;
  pcVar1 = *(code **)(*(int *)param_1 + 0x170);
  guard_check_icall();
  uVar3 = (*pcVar1)();
  *(undefined4 *)(param_1 + 0x2b0) = uVar3;
  uVar3 = FUN_10013071();
  FUN_10003190(uVar3);
  local_8 = 1;
  CWnd::GetWindowTextW
            ((CWnd *)param_1,
             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14);
  uVar3 = local_14[0];
  LVar4 = SendMessageW(*(HWND *)(param_1 + 0x20),0x7f,0,0);
  iVar6 = *(int *)pCVar2;
  uVar9 = 0;
  puVar8 = &DAT_101d3798;
  uVar7 = 0x50cf8000;
  uVar5 = AfxRegisterWndClass(8,0,0x10,LVar4);
  guard_check_icall(uVar5,uVar3,uVar7,puVar8,this,uVar9);
  iVar6 = (**(code **)(iVar6 + 0x1c0))();
  if (iVar6 != 0) {
    FUN_10003780(local_14[0]);
    FUN_100226bf(local_14[0]);
    CMDIChildWndEx::AddTabbedPane(pCVar2,param_1);
    local_18 = pCVar2;
  }
  FUN_10003460();
  return local_18;
}

