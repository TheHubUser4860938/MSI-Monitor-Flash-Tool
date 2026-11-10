// rea decompile_all
// name: __Stolx
// address: 0x570e19
// body: available
// range: 0x570e19-0x570ebb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __Stolx
   
   Library: Visual Studio 2015 Release */

uint __Stolx(byte *param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  byte bVar4;
  byte *pbVar5;
  int local_8;
  
  if (param_2 == (int *)0x0) {
    param_2 = &local_8;
  }
  bVar4 = *param_1;
  pbVar5 = param_1;
  while (iVar1 = _isspace((uint)bVar4), iVar1 != 0) {
    pbVar5 = pbVar5 + 1;
    bVar4 = *pbVar5;
  }
  bVar4 = *pbVar5;
  if ((bVar4 == 0x2d) || (bVar4 == 0x2b)) {
    pbVar5 = pbVar5 + 1;
  }
  else {
    bVar4 = 0x2b;
  }
  uVar2 = __Stoulx(pbVar5,param_2,param_3,param_4);
  if (pbVar5 == (byte *)*param_2) {
    *param_2 = (int)param_1;
  }
  if (((param_1 != (byte *)*param_2) || (uVar2 == 0)) && ((bVar4 != 0x2b || (uVar2 < 0x80000000))))
  {
    if (bVar4 != 0x2d) {
      return uVar2;
    }
    if (uVar2 < 0x80000001) {
      return -uVar2;
    }
  }
  piVar3 = __errno();
  *piVar3 = 0x22;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 1;
  }
  return (bVar4 == 0x2d) + 0x7fffffff;
}

