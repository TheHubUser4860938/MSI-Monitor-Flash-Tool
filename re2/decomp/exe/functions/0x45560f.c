// rea decompile_all
// name: FUN_0045560f
// address: 0x45560f
// body: available
// range: 0x45560f-0x455692 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45568e to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045560f(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  CWnd *pCVar4;
  uint in_ECX;
  
  CGdiObject::DeleteObject((CGdiObject *)(in_ECX + 0xcec));
  CTooltipManager::DeleteToolTip((CToolTipCtrl **)(in_ECX + 0xd08));
  FUN_00480842();
  DAT_00614ebc = DAT_00614ebc & -(uint)(DAT_00614ebc != in_ECX);
  puVar2 = DAT_00614f3c;
  while( true ) {
    puVar3 = puVar2;
    if (puVar3 == (undefined4 *)0x0) {
      return;
    }
    if (puVar3 == (undefined4 *)0x0) break;
    uVar1 = puVar3[2];
    puVar2 = (undefined4 *)*puVar3;
    if (uVar1 == 0) break;
    pCVar4 = CWnd::FromHandlePermanent(*(HWND__ **)(uVar1 + 0x20));
    if ((pCVar4 != (CWnd *)0x0) && (uVar1 == in_ECX)) {
      FUN_004d2617(puVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00429127();
}

