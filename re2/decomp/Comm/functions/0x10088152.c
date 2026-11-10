// rea decompile_all
// name: CMFCColorBar::CMFCColorBar
// address: 0x10088152
// body: available
// range: 0x10088152-0x1008832e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: __thiscall CMFCColorBar::CMFCColorBar(class CMFCColorBar &,unsigned int)
   
   Library: Visual Studio 2015 Release */

CMFCColorBar * __thiscall
CMFCColorBar::CMFCColorBar(CMFCColorBar *this,CMFCColorBar *param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  CMFCPopupMenuBar::CMFCPopupMenuBar((CMFCPopupMenuBar *)this);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0xdd0) = *(undefined4 *)(param_1 + 0xdd0);
  *(undefined4 *)(this + 0xdd4) = *(undefined4 *)(param_1 + 0xdd4);
  *(undefined4 *)(this + 0xdd8) = *(undefined4 *)(param_1 + 0xdd8);
  *(undefined4 *)(this + 0xdf0) = *(undefined4 *)(param_1 + 0xdf0);
  *(uint *)(this + 0xe04) = param_2;
  *(undefined4 *)(this + 0xdf8) = 1;
  CArray<unsigned_long,unsigned_long>::CArray<unsigned_long,unsigned_long>
            ((CArray<unsigned_long,unsigned_long> *)(this + 0xe08));
  CList<unsigned_long,unsigned_long>::CList<unsigned_long,unsigned_long>
            ((CList<unsigned_long,unsigned_long> *)(this + 0xe1c),10);
  *(undefined4 *)(this + 0xe38) = 0;
  *(undefined4 *)(this + 0xe3c) = 0;
  *(undefined4 *)(this + 0xe44) = 0;
  *(undefined ***)(this + 0xe40) = CPalette::vftable;
  *(undefined4 *)(this + 0xe48) = *(undefined4 *)(param_1 + 0xe48);
  *(undefined4 *)(this + 0xe4c) = *(undefined4 *)(param_1 + 0xe4c);
  iVar1 = FUN_10003060(*(int *)(param_1 + 0xe50) + -0x10);
  *(int *)(this + 0xe50) = iVar1 + 0x10;
  iVar1 = FUN_10003060(*(int *)(param_1 + 0xe54) + -0x10);
  *(int *)(this + 0xe54) = iVar1 + 0x10;
  iVar1 = FUN_10003060(*(int *)(param_1 + 0xe58) + -0x10);
  *(int *)(this + 0xe58) = iVar1 + 0x10;
  FUN_100ca1db(*(undefined4 *)(param_1 + 0xe10),0xffffffff);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xe10)) {
    do {
      puVar2 = (undefined4 *)FUN_100d7168(iVar1);
      puVar3 = (undefined4 *)FUN_100d7168(iVar1);
      iVar1 = iVar1 + 1;
      *puVar3 = *puVar2;
    } while (iVar1 < *(int *)(param_1 + 0xe10));
  }
  FUN_100c47aa(param_1 + 0xe1c);
  *(undefined4 *)(this + 0xdfc) = 0;
  *(undefined4 *)(this + 0xe5c) = 0;
  *(undefined4 *)(this + 0xb78) = 1;
  *(undefined4 *)(this + 0xdf4) = 1;
  *(undefined4 *)(this + 0xde8) = 4;
  *(undefined4 *)(this + 0xdec) = 4;
  *(undefined4 *)(this + 0xe64) = 0;
  *(undefined4 *)(this + 0xe60) = 0;
  *(undefined4 *)(this + 0xde0) = 0;
  *(undefined4 *)(this + 0xddc) = 0;
  *(undefined4 *)(this + 0xe00) = 0;
  return this;
}

