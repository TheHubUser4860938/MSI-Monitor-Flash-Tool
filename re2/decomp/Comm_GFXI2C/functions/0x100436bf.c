// rea decompile_all
// name: Catch@100436bf
// address: 0x100436bf
// body: available
// range: 0x100436bf-0x10043743 inclusive
// range: 0x10043745-0x10043752 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100436fa to 0x10038df9 FUN_10038df9 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void Catch_100436bf(void)

{
  uint uBytes;
  HLOCAL pvVar1;
  int unaff_EBP;
  LPVOID unaff_ESI;
  DWORD *unaff_EDI;
  UINT uFlags;
  
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(int *)(unaff_EBP + -0x18) + 0x1c));
  __CxxThrowException_8(0,(byte *)0x0);
  uFlags = 2;
  uBytes = ATL::AtlMultiplyThrow<unsigned_int>(unaff_EDI[3],4);
  pvVar1 = LocalReAlloc(*(HLOCAL *)((int)unaff_ESI + 0xc),uBytes,uFlags);
  if (pvVar1 == (HLOCAL)0x0) {
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(unaff_EBP + -0x14));
                    /* WARNING: Subroutine does not return */
    FUN_10038df9();
  }
  *(HLOCAL *)((int)unaff_ESI + 0xc) = pvVar1;
  _memset((void *)((int)pvVar1 + *(int *)((int)unaff_ESI + 8) * 4),0,
          (unaff_EDI[3] - *(int *)((int)unaff_ESI + 8)) * 4);
  *(DWORD *)((int)unaff_ESI + 8) = unaff_EDI[3];
  TlsSetValue(*unaff_EDI,unaff_ESI);
  if ((*(int *)((int)unaff_ESI + 0xc) != 0) &&
     (*(int *)(unaff_EBP + 8) < *(int *)((int)unaff_ESI + 8))) {
    *(undefined4 *)(*(int *)((int)unaff_ESI + 0xc) + *(int *)(unaff_EBP + 8) * 4) =
         *(undefined4 *)(unaff_EBP + 0xc);
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(unaff_EBP + -0x14));
  return;
}

