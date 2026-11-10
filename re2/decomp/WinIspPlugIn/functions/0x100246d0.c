// rea decompile_all
// name: FUN_100246d0
// address: 0x100246d0
// body: available
// range: 0x100246d0-0x100248dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x100248b8) */
/* WARNING: Removing unreachable block (ram,0x100248a2) */
/* WARNING: Removing unreachable block (ram,0x1002474f) */
/* WARNING: Removing unreachable block (ram,0x1002475e) */
/* WARNING: Removing unreachable block (ram,0x100248a9) */
/* WARNING: Removing unreachable block (ram,0x100248c1) */
/* WARNING: Removing unreachable block (ram,0x100248c8) */

int FUN_100246d0(void)

{
  int iVar1;
  undefined1 *_Dst;
  uint uVar2;
  int *in_ECX;
  int in_EDX;
  int *piVar3;
  int iVar4;
  uint local_20;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c23e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = FUN_10017720(DAT_1023dfec ^ (uint)&stack0xfffffffc);
  if ((iVar1 == 0) && (iVar1 = FUN_10017780(), iVar1 == 0)) {
    local_20 = 0;
    iVar1 = in_ECX[1] - *in_ECX >> 0x1f;
    if ((in_ECX[1] - *in_ECX) / 0xc + iVar1 != iVar1) {
      local_18 = 0;
      iVar1 = 0;
      local_1c = iVar1;
      do {
        _Dst = (undefined1 *)
               FUN_100491e5(*(int *)(*in_ECX + 4 + local_18) - *(int *)(*in_ECX + local_18));
        _memset(_Dst,0,((int *)(*in_ECX + local_18))[1] - *(int *)(*in_ECX + local_18));
        uVar2 = 0;
        piVar3 = (int *)(local_18 + *in_ECX);
        if (piVar3[1] != *piVar3) {
          do {
            _Dst[uVar2] = *(undefined1 *)(uVar2 + *piVar3);
            uVar2 = uVar2 + 1;
            piVar3 = (int *)(*in_ECX + local_18);
            iVar1 = local_1c;
          } while (uVar2 < (uint)(piVar3[1] - *piVar3));
        }
        iVar4 = *(int *)(in_EDX + 0x18);
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          iVar1 = (**(code **)(*DAT_10249d10 + 0x13c))(*_Dst,_Dst[1],_Dst[2] & 0x7f,_Dst + 3);
          Sleep(*(DWORD *)(in_EDX + 0x14));
          local_1c = iVar1;
        } while (iVar1 != 0);
        if (_Dst != (undefined1 *)0x0) {
          FID_conflict__free(_Dst);
        }
        if (iVar1 != 0) {
          ExceptionList = local_10;
          return iVar1;
        }
        local_20 = local_20 + 1;
        local_18 = local_18 + 0xc;
      } while (local_20 < (uint)((in_ECX[1] - *in_ECX) / 0xc));
    }
    iVar1 = 0;
  }
  ExceptionList = local_10;
  return iVar1;
}

