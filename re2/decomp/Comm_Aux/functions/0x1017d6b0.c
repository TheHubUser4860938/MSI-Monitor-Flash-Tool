// rea decompile_all
// name: CPreviewView::SetScaledSize
// address: 0x1017d6b0
// body: available
// range: 0x1017d6b0-0x1017d7f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CPreviewView::SetScaledSize(unsigned int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPreviewView::SetScaledSize(CPreviewView *this,uint param_1)

{
  tagSIZE tVar1;
  CPreviewView *pCVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  LPRECT lprc;
  int iVar6;
  tagSIZE local_10;
  CPreviewView *local_8;
  
  iVar6 = param_1 * 0x28;
  iVar5 = *(int *)(this + 0xe0);
  local_8 = this;
  CalcPageDisplaySize(this);
  iVar4 = *(int *)(this + 0x13c);
  iVar3 = *(int *)(iVar6 + 0x24 + iVar5);
  if (iVar4 == 0) {
    *(undefined4 *)(iVar6 + 0x18 + iVar5) = *(undefined4 *)(iVar6 + 0x20 + iVar5);
    *(int *)(iVar6 + 0x1c + iVar5) = iVar3;
    goto LAB_1017d73b;
  }
  if (iVar4 == 1) {
    *(int *)(iVar6 + 0x1c + iVar5) = iVar3;
    if (*(int *)(iVar6 + 0x20 + iVar5) < iVar3) {
      iVar3 = *(int *)(iVar6 + 0x20 + iVar5) + iVar3;
    }
    else {
      iVar3 = *(int *)(iVar6 + 0x20 + iVar5) * 3 - iVar3;
    }
    iVar3 = iVar3 / 2;
  }
  else {
    if (iVar4 != 2) goto LAB_1017d73b;
    if (*(int *)(iVar6 + 0x20 + iVar5) < iVar3) {
      *(undefined4 *)(iVar6 + 0x1c + iVar5) = 1;
      *(undefined4 *)(iVar6 + 0x18 + iVar5) = 1;
      goto LAB_1017d73b;
    }
    *(int *)(iVar6 + 0x1c + iVar5) = iVar3;
    iVar3 = *(int *)(iVar6 + 0x20 + iVar5) * 2 - iVar3;
  }
  *(int *)(iVar6 + 0x18 + iVar5) = iVar3;
LAB_1017d73b:
  iVar4 = MulDiv(*(int *)(iVar6 + 0x10 + iVar5),*(int *)(iVar6 + 0x18 + iVar5),
                 *(int *)(iVar6 + 0x1c + iVar5));
  iVar5 = MulDiv(*(int *)(iVar6 + 0x14 + iVar5),*(int *)(iVar6 + 0x18 + iVar5),
                 *(int *)(iVar6 + 0x1c + iVar5));
  lprc = (LPRECT)(*(int *)(local_8 + 0xe0) + iVar6);
  SetRect(lprc,8,8,iVar4 + 0xb,iVar5 + 0xb);
  pCVar2 = local_8;
  if (*(int *)(local_8 + 0x13c) == 0) {
    OffsetRect(lprc,((lprc->left - lprc->right) + local_10.cx) / 2 + -1,
               ((lprc->top - lprc->bottom) + local_10.cy) / 2 + -1);
    if (param_1 == 1) {
      OffsetRect(lprc,*(int *)(pCVar2 + 0x14c),0);
    }
  }
  else {
    tVar1.cy = (lprc->bottom - lprc->top) + 0x10;
    tVar1.cx = (lprc->right - lprc->left) + 0x10;
    CScrollView::SetScrollSizes((CScrollView *)local_8,1,tVar1,&local_10,(tagSIZE *)&DAT_101bdf60);
  }
  return;
}

