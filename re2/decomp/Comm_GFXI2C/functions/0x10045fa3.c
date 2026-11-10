// rea decompile_all
// name: FUN_10045fa3
// address: 0x10045fa3
// body: available
// range: 0x10045fa3-0x10046041 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10046002 to 0x10046060 FUN_10046060 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10046040 to 0x10046060 FUN_10046060 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void __fastcall FUN_10045fa3(int param_1)

{
  CMapPtrToPtr *pCVar1;
  int iVar2;
  undefined4 *puVar3;
  void **ppvVar4;
  void *this;
  void *local_1c;
  void *local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x10045faf;
  pCVar1 = *(CMapPtrToPtr **)(param_1 + 0x3c);
  this = (void *)0x0;
  local_1c = (void *)0x0;
  if (pCVar1 == (CMapPtrToPtr *)0x0) {
    pCVar1 = FUN_10038ad8(0x1c);
    local_8 = 0;
    if (pCVar1 == (CMapPtrToPtr *)0x0) {
      pCVar1 = (CMapPtrToPtr *)0x0;
    }
    else {
      pCVar1 = (CMapPtrToPtr *)CMapPtrToPtr::CMapPtrToPtr(pCVar1,10);
    }
    local_8 = 0xffffffff;
  }
  iVar2 = CMapPtrToPtr::Lookup(pCVar1,(void *)0x1,&local_1c);
  if (iVar2 == 0) {
    puVar3 = FUN_10038ad8(0x14);
    if (puVar3 != (undefined4 *)0x0) {
      this = (void *)FUN_10045cf3(puVar3);
    }
    local_8 = 1;
    local_18 = this;
    SetSize(this,1,*(int *)(param_1 + 0x40));
    ppvVar4 = CMapPtrToPtr::operator[](pCVar1,(void *)0x1);
    *ppvVar4 = this;
    FUN_10046060();
    return;
  }
  local_18 = local_1c;
  FUN_10046060();
  return;
}

