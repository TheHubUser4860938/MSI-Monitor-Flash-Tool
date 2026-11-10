// rea decompile_all
// name: __Stoullx
// address: 0x1019551b
// body: available
// range: 0x1019551b-0x10195705 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x10195693) */
/* Library Function - Single Match
    __Stoullx
   
   Library: Visual Studio 2015 Release */

ulonglong __Stoullx(byte *param_1,undefined4 *param_2,size_t param_3,undefined4 *param_4)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  void *pvVar5;
  int *piVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  longlong lVar10;
  ulonglong uVar11;
  size_t sVar12;
  byte local_6;
  char local_5;
  
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  bVar1 = *param_1;
  pbVar7 = param_1;
  while (iVar4 = _isspace((uint)bVar1), iVar4 != 0) {
    pbVar7 = pbVar7 + 1;
    bVar1 = *pbVar7;
  }
  local_6 = *pbVar7;
  if ((local_6 == 0x2d) || (local_6 == 0x2b)) {
    pbVar7 = pbVar7 + 1;
  }
  else {
    local_6 = 0x2b;
  }
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) {
    if (param_2 == (undefined4 *)0x0) {
      return 0;
    }
    *param_2 = param_1;
    return 0;
  }
  pbVar8 = pbVar7;
  if ((int)param_3 < 1) {
    if (*pbVar7 != 0x30) {
      param_3 = 10;
      goto LAB_101955b8;
    }
    if ((pbVar7[1] != 0x78) && (pbVar7[1] != 0x58)) {
      param_3 = 8;
      goto LAB_101955b8;
    }
    param_3 = 0x10;
  }
  else if (((param_3 != 0x10) || (*pbVar7 != 0x30)) || ((pbVar7[1] != 0x78 && (pbVar7[1] != 0x58))))
  goto LAB_101955b8;
  pbVar7 = pbVar7 + 2;
  pbVar8 = pbVar7;
LAB_101955b8:
  for (; *pbVar7 == 0x30; pbVar7 = pbVar7 + 1) {
  }
  local_5 = '\0';
  sVar12 = param_3;
  iVar4 = _tolower((int)(char)*pbVar7);
  pvVar5 = _memchr("0123456789abcdefghijklmnopqrstuvwxyz",iVar4,sVar12);
  pbVar9 = pbVar7;
  uVar11 = 0;
  uVar3 = 0;
  while (uVar2 = uVar11, pvVar5 != (void *)0x0) {
    local_5 = (char)pvVar5 + 't';
    lVar10 = __allmul(param_3,(int)param_3 >> 0x1f,uVar2);
    pbVar9 = pbVar9 + 1;
    sVar12 = param_3;
    iVar4 = _tolower((int)(char)*pbVar9);
    pvVar5 = _memchr("0123456789abcdefghijklmnopqrstuvwxyz",iVar4,sVar12);
    uVar11 = lVar10 + (int)local_5;
    uVar3 = uVar2;
  }
  if (pbVar8 == pbVar9) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_1;
    }
    return 0;
  }
  iVar4 = (int)(pbVar9 + -(int)(char)(&DAT_102026b4)[param_3]) - (int)pbVar7;
  if ((-1 < iVar4) &&
     (((pbVar9 + -(int)(char)(&DAT_102026b4)[param_3] != pbVar7 && -1 < iVar4 ||
       (uVar2 < uVar2 - (longlong)(int)local_5)) ||
      (uVar11 = __aulldiv(uVar2 - (longlong)(int)local_5,param_3,(int)param_3 >> 0x1f),
      uVar11 != uVar3)))) {
    piVar6 = __errno();
    *piVar6 = 0x22;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 1;
    }
    local_6 = 0x2b;
    uVar2 = 0xffffffffffffffff;
  }
  if (local_6 == 0x2d) {
    uVar2 = CONCAT44(-((int)(uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = pbVar9;
    return uVar2;
  }
  return uVar2;
}

