// rea decompile_all
// name: FUN_10189c52
// address: 0x10189c52
// body: available
// range: 0x10189c52-0x10189dac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10189dac with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10189c52(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  DWORD DVar5;
  UINT CodePage;
  undefined4 *puVar6;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  piVar3 = (int *)FUN_101894c0();
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  iVar4 = FUN_1018951e(&local_8);
  if (iVar4 == 0) {
    iVar4 = FUN_101894c6(&local_c);
    if (iVar4 == 0) {
      iVar4 = FUN_101894f2(&local_10);
      if (iVar4 == 0) {
        FID_conflict__free(DAT_1020db54);
        DAT_1020db54 = (void *)0x0;
        DVar5 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_1020db60);
        if (DVar5 != 0xffffffff) {
          local_8 = DAT_1020db60 * 0x3c;
          DAT_1020db58 = 1;
          if (DAT_1020dba6 != 0) {
            local_8 = local_8 + DAT_1020dbb4 * 0x3c;
          }
          if ((DAT_1020dbfa == 0) || (DAT_1020dc08 == 0)) {
            local_c = 0;
            local_10 = 0;
          }
          else {
            local_c = 1;
            local_10 = (DAT_1020dc08 - DAT_1020dbb4) * 0x3c;
          }
          CodePage = ____lc_codepage_func();
          iVar4 = WideCharToMultiByte(CodePage,0,(LPCWSTR)&DAT_1020db64,-1,(LPSTR)*piVar3,0x3f,
                                      (LPCSTR)0x0,&local_14);
          if ((iVar4 == 0) || (local_14 != 0)) {
            *(undefined1 *)*piVar3 = 0;
          }
          else {
            *(undefined1 *)(*piVar3 + 0x3f) = 0;
          }
          iVar4 = WideCharToMultiByte(CodePage,0,(LPCWSTR)&DAT_1020dbb8,-1,(LPSTR)piVar3[1],0x3f,
                                      (LPCSTR)0x0,&local_14);
          if ((iVar4 == 0) || (local_14 != 0)) {
            *(undefined1 *)piVar3[1] = 0;
          }
          else {
            *(undefined1 *)(piVar3[1] + 0x3f) = 0;
          }
        }
        iVar4 = local_8;
        piVar3 = (int *)FUN_101894ba();
        uVar2 = local_c;
        *piVar3 = iVar4;
        puVar6 = (undefined4 *)FUN_101894ae();
        iVar4 = local_10;
        *puVar6 = uVar2;
        piVar3 = (int *)FUN_101894b4();
        *piVar3 = iVar4;
        return;
      }
    }
  }
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

