// rea decompile_all
// name: CMFCToolBarComboBoxButton::~CMFCToolBarComboBoxButton
// address: 0x1008b4e4
// body: available
// range: 0x1008b4e4-0x1008b5c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual __thiscall CMFCToolBarComboBoxButton::~CMFCToolBarComboBoxButton(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCToolBarComboBoxButton::~CMFCToolBarComboBoxButton(CMFCToolBarComboBoxButton *this)

{
  code *pcVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1017339f;
  local_10 = ExceptionList;
  uVar2 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = vftable;
  if (*(int **)(this + 0xb4) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0xb4) + 0x60);
    guard_check_icall(uVar2);
    (*pcVar1)();
    if (*(int **)(this + 0xb4) != (int *)0x0) {
      pcVar1 = *(code **)(**(int **)(this + 0xb4) + 4);
      guard_check_icall(1);
      (*pcVar1)();
    }
  }
  if (*(int **)(this + 0xb0) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0xb0) + 0x60);
    guard_check_icall(uVar2);
    (*pcVar1)();
    if (*(int **)(this + 0xb0) != (int *)0x0) {
      pcVar1 = *(code **)(**(int **)(this + 0xb0) + 4);
      guard_check_icall(1);
      (*pcVar1)();
    }
  }
  local_8 = 0;
  *(undefined ***)(this + 0xd8) = CList<unsigned_long,unsigned_long>::vftable;
  CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)(this + 0xd8));
  CStringList::~CStringList((CStringList *)(this + 0xbc));
  FUN_10003460();
  CMFCToolBarButton::~CMFCToolBarButton((CMFCToolBarButton *)this);
  ExceptionList = local_10;
  return;
}

