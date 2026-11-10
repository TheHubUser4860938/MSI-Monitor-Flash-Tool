// rea decompile_all
// name: FUN_00443904
// address: 0x443904
// body: available
// range: 0x443904-0x443a29 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x443a25 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00443904(int param_1,RECT *param_2,undefined4 param_3,undefined4 *param_4)

{
  HDC pHVar1;
  CDC *pCVar2;
  HRGN pHVar3;
  undefined4 uVar4;
  undefined **local_24;
  undefined4 local_20;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  uVar4 = 0;
  local_20 = 0;
  local_24 = CRgn::vftable;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  FUN_00434a7a(*(undefined4 *)(param_1 + -0xb4));
  if (param_4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
  *param_4 = 0;
  if (*(int *)(param_1 + -8) == 0) {
    pHVar1 = GetDC(*(HWND *)(*(int *)(*(int *)(param_1 + -0xb0) + 0x20) + 0x20));
    pCVar2 = CDC::FromHandle(pHVar1);
    *(CDC **)(param_1 + -8) = pCVar2;
    if (pCVar2 != (CDC *)0x0) {
      if (param_2 == (RECT *)0x0) {
        local_18.left = *(LONG *)(param_1 + -0xa0);
        local_18.top = *(LONG *)(param_1 + -0x9c);
        local_18.right = *(LONG *)(param_1 + -0x98);
        local_18.bottom = *(LONG *)(param_1 + -0x94);
      }
      else {
        IntersectRect(&local_18,(RECT *)(param_1 + -0xa0),param_2);
      }
      pHVar3 = CreateRectRgnIndirect(&local_18);
      CMenu::Attach((CMenu *)&local_24,(HMENU__ *)pHVar3);
      CDC::SelectClipRgn(*(CDC **)(param_1 + -8),(CRgn *)&local_24,1);
      if (*(int *)(param_1 + -8) != 0) {
        uVar4 = *(undefined4 *)(*(int *)(param_1 + -8) + 4);
      }
      *param_4 = uVar4;
      guard_check_icall();
      local_24 = CRgn::vftable;
      FUN_0040ee80();
      goto LAB_00443a12;
    }
  }
  guard_check_icall();
  local_24 = CRgn::vftable;
  FUN_0040ee80();
LAB_00443a12:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

