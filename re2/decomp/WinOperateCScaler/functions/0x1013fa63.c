// rea decompile_all
// name: FUN_1013fa63
// address: 0x1013fa63
// body: available
// range: 0x1013fa63-0x1013fb14 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1013fb10 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1013fa63(LONG param_1,LONG param_2)

{
  POINT pt;
  int iVar1;
  BOOL BVar2;
  int in_ECX;
  int local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)(in_ECX + 0x20),&local_18);
  local_2c = *(int *)(in_ECX + 0x84);
  do {
    if (local_2c == 0) break;
    iVar1 = FUN_1006a9f1(&local_2c);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1001d023();
    }
    local_28.left = *(LONG *)(iVar1 + 0x54);
    local_28.top = *(LONG *)(iVar1 + 0x58);
    local_28.right = *(LONG *)(iVar1 + 0x5c);
    local_28.bottom = *(LONG *)(iVar1 + 0x60);
    OffsetRect(&local_28,0,-*(int *)(in_ECX + 300));
    pt.y = param_2;
    pt.x = param_1;
    BVar2 = PtInRect(&local_28,pt);
  } while (BVar2 == 0);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

