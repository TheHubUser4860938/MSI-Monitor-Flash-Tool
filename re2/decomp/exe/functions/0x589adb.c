// rea decompile_all
// name: FUN_00589adb
// address: 0x589adb
// body: available
// range: 0x589adb-0x589c73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x589c73 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00589adb(int param_1)

{
  wchar_t *_Dst;
  int iVar1;
  ushort uVar2;
  int *piVar3;
  code *pcVar4;
  bool bVar5;
  undefined4 *_Memory;
  undefined4 *puVar6;
  errno_t eVar7;
  ushort *puVar8;
  uint uVar9;
  ushort *puVar10;
  bool bVar11;
  undefined4 *local_10;
  undefined **local_8;
  
  bVar5 = true;
  _Memory = (undefined4 *)__malloc_base(0x6a6);
  puVar6 = (undefined4 *)0x0;
  if (_Memory != (undefined4 *)0x0) {
    _Dst = (wchar_t *)(_Memory + 1);
    *_Dst = L'\0';
    *_Memory = 1;
    FUN_00589a1a(_Dst,0x351,3,L"LC_COLLATE",&DAT_005e88c8,*(undefined4 *)(param_1 + 0x30));
    local_8 = &PTR_u_LC_COLLATE_005e01d4;
    local_10 = (undefined4 *)(param_1 + 0x30);
    do {
      eVar7 = _wcscat_s(_Dst,0x351,L";");
      if (eVar7 != 0) {
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        pcVar4 = (code *)swi(3);
        puVar6 = (undefined4 *)(*pcVar4)();
        return puVar6;
      }
      puVar6 = local_10 + 4;
      puVar8 = (ushort *)*local_10;
      puVar10 = (ushort *)*puVar6;
      do {
        uVar2 = *puVar8;
        bVar11 = uVar2 < *puVar10;
        if (uVar2 != *puVar10) {
LAB_00589b87:
          uVar9 = -(uint)bVar11 | 1;
          goto LAB_00589b8c;
        }
        if (uVar2 == 0) break;
        uVar2 = puVar8[1];
        bVar11 = uVar2 < puVar10[1];
        if (uVar2 != puVar10[1]) goto LAB_00589b87;
        puVar8 = puVar8 + 2;
        puVar10 = puVar10 + 2;
      } while (uVar2 != 0);
      uVar9 = 0;
LAB_00589b8c:
      local_8 = local_8 + 3;
      bVar5 = (bool)(bVar5 & ~(uVar9 != 0));
      FUN_00589a1a(_Dst,0x351,3,*local_8,&DAT_005e88c8,*puVar6);
      local_10 = puVar6;
    } while ((int)local_8 < 0x5e0204);
    if (bVar5) {
      FID_conflict__free(_Memory);
      piVar3 = *(int **)(param_1 + 0x28);
      if (piVar3 != (int *)0x0) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = iVar1 + -1;
        UNLOCK();
        if (iVar1 + -1 == 0) {
          FID_conflict__free(*(void **)(param_1 + 0x28));
        }
      }
      piVar3 = *(int **)(param_1 + 0x24);
      if (piVar3 != (int *)0x0) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          FID_conflict__free(*(void **)(param_1 + 0x24));
        }
      }
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      puVar6 = *(undefined4 **)(param_1 + 0x40);
    }
    else {
      piVar3 = *(int **)(param_1 + 0x28);
      if (piVar3 != (int *)0x0) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = iVar1 + -1;
        UNLOCK();
        if (iVar1 + -1 == 0) {
          FID_conflict__free(*(void **)(param_1 + 0x28));
        }
      }
      piVar3 = *(int **)(param_1 + 0x24);
      if (piVar3 != (int *)0x0) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          FID_conflict__free(*(void **)(param_1 + 0x24));
        }
      }
      *(undefined4 *)(param_1 + 0x24) = 0;
      puVar6 = _Memory + 1;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 **)(param_1 + 0x28) = _Memory;
      *(undefined4 **)(param_1 + 0x20) = puVar6;
    }
  }
  return puVar6;
}

