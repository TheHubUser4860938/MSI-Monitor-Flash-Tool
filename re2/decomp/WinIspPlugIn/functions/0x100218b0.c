// rea decompile_all
// name: FUN_100218b0
// address: 0x100218b0
// body: available
// range: 0x100218b0-0x10021987 inclusive
// range: 0x100219e0-0x10021a45 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Exceeded maximum restarts with more pending */

void FUN_100218b0(void)

{
  int iVar1;
  undefined4 *in_ECX;
  undefined4 *in_EDX;
  char local_24;
  ulonglong local_23;
  undefined4 local_1b;
  undefined2 local_17;
  undefined1 local_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c2128;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_24 = '\0';
  local_23 = 0;
  local_1b = 0;
  local_17 = 0;
  local_15 = 0;
  iVar1 = (**(code **)(*DAT_10249d10 + 0x220))(0x45,6,0,5,&local_24,local_14);
  if (iVar1 == 0) {
    FUN_10048350(&DAT_1024a13c,L" Read Value: 0x%x; :0x%x",local_24,(byte)local_23);
    FUN_10016860();
    if (local_24 == 'E') {
      switch((byte)local_23 >> 4) {
      case 0xbad1abe1bad1abe1:
                    /* WARNING: Calculation of case label failed */
        *in_ECX = 0;
        if ((local_23 & 0xf) == 0) {
          *in_EDX = 0;
        }
        else if (((byte)local_23 & 0xf) == 1) {
          *in_EDX = 3;
        }
        else if (((byte)local_23 & 0xf) == 2) {
          *in_EDX = 2;
        }
        else {
          *in_EDX = 4;
        }
        break;
      default:
        *in_ECX = 4;
        FUN_10048350(&DAT_1024a13c,L" Sign Verify  Fail!, enumSignStatus: 0x%x Value:0x%x",*in_ECX,
                     (byte)local_23);
        FUN_1003fc00();
        FUN_10016860();
      }
    }
  }
  FUN_10048130();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

