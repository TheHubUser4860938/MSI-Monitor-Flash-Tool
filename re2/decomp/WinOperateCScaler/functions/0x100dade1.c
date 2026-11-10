// rea decompile_all
// name: CMFCRibbonPanel::CenterElementsInColumn
// address: 0x100dade1
// body: available
// range: 0x100dade1-0x100daea7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonPanel::CenterElementsInColumn(int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCRibbonPanel::CenterElementsInColumn(CMFCRibbonPanel *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  if (((param_1 <= param_2) && (-1 < param_1)) && (-1 < param_2)) {
    piVar2 = (int *)FUN_1009f8c7(param_2);
    local_1c = (((((*(int *)(this + 0xd0) - *(int *)(this + 0xb4)) - *(int *)(this + 0xd0)) -
                 *(int *)(*piVar2 + 0x80)) + *(int *)(this + 0xd8)) - param_3) / 2;
    if (local_1c < 0) {
      local_1c = 0;
    }
    do {
      piVar2 = (int *)FUN_1009f8c7(param_1);
      iVar1 = *piVar2;
      local_18.left = *(LONG *)(iVar1 + 0x74);
      local_18.top = *(LONG *)(iVar1 + 0x78);
      local_18.right = *(LONG *)(iVar1 + 0x7c);
      local_18.bottom = *(LONG *)(iVar1 + 0x80);
      OffsetRect(&local_18,0,local_1c);
      param_1 = param_1 + 1;
      *(LONG *)(iVar1 + 0x74) = local_18.left;
      *(LONG *)(iVar1 + 0x78) = local_18.top;
      *(LONG *)(iVar1 + 0x7c) = local_18.right;
      *(LONG *)(iVar1 + 0x80) = local_18.bottom;
    } while (param_1 <= param_2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

