// rea decompile_all
// name: DDX_Control
// address: 0x100431ad
// body: available
// range: 0x100431ad-0x10043237 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    void __stdcall DDX_Control(class CDataExchange *,int,class CWnd &)
   
   Library: Visual Studio 2008 Release */

void DDX_Control(CDataExchange *param_1,int param_2,CWnd *param_3)

{
  CWnd *this;
  IUnknown *pIVar1;
  int iVar2;
  COleControlSite *pCVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  
  this = param_3;
  if (*(int *)(param_3 + 0x20) != 0) {
    return;
  }
  pIVar1 = CWnd::GetControlUnknown(param_3);
  if (pIVar1 != (IUnknown *)0x0) {
    return;
  }
  CDataExchange::PrepareCtrl(param_1,param_2);
  CWnd::GetDlgItem(*(CWnd **)(param_1 + 4),param_2,(HWND__ **)&param_3);
  if (param_3 != (CWnd *)0x0) {
    iVar2 = CWnd::SubclassWindow(this,(HWND__ *)param_3);
    if (iVar2 == 0) {
      FUN_10038e15();
    }
    if (param_3 != (CWnd *)0x0) {
      pCVar5 = *(CWnd **)(param_1 + 4);
      pHVar4 = GetParent(*(HWND *)(this + 0x20));
      if (*(HWND *)(pCVar5 + 0x20) == pHVar4) {
        return;
      }
      param_2 = 0;
      goto LAB_1004322a;
    }
  }
  pCVar3 = CWnd::GetOleControlSite(*(CWnd **)(param_1 + 4),param_2);
  if (pCVar3 == (COleControlSite *)0x0) {
    return;
  }
  pCVar5 = *(CWnd **)(param_1 + 4);
LAB_1004322a:
  CWnd::AttachControlSite(this,pCVar5,param_2);
  return;
}

