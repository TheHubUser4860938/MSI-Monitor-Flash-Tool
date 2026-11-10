// rea decompile_all
// name: CControlBar::~CControlBar
// address: 0x10131fb4
// body: available
// range: 0x10131fb4-0x10132055 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual __thiscall CControlBar::~CControlBar(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CControlBar::~CControlBar(CControlBar *this)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  AFX_MODULE_THREAD_STATE *pAVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_10175a68;
  local_10 = ExceptionList;
  uVar3 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(this + 0x80) = 0;
  DestroyWindow(this);
  if (*(CFrameWnd **)(this + 0xb8) != (CFrameWnd *)0x0) {
    CFrameWnd::RemoveControlBar(*(CFrameWnd **)(this + 0xb8),this);
  }
  piVar1 = *(int **)(this + 0xc0);
  *(undefined4 *)(this + 0xc0) = 0;
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(code **)(*piVar1 + 0xc);
    guard_check_icall(1,uVar3);
    (*pcVar2)();
  }
  if (*(void **)(this + 0xa4) != (void *)0x0) {
    FID_conflict__free(*(void **)(this + 0xa4));
  }
  pAVar4 = AfxGetModuleThreadState();
  if (*(CControlBar **)(pAVar4 + 0x50) == this) {
    *(undefined4 *)(pAVar4 + 0x50) = 0;
    *(undefined4 *)(pAVar4 + 0x4c) = 0xffffffff;
  }
  CWnd::~CWnd((CWnd *)this);
  ExceptionList = local_10;
  return;
}

