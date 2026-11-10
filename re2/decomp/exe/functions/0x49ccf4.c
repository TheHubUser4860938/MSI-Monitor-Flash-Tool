// rea decompile_all
// name: CMFCVisualManagerOfficeXP::ExtendMenuButton
// address: 0x49ccf4
// body: available
// range: 0x49ccf4-0x49ce7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCVisualManagerOfficeXP::ExtendMenuButton(class
   CMFCToolBarMenuButton *,class CRect &)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOfficeXP::ExtendMenuButton
          (CMFCVisualManagerOfficeXP *this,CMFCToolBarMenuButton *param_1,CRect *param_2)

{
  int iVar1;
  code *pcVar2;
  CObject *pCVar3;
  int iVar4;
  BOOL BVar5;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  iVar1 = *(int *)(param_1 + 0x8c);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x20) != 0)) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(iVar1 + 0x20),&local_18);
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCCustomizeButton_0060c918,
                                (CObject *)param_1);
    if (pCVar3 != (CObject *)0x0) {
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_005c4284,
                                  *(CObject **)(param_1 + 0x6c));
      if (pCVar3 != (CObject *)0x0) {
        local_28.left = *(LONG *)param_2;
        local_28.top = *(LONG *)(param_2 + 4);
        local_28.right = *(LONG *)(param_2 + 8);
        local_28.bottom = *(LONG *)(param_2 + 0xc);
        CWnd::ClientToScreen((CWnd *)pCVar3,&local_28);
        pcVar2 = *(code **)(*(int *)pCVar3 + 0x164);
        guard_check_icall();
        iVar4 = (*pcVar2)();
        if (iVar4 == 0) {
          local_28.bottom = local_28.bottom + 1;
          local_28.left = local_18.left;
          local_28.right = local_18.right;
        }
        else {
          local_28.top = local_18.top;
          local_28.bottom = local_18.bottom;
        }
        local_38.left = 0;
        local_38.top = 0;
        local_38.right = 0;
        local_38.bottom = 0;
        BVar5 = IntersectRect(&local_38,&local_28,&local_18);
        if (BVar5 == 0) goto LAB_0049ce6e;
      }
    }
    iVar1 = *(int *)(iVar1 + 0xf30);
    if (iVar1 == 1) {
      *(uint *)(param_2 + 0xc) =
           *(int *)(param_2 + 0xc) +
           ((local_18.right - local_18.left < *(int *)(param_2 + 8) - *(int *)param_2) - 1 & 3) + 1;
    }
    else if (iVar1 == 2) {
      *(uint *)(param_2 + 4) =
           *(int *)(param_2 + 4) -
           (((local_18.right - local_18.left < *(int *)(param_2 + 8) - *(int *)param_2) - 1 & 3) + 1
           );
    }
    else if (iVar1 == 3) {
      *(uint *)(param_2 + 8) =
           *(int *)(param_2 + 8) +
           ((local_18.bottom - local_18.top < *(int *)(param_2 + 0xc) - *(int *)(param_2 + 4)) - 1 &
           3) + 1;
    }
    else if (iVar1 == 4) {
      *(uint *)param_2 =
           *(int *)param_2 -
           (((local_18.bottom - local_18.top < *(int *)(param_2 + 0xc) - *(int *)(param_2 + 4)) - 1
            & 3) + 1);
    }
  }
LAB_0049ce6e:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

