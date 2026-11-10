// rea decompile_all
// name: CMFCMenuBar::FindDropIndex
// address: 0x100f94e4
// body: available
// range: 0x100f94e4-0x100f95a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCMenuBar::FindDropIndex(class CPoint,class CRect &)const 
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCMenuBar::FindDropIndex
          (CMFCMenuBar *this,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1006a0aa(param_2,param_3,param_4);
  if ((*(int *)(this + 0xd70) != 0) && (-1 < iVar1)) {
    if ((iVar1 == 0) && (*(int *)(this + 0xd54) != 0)) {
      return -1;
    }
    iVar2 = FUN_1006a6b7();
    if (iVar2 - *(int *)(this + 0xd64) < iVar1) {
      iVar2 = *(int *)(this + 0xd64);
      iVar1 = FUN_1006a6b7();
      iVar1 = iVar1 - iVar2;
      if (0 < iVar2) {
        iVar2 = FUN_1006a5a5(iVar1 + -1);
        FUN_1006a0aa(*(undefined4 *)(iVar2 + 0x5c),
                     (*(int *)(iVar2 + 0x60) - *(int *)(iVar2 + 0x58)) / 2 + *(int *)(iVar2 + 0x58),
                     param_4);
      }
    }
  }
  if (((*(int *)(this + 0xd60) != 0) && (iVar2 = FUN_10068d79(*(int *)(this + 0xd60),0), -1 < iVar2)
      ) && (iVar2 < iVar1)) {
    iVar1 = iVar2;
  }
  return iVar1;
}

