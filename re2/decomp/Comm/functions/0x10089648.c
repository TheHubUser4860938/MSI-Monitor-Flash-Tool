// rea decompile_all
// name: CMFCToolBarButton::IsEditable
// address: 0x10089648
// body: available
// range: 0x10089648-0x1008966f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCToolBarButton::IsEditable(void)const 
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release */

int __thiscall CMFCToolBarButton::IsEditable(CMFCToolBarButton *this)

{
  uint uVar1;
  int iVar2;
  __POSITION *p_Var3;
  int iVar4;
  
  uVar1 = *(uint *)(this + 0x20);
  iVar2 = IsStandardCommand(uVar1);
  iVar4 = 0;
  if (iVar2 == 0) {
    p_Var3 = CList<unsigned_int,unsigned_int>::Find
                       ((CList<unsigned_int,unsigned_int> *)&PTR_vftable_101d3a70,uVar1,
                        (__POSITION *)0x0);
    if (p_Var3 == (__POSITION *)0x0) {
      iVar4 = 1;
    }
  }
  return iVar4;
}

