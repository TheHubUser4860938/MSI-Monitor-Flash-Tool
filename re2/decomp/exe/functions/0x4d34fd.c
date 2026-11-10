// rea decompile_all
// name: FUN_004d34fd
// address: 0x4d34fd
// body: available
// range: 0x4d34fd-0x4d36db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4d36d7 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004d34fd(HWND__ *param_1,uint param_2,uint param_3,uint param_4)

{
  code *pcVar1;
  int iVar2;
  CNoTrackObject *pCVar3;
  CWnd *pCVar4;
  
  if (param_1 == (HWND__ *)0x0) {
    iVar2 = 0;
  }
  else {
    pCVar3 = CThreadLocalObject::GetData
                       ((CThreadLocalObject *)&DAT_00614cc4,
                        (_func_CNoTrackObject_ptr *)&LAB_00429175);
    if (pCVar3 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00429127();
    }
    if ((*(int *)(pCVar3 + 0x18) != 0) &&
       (pCVar4 = CWnd::FromHandlePermanent(param_1), pCVar4 == (CWnd *)0x0)) {
      CWnd::SubclassWindow(*(CWnd **)(pCVar3 + 0x18),param_1);
      *(undefined4 *)(pCVar3 + 0x18) = 0;
    }
    if (param_2 == 0x110) {
      DAT_00616e00 = RegisterWindowMessageW(L"commdlg_LBSelChangedNotify");
      DAT_00616e04 = RegisterWindowMessageW(L"commdlg_ShareViolation");
      DAT_00616e0c = RegisterWindowMessageW(L"commdlg_FileNameOK");
      DAT_00616e10 = RegisterWindowMessageW(L"commdlg_ColorOK");
      DAT_00616e14 = RegisterWindowMessageW(L"commdlg_help");
      _DAT_00616e08 = RegisterWindowMessageW(L"commdlg_SetRGBColor");
      iVar2 = AfxDlgProc(param_1,0x110,param_3,param_4);
    }
    else if ((param_2 == DAT_00616e14) || ((param_2 == 0x111 && ((short)param_3 == 0x40e)))) {
      SendMessageW(param_1,0x111,0xe146,0);
      iVar2 = 1;
    }
    else {
      if (((0xbfff < param_2) &&
          (pCVar4 = CWnd::FromHandlePermanent(param_1), pCVar4 != (CWnd *)0x0)) &&
         ((iVar2 = FUN_0043970d(&PTR_s_CFileDialog_005b2070), iVar2 == 0 ||
          (iVar2 = FUN_00436bfe(), (*(uint *)(iVar2 + 0x34) & 0x80000) == 0)))) {
        if (param_2 == DAT_00616e04) {
          pcVar1 = *(code **)(*(int *)pCVar4 + 400);
          guard_check_icall(param_4);
          iVar2 = (*pcVar1)();
          return iVar2;
        }
        if (param_2 == DAT_00616e0c) {
          *(uint *)(pCVar4 + 0x4d4) = param_4;
          pcVar1 = *(code **)(*(int *)pCVar4 + 0x194);
          guard_check_icall();
          iVar2 = (*pcVar1)();
          *(undefined4 *)(pCVar4 + 0x4d4) = 0;
          return iVar2;
        }
        if (param_2 == DAT_00616e00) {
          pcVar1 = *(code **)(*(int *)pCVar4 + 0x198);
          guard_check_icall(param_3,param_4 & 0xffff,param_4 >> 0x10);
          (*pcVar1)();
        }
        else if (param_2 == DAT_00616e10) {
          pcVar1 = *(code **)(*(int *)pCVar4 + 0x18c);
          guard_check_icall();
          iVar2 = (*pcVar1)();
          return iVar2;
        }
      }
      iVar2 = 0;
    }
  }
  return iVar2;
}

