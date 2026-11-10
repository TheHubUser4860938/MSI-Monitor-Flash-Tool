// rea decompile_all
// name: OnCreate
// address: 0x4f6eb6
// body: available
// range: 0x4f6eb6-0x4f70e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: int __thiscall CMFCDropDownFrame::OnCreate(struct tagCREATESTRUCTA *)
    protected: int __thiscall CMFCDropDownFrame::OnCreate(struct tagCREATESTRUCTW *)
   
   Library: Visual Studio 2015 Release */

undefined4 OnCreate(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  CObject *pCVar3;
  CWnd *pCVar4;
  HWND pHVar5;
  int *in_ECX;
  
  iVar2 = FUN_004d5eda(param_1);
  if (iVar2 != -1) {
    if ((in_ECX[0x4d] != 0) &&
       (pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_0060c580,
                                    *(CObject **)(in_ECX[0x4d] + 0x6c)), pCVar3 != (CObject *)0x0))
    {
      pcVar1 = *(code **)(*(int *)pCVar3 + 0x164);
      guard_check_icall();
      (*pcVar1)();
    }
    pcVar1 = *(code **)(in_ECX[0x4e] + 0x324);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      in_ECX[0x32c] = 1;
      CMFCToolBarImages::CopyTemp
                ((CMFCToolBarImages *)(in_ECX[0x39e] + 0x2b8),(CMFCToolBarImages *)(in_ECX + 0xfc));
      CMFCToolBarImages::CopyTemp
                ((CMFCToolBarImages *)(in_ECX[0x39e] + 0x3d0),(CMFCToolBarImages *)(in_ECX + 0x142))
      ;
      CMFCToolBarImages::CopyTemp
                ((CMFCToolBarImages *)(in_ECX[0x39e] + 0x4e8),(CMFCToolBarImages *)(in_ECX + 0x188))
      ;
      CMFCToolBarImages::CopyTemp
                ((CMFCToolBarImages *)(in_ECX[0x39e] + 0x600),(CMFCToolBarImages *)(in_ECX + 0x1ce))
      ;
      CMFCToolBarImages::CopyTemp
                ((CMFCToolBarImages *)(in_ECX[0x39e] + 0x718),(CMFCToolBarImages *)(in_ECX + 0x214))
      ;
      CMFCToolBarImages::CopyTemp
                ((CMFCToolBarImages *)(in_ECX[0x39e] + 0x830),(CMFCToolBarImages *)(in_ECX + 0x25a))
      ;
      pCVar4 = (CWnd *)in_ECX[0x39e];
      in_ECX[0x352] = *(int *)(pCVar4 + 0xc10);
      in_ECX[0x353] = *(int *)(pCVar4 + 0xc14);
      in_ECX[0x354] = *(int *)(pCVar4 + 0xc18);
      in_ECX[0x355] = *(int *)(pCVar4 + 0xc1c);
      in_ECX[0x356] = *(int *)(pCVar4 + 0xc20);
      in_ECX[0x357] = *(int *)(pCVar4 + 0xc24);
      in_ECX[0x358] = *(int *)(pCVar4 + 0xc28);
      iVar2 = *(int *)(pCVar4 + 0xc2c);
      in_ECX[0x75] = in_ECX[0x75] & 0xffbfffff;
      in_ECX[0x359] = iVar2;
      pCVar4 = CWnd::GetOwner(pCVar4);
      if (pCVar4 == (CWnd *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(pCVar4 + 0x20);
      }
      in_ECX[0x65] = iVar2;
      in_ECX[0x33b] = *(int *)(in_ECX[0x39e] + 0xbb4);
      FUN_004d7c0b(in_ECX[0x39e] + 0xc3c);
      pcVar1 = *(code **)(*in_ECX + 0x178);
      guard_check_icall(1);
      (*pcVar1)();
      ReleaseCapture();
      pHVar5 = SetCapture((HWND)in_ECX[0x56]);
      CWnd::FromHandle(pHVar5);
      return 0;
    }
  }
  return 0xffffffff;
}

