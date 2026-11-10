// rea decompile_all
// name: CShellManager::ConcatenateItem
// address: 0x10075ffe
// body: available
// range: 0x10075ffe-0x10076062 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: struct _ITEMIDLIST * __thiscall CShellManager::ConcatenateItem(struct _ITEMIDLIST const
   *,struct _ITEMIDLIST const *)
   
   Library: Visual Studio 2015 Release */

_ITEMIDLIST * __thiscall
CShellManager::ConcatenateItem(CShellManager *this,_ITEMIDLIST *param_1,_ITEMIDLIST *param_2)

{
  uint uVar1;
  _ITEMIDLIST *p_Var2;
  int iVar3;
  
  iVar3 = 0;
  if (param_1 != (_ITEMIDLIST *)0x0) {
    uVar1 = GetItemSize(this,param_1);
    iVar3 = uVar1 - 2;
  }
  uVar1 = GetItemSize(this,param_2);
  p_Var2 = (_ITEMIDLIST *)FUN_100760b4(uVar1 + iVar3);
  if (p_Var2 != (_ITEMIDLIST *)0x0) {
    if (param_1 != (_ITEMIDLIST *)0x0) {
      FUN_1014c320(p_Var2,param_1,iVar3);
    }
    FUN_1014c320((p_Var2->mkid).abID + iVar3 + -2,param_2,uVar1);
  }
  return p_Var2;
}

