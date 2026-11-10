// rea decompile_all
// name: CList<CMFCRestoredTabInfo,CMFCRestoredTabInfo>::Serialize
// address: 0x10076808
// body: available
// range: 0x10076808-0x100768ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CList<struct CMFCRestoredTabInfo,struct
   CMFCRestoredTabInfo>::Serialize(class CArchive &)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CList<CMFCRestoredTabInfo,CMFCRestoredTabInfo>::Serialize
          (CList<CMFCRestoredTabInfo,CMFCRestoredTabInfo> *this,CArchive *param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 uStack_54;
  CMFCRestoredTabInfo local_2c [36];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x10076814;
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    for (uVar1 = CArchive::ReadCount(param_1); uVar1 != 0; uVar1 = uVar1 - 1) {
      uStack_54 = 0x10076867;
      _eh_vector_constructor_iterator_(local_2c,0x18,1,FUN_10072f36,FUN_100731d0);
      local_8 = 0;
      FUN_10072bd6();
      CMFCRestoredTabInfo::CMFCRestoredTabInfo((CMFCRestoredTabInfo *)&uStack_54,local_2c);
      AddTail(this);
      local_8 = 0xffffffff;
      _eh_vector_destructor_iterator_(local_2c,0x18,1,FUN_100731d0);
    }
  }
  else {
    CArchive::WriteCount(param_1,*(ulong *)(this + 0xc));
    for (puVar2 = *(undefined4 **)(this + 4); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      FUN_10072bd6();
    }
  }
  return;
}

