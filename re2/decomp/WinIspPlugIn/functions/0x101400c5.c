// rea decompile_all
// name: CMFCColorMenuButton::CopyFrom
// address: 0x101400c5
// body: available
// range: 0x101400c5-0x101401e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCColorMenuButton::CopyFrom(class CMFCToolBarButton const
   &)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCColorMenuButton::CopyFrom(CMFCColorMenuButton *this,CMFCToolBarButton *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  FUN_101111a8(param_1);
  uVar1 = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(this + 0xe8) = uVar1;
  puVar2 = (undefined4 *)FUN_1009f091(*(undefined4 *)(this + 0x20));
  *puVar2 = uVar1;
  FUN_1006874b(*(undefined4 *)(param_1 + 0xf8),0xffffffff);
  if (0 < *(int *)(this + 0xf8)) {
    iVar4 = 0;
    do {
      puVar2 = (undefined4 *)FUN_100efaed(iVar4);
      puVar3 = (undefined4 *)FUN_100efaed(iVar4);
      iVar4 = iVar4 + 1;
      *puVar3 = *puVar2;
    } while (iVar4 < *(int *)(this + 0xf8));
  }
  *(undefined4 *)(this + 0x118) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(this + 0x11c) = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)(this + 0x120) = *(undefined4 *)(param_1 + 0x120);
  FUN_100475f0(param_1 + 0x124);
  FUN_100475f0(param_1 + 0x128);
  FUN_100475f0(param_1 + 300);
  *(undefined4 *)(this + 0x10c) = *(undefined4 *)(param_1 + 0x10c);
  *(undefined4 *)(this + 0x110) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)(this + 0x114) = *(undefined4 *)(param_1 + 0x114);
  *(undefined4 *)(this + 0x130) = *(undefined4 *)(param_1 + 0x130);
  return;
}

