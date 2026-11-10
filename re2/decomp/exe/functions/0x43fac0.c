// rea decompile_all
// name: FUN_0043fac0
// address: 0x43fac0
// body: available
// range: 0x43fac0-0x43fb9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_0043fac0(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  CObject *pCVar4;
  void **ppvVar5;
  CObject *unaff_EBX;
  int unaff_EBP;
  void *pvVar6;
  COleControlSite *unaff_EDI;
  
  if (unaff_EDI == (COleControlSite *)0x0) {
    uVar2 = 0;
  }
  else {
    if (*(int *)*(CControlCreationInfo **)(unaff_EBP + 0x10) == 2) {
      iVar3 = *(int *)unaff_EDI;
      guard_check_icall(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                        *(undefined4 *)(unaff_EBP + 0x14),*(undefined4 *)(unaff_EBP + 0x18),
                        *(undefined4 *)(unaff_EBP + 0x1c),*(undefined4 *)(unaff_EBP + 0x20),
                        *(undefined4 *)(unaff_EBP + 0x24),*(undefined4 *)(unaff_EBP + 0x28),
                        *(undefined4 *)(unaff_EBP + 0x2c),*(undefined4 *)(unaff_EBP + 0x30));
      iVar3 = (**(code **)(iVar3 + 0x50))();
    }
    else {
      iVar3 = COleControlSite::CreateControl
                        (unaff_EDI,*(CWnd **)(unaff_EBP + 8),
                         *(CControlCreationInfo **)(unaff_EBP + 0x10),*(ulong *)(unaff_EBP + 0x18),
                         *(tagPOINT **)(unaff_EBP + 0x1c),*(tagSIZE **)(unaff_EBP + 0x20),
                         *(uint *)(unaff_EBP + 0x24));
    }
    *(uint *)(unaff_EBP + -0x18) = (uint)(-1 < iVar3);
    if (-1 < iVar3 == 0) {
      uVar2 = 0;
      if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
        pcVar1 = *(code **)(**(int **)(unaff_EBP + -0x14) + 4);
        guard_check_icall(1);
        (*pcVar1)();
        uVar2 = *(undefined4 *)(unaff_EBP + -0x18);
      }
    }
    else {
      pCVar4 = (CObject *)FUN_00416408(0xc);
      *(CObject **)(unaff_EBP + -0x24) = pCVar4;
      if (pCVar4 != (CObject *)0x0) {
        uVar2 = *(undefined4 *)(unaff_EBP + -0x14);
        *(CObject **)pCVar4 = unaff_EBX;
        *(undefined4 *)(pCVar4 + 4) = uVar2;
        *(CObject **)(pCVar4 + 8) = unaff_EBX;
        unaff_EBX = pCVar4;
      }
      iVar3 = *(int *)(unaff_EBP + -0x1c);
      CObList::AddTail((CObList *)(iVar3 + 0x40),unaff_EBX);
      pvVar6 = *(void **)(unaff_EBP + -0x14);
      if (*(int *)((int)pvVar6 + 0x24) != 0) {
        ppvVar5 = CMapPtrToPtr::operator[]
                            ((CMapPtrToPtr *)(iVar3 + 0x24),*(void **)((int)pvVar6 + 0x24));
        *ppvVar5 = pvVar6;
        pvVar6 = *(void **)(unaff_EBP + -0x14);
      }
      uVar2 = *(undefined4 *)(unaff_EBP + -0x18);
      if (*(int **)(unaff_EBP + 0x34) != (int *)0x0) {
        **(int **)(unaff_EBP + 0x34) = (int)pvVar6;
      }
    }
  }
  return uVar2;
}

