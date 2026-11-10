// rea decompile_all
// name: FUN_10018a00
// address: 0x10018a00
// body: available
// range: 0x10018a00-0x10018bfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10018a00(void)

{
  int iVar1;
  undefined4 *in_ECX;
  wchar_t *pwVar2;
  undefined4 local_54;
  undefined **local_50;
  undefined2 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 uStack_1b;
  undefined2 uStack_1a;
  char cStack_18;
  undefined1 uStack_17;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c1b68;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uStack_1a = 0;
  cStack_18 = '\0';
  uStack_17 = 0;
  local_38 = 7;
  local_3c = 0;
  local_4c = 0;
  local_50 = CCpRsString::vftable;
  local_20 = 0xf;
  local_24 = 0;
  local_34 = 0;
  local_8 = 0;
  if ((DAT_1024a2f0 == 0) && ((DAT_1024a1f8 == 1 || (DAT_1024a1f8 == 0x13)))) {
    local_54 = 0x4a;
  }
  else {
    local_54 = 0x6e;
  }
  local_1c = 0x77;
  uStack_1b = 3;
  iVar1 = (**(code **)(*DAT_10249d10 + 0x13c))(local_54,0x71,2,&local_1c,local_14);
  if (iVar1 == 0) {
    Sleep(200);
    local_1c = 0;
    uStack_1b = 0;
    uStack_1a = 0;
    cStack_18 = '\0';
    uStack_17 = 0;
    iVar1 = (**(code **)(*DAT_10249d10 + 0x140))(local_54,0x71,6,&local_1c);
    if (iVar1 == 0) {
      if (DAT_1024a2d4 == 7) {
        if (cStack_18 == '\x16') {
          *in_ECX = 0;
          pwVar2 = L"ISP Pass, Copy Fail.";
        }
        else if (cStack_18 == '&') {
          *in_ECX = 0;
          pwVar2 = L"ISP Pass, Copy Pass.";
        }
        else if (cStack_18 == '\x17') {
          *in_ECX = 1;
          pwVar2 = L" ISP Fail (Signature Fail), Recovery Fail.";
        }
        else if (cStack_18 == '\'') {
          *in_ECX = 1;
          pwVar2 = L"ISP Fail (Signature Fail), Recovery OK.";
        }
        else if (cStack_18 == '\x1f') {
          *in_ECX = 1;
          pwVar2 = L"ISP Fail, Recovery Fail.";
        }
        else if (cStack_18 == '/') {
          *in_ECX = 1;
          pwVar2 = L"ISP Fail, Recovery OK.";
        }
        else if (cStack_18 == 'b') {
          *in_ECX = 2;
          pwVar2 = L"Sign Invalid.";
        }
        else {
          *in_ECX = 4;
          pwVar2 = L"Sign error.";
        }
      }
      else if (cStack_18 == 'f') {
        *in_ECX = 0;
        pwVar2 = L"ISP Pass.";
      }
      else if (cStack_18 == 'a') {
        *in_ECX = 1;
        pwVar2 = L"ISP Fail.";
      }
      else if (cStack_18 == 'b') {
        *in_ECX = 2;
        pwVar2 = L"Sign Invalid.";
      }
      else {
        *in_ECX = 4;
        pwVar2 = L"Sign error.";
      }
      FUN_10048350(&local_50,pwVar2);
      FUN_10016860();
    }
  }
  FUN_10048130();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

