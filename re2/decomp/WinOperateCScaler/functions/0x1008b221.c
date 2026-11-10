// rea decompile_all
// name: CMFCPopupMenu::GetParentArea
// address: 0x1008b221
// body: available
// range: 0x1008b221-0x1008b289 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CWnd * __thiscall CMFCPopupMenu::GetParentArea(class CRect &)
   
   Library: Visual Studio 2015 Release */

CWnd * __thiscall CMFCPopupMenu::GetParentArea(CMFCPopupMenu *this,CRect *param_1)

{
  int iVar1;
  code *pcVar2;
  CWnd *pCVar3;
  undefined4 *puVar4;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(this + 0x158);
  if (iVar1 == 0) {
    if (*(int **)(this + 0x116c) != (int *)0x0) {
      pcVar2 = *(code **)(**(int **)(this + 0x116c) + 0xa4);
      guard_check_icall();
      pCVar3 = (CWnd *)(*pcVar2)();
      if (pCVar3 != (CWnd *)0x0) {
        iVar1 = *(int *)(this + 0x116c);
        local_14 = *(undefined4 *)(iVar1 + 0x74);
        uStack_10 = *(undefined4 *)(iVar1 + 0x78);
        uStack_c = *(undefined4 *)(iVar1 + 0x7c);
        uStack_8 = *(undefined4 *)(iVar1 + 0x80);
        puVar4 = &local_14;
        goto LAB_1008b240;
      }
    }
  }
  else {
    pCVar3 = *(CWnd **)(iVar1 + 0x6c);
    if (pCVar3 != (CWnd *)0x0) {
      puVar4 = (undefined4 *)(iVar1 + 0x54);
LAB_1008b240:
      *(undefined4 *)param_1 = *puVar4;
      *(undefined4 *)(param_1 + 4) = puVar4[1];
      *(undefined4 *)(param_1 + 8) = puVar4[2];
      *(undefined4 *)(param_1 + 0xc) = puVar4[3];
      return pCVar3;
    }
  }
  return (CWnd *)0x0;
}

