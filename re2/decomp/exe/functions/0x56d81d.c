// rea decompile_all
// name: std::locale::name
// address: 0x56d81d
// body: available
// range: 0x56d81d-0x56d89c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   __thiscall std::locale::name(void)const 
   
   Library: Visual Studio 2015 Release */

void __thiscall std::locale::name(locale *this)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 local_2c [16];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x38;
  uStack_8 = 0x56d829;
  iVar1 = *(int *)(this + 4);
  if (iVar1 == 0) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = 0;
    puVar4 = local_2c;
    bVar3 = true;
    bVar2 = false;
  }
  else {
    iVar5 = *(int *)(iVar1 + 0x18);
    if (iVar5 == 0) {
      iVar5 = iVar1 + 0x1c;
    }
    puVar4 = (undefined1 *)FUN_00403580(iVar5);
    bVar3 = false;
    bVar2 = true;
  }
  FUN_00403500(puVar4);
  if (bVar2) {
    FUN_00404250(1,0);
  }
  if (bVar3) {
    FUN_00404250(1,0);
  }
  FUN_0055bae6();
  return;
}

