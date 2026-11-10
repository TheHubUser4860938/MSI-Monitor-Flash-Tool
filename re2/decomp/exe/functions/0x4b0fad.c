// rea decompile_all
// name: FUN_004b0fad
// address: 0x4b0fad
// body: available
// range: 0x4b0fad-0x4b1093 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4b108f to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b0fad(UINT param_1)

{
  ushort uVar1;
  BOOL BVar2;
  int iVar3;
  HKL dwhkl;
  UINT wScanCode;
  BYTE *lpKeyState;
  WCHAR *pwszBuff;
  UINT wFlags;
  WCHAR local_110 [4];
  BYTE local_108 [256];
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  if (((param_1 - 0x60 < 10) && (uVar1 = GetAsyncKeyState(0x12), (uVar1 & 0x8000) == 0)) ||
     (DAT_00614ea4 != 0)) {
    _memset(local_110,0,4);
    BVar2 = GetKeyboardState(local_108);
    if (BVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00429127();
    }
    iVar3 = FUN_0042bc8f();
    dwhkl = GetKeyboardLayout(*(DWORD *)(iVar3 + 0x30));
    wFlags = 1;
    iVar3 = 2;
    pwszBuff = local_110;
    lpKeyState = local_108;
    wScanCode = MapVirtualKeyW(param_1,0);
    ToUnicodeEx(param_1,wScanCode,lpKeyState,pwszBuff,iVar3,wFlags,dwhkl);
    local_110[1] = 0;
    CharUpperW(local_110);
  }
  else if ((0x19 < param_1 - 0x41) && (uVar1 = GetAsyncKeyState(0x12), (uVar1 & 0x8000) == 0)) {
    _toupper(param_1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

