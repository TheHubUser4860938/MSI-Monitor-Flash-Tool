// rea decompile_all
// name: FUN_10068889
// address: 0x10068889
// body: available
// range: 0x10068889-0x1006894c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10068943 to 0x10050dca FUN_10050dca (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10068948 to 0x1004a3b7 FUN_1004a3b7 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10068889(CRuntimeClass *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void **ppvVar3;
  CArchive *in_ECX;
  undefined4 uVar4;
  
  if (param_1 == (CRuntimeClass *)0x0) {
    uVar2 = FUN_10046f30();
    uVar4 = 6;
  }
  else {
    if ((~*(uint *)(in_ECX + 0x18) & 1) != 0) {
      if (*(int *)(param_1 + 8) != 0xffff) {
        CArchive::MapObject(in_ECX,(CObject *)0x0);
        ppvVar3 = CMapPtrToPtr::operator[](*(CMapPtrToPtr **)(in_ECX + 0x38),param_1);
        pvVar1 = *ppvVar3;
        if (pvVar1 == (void *)0x0) {
          FUN_100511e3(0xffff);
          CRuntimeClass::Store(param_1,in_ECX);
          FUN_10068081();
          ppvVar3 = CMapPtrToPtr::operator[](*(CMapPtrToPtr **)(in_ECX + 0x38),param_1);
          *ppvVar3 = *(void **)(in_ECX + 0x34);
          *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + 1;
        }
        else if (pvVar1 < (void *)0x7fff) {
          FUN_100511e3((uint)pvVar1 | 0x8000);
        }
        else {
          FUN_100511e3(0x7fff);
          FUN_10051228((uint)pvVar1 | 0x80000000);
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_1004a3b7();
    }
    uVar2 = FUN_10046f30();
    uVar4 = 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10050dca(uVar4,uVar2);
}

