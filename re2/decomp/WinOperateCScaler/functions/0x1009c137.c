// rea decompile_all
// name: FUN_1009c137
// address: 0x1009c137
// body: available
// range: 0x1009c137-0x1009c21d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1009c219 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1009c137(UINT param_1)

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
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  if (((param_1 - 0x60 < 10) && (uVar1 = GetAsyncKeyState(0x12), (uVar1 & 0x8000) == 0)) ||
     (DAT_10209cbc != 0)) {
    _memset(local_110,0,4);
    BVar2 = GetKeyboardState(local_108);
    if (BVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1001d023();
    }
    iVar3 = FUN_10020ecf();
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

