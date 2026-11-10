// rea decompile_all
// name: CVSListBoxBase::CVSListBoxBase
// address: 0x10042f35
// body: available
// range: 0x10042f35-0x10042ff3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: __thiscall CVSListBoxBase::CVSListBoxBase(void)
   
   Library: Visual Studio 2015 Release */

CVSListBoxBase * __thiscall CVSListBoxBase::CVSListBoxBase(CVSListBoxBase *this)

{
  undefined4 uVar1;
  
  CWnd::CWnd((CWnd *)this);
  *(undefined ***)this = vftable;
  CList<>(10);
  CList<unsigned_long,unsigned_long>::CList<unsigned_long,unsigned_long>
            ((CList<unsigned_long,unsigned_long> *)(this + 0x9c),10);
  CMap<int,int,unsigned_int,unsigned_int>::CMap<int,int,unsigned_int,unsigned_int>
            ((CMap<int,int,unsigned_int,unsigned_int> *)(this + 0xb8),10);
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined ***)(this + 0x104) = CFont::vftable;
  uVar1 = FUN_10013071();
  FUN_10003190(uVar1);
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xdc) = 1;
  *(undefined4 *)(this + 0xe8) = 1;
  return this;
}

