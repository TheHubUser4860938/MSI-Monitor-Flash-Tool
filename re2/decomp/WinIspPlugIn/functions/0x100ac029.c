// rea decompile_all
// name: CScrollView::DoMouseWheel
// address: 0x100ac029
// body: available
// range: 0x100ac029-0x100ac105 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CScrollView::DoMouseWheel(unsigned int,short,class CPoint)
   
   Library: Visual Studio 2015 Release */

int __thiscall CScrollView::DoMouseWheel(CScrollView *this,undefined4 param_1,short param_2)

{
  code *pcVar1;
  int iVar2;
  uint nNumerator;
  int iVar3;
  int iVar4;
  int local_c;
  int local_8;
  
  CheckScrollBars(this,&local_c,&local_8);
  if ((local_8 == 0) && (local_c == 0)) {
    iVar2 = 0;
  }
  else {
    nNumerator = _AfxGetMouseScrollLines();
    iVar2 = MulDiv(-(int)param_2,nNumerator,0x78);
    if (local_8 == 0) {
      if (local_c == 0) {
        return 0;
      }
      if (nNumerator == 0xffffffff) {
        iVar3 = *(int *)(this + 0xa0);
        if (0 < param_2) {
          iVar3 = -*(int *)(this + 0xa0);
        }
      }
      else {
        iVar3 = *(int *)(this + 0xa8) * iVar2;
        if (*(int *)(this + 0xa0) <= *(int *)(this + 0xa8) * iVar2) {
          iVar3 = *(int *)(this + 0xa0);
        }
      }
      iVar4 = 0;
    }
    else {
      if (nNumerator == 0xffffffff) {
        iVar4 = *(int *)(this + 0xa4);
        if (0 < param_2) {
          iVar4 = -*(int *)(this + 0xa4);
        }
      }
      else {
        iVar4 = *(int *)(this + 0xac) * iVar2;
        if (*(int *)(this + 0xa4) <= *(int *)(this + 0xac) * iVar2) {
          iVar4 = *(int *)(this + 0xa4);
        }
      }
      iVar3 = 0;
    }
    pcVar1 = *(code **)(*(int *)this + 0x16c);
    guard_check_icall(iVar3,iVar4,1);
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      UpdateWindow(*(HWND *)(this + 0x20));
    }
  }
  return iVar2;
}

