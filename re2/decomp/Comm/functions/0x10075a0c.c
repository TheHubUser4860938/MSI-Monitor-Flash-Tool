// rea decompile_all
// name: CScrollView::SetScrollSizes
// address: 0x10075a0c
// body: available
// range: 0x10075a0c-0x10075b81 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CScrollView::SetScrollSizes(int,struct tagSIZE,struct tagSIZE const
   &,struct tagSIZE const &)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CScrollView::SetScrollSizes
          (CScrollView *this,int param_1,tagSIZE param_2,tagSIZE *param_3,tagSIZE *param_4)

{
  LPPOINT lppt;
  LPPOINT lppt_00;
  LONG LVar1;
  CWindowDC local_2c [8];
  HDC local_24;
  int local_18;
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x10075a18;
  local_18 = *(int *)(this + 0x8c);
  *(int *)(this + 0x8c) = param_1;
  *(LONG *)(this + 0x90) = param_2.cx;
  *(LONG *)(this + 0x94) = param_2.cy;
  CWindowDC::CWindowDC(local_2c,(CWnd *)0x0);
  local_8 = 0;
  CDC::SetMapMode((CDC *)local_2c,*(int *)(this + 0x8c));
  ((LPPOINT)(this + 0x98))->x = *(LONG *)(this + 0x90);
  *(undefined4 *)(this + 0x9c) = *(undefined4 *)(this + 0x94);
  LPtoDP(local_24,(LPPOINT)(this + 0x98),1);
  lppt = (LPPOINT)(this + 0xa0);
  LVar1 = param_3->cy;
  lppt->x = param_3->cx;
  *(LONG *)(this + 0xa4) = LVar1;
  LPtoDP(local_24,lppt,1);
  lppt_00 = (LPPOINT)(this + 0xa8);
  LVar1 = param_4->cy;
  lppt_00->x = param_4->cx;
  *(LONG *)(this + 0xac) = LVar1;
  LPtoDP(local_24,lppt_00,1);
  if (*(int *)(this + 0x9c) < 0) {
    *(int *)(this + 0x9c) = -*(int *)(this + 0x9c);
  }
  if (*(int *)(this + 0xa4) < 0) {
    *(int *)(this + 0xa4) = -*(int *)(this + 0xa4);
  }
  if (*(int *)(this + 0xac) < 0) {
    *(int *)(this + 0xac) = -*(int *)(this + 0xac);
  }
  local_8 = 0xffffffff;
  CWindowDC::~CWindowDC(local_2c);
  local_14 = 10;
  if (lppt->x == 0) {
    lppt->x = *(int *)(this + 0x98) / 10;
  }
  if (*(int *)(this + 0xa4) == 0) {
    *(int *)(this + 0xa4) = *(int *)(this + 0x9c) / 10;
  }
  if (lppt_00->x == 0) {
    lppt_00->x = lppt->x / 10;
  }
  if (*(int *)(this + 0xac) == 0) {
    *(int *)(this + 0xac) = *(int *)(this + 0xa4) / 10;
  }
  if ((*(int *)(this + 0x20) != 0) && (UpdateBars(this), local_18 != *(int *)(this + 0x8c))) {
    InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
  }
  return;
}

