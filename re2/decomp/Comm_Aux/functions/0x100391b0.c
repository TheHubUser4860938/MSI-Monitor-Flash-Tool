// rea decompile_all
// name: FUN_100391b0
// address: 0x100391b0
// body: available
// range: 0x100391b0-0x1003924c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100391b0(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  int *piVar5;
  
  FUN_10053dc1(1);
  DAT_1021ae70 = *(undefined4 *)(in_ECX + 0x2d8);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this,(wchar_t *)(in_ECX + 0x2dc),&DAT_101e3d90,DAT_1021ae8c);
  iVar3 = *(int *)(in_ECX + 0x2e0);
  piVar5 = (int *)(iVar3 + -0x10);
  piVar1 = (int *)(DAT_1021ae88 + -0x10);
  if (piVar1 != piVar5) {
    piVar2 = (int *)(iVar3 + -4);
    if ((-1 < *(int *)(iVar3 + -4)) && (*piVar1 == *piVar5)) {
      iVar4 = FUN_100349e0(piVar1);
      LOCK();
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1 || iVar3 + -1 < 0) {
        (**(code **)(*(int *)*piVar5 + 4))(piVar5);
      }
      *(int *)(in_ECX + 0x2e0) = iVar4 + 0x10;
      return;
    }
    FUN_100351f0(DAT_1021ae88,*(undefined4 *)(DAT_1021ae88 + -0xc));
  }
  return;
}

