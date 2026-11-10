// rea decompile_all
// name: CPaneContainer::Copy
// address: 0x4fd274
// body: available
// range: 0x4fd274-0x4fd3bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CPaneContainer * __thiscall CPaneContainer::Copy(class CPaneContainer *)
   
   Library: Visual Studio 2015 Release */

CPaneContainer * __thiscall CPaneContainer::Copy(CPaneContainer *this,CPaneContainer *param_1)

{
  code *pcVar1;
  CPaneContainer *pCVar2;
  ulong uVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (*(int *)(*(int *)(this + 0x1c) + 0x40) == 0) {
    pCVar2 = (CPaneContainer *)FUN_00416408(0x9c);
    if (pCVar2 == (CPaneContainer *)0x0) {
      pCVar2 = (CPaneContainer *)0x0;
    }
    else {
      pCVar2 = (CPaneContainer *)
               CPaneContainer(pCVar2,*(CPaneContainerManager **)(this + 0x1c),
                              *(CDockablePane **)(this + 4),*(CDockablePane **)(this + 8),
                              *(CPaneDivider **)(this + 0xc));
    }
  }
  else {
    pCVar2 = (CPaneContainer *)FUN_00439696();
    *(undefined4 *)(pCVar2 + 0x1c) = *(undefined4 *)(this + 0x1c);
    *(undefined4 *)(pCVar2 + 4) = *(undefined4 *)(this + 4);
    *(undefined4 *)(pCVar2 + 8) = *(undefined4 *)(this + 8);
    *(undefined4 *)(pCVar2 + 0xc) = *(undefined4 *)(this + 0xc);
  }
  if (*(CWnd **)(this + 4) != (CWnd *)0x0) {
    uVar3 = CWnd::GetExStyle(*(CWnd **)(this + 4));
    if ((uVar3 & 0x10000000) == 0) {
      *(undefined4 *)(pCVar2 + 4) = 0;
    }
    else {
      *(undefined4 *)(this + 4) = 0;
    }
  }
  if (*(CWnd **)(this + 8) != (CWnd *)0x0) {
    uVar3 = CWnd::GetExStyle(*(CWnd **)(this + 8));
    if ((uVar3 & 0x10000000) == 0) {
      *(undefined4 *)(pCVar2 + 8) = 0;
    }
    else {
      *(undefined4 *)(this + 8) = 0;
    }
  }
  *(CPaneContainer **)(pCVar2 + 0x18) = param_1;
  if (*(int **)(this + 0x10) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0x10) + 0x50);
    guard_check_icall(pCVar2);
    iVar4 = (*pcVar1)();
    *(int *)(pCVar2 + 0x10) = iVar4;
    if (iVar4 != 0) {
      *(CPaneContainer **)(iVar4 + 0x18) = pCVar2;
    }
  }
  if (*(int **)(this + 0x14) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0x14) + 0x50);
    guard_check_icall(pCVar2);
    iVar4 = (*pcVar1)();
    *(int *)(pCVar2 + 0x14) = iVar4;
    if (iVar4 != 0) {
      *(CPaneContainer **)(iVar4 + 0x18) = pCVar2;
    }
  }
  if (*(CWnd **)(this + 0xc) != (CWnd *)0x0) {
    uVar3 = CWnd::GetExStyle(*(CWnd **)(this + 0xc));
    if ((uVar3 & 0x10000000) == 0) {
      *(undefined4 *)(pCVar2 + 0xc) = 0;
    }
    else {
      *(undefined4 *)(this + 0x40) = *(undefined4 *)(*(int *)(this + 0xc) + 0x114);
      GetClientRect(*(HWND *)(*(int *)(this + 0xc) + 0x20),(LPRECT)(this + 0x44));
      pcVar1 = *(code **)(**(int **)(this + 0xc) + 0x164);
      guard_check_icall();
      uVar5 = (*pcVar1)();
      *(undefined4 *)(this + 0xc) = 0;
      *(undefined4 *)(this + 0x34) = uVar5;
    }
  }
  return pCVar2;
}

