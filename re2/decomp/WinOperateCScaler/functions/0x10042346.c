// rea decompile_all
// name: ~CList<>
// address: 0x10042346
// body: available
// range: 0x10042346-0x10042381 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual __thiscall CList<unsigned int,unsigned int &>::~CList<unsigned int,unsigned int
   &>(void)
    public: virtual __thiscall CList<unsigned int,unsigned int>::~CList<unsigned int,unsigned
   int>(void)
    public: virtual __thiscall CList<unsigned long,unsigned long>::~CList<unsigned long,unsigned
   long>(void)
    public: virtual __thiscall CList<struct AFX_DYNAMIC_LAYOUT_ITEM *,struct AFX_DYNAMIC_LAYOUT_ITEM
   *>::~CList<struct AFX_DYNAMIC_LAYOUT_ITEM *,struct AFX_DYNAMIC_LAYOUT_ITEM *>(void)
     22 names - too many to list
   
   Library: Visual Studio 2015 Release */

void ~CList<>(void)

{
  CList<tagPOINT,tagPOINT> *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_10198ab0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)in_ECX = CList<unsigned_long,unsigned_long>::vftable;
  CList<tagPOINT,tagPOINT>::RemoveAll(in_ECX);
  ExceptionList = local_10;
  return;
}

