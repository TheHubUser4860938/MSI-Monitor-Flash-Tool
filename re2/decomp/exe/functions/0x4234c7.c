// rea decompile_all
// name: CMFCVisualManagerWindows::OnEraseTabsButton
// address: 0x4234c7
// body: available
// range: 0x4234c7-0x42364d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerWindows::OnEraseTabsButton(class CDC *,class
   CRect,class CMFCButton *,class CMFCBaseTabCtrl *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerWindows::OnEraseTabsButton
          (CMFCVisualManagerWindows *this,CDC *param_1,LONG param_3,LONG param_4,LONG param_5,
          LONG param_6,int param_7,int *param_8)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  CDC *this_00;
  int iVar4;
  HRGN pHVar5;
  HWND hWndTo;
  undefined **local_44;
  undefined4 local_40;
  CMFCVisualManagerWindows *local_3c;
  CDC *local_38;
  undefined4 local_34;
  LONG local_30;
  undefined4 local_2c;
  int local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  piVar3 = param_8;
  iVar2 = param_7;
  uStack_4 = 0x34;
  local_8 = 0x4234d3;
  local_38 = param_1;
  local_3c = this;
  if ((DAT_00612d3c != 0) && (*(int *)(this + 0x40) != 0)) {
    pcVar1 = *(code **)(*param_8 + 0x280);
    guard_check_icall();
    iVar4 = (*pcVar1)();
    if (iVar4 == 0) {
      pcVar1 = *(code **)(*piVar3 + 0x288);
      guard_check_icall();
      iVar4 = (*pcVar1)();
      if (iVar4 == 0) {
        pcVar1 = *(code **)(*piVar3 + 0x28c);
        guard_check_icall();
        iVar4 = (*pcVar1)();
        if (iVar4 == 0) {
          local_44 = CRgn::vftable;
          local_40 = 0;
          local_8 = 0;
          pHVar5 = CreateRectRgnIndirect((RECT *)&param_3);
          CMenu::Attach((CMenu *)&local_44,(HMENU__ *)pHVar5);
          CDC::SelectClipRgn(local_38,(CRgn *)&local_44);
          local_24.left = 0;
          local_24.top = 0;
          local_24.right = 0;
          local_24.bottom = 0;
          GetClientRect((HWND)piVar3[8],&local_24);
          local_34 = 0;
          local_30 = 0;
          local_2c = 0;
          local_28 = 0;
          pcVar1 = *(code **)(*piVar3 + 0x180);
          guard_check_icall(&local_34);
          (*pcVar1)();
          if (piVar3[0x24] == 0) {
            local_24.bottom = local_24.bottom + 2;
            local_24.top = local_30;
          }
          else {
            local_24.bottom = local_28;
          }
          if (iVar2 == 0) {
            hWndTo = (HWND)0x0;
          }
          else {
            hWndTo = *(HWND *)(iVar2 + 0x20);
          }
          MapWindowPoints((HWND)piVar3[8],hWndTo,(LPPOINT)&local_24,2);
          this_00 = local_38;
          pcVar1 = *(code **)(*(int *)local_3c + 0xf0);
          guard_check_icall(local_38,local_24.left,local_24.top,local_24.right,local_24.bottom,
                            piVar3);
          (*pcVar1)();
          CDC::SelectClipRgn(this_00,(CRgn *)0x0);
          local_44 = CRgn::vftable;
          FUN_0040ee80();
          goto LAB_00423646;
        }
      }
    }
  }
  CMFCVisualManagerOfficeXP::OnEraseTabsButton
            ((CMFCVisualManagerOfficeXP *)local_3c,local_38,param_3,param_4,param_5,param_6,iVar2,
             piVar3);
LAB_00423646:
  FUN_0055bae6();
  return;
}

