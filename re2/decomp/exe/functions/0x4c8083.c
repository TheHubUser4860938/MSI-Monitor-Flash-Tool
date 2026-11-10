// rea decompile_all
// name: SetTaskbarTabText
// address: 0x4c8083
// body: available
// range: 0x4c8083-0x4c81f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: virtual void __thiscall CMDIChildWndEx::SetTaskbarTabText(char const *)
    protected: virtual void __thiscall CMDIChildWndEx::SetTaskbarTabText(wchar_t const *)
   
   Library: Visual Studio 2015 Release */

void SetTaskbarTabText(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  CFrameWnd *pCVar3;
  CObject *this;
  undefined4 uVar4;
  CMDIChildWndEx *in_ECX;
  undefined1 local_24 [4];
  ulong local_20;
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x4c808f;
  iVar2 = CMDIChildWndEx::IsTaskbarTabsSupportEnabled(in_ECX);
  if (iVar2 != 0) {
    iVar2 = CMDIChildWndEx::IsRegisteredWithTaskbarTabs(in_ECX);
    if ((iVar2 != 0) && (param_1 != 0)) {
      pCVar3 = CWnd::GetTopLevelFrame((CWnd *)in_ECX);
      this = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_005bad18,(CObject *)pCVar3);
      if (this != (CObject *)0x0) {
        local_20 = CWnd::GetExStyle((CWnd *)this);
        if ((local_20 & 0x8000) == 0) {
          FUN_004349b3(param_1);
        }
        else {
          GetTitle(local_1c);
          local_8 = 0;
          uVar4 = FUN_004295fe();
          FUN_0040eb30(uVar4);
          local_8._0_1_ = 1;
          FUN_00415a10(param_1);
          local_8._0_1_ = 2;
          uVar1 = (undefined1)local_8;
          local_8._0_1_ = 2;
          if ((local_20 & 0x4000) == 0) {
            local_8._0_1_ = uVar1;
            uVar4 = FUN_00415c80(&local_20,local_1c,&DAT_005c23cc);
            local_8._0_1_ = 5;
            uVar4 = FUN_00414710(local_24,uVar4,local_18);
            local_8 = CONCAT31(local_8._1_3_,6);
            FUN_00415f50(uVar4);
            FUN_0040efa0();
          }
          else {
            uVar4 = FUN_00415c80(local_24,local_18,&DAT_005c23cc);
            local_8._0_1_ = 3;
            uVar4 = FUN_00414710(&local_20,uVar4,local_1c);
            local_8 = CONCAT31(local_8._1_3_,4);
            FUN_00415f50(uVar4);
            FUN_0040efa0();
          }
          local_8 = CONCAT31(local_8._1_3_,2);
          FUN_0040efa0();
          FUN_004349b3(local_14);
          FUN_0040efa0();
          FUN_0040efa0();
          FUN_0040efa0();
        }
      }
    }
  }
  return;
}

