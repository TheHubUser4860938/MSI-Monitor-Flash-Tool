// rea decompile_all
// name: FUN_10185536
// address: 0x10185536
// body: available
// range: 0x10185536-0x10185664 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10185664 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10185536(void *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  code *pcVar2;
  int iVar3;
  size_t sVar4;
  undefined4 uVar5;
  void *pvVar6;
  int local_8;
  
  _memset(param_1,0,0x1ca);
  if (*param_2 == L'\0') {
    return 0;
  }
  if ((*param_2 == L'.') && (param_2[1] != L'\0')) {
    iVar3 = FUN_101758fc((int)param_1 + 0x100,0x10,param_2 + 1,0xf);
    if (iVar3 == 0) {
      *(undefined2 *)((int)param_1 + 0x11e) = 0;
      return 0;
    }
  }
  else {
    local_8 = 0;
    while( true ) {
      sVar4 = _wcscspn(param_2,L"_.,");
      if (sVar4 == 0) {
        return 0xffffffff;
      }
      wVar1 = param_2[sVar4];
      if (local_8 == 0) {
        if (0x3f < sVar4) {
          return 0xffffffff;
        }
        if (wVar1 == L'.') {
          return 0xffffffff;
        }
        uVar5 = 0x40;
        pvVar6 = param_1;
      }
      else if (local_8 == 1) {
        if (0x3f < sVar4) {
          return 0xffffffff;
        }
        if (wVar1 == L'_') {
          return 0xffffffff;
        }
        uVar5 = 0x40;
        pvVar6 = (void *)((int)param_1 + 0x80);
      }
      else {
        if (local_8 != 2) {
          return 0xffffffff;
        }
        if (0xf < sVar4) {
          return 0xffffffff;
        }
        if ((wVar1 != L'\0') && (wVar1 != L',')) {
          return 0xffffffff;
        }
        uVar5 = 0x10;
        pvVar6 = (void *)((int)param_1 + 0x100);
      }
      iVar3 = FUN_101758fc(pvVar6,uVar5,param_2,sVar4);
      if (iVar3 != 0) break;
      if (wVar1 == L',') {
        return 0;
      }
      if (wVar1 == L'\0') {
        return 0;
      }
      param_2 = param_2 + sVar4 + 1;
      local_8 = local_8 + 1;
    }
  }
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  pcVar2 = (code *)swi(3);
  uVar5 = (*pcVar2)();
  return uVar5;
}

