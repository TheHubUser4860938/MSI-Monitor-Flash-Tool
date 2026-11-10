// rea decompile_all
// name: FUN_005903ea
// address: 0x5903ea
// body: available
// range: 0x5903ea-0x590544 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x590544 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005903ea(void)

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
  
  piVar3 = (int *)FUN_0058fc1a();
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  iVar4 = FUN_0058fc78(&local_8);
  if (iVar4 == 0) {
    iVar4 = FUN_0058fc20(&local_c);
    if (iVar4 == 0) {
      iVar4 = FUN_0058fc4c(&local_10);
      if (iVar4 == 0) {
        FID_conflict__free(DAT_00619390);
        DAT_00619390 = (void *)0x0;
        DVar5 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_006193a0);
        if (DVar5 != 0xffffffff) {
          local_8 = DAT_006193a0 * 0x3c;
          DAT_00619398 = 1;
          if (DAT_006193e6 != 0) {
            local_8 = local_8 + DAT_006193f4 * 0x3c;
          }
          if ((DAT_0061943a == 0) || (DAT_00619448 == 0)) {
            local_c = 0;
            local_10 = 0;
          }
          else {
            local_c = 1;
            local_10 = (DAT_00619448 - DAT_006193f4) * 0x3c;
          }
          CodePage = ____lc_codepage_func();
          iVar4 = WideCharToMultiByte(CodePage,0,(LPCWSTR)&DAT_006193a4,-1,(LPSTR)*piVar3,0x3f,
                                      (LPCSTR)0x0,&local_14);
          if ((iVar4 == 0) || (local_14 != 0)) {
            *(undefined1 *)*piVar3 = 0;
          }
          else {
            *(undefined1 *)(*piVar3 + 0x3f) = 0;
          }
          iVar4 = WideCharToMultiByte(CodePage,0,(LPCWSTR)&DAT_006193f8,-1,(LPSTR)piVar3[1],0x3f,
                                      (LPCSTR)0x0,&local_14);
          if ((iVar4 == 0) || (local_14 != 0)) {
            *(undefined1 *)piVar3[1] = 0;
          }
          else {
            *(undefined1 *)(piVar3[1] + 0x3f) = 0;
          }
        }
        iVar4 = local_8;
        piVar3 = (int *)FUN_0058fc14();
        uVar2 = local_c;
        *piVar3 = iVar4;
        puVar6 = (undefined4 *)FUN_0058fc08();
        iVar4 = local_10;
        *puVar6 = uVar2;
        piVar3 = (int *)FUN_0058fc0e();
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

