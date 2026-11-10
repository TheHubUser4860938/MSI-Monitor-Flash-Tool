// rea decompile_all
// name: FUN_1000fb30
// address: 0x1000fb30
// body: available
// range: 0x1000fb30-0x1000fbf0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000fbf0 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000fb30(void)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *in_ECX;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  undefined **local_18 [5];
  
  if (in_ECX[0x17] == 0) {
    piVar7 = (int *)0x0;
  }
  else {
    cVar2 = FUN_1000e940();
    piVar7 = in_ECX + 4;
    if (cVar2 == '\0') {
      piVar7 = (int *)0x0;
    }
    iVar3 = _fclose((FILE *)in_ECX[0x17]);
    if (iVar3 != 0) {
      piVar7 = (int *)0x0;
    }
  }
  FUN_1000ec50(0,2);
  if (piVar7 == (int *)0x0) {
    iVar3 = *(int *)(*in_ECX + 4);
    uVar4 = *(uint *)(iVar3 + 0xc + (int)in_ECX);
    uVar6 = uVar4 | 6;
    if (*(int *)((int)in_ECX + iVar3 + 0x38) != 0) {
      uVar6 = uVar4 | 2;
    }
    *(uint *)((int)in_ECX + iVar3 + 0xc) = uVar6 & 0x17;
    uVar4 = *(uint *)((int)in_ECX + iVar3 + 0x10) & uVar6 & 0x17;
    if (uVar4 != 0) {
      if ((uVar4 & 4) == 0) {
        if ((uVar4 & 2) == 0) {
          uVar5 = FUN_100057f0();
          pcVar8 = "ios_base::eofbit set";
        }
        else {
          uVar5 = FUN_100057f0();
          pcVar8 = "ios_base::failbit set";
        }
      }
      else {
        uVar5 = FUN_100057f0();
        pcVar8 = "ios_base::badbit set";
      }
      FUN_10006bd0(1,uVar5,pcVar8);
      local_18[0] = std::ios_base::failure::vftable;
      __CxxThrowException_8(local_18,&DAT_101ed1a0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

