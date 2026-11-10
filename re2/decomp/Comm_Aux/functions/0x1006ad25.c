// rea decompile_all
// name: CMFCButton::InitStyle
// address: 0x1006ad25
// body: available
// range: 0x1006ad25-0x1006add7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCButton::InitStyle(unsigned long)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCButton::InitStyle(CMFCButton *this,ulong param_1)

{
  uint uVar1;
  AFX_MODULE_STATE *pAVar2;
  
  uVar1 = param_1 & 0xf;
  if (uVar1 != 2) {
    if (uVar1 != 3) {
      if (uVar1 != 4) {
        if (uVar1 != 9) goto LAB_1006ad62;
        *(undefined4 *)(this + 0xcc) = 1;
      }
      *(undefined4 *)(this + 200) = 1;
      goto LAB_1006ad62;
    }
    *(undefined4 *)(this + 0xcc) = 1;
  }
  *(undefined4 *)(this + 0xc4) = 1;
LAB_1006ad62:
  if ((*(int *)(this + 0xc4) != 0) || (*(int *)(this + 200) != 0)) {
    uVar1 = param_1 & 0x300;
    if (uVar1 == 0x100) {
      *(undefined4 *)(this + 0x84) = 0;
    }
    else if (uVar1 == 0x200) {
      *(undefined4 *)(this + 0x84) = 1;
    }
    else if (uVar1 == 0x300) {
      *(undefined4 *)(this + 0x84) = 2;
    }
  }
  if (DAT_1020df50 == 0) {
    if (DAT_1020df4c == 0) {
      pAVar2 = AfxGetModuleState();
      DAT_1020df4c = (uint)(*(int *)(pAVar2 + 0xc) != 0);
    }
    DAT_1020df50 = 1;
  }
  return;
}

