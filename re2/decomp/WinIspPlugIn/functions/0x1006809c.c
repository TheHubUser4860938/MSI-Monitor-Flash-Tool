// rea decompile_all
// name: FUN_1006809c
// address: 0x1006809c
// body: available
// range: 0x1006809c-0x10068137 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100680f8 to 0x10068164 FUN_10068164 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10068136 to 0x10068164 FUN_10068164 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void FUN_1006809c(void)

{
  CMapPtrToPtr *pCVar1;
  int iVar2;
  void **ppvVar3;
  int in_ECX;
  void *pvVar4;
  void *local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x100680a8;
  pCVar1 = *(CMapPtrToPtr **)(in_ECX + 0x3c);
  pvVar4 = (void *)0x0;
  local_18[0] = (void *)0x0;
  if (pCVar1 == (CMapPtrToPtr *)0x0) {
    pCVar1 = (CMapPtrToPtr *)FUN_100491ae(0x1c);
    local_8 = 0;
    if (pCVar1 == (CMapPtrToPtr *)0x0) {
      pCVar1 = (CMapPtrToPtr *)0x0;
    }
    else {
      pCVar1 = (CMapPtrToPtr *)CMapPtrToPtr::CMapPtrToPtr(pCVar1,10);
    }
    local_8 = 0xffffffff;
  }
  iVar2 = CMapPtrToPtr::Lookup(pCVar1,(void *)0x1,local_18);
  if (iVar2 == 0) {
    iVar2 = FUN_100491ae(0x14);
    if (iVar2 != 0) {
      pvVar4 = (void *)FUN_10068024();
    }
    local_8 = 1;
    FUN_1006874b(1,*(undefined4 *)(in_ECX + 0x40));
    ppvVar3 = CMapPtrToPtr::operator[](pCVar1,(void *)0x1);
    *ppvVar3 = pvVar4;
    FUN_10068164();
    return;
  }
  FUN_10068164();
  return;
}

