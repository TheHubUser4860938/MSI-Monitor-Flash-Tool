// rea decompile_all
// name: CPaneFrameWnd::OnChar
// address: 0x45dd24
// body: available
// range: 0x45dd24-0x45dde3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CPaneFrameWnd::OnChar(unsigned int,unsigned int,unsigned int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPaneFrameWnd::OnChar(CPaneFrameWnd *this,uint param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  uint uVar2;
  CWnd *pCVar3;
  CObject *pCVar4;
  int iVar5;
  
  if ((this[0xa5] != (CPaneFrameWnd)0x0) && (param_1 == 0x1b)) {
    pcVar1 = *(code **)(*(int *)this + 0x1b0);
    guard_check_icall();
    uVar2 = (*pcVar1)();
    if ((uVar2 & 2) == 0) {
      ReleaseCapture();
      pCVar3 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 0xd4));
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_005b83cc,(CObject *)pCVar3);
      if (pCVar4 != (CObject *)0x0) {
        pcVar1 = *(code **)(*(int *)pCVar4 + 0x198);
        guard_check_icall();
        uVar2 = (*pcVar1)();
        if ((uVar2 & 0xf000) != 0) {
          *(undefined4 *)(pCVar4 + 0x1e8) = *(undefined4 *)(this + 0xd8);
          *(undefined4 *)(pCVar4 + 0x1ec) = *(undefined4 *)(this + 0xdc);
          *(undefined4 *)(pCVar4 + 0x1f0) = *(undefined4 *)(this + 0xe0);
          *(undefined4 *)(pCVar4 + 500) = *(undefined4 *)(this + 0xe4);
          pcVar1 = *(code **)(*(int *)pCVar4 + 0x1f8);
          guard_check_icall(pCVar4,0,2);
          iVar5 = (*pcVar1)();
          if (iVar5 == 0) {
            return;
          }
        }
      }
    }
    else {
      OnCancelMode(this);
    }
  }
  FUN_0042ec70();
  return;
}

