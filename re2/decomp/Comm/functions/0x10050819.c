// rea decompile_all
// name: FUN_10050819
// address: 0x10050819
// body: available
// range: 0x10050819-0x100508eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100508e7 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10050819(int param_1)

{
  int iVar1;
  void *ho;
  HDC__ *hdc;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x40) != 0) {
    SelectObject(DAT_101daec8,*(HGDIOBJ *)(param_1 + 4));
    FUN_10024a48(param_1);
  }
  SelectObject(DAT_101daec4,*(HGDIOBJ *)(param_1 + 8));
  *(undefined4 *)(in_ECX + 100) = 0;
  *(undefined4 *)(in_ECX + 0x68) = 0;
  *(undefined4 *)(in_ECX + 0x6c) = 0;
  *(undefined4 *)(in_ECX + 0x70) = 0;
  *(undefined4 *)(in_ECX + 0x74) = 0;
  *(undefined4 *)(in_ECX + 0x78) = 0;
  if (*(int *)(in_ECX + 8) == 0x20) {
    iVar1 = -1;
  }
  else {
    iVar1 = *(int *)(in_ECX + 0xa8);
  }
  if ((*(int *)(in_ECX + 0x20) != 0) || (iVar1 != -1)) {
    if (*(int *)(in_ECX + 0xa4) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10012a3f();
    }
    CDC::SelectGdiObject(*(HDC__ **)(in_ECX + 0x48),*(void **)(*(int *)(in_ECX + 0xa4) + 4));
    *(undefined4 *)(in_ECX + 0xa4) = 0;
    ho = CGdiObject::Detach((CGdiObject *)(in_ECX + 0x9c));
    DeleteObject(ho);
    hdc = CDC::Detach((CDC *)(in_ECX + 0x44));
    DeleteDC(hdc);
  }
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  if (DAT_101dae98 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_101daedc);
  }
  return;
}

