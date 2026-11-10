// rea decompile_all
// name: __seh_filter_exe
// address: 0x101ab8b4
// body: available
// range: 0x101ab8b4-0x101aba26 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __seh_filter_exe
   
   Library: Visual Studio 2015 Release */

void __seh_filter_exe(uint param_1,int param_2)

{
  uint *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  uint *puVar8;
  
  uVar5 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  piVar6 = (int *)___acrt_getptd_noexit();
  if (piVar6 != (int *)0x0) {
    puVar1 = (uint *)*piVar6;
    for (puVar8 = puVar1; puVar8 != puVar1 + 0x24; puVar8 = puVar8 + 3) {
      if (*puVar8 == param_1) goto LAB_101ab8f7;
    }
    puVar8 = (uint *)0x0;
LAB_101ab8f7:
    if ((puVar8 != (uint *)0x0) && (pcVar2 = (code *)puVar8[2], pcVar2 != (code *)0x0)) {
      if (pcVar2 == (code *)&DAT_00000005) {
        puVar8[2] = 0;
      }
      else if (pcVar2 != (code *)0x1) {
        iVar3 = piVar6[1];
        piVar6[1] = param_2;
        if (puVar8[1] == 8) {
          for (puVar7 = puVar1 + 9; puVar7 != puVar1 + 0x24; puVar7 = puVar7 + 3) {
            puVar7[2] = 0;
          }
          iVar4 = piVar6[2];
          if (*puVar8 < 0xc0000092) {
            if (*puVar8 == 0xc0000091) {
              piVar6[2] = 0x84;
            }
            else if (*puVar8 == 0xc000008d) {
              piVar6[2] = 0x82;
            }
            else if (*puVar8 == 0xc000008e) {
              piVar6[2] = 0x83;
            }
            else if (*puVar8 == 0xc000008f) {
              piVar6[2] = 0x86;
            }
            else if (*puVar8 == 0xc0000090) {
              piVar6[2] = 0x81;
            }
          }
          else if (*puVar8 == 0xc0000092) {
            piVar6[2] = 0x8a;
          }
          else if (*puVar8 == 0xc0000093) {
            piVar6[2] = 0x85;
          }
          else if (*puVar8 == 0xc00002b4) {
            piVar6[2] = 0x8e;
          }
          else if (*puVar8 == 0xc00002b5) {
            piVar6[2] = 0x8d;
          }
          guard_check_icall(8,piVar6[2]);
          (*pcVar2)();
          piVar6[2] = iVar4;
        }
        else {
          puVar8[2] = 0;
          guard_check_icall(puVar8[1]);
          (*pcVar2)();
        }
        piVar6[1] = iVar3;
      }
    }
  }
  __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
  return;
}

