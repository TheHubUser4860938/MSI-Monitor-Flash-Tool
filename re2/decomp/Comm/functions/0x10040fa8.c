// rea decompile_all
// name: CMFCPropertyGridProperty::SetModifiedFlag
// address: 0x10040fa8
// body: available
// range: 0x10040fa8-0x10041197 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPropertyGridProperty::SetModifiedFlag(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCPropertyGridProperty::SetModifiedFlag(CMFCPropertyGridProperty *this)

{
  int *piVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int iVar4;
  CFont *pCVar5;
  WPARAM wParam;
  int iVar6;
  undefined4 *puVar7;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  pcVar3 = *(code **)(*(int *)this + 0xa4);
  guard_check_icall();
  iVar4 = (*pcVar3)();
  if ((*(int *)(this + 0x78) != iVar4) || (*(int *)(this + 0x6c) != 0)) {
    iVar6 = *(int *)(this + 200);
    *(int *)(this + 0x78) = iVar4;
    if ((iVar6 != 0) && (*(int *)(iVar6 + 0x6c) != 0)) {
      if (iVar4 == 0) {
        *(undefined4 *)(iVar6 + 0x78) = 0;
        puVar7 = *(undefined4 **)(*(int *)(this + 200) + 0xd0);
        do {
          if (puVar7 == (undefined4 *)0x0) goto LAB_10041027;
          piVar1 = puVar7 + 2;
          puVar7 = (undefined4 *)*puVar7;
        } while (*(int *)(*piVar1 + 0x78) == 0);
        *(undefined4 *)(*(int *)(this + 200) + 0x78) = 1;
      }
      else {
        *(undefined4 *)(iVar6 + 0x78) = 1;
      }
    }
LAB_10041027:
    if (*(int *)(this + 0x6c) != 0) {
      puVar7 = *(undefined4 **)(this + 0xd0);
      do {
        if (puVar7 == (undefined4 *)0x0) goto LAB_10041047;
        piVar1 = puVar7 + 2;
        puVar7 = (undefined4 *)*puVar7;
      } while (*(int *)(*piVar1 + 0x78) == 0);
      *(undefined4 *)(this + 0x78) = 1;
    }
LAB_10041047:
    puVar7 = *(undefined4 **)(this + 0xd0);
    while (puVar7 != (undefined4 *)0x0) {
      puVar2 = puVar7 + 2;
      puVar7 = (undefined4 *)*puVar7;
      SetModifiedFlag((CMFCPropertyGridProperty *)*puVar2);
    }
    if (*(int *)(*(int *)(this + 0xc4) + 0x30c) != 0) {
      iVar4 = *(int *)this;
      guard_check_icall(*(undefined4 *)(this + 0x30),*(undefined4 *)(this + 0x34),
                        *(undefined4 *)(this + 0x38),*(undefined4 *)(this + 0x3c));
      (**(code **)(iVar4 + 0x6c))();
      iVar4 = *(int *)(this + 0xb8);
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0x20) != 0)) {
        if (*(int *)(this + 0x78) == 0) {
          pCVar5 = CWnd::GetFont(*(CWnd **)(this + 0xc4));
          iVar4 = *(int *)(this + 0xb8);
        }
        else {
          pCVar5 = (CFont *)(*(int *)(this + 0xc4) + 800);
        }
        if (pCVar5 == (CFont *)0x0) {
          wParam = 0;
        }
        else {
          wParam = *(WPARAM *)(pCVar5 + 4);
        }
        SendMessageW(*(HWND *)(iVar4 + 0x20),0x30,wParam,1);
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        GetWindowRect(*(HWND *)(*(int *)(this + 0xb8) + 0x20),&local_18);
        CWnd::ScreenToClient(*(CWnd **)(this + 0xc4),&local_18);
        iVar4 = *(int *)(*(int *)(this + 0xc4) + 0x348) - *(int *)(*(int *)(this + 0xc4) + 0x344);
        if (*(int *)(this + 0x78) != 0) {
          iVar4 = -iVar4;
        }
        pcVar3 = *(code **)(*(int *)this + 0x94);
        guard_check_icall();
        iVar6 = (*pcVar3)();
        if (iVar6 != 0) {
          pcVar3 = *(code **)(*(int *)this + 0x78);
          guard_check_icall();
          (*pcVar3)();
          local_18.right = *(LONG *)(this + 0x40);
        }
        CWnd::SetWindowPos(*(CWnd **)(this + 0xb8),(CWnd *)0x0,local_18.left + iVar4,local_18.top,
                           (local_18.right - local_18.left) - iVar4,local_18.bottom - local_18.top,
                           0x14);
      }
      Redraw(this);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

