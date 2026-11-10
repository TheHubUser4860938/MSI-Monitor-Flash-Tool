// rea decompile_all
// name: CMFCColorBar
// address: 0x4aa4ce
// body: available
// range: 0x4aa4ce-0x4aa677 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: __thiscall CMFCColorBar::CMFCColorBar(class CArray<unsigned long,unsigned long> const
   &,unsigned long,char const *,char const *,char const *,class CList<unsigned long,unsigned long>
   &,int,int,int,unsigned long,unsigned int,class CMFCColorButton *)
    protected: __thiscall CMFCColorBar::CMFCColorBar(class CArray<unsigned long,unsigned long> const
   &,unsigned long,wchar_t const *,wchar_t const *,wchar_t const *,class CList<unsigned
   long,unsigned long> &,int,int,int,unsigned long,unsigned int,class CMFCColorButton *)
   
   Library: Visual Studio 2015 Release */

CMFCPopupMenuBar *
CMFCColorBar(int param_1,undefined4 param_2,undefined **param_3,undefined **param_4,
            undefined **param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  CMFCPopupMenuBar *in_ECX;
  int iVar3;
  undefined **ppuVar4;
  
  CMFCPopupMenuBar::CMFCPopupMenuBar(in_ECX);
  *(undefined4 *)(in_ECX + 0xdd0) = param_7;
  *(undefined4 *)(in_ECX + 0xdd4) = param_8;
  *(undefined4 *)(in_ECX + 0xdd8) = param_9;
  *(undefined ***)in_ECX = CMFCColorBar::vftable;
  *(undefined4 *)(in_ECX + 0xdf0) = 0;
  *(undefined4 *)(in_ECX + 0xdf8) = 0;
  *(undefined4 *)(in_ECX + 0xe04) = param_11;
  CArray<unsigned_long,unsigned_long>::CArray<unsigned_long,unsigned_long>
            ((CArray<unsigned_long,unsigned_long> *)(in_ECX + 0xe08));
  CList<unsigned_long,unsigned_long>::CList<unsigned_long,unsigned_long>
            ((CList<unsigned_long,unsigned_long> *)(in_ECX + 0xe1c),10);
  *(undefined4 *)(in_ECX + 0xe38) = 0;
  *(undefined4 *)(in_ECX + 0xe3c) = 0;
  *(undefined4 *)(in_ECX + 0xe44) = 0;
  *(undefined ***)(in_ECX + 0xe40) = CPalette::vftable;
  *(undefined4 *)(in_ECX + 0xe48) = param_2;
  *(undefined4 *)(in_ECX + 0xe4c) = param_10;
  if (param_3 == (undefined **)0x0) {
    param_3 = &PTR_005e8934;
  }
  FUN_00415a10(param_3);
  if (param_4 == (undefined **)0x0) {
    param_4 = &PTR_005e8934;
  }
  FUN_00415a10(param_4);
  ppuVar4 = &PTR_005e8934;
  if (param_5 != (undefined **)0x0) {
    ppuVar4 = param_5;
  }
  FUN_00415a10(ppuVar4);
  *(undefined4 *)(in_ECX + 0xe60) = 0;
  *(undefined4 *)(in_ECX + 0xe64) = 0;
  *(undefined4 *)(in_ECX + 0xe5c) = param_12;
  FUN_00558084(*(undefined4 *)(param_1 + 8),0xffffffff);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      puVar1 = (undefined4 *)FUN_004ab4cd(iVar3);
      puVar2 = (undefined4 *)FUN_004ab4cd(iVar3);
      iVar3 = iVar3 + 1;
      *puVar2 = *puVar1;
    } while (iVar3 < *(int *)(param_1 + 8));
  }
  FUN_0050b7ce(param_6);
  *(undefined4 *)(in_ECX + 0xb78) = 1;
  *(undefined4 *)(in_ECX + 0xdf4) = 1;
  *(undefined4 *)(in_ECX + 0xdfc) = 1;
  if (*(int *)(in_ECX + 0xe5c) != 0) {
    *(uint *)(in_ECX + 0xdf0) = (uint)(*(int *)(*(int *)(in_ECX + 0xe5c) + 0x7fc) == 0);
  }
  *(undefined4 *)(in_ECX + 0xde0) = 0;
  *(undefined4 *)(in_ECX + 0xddc) = 0;
  *(undefined4 *)(in_ECX + 0xe00) = 0;
  *(undefined4 *)(in_ECX + 0xde8) = 4;
  *(undefined4 *)(in_ECX + 0xdec) = 4;
  return in_ECX;
}

