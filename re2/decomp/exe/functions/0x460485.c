// rea decompile_all
// name: FUN_00460485
// address: 0x460485
// body: available
// range: 0x460485-0x46054e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00460485(CWnd *param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int iVar3;
  undefined4 uVar4;
  CObject *pCVar5;
  CFrameWnd *pCVar6;
  CWnd *in_ECX;
  CWnd *pCVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  CWnd::OnSetFocus(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0xd0) = 0;
  if (*(HWND *)(in_ECX + 0xd4) != (HWND)0x0) {
    BVar2 = IsWindow(*(HWND *)(in_ECX + 0xd4));
    if (BVar2 != 0) {
      CWnd::FromHandle(*(HWND__ **)(in_ECX + 0xd4));
      iVar3 = FUN_0043970d(&PTR_s_CMFCToolBar_0060c580);
      if (iVar3 != 0) {
        if (param_1 == (CWnd *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(param_1 + 0x20);
        }
        *(undefined4 *)(in_ECX + 0xd0) = uVar4;
      }
    }
  }
  pcVar1 = *(code **)(*(int *)in_ECX + 0x1ac);
  guard_check_icall();
  pCVar5 = (CObject *)(*pcVar1)();
  pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_005c4284,pCVar5);
  if (pCVar5 != (CObject *)0x0) {
    pcVar1 = *(code **)(*(int *)pCVar5 + 0x1d8);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 != 0) {
      CWnd::SetFocus((CWnd *)pCVar5);
    }
  }
  pCVar6 = CWnd::GetParentFrame(in_ECX);
  if (pCVar6 != (CFrameWnd *)0x0) {
    uVar11 = 0x13;
    iVar10 = 0;
    iVar9 = 0;
    iVar8 = 0;
    iVar3 = 0;
    pCVar7 = (CWnd *)&DAT_00614a70;
    pCVar6 = CWnd::GetParentFrame(in_ECX);
    CWnd::SetWindowPos((CWnd *)pCVar6,pCVar7,iVar3,iVar8,iVar9,iVar10,uVar11);
  }
  return;
}

