// rea decompile_all
// name: COleIPFrameWndEx::OnActivate
// address: 0x4c45ef
// body: available
// range: 0x4c45ef-0x4c4690 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall COleIPFrameWndEx::OnActivate(unsigned int,class CWnd *,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
COleIPFrameWndEx::OnActivate(COleIPFrameWndEx *this,uint param_1,CWnd *param_2,int param_3)

{
  CWnd *pCVar1;
  undefined4 uVar2;
  
  FUN_004d52ad(param_1,param_2,param_3);
  uVar2 = 0;
  if (param_1 == 0) {
    if (DAT_00614ed8 == 0) {
      CFrameImpl::DeactivateMenu((CFrameImpl *)(this + 0x1a8));
    }
    if (DAT_00616b18 != 0) {
      SendMessageW(*(HWND *)(DAT_00616b18 + 0x20),0x10,0,0);
      goto LAB_004c4647;
    }
LAB_004c4666:
    if (DAT_0061620c == this) {
      pCVar1 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 0x1a4));
      DAT_0061620c = (COleIPFrameWndEx *)
                     AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_005c363c,(CObject *)pCVar1
                                       );
    }
  }
  else {
    if (param_1 == 2) {
      UpdateWindow(*(HWND *)(this + 0x20));
    }
    else {
LAB_004c4647:
      if (param_1 == 0) goto LAB_004c4666;
    }
    if (DAT_0061620c != (COleIPFrameWndEx *)0x0) {
      uVar2 = *(undefined4 *)(DAT_0061620c + 0x20);
    }
    *(undefined4 *)(this + 0x1a4) = uVar2;
    DAT_0061620c = this;
  }
  return;
}

