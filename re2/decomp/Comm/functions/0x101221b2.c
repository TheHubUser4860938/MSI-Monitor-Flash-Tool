// rea decompile_all
// name: CPaneContainer::CPaneContainer
// address: 0x101221b2
// body: available
// range: 0x101221b2-0x10122257 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: __thiscall CPaneContainer::CPaneContainer(class CPaneContainerManager *,class
   CDockablePane *,class CDockablePane *,class CPaneDivider *)
   
   Library: Visual Studio 2015 Release */

CPaneContainer * __thiscall
CPaneContainer::CPaneContainer
          (CPaneContainer *this,CPaneContainerManager *param_1,CDockablePane *param_2,
          CDockablePane *param_3,CPaneDivider *param_4)

{
  *(CDockablePane **)(this + 4) = param_2;
  *(CDockablePane **)(this + 8) = param_3;
  *(CPaneDivider **)(this + 0xc) = param_4;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined ***)this = vftable;
  *(CPaneContainerManager **)(this + 0x1c) = param_1;
  ((LPRECT)(this + 0x44))->left = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  ((LPRECT)(this + 0x54))->left = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  CList<unsigned_int,unsigned_int>::CList<unsigned_int,unsigned_int>
            ((CList<unsigned_int,unsigned_int> *)(this + 100),10);
  CList<unsigned_int,unsigned_int>::CList<unsigned_int,unsigned_int>
            ((CList<unsigned_int,unsigned_int> *)(this + 0x80),10);
  *(undefined4 *)(this + 0x24) = 0xffffffff;
  *(undefined4 *)(this + 0x28) = 0xffffffff;
  *(undefined4 *)(this + 0x2c) = 0xffffffff;
  *(undefined4 *)(this + 0x38) = 0;
  SetRectEmpty((LPRECT)(this + 0x54));
  *(undefined4 *)(this + 0x40) = 0;
  SetRectEmpty((LPRECT)(this + 0x44));
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x20) = 0x32;
  return this;
}

