// rea decompile_all
// name: CList<_ITEMIDLIST*,_ITEMIDLIST*>::AddHead
// address: 0x1009697f
// body: available
// range: 0x1009697f-0x100969ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: struct __POSITION * __thiscall CList<struct _ITEMIDLIST *,struct _ITEMIDLIST
   *>::AddHead(struct _ITEMIDLIST *)
   
   Library: Visual Studio 2015 Release */

__POSITION * __thiscall
CList<_ITEMIDLIST*,_ITEMIDLIST*>::AddHead
          (CList<_ITEMIDLIST*,_ITEMIDLIST*> *this,_ITEMIDLIST *param_1)

{
  __POSITION *p_Var1;
  
  p_Var1 = (__POSITION *)FUN_100b8b3c(0,*(undefined4 *)(this + 4));
  *(_ITEMIDLIST **)(p_Var1 + 8) = param_1;
  if (*(int *)(this + 4) == 0) {
    *(__POSITION **)(this + 8) = p_Var1;
  }
  else {
    *(__POSITION **)(*(int *)(this + 4) + 4) = p_Var1;
  }
  *(__POSITION **)(this + 4) = p_Var1;
  return p_Var1;
}

