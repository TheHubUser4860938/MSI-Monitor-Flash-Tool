// rea decompile_all
// name: _LocaleUpdate::_LocaleUpdate
// address: 0x577161
// body: available
// range: 0x577161-0x5771e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: __thiscall _LocaleUpdate::_LocaleUpdate(struct __crt_locale_pointers * const)
   
   Library: Visual Studio 2015 Release */

_LocaleUpdate * __thiscall
_LocaleUpdate::_LocaleUpdate(_LocaleUpdate *this,__crt_locale_pointers *param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  
  this[0xc] = (_LocaleUpdate)0x0;
  if (param_1 == (__crt_locale_pointers *)0x0) {
    if (DAT_00618f2c != 0) {
      iVar3 = FUN_0058c5ff();
      *(int *)this = iVar3;
      *(undefined4 *)(this + 4) = *(undefined4 *)(iVar3 + 0x4c);
      *(undefined4 *)(this + 8) = *(undefined4 *)(iVar3 + 0x48);
      ___acrt_update_locale_info(iVar3,this + 4);
      ___acrt_update_multibyte_info(*(undefined4 *)this,this + 8);
      uVar1 = *(uint *)(*(int *)this + 0x350);
      if ((uVar1 & 2) != 0) {
        return this;
      }
      *(uint *)(*(int *)this + 0x350) = uVar1 | 2;
      this[0xc] = (_LocaleUpdate)0x1;
      return this;
    }
    *(undefined **)(this + 4) = PTR_PTR_0060d288;
    puVar2 = PTR_DAT_0060d28c;
  }
  else {
    *(undefined4 *)(this + 4) = *(undefined4 *)param_1;
    puVar2 = *(undefined **)(param_1 + 4);
  }
  *(undefined **)(this + 8) = puVar2;
  return this;
}

