// rea decompile_all
// name: CRgn::CombineRgn
// address: 0x1003084a
// body: available
// range: 0x1003084a-0x1003087c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CRgn::CombineRgn(class CRgn const *,class CRgn const *,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CRgn::CombineRgn(CRgn *this,CRgn *param_1,CRgn *param_2,int param_3)

{
  HRGN hrgnSrc1;
  int iVar1;
  HRGN hrgnSrc2;
  
  hrgnSrc1 = (HRGN)0x0;
  if (param_2 == (CRgn *)0x0) {
    hrgnSrc2 = (HRGN)0x0;
  }
  else {
    hrgnSrc2 = *(HRGN *)(param_2 + 4);
  }
  if (param_1 != (CRgn *)0x0) {
    hrgnSrc1 = *(HRGN *)(param_1 + 4);
  }
  iVar1 = ::CombineRgn(*(HRGN *)(this + 4),hrgnSrc1,hrgnSrc2,param_3);
  return iVar1;
}

