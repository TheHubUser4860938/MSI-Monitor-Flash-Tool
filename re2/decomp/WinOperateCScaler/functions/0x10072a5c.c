// rea decompile_all
// name: CMFCToolBar::accNavigate
// address: 0x10072a5c
// body: available
// range: 0x10072a5c-0x10072b08 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual long __thiscall CMFCToolBar::accNavigate(long,struct tagVARIANT,struct
   tagVARIANT *)
   
   Library: Visual Studio 2015 Release */

long __thiscall
CMFCToolBar::accNavigate
          (CMFCToolBar *this,int param_1,short param_3,undefined4 param_4,int param_5,
          undefined4 param_6,undefined2 *param_7)

{
  code *pcVar1;
  int iVar2;
  
  if ((param_7 == (undefined2 *)0x0) || (*param_7 = 0, param_3 != 3)) {
    return -0x7ff8ffa9;
  }
  pcVar1 = *(code **)(*(int *)this + 0x3c8);
  guard_check_icall();
  iVar2 = (*pcVar1)();
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
      if (param_5 + 1 <= iVar2) {
        return 0;
      }
      goto LAB_10072ae7;
    }
    if (param_1 != 6) {
      if (param_1 == 7) {
        if (param_5 != 0) {
          return 1;
        }
        *(undefined4 *)(param_7 + 4) = 1;
      }
      else {
        if (param_1 != 8) {
          return 1;
        }
        if (param_5 != 0) {
          return 1;
        }
        *(int *)(param_7 + 4) = iVar2;
      }
      *param_7 = 3;
      return 0;
    }
  }
  if (param_5 == 0) {
    return 1;
  }
  *param_7 = 3;
  *(int *)(param_7 + 4) = param_5 + -1;
  if (0 < param_5 + -1) {
    return 0;
  }
LAB_10072ae7:
  *param_7 = 0;
  return 1;
}

