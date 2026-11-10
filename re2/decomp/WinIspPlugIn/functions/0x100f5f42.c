// rea decompile_all
// name: CSettingsStore::DeleteKey
// address: 0x100f5f42
// body: available
// range: 0x100f5f42-0x100f5f97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CSettingsStore::DeleteKey(wchar_t const *,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CSettingsStore::DeleteKey(CSettingsStore *this,wchar_t *param_1,int param_2)

{
  CRegKey *this_00;
  uint uVar1;
  undefined4 *puVar2;
  long lVar3;
  CSettingsStore *local_8;
  
  if (*(int *)(this + 0x14) == 0) {
    this_00 = (CRegKey *)(this + 4);
    local_8 = this;
    ATL::CRegKey::Close(this_00);
    *(uint *)this_00 = (param_2 != 0) + 0x80000001;
    puVar2 = (undefined4 *)PreparePath((wchar_t *)&local_8);
    lVar3 = ATL::CRegKey::RecurseDeleteKey(this_00,(wchar_t *)*puVar2);
    uVar1 = (uint)(lVar3 == 0);
    FUN_100476d0();
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

