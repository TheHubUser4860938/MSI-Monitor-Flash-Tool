// rea decompile_all
// name: CMFCRibbonCategory::accNavigate
// address: 0x10110550
// body: available
// range: 0x10110550-0x1011062e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual long __thiscall CMFCRibbonCategory::accNavigate(long,struct tagVARIANT,struct
   tagVARIANT *)
   
   Library: Visual Studio 2015 Release */

long __thiscall
CMFCRibbonCategory::accNavigate
          (CMFCRibbonCategory *this,int param_1,short param_3,undefined4 param_4,int param_5,
          undefined4 param_6,undefined2 *param_7)

{
  int iVar1;
  undefined4 *puVar2;
  IDispatch *pIVar3;
  CCmdTarget *this_00;
  
  *param_7 = 0;
  if (param_3 != 3) {
    return -0x7ff8ffa9;
  }
  if (param_1 != 3) {
    if (param_1 < 4) {
      return 1;
    }
    if (param_1 < 6) {
      if (param_5 == 0) {
        return 1;
      }
      *param_7 = 3;
      *(int *)(param_7 + 4) = param_5 + 1;
      if (param_5 + 1 <= *(int *)(this + 0x564)) {
        return 0;
      }
      goto LAB_101105c7;
    }
    if (param_1 != 6) {
      if (param_1 == 7) {
        if (param_5 != 0) {
          return 1;
        }
        *param_7 = 3;
        *(undefined4 *)(param_7 + 4) = 1;
        return 0;
      }
      if (param_1 != 8) {
        return 1;
      }
      if (param_5 != 0) {
        return 1;
      }
      *param_7 = 3;
      pIVar3 = *(IDispatch **)(this + 0x564);
      goto LAB_10110598;
    }
  }
  if (param_5 == 0) {
    iVar1 = *(int *)(this + 0x53c);
    if (iVar1 == 0) {
      return 1;
    }
    if (*(int *)(iVar1 + 0x20) == 0) {
      return 1;
    }
    if (*(int *)(iVar1 + 0x454) < 1) {
      this_00 = (CCmdTarget *)(iVar1 + 0x1250);
    }
    else {
      puVar2 = (undefined4 *)FUN_100efaed(*(int *)(iVar1 + 0x454) + -1);
      this_00 = (CCmdTarget *)*puVar2;
    }
    if (this_00 == (CCmdTarget *)0x0) {
      return 1;
    }
    *param_7 = 9;
    pIVar3 = CCmdTarget::GetIDispatch(this_00,1);
LAB_10110598:
    *(IDispatch **)(param_7 + 4) = pIVar3;
    return 0;
  }
  *param_7 = 3;
  *(int *)(param_7 + 4) = param_5 + -1;
  if (0 < param_5 + -1) {
    return 0;
  }
LAB_101105c7:
  *param_7 = 0;
  return 1;
}

