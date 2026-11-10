// rea decompile_all
// name: CMFCColorButton::~CMFCColorButton
// address: 0x1006cc0b
// body: available
// range: 0x1006cc0b-0x1006ccb6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual __thiscall CMFCColorButton::~CMFCColorButton(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCColorButton::~CMFCColorButton(CMFCColorButton *this)

{
  code *pcVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101a65b3;
  local_10 = ExceptionList;
  uVar2 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = vftable;
  if (*(int **)(this + 0x800) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0x800) + 4);
    guard_check_icall(1,uVar2);
    (*pcVar1)();
  }
  FUN_10034f00();
  FUN_10034f00();
  FUN_10034f00();
  local_8 = 0;
  *(undefined ***)(this + 0x7cc) = CList<unsigned_long,unsigned_long>::vftable;
  CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)(this + 0x7cc));
  CArray<unsigned_long,unsigned_long>::~CArray<unsigned_long,unsigned_long>
            ((CArray<unsigned_long,unsigned_long> *)(this + 0x7b8));
  CMFCButton::~CMFCButton((CMFCButton *)this);
  ExceptionList = local_10;
  return;
}

