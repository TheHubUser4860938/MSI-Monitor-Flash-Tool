// rea decompile_all
// name: FUN_1000bd10
// address: 0x1000bd10
// body: available
// range: 0x1000bd10-0x1000be0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1000bd10(void)

{
  ushort uVar1;
  int iVar2;
  uint in_ECX;
  int in_EDX;
  uint local_c;
  undefined2 local_8 [2];
  
  local_c = local_c & 0xffffff00;
  if (in_EDX == 0) {
    return 7;
  }
  uVar1 = (ushort)in_ECX & 0xff00;
  if ((uVar1 == 0xfd00) || (uVar1 == 0xfe00)) {
    FUN_1000bd10();
  }
  local_8[0] = 0x815a;
  iVar2 = I2CWrite(DAT_101d49a9,0x6f,2,local_8);
  if (iVar2 == 0) {
    local_c._0_1_ = 0;
    iVar2 = I2CRead(DAT_101d49a9,0xd0,1,&local_c);
    if (iVar2 == 0) {
      local_c = CONCAT31(local_c._1_3_,(undefined1)local_c) & 0xfffffffb | 0x18;
      I2CWriteByte(DAT_101d49a9,0xd0,local_c);
      iVar2 = I2CWriteByte(DAT_101d49a9,0xd5,in_ECX >> 8);
      if (iVar2 == 0) {
        iVar2 = I2CWriteByte(DAT_101d49a9,0xd6);
        if (iVar2 == 0) {
          iVar2 = I2CRead(DAT_101d49a9,0xd7,1);
        }
      }
    }
  }
  return iVar2;
}

