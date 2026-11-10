// rea decompile_all
// name: CMFCRibbonMainPanel::DrawApplicationButton
// address: 0x52f0b5
// body: available
// range: 0x52f0b5-0x52f199 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonMainPanel::DrawApplicationButton(class CDC *,class CWnd *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCRibbonMainPanel::DrawApplicationButton(CMFCRibbonMainPanel *this,CDC *param_1,CWnd *param_2)

{
  LONG LVar1;
  int iVar2;
  LONG LVar3;
  LONG LVar4;
  int iVar5;
  code *pcVar6;
  CMFCVisualManager *pCVar7;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  iVar5 = *(int *)(this + 0x50c);
  if (iVar5 != 0) {
    LVar1 = *(LONG *)(iVar5 + 0x74);
    iVar2 = *(int *)(iVar5 + 0x78);
    LVar3 = *(LONG *)(iVar5 + 0x7c);
    LVar4 = *(LONG *)(iVar5 + 0x80);
    local_18.left = LVar1;
    local_18.top = iVar2;
    local_18.right = LVar3;
    local_18.bottom = LVar4;
    CWnd::ClientToScreen(*(CWnd **)(iVar5 + 0x84),&local_18);
    CWnd::ScreenToClient(param_2,&local_18);
    if (local_18.top <= *(int *)(this + 0x508)) {
      iVar5 = *(int *)(this + 0x50c);
      *(LONG *)(iVar5 + 0x74) = local_18.left;
      *(LONG *)(iVar5 + 0x78) = local_18.top;
      *(LONG *)(iVar5 + 0x7c) = local_18.right;
      *(LONG *)(iVar5 + 0x80) = local_18.bottom;
      pCVar7 = CMFCVisualManager::GetInstance();
      pcVar6 = *(code **)(*(int *)pCVar7 + 0x210);
      guard_check_icall(param_1,*(undefined4 *)(this + 0x50c));
      (*pcVar6)();
      pcVar6 = *(code **)(**(int **)(this + 0x50c) + 0x17c);
      guard_check_icall(param_1);
      (*pcVar6)();
      iVar5 = *(int *)(this + 0x50c);
      *(LONG *)(iVar5 + 0x74) = LVar1;
      *(int *)(iVar5 + 0x78) = iVar2;
      *(LONG *)(iVar5 + 0x7c) = LVar3;
      *(LONG *)(iVar5 + 0x80) = LVar4;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

