// rea decompile_all
// name: CDC::SelectObject
// address: 0x1005faa2
// body: available
// range: 0x1005faa2-0x1005fae7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CDC::SelectObject(class CRgn *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CDC::SelectObject(CDC *this,CRgn *param_1)

{
  HGDIOBJ pvVar1;
  HGDIOBJ h;
  
  pvVar1 = (HGDIOBJ)0xffffffff;
  h = (HGDIOBJ)0x0;
  if (*(HDC *)(this + 4) != *(HDC *)(this + 8)) {
    pvVar1 = (HGDIOBJ)0x0;
    if (param_1 != (CRgn *)0x0) {
      pvVar1 = *(HGDIOBJ *)(param_1 + 4);
    }
    pvVar1 = ::SelectObject(*(HDC *)(this + 4),pvVar1);
  }
  if (*(int *)(this + 8) != 0) {
    if (param_1 != (CRgn *)0x0) {
      h = *(HGDIOBJ *)(param_1 + 4);
    }
    pvVar1 = ::SelectObject(*(HDC *)(this + 8),h);
  }
  return (int)pvVar1;
}

