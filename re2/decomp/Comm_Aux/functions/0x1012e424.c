// rea decompile_all
// name: CMap<>
// address: 0x1012e424
// body: available
// range: 0x1012e424-0x1012e44d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall CMap<int,int,int,int>::CMap<int,int,int,int>(int)
    public: __thiscall CMap<int,int,unsigned int,unsigned int>::CMap<int,int,unsigned int,unsigned
   int>(int)
    public: __thiscall CMap<unsigned int,unsigned int &,class CMFCToolBarButton *,class
   CMFCToolBarButton * &>::CMap<unsigned int,unsigned int &,class CMFCToolBarButton *,class
   CMFCToolBarButton * &>(int)
    public: __thiscall CMap<unsigned int,unsigned int,int,int>::CMap<unsigned int,unsigned
   int,int,int>(int)
     34 names - too many to list
   
   Library: Visual Studio 2015 Release */

void CMap<>(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = CMap<CWnd*,CWnd*,CImageList*,CImageList*>::vftable;
  in_ECX[1] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = param_1;
  in_ECX[2] = 0x11;
  return;
}

