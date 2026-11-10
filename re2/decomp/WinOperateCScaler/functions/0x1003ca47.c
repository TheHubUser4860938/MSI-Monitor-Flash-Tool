// rea decompile_all
// name: FUN_1003ca47
// address: 0x1003ca47
// body: available
// range: 0x1003ca47-0x1003cb0a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003cb01 to 0x100256ec FUN_100256ec (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1003cb06 to 0x1001d057 FUN_1001d057 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003ca47(CRuntimeClass *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void **ppvVar3;
  CArchive *in_ECX;
  undefined4 uVar4;
  
  if (param_1 == (CRuntimeClass *)0x0) {
    uVar2 = FUN_1001d272();
    uVar4 = 6;
  }
  else {
    if ((~*(uint *)(in_ECX + 0x18) & 1) != 0) {
      if (*(int *)(param_1 + 8) != 0xffff) {
        CArchive::MapObject(in_ECX,(CObject *)0x0);
        ppvVar3 = CMapPtrToPtr::operator[](*(CMapPtrToPtr **)(in_ECX + 0x38),param_1);
        pvVar1 = *ppvVar3;
        if (pvVar1 == (void *)0x0) {
          FUN_10025aba(0xffff);
          CRuntimeClass::Store(param_1,in_ECX);
          FUN_1003c39b();
          ppvVar3 = CMapPtrToPtr::operator[](*(CMapPtrToPtr **)(in_ECX + 0x38),param_1);
          *ppvVar3 = *(void **)(in_ECX + 0x34);
          *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + 1;
        }
        else if (pvVar1 < (void *)0x7fff) {
          FUN_10025aba((uint)pvVar1 | 0x8000);
        }
        else {
          FUN_10025aba(0x7fff);
          FUN_10025aff((uint)pvVar1 | 0x80000000);
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_1001d057();
    }
    uVar2 = FUN_1001d272();
    uVar4 = 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_100256ec(uVar4,uVar2);
}

