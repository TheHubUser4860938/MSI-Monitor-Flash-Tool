// rea decompile_all
// name: CMFCRibbonButton::CopyFrom
// address: 0x10102829
// body: available
// range: 0x10102829-0x10102a2d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonButton::CopyFrom(class CMFCRibbonBaseElement const
   &)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonButton::CopyFrom(CMFCRibbonButton *this,CMFCRibbonBaseElement *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int local_8;
  
  if ((*(int *)(this + 0x16c) != 0) && (*(HMENU *)(this + 0x158) != (HMENU)0x0)) {
    DestroyMenu(*(HMENU *)(this + 0x158));
  }
  if (*(int *)(this + 0x17c) != 0) {
    if (*(HICON *)(this + 0x15c) != (HICON)0x0) {
      DestroyIcon(*(HICON *)(this + 0x15c));
    }
    if ((*(int *)(this + 0x17c) != 0) && (*(HICON *)(this + 0x160) != (HICON)0x0)) {
      DestroyIcon(*(HICON *)(this + 0x160));
    }
  }
  RemoveAllSubItems(this);
  CMFCRibbonBaseElement::CopyFrom((CMFCRibbonBaseElement *)this,param_1);
  *(undefined4 *)(this + 0x144) = *(undefined4 *)(param_1 + 0x144);
  *(undefined4 *)(this + 0x148) = *(undefined4 *)(param_1 + 0x148);
  *(undefined4 *)(this + 0x158) = *(undefined4 *)(param_1 + 0x158);
  *(undefined4 *)(this + 0x16c) = 0;
  *(undefined4 *)(this + 0x164) = *(undefined4 *)(param_1 + 0x164);
  *(undefined4 *)(this + 0x168) = *(undefined4 *)(param_1 + 0x168);
  *(undefined4 *)(this + 0x11c) = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)(this + 0x120) = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)(this + 0x15c) = *(undefined4 *)(param_1 + 0x15c);
  *(undefined4 *)(this + 0x160) = *(undefined4 *)(param_1 + 0x160);
  *(undefined4 *)(this + 0x17c) = 0;
  *(undefined4 *)(this + 0x180) = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)(this + 0x184) = *(undefined4 *)(param_1 + 0x184);
  *(undefined4 *)(this + 0x18c) = *(undefined4 *)(param_1 + 0x18c);
  *(undefined4 *)(this + 0x194) = *(undefined4 *)(param_1 + 0x194);
  *(undefined4 *)(this + 0x198) = *(undefined4 *)(param_1 + 0x198);
  *(undefined4 *)(this + 0x150) = *(undefined4 *)(param_1 + 0x150);
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0x1b8)) {
    do {
      puVar2 = (undefined4 *)FUN_100efaed(local_8);
      puVar2 = (undefined4 *)*puVar2;
      pcVar1 = *(code **)*puVar2;
      guard_check_icall();
      (*pcVar1)();
      piVar3 = (int *)FUN_10051ddc();
      pcVar1 = *(code **)(*piVar3 + 0x168);
      guard_check_icall(puVar2);
      (*pcVar1)();
      FUN_101010f9(*(undefined4 *)(this + 0x1b8),piVar3);
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(param_1 + 0x1b8));
  }
  iVar4 = 0;
  *(undefined4 *)(this + 0x154) = *(undefined4 *)(param_1 + 0x154);
  FUN_1006874b(0,0xffffffff);
  if (0 < *(int *)(param_1 + 0x1a4)) {
    do {
      puVar2 = (undefined4 *)FUN_100efaed(iVar4);
      FUN_101010f9(*(undefined4 *)(this + 0x1a4),*puVar2);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x1a4));
  }
  return;
}

