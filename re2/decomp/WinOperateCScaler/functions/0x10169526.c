// rea decompile_all
// name: __Stollx
// address: 0x10169526
// body: available
// range: 0x10169526-0x101695f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x101695ae) */
/* Library Function - Single Match
    __Stollx
   
   Library: Visual Studio 2015 Release */

int __Stollx(byte *param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  byte *pbVar4;
  ulonglong uVar5;
  int local_8;
  
  if (param_2 == (int *)0x0) {
    param_2 = &local_8;
  }
  bVar3 = *param_1;
  pbVar4 = param_1;
  while (iVar1 = _isspace((uint)bVar3), iVar1 != 0) {
    pbVar4 = pbVar4 + 1;
    bVar3 = *pbVar4;
  }
  bVar3 = *pbVar4;
  if ((bVar3 == 0x2d) || (bVar3 == 0x2b)) {
    pbVar4 = pbVar4 + 1;
  }
  else {
    bVar3 = 0x2b;
  }
  uVar5 = __Stoullx(pbVar4,param_2,param_3,param_4);
  if (pbVar4 == (byte *)*param_2) {
    *param_2 = (int)param_1;
  }
  if (((param_1 != (byte *)*param_2) || (uVar5 == 0)) &&
     ((bVar3 != 0x2b || (uVar5 < 0x8000000000000000)))) {
    if (bVar3 != 0x2d) {
      return (int)uVar5;
    }
    if (uVar5 < 0x8000000000000001) {
      return -(int)uVar5;
    }
  }
  iVar1 = 0;
  piVar2 = __errno();
  *piVar2 = 0x22;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 1;
  }
  if (bVar3 != 0x2d) {
    iVar1 = -1;
  }
  return iVar1;
}

