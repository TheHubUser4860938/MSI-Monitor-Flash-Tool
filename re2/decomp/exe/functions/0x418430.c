// rea decompile_all
// name: FUN_00418430
// address: 0x418430
// body: available
// range: 0x418430-0x418595 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x418591 to 0x429141 FUN_00429141 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


DLGTEMPLATE * FUN_00418430(DLGTEMPLATE *param_1,undefined4 *param_2)

{
  short *psVar1;
  bool bVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  DLGTEMPLATE *pDVar9;
  uint uVar10;
  SIZE_T dwBytes;
  void *pvVar11;
  int local_14;
  
  pvVar3 = (void *)FUN_00418597(param_1);
  uVar4 = (int)pvVar3 - (int)param_1;
  iVar5 = IsDialogEx(param_1);
  iVar6 = IsDialogEx(param_1);
  bVar2 = false;
  uVar7 = (uint)*(ushort *)((int)&param_1->cdit + (-(uint)(iVar6 != 0) & 8));
  uVar10 = uVar7;
  pvVar11 = pvVar3;
  dwBytes = uVar4;
  if (uVar7 != 0) {
    do {
      pvVar8 = (void *)FUN_00418622(pvVar11,iVar5);
      if (*(short *)((-(uint)(iVar5 != 0) & 6) + 0x12 + (int)pvVar11) == 0x7b) {
        bVar2 = true;
      }
      else {
        dwBytes = (int)pvVar8 + (dwBytes - (int)pvVar11);
      }
      uVar10 = uVar10 - 1;
      pvVar11 = pvVar8;
    } while (uVar10 != 0);
    if (bVar2) {
      pDVar9 = GlobalAlloc(0,dwBytes);
      if (pDVar9 != (DLGTEMPLATE *)0x0) {
        ATL::Checked::memmove_s(pDVar9,dwBytes,param_1,uVar4);
        pvVar11 = (void *)((int)pDVar9 + uVar4);
        iVar6 = IsDialogEx(pDVar9);
        *(undefined2 *)((int)&pDVar9->cdit + (-(uint)(iVar6 != 0) & 8)) = 0;
        local_14 = 0;
        do {
          pvVar8 = (void *)FUN_00418622(pvVar3,iVar5);
          if (*(short *)((-(uint)(iVar5 != 0) & 6) + 0x12 + (int)pvVar3) == 0x7b) {
            param_2[local_14] = pvVar3;
          }
          else {
            uVar10 = (int)pvVar8 - (int)pvVar3;
            ATL::Checked::memmove_s(pvVar11,uVar10,pvVar3,uVar10);
            pvVar11 = (void *)((int)pvVar11 + uVar10);
            iVar6 = IsDialogEx(pDVar9);
            psVar1 = (short *)((int)&pDVar9->cdit + (-(uint)(iVar6 != 0) & 8));
            *psVar1 = *psVar1 + 1;
            param_2[local_14] = 0;
          }
          local_14 = local_14 + 1;
          pvVar3 = pvVar8;
        } while (local_14 < (int)uVar7);
        param_2[uVar7] = 0xffffffff;
        return pDVar9;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00429141();
    }
  }
  *param_2 = 0xffffffff;
  return (DLGTEMPLATE *)0x0;
}

