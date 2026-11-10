// rea decompile_all
// name: CPreviewView::DoZoom
// address: 0x10146136
// body: available
// range: 0x10146136-0x101462bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CPreviewView::DoZoom(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPreviewView::DoZoom(CPreviewView *this,int param_1,int param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  tagSCROLLINFO local_24;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x13c) == 0) {
    *(undefined4 *)(this + 0x148) = *(undefined4 *)(this + 0x138);
    ShowScrollBar(*(HWND *)(this + 0x20),0,0);
    uVar1 = *(ushort *)(*(int *)(**(int **)(this + 0x164) + 0xa8) + 0x1e);
    iVar2 = 0;
    if ((uVar1 < 0x8000) &&
       ((uint)uVar1 - (uint)*(ushort *)(*(int *)(**(int **)(this + 0x164) + 0xa8) + 0x1c) < 0x8000))
    {
      iVar2 = 1;
    }
    ShowScrollBar(*(HWND *)(this + 0x20),1,iVar2);
    if (iVar2 != 0) {
      local_24.fMask = 3;
      local_24.nMin = (int)*(ushort *)(*(int *)(**(int **)(this + 0x164) + 0xa8) + 0x1c);
      local_24.nMax = (int)*(ushort *)(*(int *)(**(int **)(this + 0x164) + 0xa8) + 0x1e);
      local_24.nPage = 1;
      iVar2 = CWnd::SetScrollInfo((CWnd *)this,1,&local_24,0);
      if (iVar2 == 0) {
        CWnd::SetScrollRange((CWnd *)this,1,local_24.nMin,local_24.nMax,0);
      }
    }
    SetCurrentPage(this,*(uint *)(this + 0x144),1);
  }
  else {
    iVar2 = *(int *)(this + 0xe0);
    iVar4 = param_1 * 0x28;
    *(undefined4 *)(this + 0x148) = 1;
    *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar2 + 0x20 + iVar4);
    *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(iVar2 + 0x24 + iVar4);
    iVar2 = *(int *)(this + 0xe0);
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar2 + 0x10 + iVar4);
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar2 + 0x14 + iVar4);
    SetCurrentPage(this,*(int *)(this + 0x144) + param_1,0);
    SetScaledSize(this,0);
    iVar2 = *(int *)(this + 0xe0);
    iVar3 = MulDiv(param_3,*(int *)(iVar2 + 0x18 + iVar4),*(int *)(iVar2 + 0x1c + iVar4));
    iVar2 = MulDiv(param_4,*(int *)(iVar2 + 0x18 + iVar4),*(int *)(iVar2 + 0x1c + iVar4));
    CScrollView::CenterOnPoint
              ((CScrollView *)this,iVar3 + **(int **)(this + 0xe0),
               iVar2 + (*(int **)(this + 0xe0))[1]);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

