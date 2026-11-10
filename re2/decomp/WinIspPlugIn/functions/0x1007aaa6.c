// rea decompile_all
// name: FUN_1007aaa6
// address: 0x1007aaa6
// body: available
// range: 0x1007aaa6-0x1007ac8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007ac89 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_1007aaa6(void)

{
  undefined4 *puVar1;
  CPen *pCVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  HWND__ *pHVar6;
  WPARAM wParam;
  int iVar7;
  HWND pHVar8;
  CWnd *this;
  CFont *pCVar9;
  CWnd *in_ECX;
  CPen *pCVar10;
  int iVar11;
  CClientDC local_78 [8];
  HDC local_70;
  CWnd *local_64;
  tagTEXTMETRICW local_60;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x68;
  local_8 = 0x1007aab2;
  if ((in_ECX != (CWnd *)0x0) && (*(int *)(in_ECX + 0x20) != 0)) {
    pcVar3 = *(code **)(*(int *)in_ECX + 0x1c4);
    guard_check_icall();
    pHVar6 = (HWND__ *)(*pcVar3)();
    local_64 = CWnd::FromHandle(pHVar6);
    if (local_64 != (CWnd *)0x0) {
      local_24.left = 0;
      local_24.top = 0;
      local_24.right = 0;
      local_24.bottom = 0;
      GetClientRect(*(HWND *)(in_ECX + 0x20),&local_24);
      *(LONG *)(in_ECX + 0xf4) = local_24.left;
      *(LONG *)(in_ECX + 0xf8) = local_24.top;
      *(LONG *)(in_ECX + 0xfc) = local_24.right;
      *(LONG *)(in_ECX + 0x100) = local_24.bottom;
      CClientDC::CClientDC(local_78,in_ECX);
      local_8 = 0;
      pCVar2 = (CPen *)(in_ECX + 0x104);
      pCVar10 = (CPen *)0x0;
      if ((pCVar2 == (CPen *)0x0) || (*(int *)(in_ECX + 0x108) == 0)) {
        pHVar8 = GetParent(*(HWND *)(in_ECX + 0x20));
        this = CWnd::FromHandle(pHVar8);
        pCVar9 = CWnd::GetFont(this);
        if (pCVar9 != (CFont *)0x0) {
          SendMessageW(*(HWND *)(local_64 + 0x20),0x30,*(WPARAM *)(pCVar9 + 4),0);
          pCVar10 = CDC::SelectObject((CDC *)local_78,(CPen *)pCVar9);
          if (pCVar10 == (CPen *)0x0) {
LAB_1007ac89:
                    /* WARNING: Subroutine does not return */
            FUN_1004a383();
          }
        }
      }
      else {
        pCVar10 = CDC::SelectObject((CDC *)local_78,pCVar2);
        if (pCVar2 == (CPen *)0x0) {
          wParam = 0;
        }
        else {
          wParam = *(WPARAM *)(in_ECX + 0x108);
        }
        SendMessageW(*(HWND *)(local_64 + 0x20),0x30,wParam,0);
      }
      GetTextMetricsW(local_70,&local_60);
      if (pCVar10 != (CPen *)0x0) {
        CDC::SelectObject((CDC *)local_78,pCVar10);
      }
      iVar7 = (local_60.tmHeight << 2) / 3;
      if (iVar7 <= *(int *)(in_ECX + 0xf0)) {
        iVar7 = *(int *)(in_ECX + 0xf0);
      }
      iVar4 = *(int *)(in_ECX + 0xec);
      iVar5 = *(int *)(in_ECX + 0x88);
      iVar11 = (local_24.right - iVar4) + -1;
      *(int *)(in_ECX + 0x100) = *(int *)(in_ECX + 0xf8) + iVar7;
      while (iVar5 != 0) {
        puVar1 = (undefined4 *)(iVar5 + 8);
        iVar5 = *(int *)(iVar5 + 4);
        if ((CWnd *)*puVar1 == (CWnd *)0x0) goto LAB_1007ac89;
        CWnd::MoveWindow((CWnd *)*puVar1,iVar11,local_24.top + 1,iVar4,
                         (*(int *)(in_ECX + 0x100) - *(int *)(in_ECX + 0xf8)) + -2,1);
        iVar4 = *(int *)(in_ECX + 0xec);
        iVar11 = iVar11 - iVar4;
      }
      CWnd::MoveWindow(local_64,local_24.left,
                       (*(int *)(in_ECX + 0x100) - *(int *)(in_ECX + 0xf8)) + local_24.top,
                       local_24.right - local_24.left,
                       ((*(int *)(in_ECX + 0xf8) - *(int *)(in_ECX + 0x100)) - local_24.top) +
                       local_24.bottom,1);
      pcVar3 = *(code **)(*(int *)in_ECX + 0x1cc);
      guard_check_icall();
      (*pcVar3)();
      CClientDC::~CClientDC(local_78);
    }
  }
  FUN_1018015d();
  return;
}

