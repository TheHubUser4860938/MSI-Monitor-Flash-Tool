// rea decompile_all
// name: FUN_10195448
// address: 0x10195448
// body: available
// range: 0x10195448-0x101954fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10195448(void)

{
  HANDLE hFile;
  uint uVar1;
  int iVar2;
  uint uVar3;
  DWORD nStdHandle;
  
  uVar3 = 0;
  do {
    iVar2 = (uVar3 & 0x3f) * 0x30 + (&DAT_10211ab0)[(int)uVar3 >> 6];
    if ((*(int *)(iVar2 + 0x18) == -1) || (*(int *)(iVar2 + 0x18) == -2)) {
      *(undefined1 *)(iVar2 + 0x28) = 0x81;
      if (uVar3 == 0) {
        nStdHandle = 0xfffffff6;
      }
      else if (uVar3 == 1) {
        nStdHandle = 0xfffffff5;
      }
      else {
        nStdHandle = 0xfffffff4;
      }
      hFile = GetStdHandle(nStdHandle);
      if ((hFile == (HANDLE)0xffffffff) || (hFile == (HANDLE)0x0)) {
        uVar1 = 0;
      }
      else {
        uVar1 = GetFileType(hFile);
      }
      if (uVar1 == 0) {
        *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) | 0x40;
        *(undefined4 *)(iVar2 + 0x18) = 0xfffffffe;
        if (DAT_10211a94 != 0) {
          *(undefined4 *)(*(int *)(DAT_10211a94 + uVar3 * 4) + 0x10) = 0xfffffffe;
        }
      }
      else {
        *(HANDLE *)(iVar2 + 0x18) = hFile;
        if ((uVar1 & 0xff) == 2) {
          *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) | 0x40;
        }
        else if ((uVar1 & 0xff) == 3) {
          *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) | 8;
        }
      }
    }
    else {
      *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) | 0x80;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != 3);
  return;
}

