// rea decompile_all
// name: FUN_100eba3b
// address: 0x100eba3b
// body: available
// range: 0x100eba3b-0x100ebcf2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100ebcee to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_100eba3b(void)

{
  code *pcVar1;
  CWnd *pCVar2;
  CWnd *pCVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  AFX_GLOBAL_DATA *this;
  CPropertySheet *in_ECX;
  uint uVar8;
  uint uVar9;
  int local_64;
  int local_60;
  int local_5c;
  undefined4 local_58;
  tagRECT local_54;
  tagRECT local_44;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x54;
  local_8 = 0x100eba47;
  local_5c = CPropertySheet::OnInitDialog(in_ECX);
  local_54.left = 0;
  local_54.top = 0;
  local_54.right = 0;
  local_54.bottom = 0;
  GetClientRect(*(HWND *)(in_ECX + 0x20),&local_54);
  pCVar2 = CWnd::GetDlgItem((CWnd *)in_ECX,2);
  if (pCVar2 == (CWnd *)0x0) goto LAB_100eba7f;
  CWnd::ShowWindow(pCVar2,5);
  CWnd::EnableWindow(pCVar2,1);
  local_34.left = 0;
  local_34.top = 0;
  local_34.right = 0;
  local_34.bottom = 0;
  GetClientRect(*(HWND *)(pCVar2 + 0x20),&local_34);
  MapWindowPoints(*(HWND *)(pCVar2 + 0x20),*(HWND *)(in_ECX + 0x20),(LPPOINT)&local_34,2);
  local_44.left = 0;
  local_44.top = 0;
  local_44.right = 0;
  local_44.bottom = 0;
  GetWindowRect(*(HWND *)(in_ECX + 0x20),&local_44);
  CWnd::SetWindowPos((CWnd *)in_ECX,(CWnd *)0x0,0,0,local_44.right - local_44.left,
                     local_34.bottom + 0x10 + ((local_44.bottom - local_44.top) - local_34.top),0x16
                    );
  CWnd::SetWindowPos(pCVar2,(CWnd *)0x0,local_54.right + -8 + (local_34.left - local_34.right),
                     local_34.top + 4,0,0,0x15);
  pCVar3 = CWnd::GetDlgItem((CWnd *)in_ECX,1);
  if (pCVar3 != (CWnd *)0x0) {
    CWnd::ModifyStyle(pCVar3,1,0,0);
  }
  CWnd::ModifyStyle(pCVar2,0,1,0);
  uVar4 = FUN_10013071();
  FUN_10003190(uVar4);
  local_8 = 0;
  iVar5 = FUN_10012ca3(0x3ee9);
  if ((iVar5 == 0) || (iVar5 = FUN_100032f0(iVar5,0x3ee9), iVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_10012a3f();
  }
  FUN_100226bf(local_58);
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  GetWindowRect(*(HWND *)(in_ECX + 0x20),&local_24);
  local_60 = GetSystemMetrics(0);
  iVar5 = GetSystemMetrics(0x3e);
  iVar6 = GetSystemMetrics(1);
  iVar7 = GetSystemMetrics(0x3e);
  iVar7 = iVar7 + (iVar5 - iVar6);
  iVar5 = local_24.top;
  iVar6 = local_24.left;
  if (local_24.left < 0) {
    if (local_24.top < 0) goto LAB_100ebc0c;
LAB_100ebc0e:
    if (local_24.left < 0) {
      iVar6 = 0;
    }
LAB_100ebc1e:
    CWnd::SetWindowPos((CWnd *)in_ECX,(CWnd *)0x0,iVar6,iVar5,0,0,1);
  }
  else {
    if (local_24.top < 0) {
LAB_100ebc0c:
      iVar5 = 0;
      goto LAB_100ebc0e;
    }
    if ((local_60 < local_24.right) || (iVar7 < local_24.bottom)) {
      if (iVar7 < local_24.bottom) {
        iVar5 = (local_24.top - local_24.bottom) + iVar7;
      }
      if (local_60 < local_24.right) {
        iVar6 = (local_24.left - local_24.right) + local_60;
      }
      goto LAB_100ebc1e;
    }
  }
  pCVar2 = CWnd::GetDlgItem((CWnd *)in_ECX,9);
  if (pCVar2 != (CWnd *)0x0) {
    if (((byte)in_ECX[0x15c] & 8) == 0) {
      pCVar3 = (CWnd *)(in_ECX + 0x168);
      CWnd::SubclassWindow(pCVar3,*(HWND__ **)(pCVar2 + 0x20));
      CWnd::ShowWindow(pCVar3,5);
      CWnd::EnableWindow(pCVar3,1);
      uVar9 = 0;
      uVar8 = 0;
      this = GetGlobalData();
      iVar5 = AFX_GLOBAL_DATA::Is32BitIcons(this);
      CMFCButton::SetImage((CMFCButton *)pCVar3,(-(uint)(iVar5 != 0) & 0x3a8) + 0x3f03,uVar8,uVar9);
      FUN_100226bf(&DAT_101b5ebc);
      pcVar1 = *(code **)(*(int *)pCVar3 + 0x170);
      guard_check_icall(&local_64,1);
      (*pcVar1)();
      CWnd::SetWindowPos(pCVar3,(CWnd *)0x0,local_54.left + 8,local_34.top,local_64,local_60,0x14);
    }
    else {
      CWnd::ShowWindow(pCVar2,0);
      CWnd::EnableWindow(pCVar2,0);
    }
  }
  FUN_10003460();
LAB_100eba7f:
  FUN_101490fe();
  return;
}

