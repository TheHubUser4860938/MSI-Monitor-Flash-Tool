// rea decompile_all
// name: CMFCDropDownFrame::~CMFCDropDownFrame
// address: 0x1012645d
// body: available
// range: 0x1012645d-0x101264eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual __thiscall CMFCDropDownFrame::~CMFCDropDownFrame(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCDropDownFrame::~CMFCDropDownFrame(CMFCDropDownFrame *this)

{
  code *pcVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_101ad4d5;
  local_10 = ExceptionList;
  uVar2 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = vftable;
  CObList::RemoveAll((CObList *)(this + 0xd74));
  if (*(int *)(this + 0xe84) != 0) {
    pcVar1 = *(code **)(*(int *)(this + 0x138) + 0x60);
    guard_check_icall(uVar2);
    (*pcVar1)();
  }
  FUN_10034f00();
  *(undefined ***)(this + 0x138) = CMFCDropDownToolBar::vftable;
  CMFCToolBar::~CMFCToolBar((CMFCToolBar *)(this + 0x138));
  CMiniFrameWnd::~CMiniFrameWnd((CMiniFrameWnd *)this);
  ExceptionList = local_10;
  return;
}

