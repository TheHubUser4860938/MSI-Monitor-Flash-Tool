// rea decompile_all
// name: expand_if_necessary
// address: 0x59339b
// body: available
// range: 0x59339b-0x593421 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    private: int __thiscall `anonymous namespace'::argument_list<char>::expand_if_necessary(void)
    private: int __thiscall `anonymous namespace'::argument_list<char>::expand_if_necessary(void)
    private: int __thiscall `anonymous namespace'::argument_list<wchar_t>::expand_if_necessary(void)
    private: int __thiscall `anonymous namespace'::argument_list<wchar_t>::expand_if_necessary(void)
   
   Library: Visual Studio 2015 Release */

undefined4 expand_if_necessary(void)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  uint uVar3;
  
  if (in_ECX[1] == in_ECX[2]) {
    if (*in_ECX == 0) {
      iVar2 = __calloc_base(4,4);
      *in_ECX = iVar2;
      FID_conflict__free((void *)0x0);
      iVar2 = *in_ECX;
      if (iVar2 != 0) {
        in_ECX[1] = iVar2;
        in_ECX[2] = iVar2 + 0x10;
        goto LAB_005933a9;
      }
    }
    else {
      uVar3 = in_ECX[2] - *in_ECX >> 2;
      if (uVar3 < 0x80000000) {
        iVar2 = FUN_00586798(*in_ECX,uVar3 * 2,4);
        if (iVar2 == 0) {
          uVar1 = 0xc;
        }
        else {
          *in_ECX = iVar2;
          in_ECX[1] = iVar2 + uVar3 * 4;
          in_ECX[2] = iVar2 + uVar3 * 8;
          uVar1 = 0;
        }
        FID_conflict__free((void *)0x0);
        return uVar1;
      }
    }
    uVar1 = 0xc;
  }
  else {
LAB_005933a9:
    uVar1 = 0;
  }
  return uVar1;
}

