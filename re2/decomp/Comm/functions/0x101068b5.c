// rea decompile_all
// name: FUN_101068b5
// address: 0x101068b5
// body: available
// range: 0x101068b5-0x101069a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1010699f to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_101068b5(int param_1)

{
  BOOL BVar1;
  int iVar2;
  HRESULT HVar3;
  int in_ECX;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10012a3f();
  }
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)(in_ECX + 0x20),&local_18);
  if (*(HTHEME *)(in_ECX + 0xa8) != (HTHEME)0x0) {
    BVar1 = IsThemeBackgroundPartiallyTransparent(*(HTHEME *)(in_ECX + 0xa8),6,0);
    if (BVar1 != 0) {
      DrawThemeParentBackground(*(HWND *)(in_ECX + 0x20),*(HDC *)(param_1 + 4),&local_18);
    }
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    SetRectEmpty(&local_28);
    SystemParametersInfoW(0x30,0,&local_28,0);
    iVar2 = local_18.right + 1;
    local_18.right = local_28.right;
    if (local_28.right <= iVar2) {
      local_18.right = iVar2;
    }
    local_18.top = local_18.top + -1;
    iVar2 = local_18.bottom + 1;
    local_18.bottom = local_28.bottom;
    if (local_28.bottom <= iVar2) {
      local_18.bottom = iVar2;
    }
    HVar3 = DrawThemeBackground(*(HTHEME *)(in_ECX + 0xa8),*(HDC *)(param_1 + 4),6,0,&local_18,
                                (LPCRECT)0x0);
    if (-1 < HVar3) goto LAB_1010698c;
  }
  FUN_1001d029();
LAB_1010698c:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

