// rea decompile_all
// name: PreTranslateMessage
// address: 0x100eb594
// body: available
// range: 0x100eb594-0x100eb6e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall COleDocIPFrameWndEx::PreTranslateMessage(struct tagMSG *)
    public: virtual int __thiscall COleIPFrameWndEx::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2015 Release */

undefined4 PreTranslateMessage(tagMSG *param_1)

{
  uint uVar1;
  tagPOINT tVar2;
  int iVar3;
  undefined4 uVar4;
  CWnd *pCVar5;
  BOOL BVar6;
  int in_ECX;
  tagPOINT local_c;
  
  uVar1 = param_1->message;
  local_c.x = in_ECX;
  local_c.y = in_ECX;
  if (uVar1 < 0x101) {
    if (uVar1 == 0x100) {
      iVar3 = CFrameImpl::IsHelpKey(param_1);
      if (iVar3 == 0) {
        iVar3 = FUN_10118b38(param_1->wParam,0);
        goto LAB_100eb61d;
      }
    }
    else if ((0xa0 < uVar1) &&
            ((uVar1 < 0xa3 || ((0xa3 < uVar1 && ((uVar1 < 0xa6 || (uVar1 - 0xa7 < 2)))))))) {
      iVar3 = FUN_10118e01(uVar1,(int)(short)param_1->lParam,
                           (int)*(short *)((int)&param_1->lParam + 2),param_1->hwnd);
LAB_100eb61d:
      if (iVar3 != 0) goto LAB_100eb621;
    }
LAB_100eb69b:
    uVar4 = FUN_100be8a2(param_1);
  }
  else {
    if (uVar1 == 0x200) {
      local_c.x = (LONG)(short)param_1->lParam;
      local_c.y = (LONG)*(short *)((int)&param_1->lParam + 2);
      pCVar5 = CWnd::FromHandle(param_1->hwnd);
      if (pCVar5 != (CWnd *)0x0) {
        ClientToScreen(*(HWND *)(pCVar5 + 0x20),&local_c);
      }
      tVar2.y = local_c.y;
      tVar2.x = local_c.x;
      iVar3 = CFrameImpl::ProcessMouseMove((CFrameImpl *)(in_ECX + 0x1a8),tVar2);
      goto LAB_100eb61d;
    }
    if ((uVar1 != 0x201) && (6 < uVar1 - 0x203)) goto LAB_100eb69b;
    local_c.x = (LONG)(short)param_1->lParam;
    local_c.y = (LONG)*(short *)((int)&param_1->lParam + 2);
    pCVar5 = CWnd::FromHandle(param_1->hwnd);
    if (pCVar5 != (CWnd *)0x0) {
      BVar6 = IsWindow(param_1->hwnd);
      if (BVar6 != 0) {
        ClientToScreen(*(HWND *)(pCVar5 + 0x20),&local_c);
      }
    }
    iVar3 = FUN_10118e01(param_1->message,local_c.x,local_c.y,param_1->hwnd);
    if (iVar3 == 0) {
      BVar6 = IsWindow(param_1->hwnd);
      if (BVar6 != 0) goto LAB_100eb69b;
    }
LAB_100eb621:
    uVar4 = 1;
  }
  return uVar4;
}

