// rea decompile_all
// name: FUN_100216e0
// address: 0x100216e0
// body: available
// range: 0x100216e0-0x10021897 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100216e0(void)

{
  void **ppvVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_ECX;
  undefined4 *in_EDX;
  int iVar4;
  undefined1 local_4d;
  undefined2 local_4c;
  undefined **local_48;
  undefined2 local_44;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c20f8;
  uVar2 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  local_4d = 6;
  local_4c = 0;
  local_30 = 7;
  local_34 = 0;
  local_44 = 0;
  local_48 = CCpRsString::vftable;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = 0;
  local_8 = 0;
  local_14 = uVar2;
  ppvVar1 = &local_10;
  local_10 = ExceptionList;
  iVar4 = DAT_1024be74;
  do {
    ExceptionList = ppvVar1;
    if (iVar4 < 1) {
LAB_100217db:
      FUN_10048350(&local_48,L"GetSignatueOrCopyResultOneBootMode time Out!");
      FUN_10016860();
LAB_100217fe:
      switch(local_4c._1_1_ >> 4) {
      case 0:
        *in_ECX = 0;
        break;
      case 1:
        *in_ECX = 1;
        break;
      case 2:
        *in_ECX = 3;
        break;
      case 3:
        *in_ECX = 2;
        break;
      default:
        *in_ECX = 4;
      }
      if ((local_4c & 0xf00) == 0) {
        *in_EDX = 0;
      }
      else if ((local_4c._1_1_ & 0xf) == 1) {
        *in_EDX = 3;
      }
      else if ((local_4c._1_1_ & 0xf) == 2) {
        *in_EDX = 2;
      }
      else {
        *in_EDX = 4;
      }
      FUN_10048130();
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    (**(code **)(*DAT_10249d10 + 0x74))(0x6a,0xca,1,&local_4d,0,uVar2);
    Sleep(DAT_1024be70);
    iVar3 = (**(code **)(*DAT_10249d10 + 0x78))(0x6a,0xca,2,&local_4c,0);
    if ((iVar3 == 0) && ((char)local_4c == -0x36)) {
      FUN_10048350(&local_48,L"GetSignatueOrCopyResultOneBootMode 0x%02X, 0x%02X!",0xca,
                   local_4c._1_1_);
      FUN_10016860();
      if (0 < iVar4) goto LAB_100217fe;
      goto LAB_100217db;
    }
    iVar4 = iVar4 + -1;
    Sleep(100);
    ppvVar1 = ExceptionList;
  } while( true );
}

