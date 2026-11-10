// rea decompile_all
// name: is_valid_drive
// address: 0x10188823
// body: available
// range: 0x10188823-0x101888a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl is_valid_drive(unsigned int)
   
   Library: Visual Studio 2015 Release */

int __cdecl is_valid_drive(uint param_1)

{
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  WCHAR local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  if (param_1 < 0x1b) {
    if (param_1 != 0) {
      local_10 = (short)param_1 + L'@';
      local_e = 0x3a;
      local_c = 0x5c;
      local_a = 0;
      GetDriveTypeW(&local_10);
    }
  }
  else {
    puVar1 = ___doserrno();
    *puVar1 = 0xf;
    piVar2 = __errno();
    *piVar2 = 0xd;
    FUN_1016ec41();
  }
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}

