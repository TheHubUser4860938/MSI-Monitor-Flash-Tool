// rea decompile_all
// name: COleIPFrameWndEx::OnActivate
// address: 0x100b3e83
// body: available
// range: 0x100b3e83-0x100b3f24 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall COleIPFrameWndEx::OnActivate(unsigned int,class CWnd *,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
COleIPFrameWndEx::OnActivate(COleIPFrameWndEx *this,uint param_1,CWnd *param_2,int param_3)

{
  CWnd *pCVar1;
  undefined4 uVar2;
  
  FUN_10085411(param_1,param_2,param_3);
  uVar2 = 0;
  if (param_1 == 0) {
    if (DAT_101daf90 == 0) {
      CFrameImpl::DeactivateMenu((CFrameImpl *)(this + 0x1a8));
    }
    if (DAT_101dc384 != 0) {
      SendMessageW(*(HWND *)(DAT_101dc384 + 0x20),0x10,0,0);
      goto LAB_100b3edb;
    }
LAB_100b3efa:
    if (DAT_101dc4c4 == this) {
      pCVar1 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 0x1a4));
      DAT_101dc4c4 = (COleIPFrameWndEx *)
                     AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_1018c350,(CObject *)pCVar1
                                       );
    }
  }
  else {
    if (param_1 == 2) {
      UpdateWindow(*(HWND *)(this + 0x20));
    }
    else {
LAB_100b3edb:
      if (param_1 == 0) goto LAB_100b3efa;
    }
    if (DAT_101dc4c4 != (COleIPFrameWndEx *)0x0) {
      uVar2 = *(undefined4 *)(DAT_101dc4c4 + 0x20);
    }
    *(undefined4 *)(this + 0x1a4) = uVar2;
    DAT_101dc4c4 = this;
  }
  return;
}

