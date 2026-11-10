// rea decompile_all
// name: std::collate<unsigned_short>::do_transform
// address: 0x56d280
// body: available
// range: 0x56d280-0x56d319 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual class std::basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> > __thiscall std::collate<unsigned
   short>::do_transform(unsigned short const *,unsigned short const *)const 
   
   Library: Visual Studio 2015 Release */

ushort * __thiscall
std::collate<unsigned_short>::do_transform
          (collate<unsigned_short> *this,ushort *param_1,ushort *param_2)

{
  uint uVar1;
  ushort *puVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *in_stack_0000000c;
  
  param_1[10] = 7;
  param_1[0xb] = 0;
  uVar3 = *(uint *)(param_1 + 10);
  param_1[8] = 0;
  param_1[9] = 0;
  puVar2 = param_1;
  if (7 < uVar3) {
    puVar2 = *(ushort **)param_1;
  }
  *puVar2 = 0;
  uVar1 = (int)in_stack_0000000c - (int)param_2 >> 1;
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = uVar1;
    do {
      FID_conflict_resize(uVar3,0);
      puVar2 = param_1;
      if (7 < *(uint *)(param_1 + 10)) {
        puVar2 = *(ushort **)param_1;
      }
      puVar4 = param_1;
      if (7 < *(uint *)(param_1 + 10)) {
        puVar4 = *(ushort **)param_1;
      }
      uVar3 = _LStrxfrm<unsigned_short>
                        (puVar4,puVar2 + *(int *)(param_1 + 8),param_2,in_stack_0000000c,
                         (_Collvec *)(this + 8));
    } while ((*(uint *)(param_1 + 8) < uVar3) && (uVar3 != 0));
  }
  FID_conflict_resize(uVar3,0);
  return param_1;
}

