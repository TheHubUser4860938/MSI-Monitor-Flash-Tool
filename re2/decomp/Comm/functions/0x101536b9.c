// rea decompile_all
// name: common_tcsncpy_s<wchar_t>
// address: 0x101536b9
// body: available
// range: 0x101536b9-0x10153785 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl common_tcsncpy_s<wchar_t>(wchar_t * const,unsigned int,wchar_t const *
   const,unsigned int)
   
   Library: Visual Studio 2015 Release */

int __cdecl common_tcsncpy_s<wchar_t>(wchar_t *param_1,uint param_2,wchar_t *param_3,uint param_4)

{
  wchar_t wVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  wchar_t *pwVar5;
  int iVar6;
  
  if (param_4 == 0) {
    if (param_1 == (wchar_t *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
    }
    else {
LAB_101536db:
      if (param_2 != 0) {
        if (param_4 == 0) {
          *param_1 = L'\0';
          return 0;
        }
        if (param_3 != (wchar_t *)0x0) {
          uVar3 = param_4;
          uVar4 = param_2;
          pwVar5 = param_1;
          if (param_4 == 0xffffffff) {
            do {
              wVar1 = *(wchar_t *)(((int)param_3 - (int)param_1) + (int)pwVar5);
              *pwVar5 = wVar1;
              pwVar5 = pwVar5 + 1;
              if (wVar1 == L'\0') break;
              uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
          }
          else {
            do {
              wVar1 = *(wchar_t *)(((int)param_3 - (int)param_1) + (int)pwVar5);
              *pwVar5 = wVar1;
              pwVar5 = pwVar5 + 1;
              if ((wVar1 == L'\0') || (uVar4 = uVar4 - 1, uVar4 == 0)) break;
              uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
            if (uVar3 == 0) {
              *pwVar5 = L'\0';
            }
          }
          if (uVar4 != 0) {
            return 0;
          }
          if (param_4 == 0xffffffff) {
            param_1[param_2 - 1] = L'\0';
            return 0x50;
          }
          *param_1 = L'\0';
          piVar2 = __errno();
          iVar6 = 0x22;
          goto LAB_10153700;
        }
        *param_1 = L'\0';
      }
    }
  }
  else if (param_1 != (wchar_t *)0x0) goto LAB_101536db;
  piVar2 = __errno();
  iVar6 = 0x16;
LAB_10153700:
  *piVar2 = iVar6;
  FUN_1014f4c6();
  return iVar6;
}

