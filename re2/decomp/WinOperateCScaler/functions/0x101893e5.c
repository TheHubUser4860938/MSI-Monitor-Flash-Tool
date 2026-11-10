// rea decompile_all
// name: FUN_101893e5
// address: 0x101893e5
// body: available
// range: 0x10189334-0x101893ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_101893e5(char *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  if (param_4 == 0) {
    if (param_1 == (char *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
    }
    else {
LAB_10189356:
      if (param_2 != 0) {
        if (param_4 == 0) {
          *param_1 = '\0';
          return 0;
        }
        if (param_3 != 0) {
          iVar5 = param_4;
          iVar3 = param_2;
          pcVar4 = param_1;
          if (param_4 == -1) {
            do {
              cVar1 = pcVar4[param_3 - (int)param_1];
              *pcVar4 = cVar1;
              pcVar4 = pcVar4 + 1;
              if (cVar1 == '\0') break;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          else {
            do {
              cVar1 = pcVar4[param_3 - (int)param_1];
              *pcVar4 = cVar1;
              pcVar4 = pcVar4 + 1;
              if ((cVar1 == '\0') || (iVar3 = iVar3 + -1, iVar3 == 0)) break;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
            if (iVar5 == 0) {
              *pcVar4 = '\0';
            }
          }
          if (iVar3 != 0) {
            return 0;
          }
          if (param_4 == -1) {
            param_1[param_2 + -1] = '\0';
            return 0x50;
          }
          *param_1 = '\0';
          piVar2 = __errno();
          iVar5 = 0x22;
          goto LAB_10189376;
        }
        *param_1 = '\0';
      }
    }
  }
  else if (param_1 != (char *)0x0) goto LAB_10189356;
  piVar2 = __errno();
  iVar5 = 0x16;
LAB_10189376:
  *piVar2 = iVar5;
  FUN_1016ec41();
  return iVar5;
}

