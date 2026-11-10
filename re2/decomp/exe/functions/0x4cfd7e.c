// rea decompile_all
// name: FID_conflict:`scalar_deleting_destructor'
// address: 0x4cfd7e
// body: available
// range: 0x4cfd7e-0x4cfde3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Different Base Names
    public: virtual void * __thiscall CList<unsigned int,unsigned int &>::`scalar deleting
   destructor'(unsigned int)
    public: virtual void * __thiscall CList<unsigned int,unsigned int>::`scalar deleting
   destructor'(unsigned int)
    public: virtual void * __thiscall CList<unsigned long,unsigned long>::`scalar deleting
   destructor'(unsigned int)
    public: virtual void * __thiscall CList<struct AFX_DYNAMIC_LAYOUT_ITEM *,struct
   AFX_DYNAMIC_LAYOUT_ITEM *>::`scalar deleting destructor'(unsigned int)
     22 names - too many to list
   
   Library: Visual Studio 2015 Release */

void FID_conflict__scalar_deleting_destructor_(byte param_1)

{
  CList<tagPOINT,tagPOINT> *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005a916d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  *(undefined ***)in_ECX = CList<AFX_DYNAMIC_LAYOUT_ITEM*,AFX_DYNAMIC_LAYOUT_ITEM*>::vftable;
  CList<tagPOINT,tagPOINT>::RemoveAll(in_ECX);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FID_conflict__free(in_ECX);
    }
    else {
      guard_check_icall();
    }
  }
  ExceptionList = local_10;
  return;
}

