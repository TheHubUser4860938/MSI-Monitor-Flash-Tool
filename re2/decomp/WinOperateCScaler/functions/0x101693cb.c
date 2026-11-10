// rea decompile_all
// name: __Stoulx
// address: 0x101693cb
// body: available
// range: 0x101693cb-0x10169525 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __Stoulx
   
   Library: Visual Studio 2015 Release */

uint __Stoulx(byte *param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  byte bVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  uint local_c;
  char local_6;
  byte local_5;
  
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  bVar1 = *param_1;
  pbVar6 = param_1;
  while (iVar2 = _isspace((uint)bVar1), iVar2 != 0) {
    pbVar6 = pbVar6 + 1;
    bVar1 = *pbVar6;
  }
  local_5 = *pbVar6;
  if ((local_5 == 0x2d) || (local_5 == 0x2b)) {
    pbVar6 = pbVar6 + 1;
  }
  else {
    local_5 = 0x2b;
  }
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) goto LAB_10169511;
  pbVar7 = pbVar6;
  if ((int)param_3 < 1) {
    if (*pbVar6 == 0x30) {
      if ((pbVar6[1] == 0x78) || (pbVar6[1] == 0x58)) {
        param_3 = 0x10;
        goto LAB_10169460;
      }
      param_3 = 8;
    }
    else {
      param_3 = 10;
    }
  }
  else if (((param_3 == 0x10) && (*pbVar6 == 0x30)) && ((pbVar6[1] == 0x78 || (pbVar6[1] == 0x58))))
  {
LAB_10169460:
    pbVar6 = pbVar6 + 2;
    pbVar7 = pbVar6;
  }
  for (; *pbVar6 == 0x30; pbVar6 = pbVar6 + 1) {
  }
  local_c = 0;
  uVar9 = 0;
  pbVar8 = pbVar6;
  while( true ) {
    uVar5 = uVar9;
    uVar9 = param_3;
    iVar2 = _tolower((int)(char)*pbVar8);
    pvVar3 = _memchr("0123456789abcdefghijklmnopqrstuvwxyz",iVar2,uVar9);
    if (pvVar3 == (void *)0x0) break;
    local_6 = (char)pvVar3 + -0x14;
    pbVar8 = pbVar8 + 1;
    uVar9 = uVar5 * param_3 + (int)local_6;
    local_c = uVar5;
  }
  if (pbVar7 != pbVar8) {
    iVar2 = (int)(pbVar8 + -(int)(char)(&DAT_101d613c)[param_3]) - (int)pbVar6;
    if ((-1 < iVar2) &&
       (((pbVar8 + -(int)(char)(&DAT_101d613c)[param_3] != pbVar6 && -1 < iVar2 ||
         (uVar5 < uVar5 - (int)local_6)) || ((uVar5 - (int)local_6) / param_3 != local_c)))) {
      piVar4 = __errno();
      *piVar4 = 0x22;
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 1;
      }
      uVar5 = 0xffffffff;
      local_5 = 0x2b;
    }
    if (local_5 == 0x2d) {
      uVar5 = -uVar5;
    }
    if (param_2 == (undefined4 *)0x0) {
      return uVar5;
    }
    *param_2 = pbVar8;
    return uVar5;
  }
LAB_10169511:
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_1;
  }
  return 0;
}

