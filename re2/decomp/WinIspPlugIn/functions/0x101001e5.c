// rea decompile_all
// name: CMFCRibbonBaseElement::GetSize
// address: 0x101001e5
// body: available
// range: 0x101001e5-0x10100263 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CSize __thiscall CMFCRibbonBaseElement::GetSize(class CDC *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonBaseElement::GetSize(CMFCRibbonBaseElement *this,CDC *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  code *pcVar5;
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = *(int *)this;
  if (*(int *)(this + 0xbc) == 0) {
    if (*(int *)(this + 0xb8) == 0) {
      pcVar5 = *(code **)(iVar1 + 0xf8);
      puVar4 = local_24;
    }
    else {
      pcVar5 = *(code **)(iVar1 + 0xfc);
      puVar4 = local_1c;
    }
    guard_check_icall(puVar4);
    puVar3 = (undefined4 *)(*pcVar5)();
    puVar2 = &local_c;
    local_c = *puVar3;
    local_8 = puVar3[1];
  }
  else {
    pcVar5 = *(code **)(iVar1 + 0x100);
    guard_check_icall(local_14);
    puVar2 = (undefined4 *)(*pcVar5)();
  }
  *(undefined4 *)param_1 = *puVar2;
  *(undefined4 *)(param_1 + 4) = puVar2[1];
  return;
}

