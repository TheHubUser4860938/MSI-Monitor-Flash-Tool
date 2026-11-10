// rea decompile_all
// name: FUN_1005b54a
// address: 0x1005b54a
// body: available
// range: 0x1005b54a-0x1005b663 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005b65f to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005b54a(HWND param_1)

{
  CNoTrackObject *pCVar1;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  HWND local_60;
  int iStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 local_50 [14];
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  if ((param_1 != (HWND)0x0) && (*(int *)(in_ECX + 4) == 0)) {
    pCVar1 = CProcessLocalObject::GetData
                       ((CProcessLocalObject *)&DAT_1024530c,
                        CProcessLocal<_AFX_D2D_STATE>::CreateObject);
    if (pCVar1 == (CNoTrackObject *)0x0) {
LAB_1005b65f:
                    /* WARNING: Subroutine does not return */
      FUN_1004a383();
    }
    _AFX_D2D_STATE::InitD2D((_AFX_D2D_STATE *)pCVar1,0,0);
    if (*(int *)(pCVar1 + 0xc) != 0) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      GetClientRect(param_1,&local_18);
      iStack_58 = local_18.bottom - local_18.top;
      iStack_5c = local_18.right - local_18.left;
      local_60 = param_1;
      uStack_54 = 0;
      local_50[3] = 0;
      local_50[0] = 0;
      local_50[1] = 0;
      local_50[2] = 0;
      local_50[5] = 0;
      local_50[6] = 0;
      local_50[4] = 0;
      puVar3 = local_50;
      puVar4 = local_50 + 7;
      for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      pCVar1 = CProcessLocalObject::GetData
                         ((CProcessLocalObject *)&DAT_1024530c,
                          CProcessLocal<_AFX_D2D_STATE>::CreateObject);
      if (pCVar1 == (CNoTrackObject *)0x0) goto LAB_1005b65f;
      _AFX_D2D_STATE::InitD2D((_AFX_D2D_STATE *)pCVar1,0,0);
      iVar2 = **(int **)(pCVar1 + 0xc);
      guard_check_icall(*(int **)(pCVar1 + 0xc),local_50 + 7,&local_60,(undefined4 *)(in_ECX + 0x28)
                       );
      iVar2 = (**(code **)(iVar2 + 0x38))();
      if (-1 < iVar2) {
        *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(in_ECX + 0x28);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

