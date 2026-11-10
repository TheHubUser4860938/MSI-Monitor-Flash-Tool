// rea decompile_all
// name: CPreviewView::~CPreviewView
// address: 0x10145f4b
// body: available
// range: 0x10145f4b-0x10146015 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual __thiscall CPreviewView::~CPreviewView(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPreviewView::~CPreviewView(CPreviewView *this)

{
  CPrintInfo *this_00;
  code *pcVar1;
  uint uVar2;
  HCURSOR hCursor;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_10175a68;
  local_10 = ExceptionList;
  uVar2 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = vftable;
  CDC::Detach((CDC *)(this + 0xc4));
  this_00 = *(CPrintInfo **)(this + 0x164);
  if (this_00 != (CPrintInfo *)0x0) {
    CPrintInfo::~CPrintInfo(this_00);
    FUN_10148603(this_00,0x40,uVar2);
  }
  FUN_10148603(*(undefined4 *)(this + 0xd8),0x18,uVar2);
  if (*(int **)(this + 0xc0) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0xc0) + 4);
    guard_check_icall(1);
    (*pcVar1)();
  }
  if (*(int *)(this + 0x150) != 0) {
    hCursor = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
    SetCursor(hCursor);
    DestroyCursor(*(HCURSOR *)(this + 0x150));
  }
  CDC::~CDC((CDC *)(this + 0xc4));
  CScrollView::~CScrollView((CScrollView *)this);
  ExceptionList = local_10;
  return;
}

