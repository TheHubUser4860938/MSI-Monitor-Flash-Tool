// rea decompile_all
// name: CMDIFrameWndEx::ControlBarToTabbedDocument
// address: 0x100bd240
// body: available
// range: 0x100bd240-0x100bd33d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  int iVar5;
  wchar_t *pwVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined4 uVar9;
  CMDIChildWndEx *local_18;
  wchar_t *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x100bd24c;
  pCVar2 = (CMDIChildWndEx *)FUN_1001cfa0(0x4e0);
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
  uVar3 = FUN_1001e20a();
  FUN_1001d224(uVar3);
  local_8 = 1;
  CWnd::GetWindowTextW
            ((CWnd *)param_1,
             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14);
  pwVar6 = local_14[0];
  LVar4 = SendMessageW(*(HWND *)(param_1 + 0x20),0x7f,0,0);
  iVar5 = *(int *)pCVar2;
  uVar9 = 0;
  puVar8 = &DAT_102017a0;
  uVar7 = 0x50cf8000;
  uVar3 = AfxRegisterWndClass(8,0,0x10,LVar4);
  guard_check_icall(uVar3,pwVar6,uVar7,puVar8,this,uVar9);
  iVar5 = (**(code **)(iVar5 + 0x1c0))();
  if (iVar5 != 0) {
    ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)(pCVar2 + 0xf0),local_14[0])
    ;
    FUN_1002da47(local_14[0]);
    CMDIChildWndEx::AddTabbedPane(pCVar2,param_1);
    local_18 = pCVar2;
  }
  ATL::CStringData::Release((CStringData *)(local_14[0] + -8));
  return local_18;
}

