// rea decompile_all
// name: FUN_100061b0
// address: 0x100061b0
// body: available
// range: 0x100061b0-0x10006277 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100061b0(void)

{
  uint uVar1;
  undefined8 *puVar2;
  _Locimp *p_Var3;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10195c16;
  local_10 = ExceptionList;
  uVar1 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = std::basic_streambuf<char,std::char_traits<char>_>::vftable;
  puVar2 = (undefined8 *)FUN_1001cfa0(8,uVar1);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *puVar2 = 0;
    local_8 = 0;
    p_Var3 = std::locale::_Init(true);
    *(_Locimp **)((int)puVar2 + 4) = p_Var3;
  }
  in_ECX[0xd] = puVar2;
  in_ECX[3] = in_ECX + 1;
  in_ECX[4] = in_ECX + 2;
  in_ECX[7] = in_ECX + 5;
  in_ECX[8] = in_ECX + 6;
  in_ECX[0xb] = in_ECX + 9;
  in_ECX[0xc] = in_ECX + 10;
  in_ECX[2] = 0;
  *(undefined4 *)in_ECX[8] = 0;
  *(undefined4 *)in_ECX[0xc] = 0;
  *(undefined4 *)in_ECX[3] = 0;
  *(undefined4 *)in_ECX[7] = 0;
  *(undefined4 *)in_ECX[0xb] = 0;
  ExceptionList = local_10;
  return;
}

