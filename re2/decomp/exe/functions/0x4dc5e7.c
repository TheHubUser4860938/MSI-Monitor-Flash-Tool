// rea decompile_all
// name: CPaneContainerManager::CheckForMiniFrameAndCaption
// address: 0x4dc5e7
// body: available
// range: 0x4dc5e7-0x4dc70a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CPaneContainerManager::CheckForMiniFrameAndCaption(class
   CPoint,class CDockablePane * *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CPaneContainerManager::CheckForMiniFrameAndCaption
          (CPaneContainerManager *this,int param_2,int param_3,undefined4 *param_4)

{
  code *pcVar1;
  POINT pt;
  undefined4 *puVar2;
  CObject *pCVar3;
  int iVar4;
  BOOL BVar5;
  RECT local_28;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  puVar2 = param_4;
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMultiPaneFrameWnd_0060c89c,
                              *(CObject **)(this + 0x4c));
  *puVar2 = 0;
  if (pCVar3 != (CObject *)0x0) {
    pcVar1 = *(code **)(*(int *)this + 0x54);
    guard_check_icall();
    iVar4 = (*pcVar1)();
    if (iVar4 < 2) {
      local_28.left = 0;
      local_28.top = 0;
      local_28.right = 0;
      local_28.bottom = 0;
      pcVar1 = *(code **)(*(int *)pCVar3 + 0x1c8);
      guard_check_icall(&local_28);
      (*pcVar1)();
      ScreenToClient(*(HWND *)(pCVar3 + 0x20),(LPPOINT)&param_2);
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      pcVar1 = *(code **)(*(int *)pCVar3 + 0x1bc);
      guard_check_icall(&local_18);
      (*pcVar1)();
      pcVar1 = *(code **)(*(int *)pCVar3 + 0x170);
      guard_check_icall();
      iVar4 = (*pcVar1)();
      param_3 = param_3 + iVar4 + local_14;
      param_2 = param_2 + local_18;
      pt.y = param_3;
      pt.x = param_2;
      BVar5 = PtInRect(&local_28,pt);
      if (BVar5 != 0) {
        pcVar1 = *(code **)(*(int *)this + 0x78);
        guard_check_icall();
        pCVar3 = (CObject *)(*pcVar1)();
        pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_0060c780,pCVar3);
        *puVar2 = pCVar3;
      }
    }
  }
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}

