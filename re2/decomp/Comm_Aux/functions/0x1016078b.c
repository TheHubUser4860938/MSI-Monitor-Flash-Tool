// rea decompile_all
// name: COleClientItem::Deactivate
// address: 0x1016078b
// body: available
// range: 0x1016078b-0x101607df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall COleClientItem::Deactivate(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall COleClientItem::Deactivate(COleClientItem *this)

{
  _func_5023 *p_Var1;
  IUnknown *This;
  ULONG UVar2;
  IUnknown *This_00;
  
  This = _AfxQueryInterface(*(IUnknown **)(this + 0x24),(_GUID *)&DAT_101dcb9c);
  if (This != (IUnknown *)0x0) {
    p_Var1 = This->lpVtbl[1].Release;
    This_00 = This;
    guard_check_icall();
    UVar2 = (*p_Var1)(This_00);
    *(ULONG *)(this + 0x34) = UVar2;
    p_Var1 = This->lpVtbl->Release;
    guard_check_icall();
    (*p_Var1)(This);
    if (-1 < *(int *)(this + 0x34)) {
      *(undefined4 *)(this + 0x50) = 1;
      return;
    }
  }
  Close(this,0);
  return;
}

