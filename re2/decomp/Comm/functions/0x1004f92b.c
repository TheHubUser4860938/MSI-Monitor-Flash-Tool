// rea decompile_all
// name: CMFCToolBarImages::CreateMask
// address: 0x1004f92b
// body: available
// range: 0x1004f92b-0x1004fa11 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarImages::CreateMask(int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCToolBarImages::CreateMask(CMFCToolBarImages *this,int param_1,int param_2,int param_3)

{
  AFX_GLOBAL_DATA *pAVar1;
  COLORREF color;
  
  PatBlt(DAT_101daec8,0,0,*(int *)(this + 0x54) + 2,*(int *)(this + 0x58) + 2,0xff0062);
  if ((*(int *)(this + 8) == 0x20) || (color = *(COLORREF *)(this + 0xa8), color == 0xffffffff)) {
    pAVar1 = GetGlobalData();
    color = *(COLORREF *)(pAVar1 + 0x1c);
  }
  SetBkColor(DAT_101daec4,color);
  BitBlt(DAT_101daec8,0,0,*(int *)(this + 0x54),*(int *)(this + 0x58),DAT_101daec4,
         *(int *)(this + 0x54) * param_1,0,0xcc0020);
  if (param_2 != 0) {
    pAVar1 = GetGlobalData();
    SetBkColor(DAT_101daec4,*(COLORREF *)(pAVar1 + 0x24));
    BitBlt(DAT_101daec8,0,0,*(int *)(this + 0x54),*(int *)(this + 0x58),DAT_101daec4,
           *(int *)(this + 0x54) * param_1,0,0xee0086);
    if (param_3 != 0) {
      BitBlt(DAT_101daec8,1,1,*(int *)(this + 0x54) + 1,*(int *)(this + 0x58) + 1,DAT_101daec8,0,0,
             0x8800c6);
    }
  }
  return;
}

