// rea decompile_all
// name: __open_osfhandle
// address: 0x1018b47a
// body: available
// range: 0x1018b47a-0x1018b55c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __open_osfhandle
   
   Library: Visual Studio 2015 Release */

int __cdecl __open_osfhandle(intptr_t _OSFileHandle,int _Flags)

{
  byte *pbVar1;
  DWORD DVar2;
  uint uVar3;
  int *piVar4;
  ulong *puVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  
  bVar8 = 0;
  if ((_Flags & 8U) != 0) {
    bVar8 = 0x20;
  }
  if ((_Flags & 0x4000U) != 0) {
    bVar8 = bVar8 | 0x80;
  }
  if ((_Flags & 0x80U) != 0) {
    bVar8 = bVar8 | 0x10;
  }
  DVar2 = GetFileType((HANDLE)_OSFileHandle);
  if (DVar2 == 0) {
    DVar2 = GetLastError();
    ___acrt_errno_map_os_error(DVar2);
  }
  else {
    if (DVar2 == 2) {
      bVar8 = bVar8 | 0x40;
    }
    else if (DVar2 == 3) {
      bVar8 = bVar8 | 8;
    }
    uVar3 = __alloc_osfhnd();
    if (uVar3 != 0xffffffff) {
      ___acrt_lowio_set_os_handle(uVar3,_OSFileHandle);
      iVar7 = (int)uVar3 >> 6;
      iVar6 = (uVar3 & 0x3f) * 0x30;
      *(byte *)(iVar6 + 0x28 + (&DAT_10211ab0)[iVar7]) = bVar8 | 1;
      *(undefined1 *)(iVar6 + 0x29 + (&DAT_10211ab0)[iVar7]) = 0;
      pbVar1 = (byte *)(iVar6 + 0x2d + (&DAT_10211ab0)[iVar7]);
      *pbVar1 = *pbVar1 & 0xfe;
      FUN_1018b563();
      return uVar3;
    }
    piVar4 = __errno();
    *piVar4 = 0x18;
    puVar5 = ___doserrno();
    *puVar5 = 0;
  }
  return -1;
}

