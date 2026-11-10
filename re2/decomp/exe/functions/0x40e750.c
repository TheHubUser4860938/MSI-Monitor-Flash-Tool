// rea decompile_all
// name: FUN_0040e750
// address: 0x40e750
// body: available
// range: 0x40e750-0x40e8a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040e750(void)

{
  uint uVar1;
  undefined8 *puVar2;
  int *piVar3;
  HANDLE pvVar4;
  DWORD DVar5;
  CWinApp *in_ECX;
  undefined4 uVar6;
  undefined1 local_244 [552];
  INITCOMMONCONTROLSEX local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0059cab8;
  local_10 = ExceptionList;
  uVar1 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c.dwSize = 8;
  local_1c.dwICC = 0xff;
  local_14 = uVar1;
  InitCommonControlsEx(&local_1c);
  CWinApp::InitInstance(in_ECX);
  FUN_00417a16(0,uVar1);
  puVar2 = (undefined8 *)FUN_00416408(0xc);
  local_8 = 0;
  if (puVar2 == (undefined8 *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 0;
    piVar3 = (int *)FUN_004186a5();
  }
  local_8 = 0xffffffff;
  CMFCVisualManager::SetDefaultManager((CRuntimeClass *)&PTR_s_CMFCVisualManagerWindows_005aea18);
  SetRegistryKey(&DAT_005e8974);
  pvVar4 = CreateMutexW((LPSECURITY_ATTRIBUTES)0x0,1,L"MSI Firmware Update Utility v1.0.6");
  *(HANDLE *)(in_ECX + 0xcc) = pvVar4;
  DVar5 = GetLastError();
  if (DVar5 == 0xb7) {
    MessageBoxExW((HWND)0x0,L"MSI Firmware Update Utility Already running!",
                  L"MSI Firmware Update Utility",0x2030,0x409);
  }
  else {
    uVar6 = 0x228;
    _memset(local_244,0,0x228);
    FUN_0040f140(uVar6);
    local_8 = 1;
    *(undefined1 **)(in_ECX + 0x20) = local_244;
    FUN_00424d62();
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(1);
    }
    ControlBarCleanUp();
    FUN_0040e8b0();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

