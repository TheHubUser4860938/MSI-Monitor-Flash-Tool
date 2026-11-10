// rea decompile_all
// name: truncate_ctrl_z_if_present
// address: 0x59a728
// body: available
// range: 0x59a728-0x59a7d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl truncate_ctrl_z_if_present(int)
   
   Library: Visual Studio 2015 Release */

int __cdecl truncate_ctrl_z_if_present(int param_1)

{
  byte bVar1;
  ulong *puVar2;
  int iVar3;
  int *piVar4;
  int unaff_EDI;
  longlong lVar5;
  uint local_8;
  
  bVar1 = *(byte *)((&DAT_006190a0)[param_1 >> 6] + 0x28 + (param_1 & 0x3fU) * 0x30);
  if (((bVar1 & 0x48) != 0) || (-1 < (char)bVar1)) {
    return 0;
  }
  lVar5 = __lseeki64_nolock(param_1,0x2ffffffff,unaff_EDI);
  if (lVar5 == -1) {
    puVar2 = ___doserrno();
    if (*puVar2 == 0x83) {
      return 0;
    }
  }
  else {
    local_8 = local_8 & 0xffff0000;
    iVar3 = __read_nolock(param_1,&local_8,1);
    if ((((iVar3 != 0) || ((short)local_8 != 0x1a)) ||
        (iVar3 = __chsize_nolock(param_1,CONCAT44(unaff_EDI,(int)((ulonglong)lVar5 >> 0x20))),
        iVar3 != -1)) && (lVar5 = __lseeki64_nolock(param_1,0,unaff_EDI), lVar5 != -1)) {
      return 0;
    }
  }
  piVar4 = __errno();
  return *piVar4;
}

