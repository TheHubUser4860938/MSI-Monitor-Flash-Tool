// rea decompile_all
// name: std::collate<wchar_t>::do_transform
// address: 0x56d31a
// body: available
// range: 0x56d31a-0x56d3b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > __thiscall std::collate<wchar_t>::do_transform(wchar_t const *,wchar_t
   const *)const 
   
   Library: Visual Studio 2015 Release */

wchar_t * __thiscall
std::collate<wchar_t>::do_transform(collate<wchar_t> *this,wchar_t *param_1,wchar_t *param_2)

{
  uint uVar1;
  size_t sVar2;
  wchar_t *pwVar3;
  size_t sVar4;
  wchar_t *_String1;
  wchar_t *in_stack_0000000c;
  
  param_1[10] = L'\a';
  param_1[0xb] = L'\0';
  uVar1 = *(uint *)(param_1 + 10);
  param_1[8] = L'\0';
  param_1[9] = L'\0';
  pwVar3 = param_1;
  if (7 < uVar1) {
    pwVar3 = *(wchar_t **)param_1;
  }
  *pwVar3 = L'\0';
  sVar2 = (int)in_stack_0000000c - (int)param_2 >> 1;
  sVar4 = 0;
  if (sVar2 != 0) {
    sVar4 = sVar2;
    do {
      FID_conflict_resize(sVar4,0);
      pwVar3 = param_1;
      if (7 < *(uint *)(param_1 + 10)) {
        pwVar3 = *(wchar_t **)param_1;
      }
      _String1 = param_1;
      if (7 < *(uint *)(param_1 + 10)) {
        _String1 = *(wchar_t **)param_1;
      }
      sVar4 = __Wcsxfrm(_String1,pwVar3 + *(int *)(param_1 + 8),param_2,in_stack_0000000c,
                        (_Collvec *)(this + 8));
    } while ((*(uint *)(param_1 + 8) < sVar4) && (sVar4 != 0));
  }
  FID_conflict_resize(sVar4,0);
  return param_1;
}

