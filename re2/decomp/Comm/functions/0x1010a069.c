// rea decompile_all
// name: CPrintDialog::GetPortName
// address: 0x1010a069
// body: available
// range: 0x1010a069-0x1010a0a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> >
   > __thiscall CPrintDialog::GetPortName(void)const 
   
   Library: Visual Studio 2015 Release */

undefined4 __thiscall CPrintDialog::GetPortName(CPrintDialog *this)

{
  LPVOID pvVar1;
  undefined4 in_stack_00000004;
  
  if (*(HGLOBAL *)(*(int *)(this + 0xa8) + 0xc) == (HGLOBAL)0x0) {
    pvVar1 = (LPVOID)0x0;
  }
  else {
    pvVar1 = GlobalLock(*(HGLOBAL *)(*(int *)(this + 0xa8) + 0xc));
    pvVar1 = (LPVOID)((int)pvVar1 + (uint)*(ushort *)((int)pvVar1 + 4) * 2);
  }
  FUN_100037c0(pvVar1);
  return in_stack_00000004;
}

