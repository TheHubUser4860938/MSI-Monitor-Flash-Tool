// rea decompile_all
// name: FUN_10038d60
// address: 0x10038d60
// body: available
// range: 0x10038d60-0x10038e5c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10038e36 to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10038d60(void)

{
  int *piVar1;
  int iVar2;
  LPSTR lpString;
  undefined4 *puVar3;
  byte bVar4;
  uint uVar5;
  int unaff_EDI;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101a09c8;
  local_10 = ExceptionList;
  lpString = (LPSTR)(DAT_10206460 ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  FUN_100352e0(&DAT_101e24d0);
  local_8 = 0;
  FID_conflict_GetDlgItemTextA((HWND)0xbc2,(int)&local_14,lpString,unaff_EDI);
  uVar5 = 0;
  iVar2 = *(int *)(local_14 + -0xc);
  if ((byte)iVar2 != 0) {
    do {
      if (iVar2 < (int)uVar5) {
LAB_10038e31:
                    /* WARNING: Subroutine does not return */
        FUN_100351a0(0x80070057);
      }
      if (0x39 < *(ushort *)(local_14 + uVar5 * 2)) {
LAB_10038e3b:
        AfxMessageBox(L"Input illegal character!!!",0,0);
        FUN_10055f62(0xbc2,&DAT_101e24d0);
        goto LAB_10038dfd;
      }
      if (iVar2 < (int)uVar5) goto LAB_10038e31;
      if (*(ushort *)(local_14 + uVar5 * 2) < 0x30) goto LAB_10038e3b;
      bVar4 = (char)uVar5 + 1;
      uVar5 = (uint)bVar4;
    } while (bVar4 < (byte)iVar2);
  }
  FUN_10034370();
  puVar3 = (undefined4 *)FUN_100342c0();
  StrToIntExW((LPCWSTR)*puVar3,0,&DAT_1021ae24);
LAB_10038dfd:
  local_8 = 0xffffffff;
  LOCK();
  piVar1 = (int *)(local_14 + -4);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(**(int **)(local_14 + -0x10) + 4))((undefined4 *)(local_14 + -0x10));
  }
  ExceptionList = local_10;
  return;
}

