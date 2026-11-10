// rea decompile_all
// name: FUN_00439915
// address: 0x439915
// body: available
// range: 0x439915-0x439a2d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x439a29 to 0x429141 FUN_00429141 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00439915(void)

{
  uint *puVar1;
  int iVar2;
  byte *pbVar3;
  SIZE_T SVar4;
  HGLOBAL pvVar5;
  LPVOID pvVar6;
  int in_ECX;
  int iVar7;
  UINT uFlags;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x1c));
  iVar2 = *(int *)(in_ECX + 4);
  iVar7 = *(int *)(in_ECX + 8);
  if ((iVar2 <= iVar7) || ((*(byte *)(*(int *)(in_ECX + 0x10) + iVar7 * 8) & 1) != 0)) {
    iVar7 = 1;
    if (1 < iVar2) {
      pbVar3 = *(byte **)(in_ECX + 0x10);
      do {
        pbVar3 = pbVar3 + 8;
        if ((*pbVar3 & 1) == 0) break;
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar2);
      if (iVar7 < iVar2) goto LAB_004399ea;
    }
    iVar2 = iVar2 + 0x20;
    if (*(int *)(in_ECX + 0x10) == 0) {
      SVar4 = FUN_0042948d(iVar2,8);
      pvVar5 = GlobalAlloc(2,SVar4);
    }
    else {
      pvVar5 = GlobalHandle(*(LPCVOID *)(in_ECX + 0x10));
      GlobalUnlock(pvVar5);
      uFlags = 0x2002;
      SVar4 = FUN_0042948d(iVar2,8);
      pvVar5 = GlobalReAlloc(pvVar5,SVar4,uFlags);
    }
    if (pvVar5 == (HGLOBAL)0x0) {
      if (*(int *)(in_ECX + 0x10) != 0) {
        pvVar5 = GlobalHandle(*(LPCVOID *)(in_ECX + 0x10));
        GlobalLock(pvVar5);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x1c));
                    /* WARNING: Subroutine does not return */
      FUN_00429141();
    }
    pvVar6 = GlobalLock(pvVar5);
    _memset((void *)((int)pvVar6 + *(int *)(in_ECX + 4) * 8),0,(iVar2 - *(int *)(in_ECX + 4)) * 8);
    *(LPVOID *)(in_ECX + 0x10) = pvVar6;
    *(int *)(in_ECX + 4) = iVar2;
  }
LAB_004399ea:
  if (*(int *)(in_ECX + 0xc) <= iVar7) {
    *(int *)(in_ECX + 0xc) = iVar7 + 1;
  }
  puVar1 = (uint *)(*(int *)(in_ECX + 0x10) + iVar7 * 8);
  *puVar1 = *puVar1 | 1;
  *(int *)(in_ECX + 8) = iVar7 + 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x1c));
  return iVar7;
}

