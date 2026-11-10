// rea decompile_all
// name: CCommandManager::~CCommandManager
// address: 0x10091763
// body: available
// range: 0x10091763-0x100917fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual __thiscall CCommandManager::~CCommandManager(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CCommandManager::~CCommandManager(CCommandManager *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10172c68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)this = vftable;
  local_8 = 0;
  *(undefined ***)(this + 0x74) = CMap<unsigned_int,unsigned_int,int,int>::vftable;
  CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)(this + 0x74));
  local_8 = 1;
  *(undefined ***)(this + 0x58) = CList<unsigned_int,unsigned_int>::vftable;
  CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)(this + 0x58));
  local_8 = 2;
  *(undefined ***)(this + 0x3c) = CMap<unsigned_int,unsigned_int,int,int>::vftable;
  CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)(this + 0x3c));
  local_8 = 3;
  *(undefined ***)(this + 0x20) = CMap<unsigned_int,unsigned_int,int,int>::vftable;
  CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)(this + 0x20));
  local_8 = 4;
  *(undefined ***)(this + 4) = CMap<unsigned_int,unsigned_int,int,int>::vftable;
  CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)(this + 4));
  ExceptionList = local_10;
  return;
}

