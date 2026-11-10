// rea decompile_all
// name: CMFCToolBarImages::PrepareDrawImage
// address: 0x1008982d
// body: available
// range: 0x1008982d-0x10089a5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100898d9 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall CMFCToolBarImages::PrepareDrawImage(struct tagAFXDrawState &,class
   CSize,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCToolBarImages::PrepareDrawImage
          (CMFCToolBarImages *this,int *param_1,int param_3,int param_4,int param_5)

{
  CMFCVisualManager *pCVar1;
  AFX_GLOBAL_DATA *this_00;
  int iVar2;
  HGDIOBJ pvVar3;
  HBITMAP pHVar4;
  HDC pHVar5;
  CGdiObject *pCVar6;
  void *pvVar7;
  CWindowDC local_28 [4];
  HDC local_24;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x10089839;
  pvVar7 = (void *)0x0;
  if (*(int *)(this + 0x8c) == 0) {
    return 0;
  }
  if (DAT_10245bb0 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_10245bf4);
  }
  if (param_5 == 0) {
LAB_1008987c:
    if (((*(int *)(this + 8) < 0x20) && (*(int *)(this + 0x94) == 0)) &&
       (pCVar1 = CMFCVisualManager::GetInstance(), *(int *)(pCVar1 + 0x54) != 0)) {
      this_00 = GetGlobalData();
      iVar2 = AFX_GLOBAL_DATA::IsHighContrastMode(this_00);
      if (iVar2 == 0) {
        UpdateInternalImage(this,1);
      }
    }
  }
  else if (*(int *)(this + 8) < 0x20) {
    if (*(int *)(this + 0x90) == 0) {
      UpdateInternalImage(this,0);
    }
    goto LAB_1008987c;
  }
  *(undefined4 *)(this + 0x20) = 0;
  if (((*(HGDIOBJ *)(this + 0x90) == (HGDIOBJ)0x0) ||
      ((4 < *(int *)(this + 8) && (*(int *)(this + 0x38) == 0)))) || (*(int *)(this + 8) == 0)) {
    param_5 = 0;
  }
  *(int *)(this + 0x2c) = param_5;
  if (*(HGDIOBJ *)(this + 0x8c) != (HGDIOBJ)0x0) {
    if (this == (CMFCToolBarImages *)0xffffffbc) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(this + 0x48);
    }
    if (iVar2 == 0) {
      if (this == (CMFCToolBarImages *)0xffffff64) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(this + 0xa0);
      }
      if ((iVar2 == 0) && (*(int *)(this + 0xa4) == 0)) {
        if ((param_5 == 0) || (pvVar3 = *(HGDIOBJ *)(this + 0x90), 0x1f < *(int *)(this + 8))) {
          pvVar3 = *(HGDIOBJ *)(this + 0x8c);
        }
        pvVar3 = SelectObject(DAT_10245bdc,pvVar3);
        param_1[2] = (int)pvVar3;
        if (pvVar3 == (HGDIOBJ)0x0) {
LAB_10089930:
          if (DAT_10245bb0 != 0) {
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_10245bf4);
          }
          return 0;
        }
        if (*(int *)(this + 0x40) != 0) {
          pHVar4 = CreateBitmap(*(int *)(this + 0x54) + 2,*(int *)(this + 0x58) + 2,1,1,(void *)0x0)
          ;
          pHVar5 = DAT_10245be0;
          *param_1 = (int)pHVar4;
          pvVar3 = SelectObject(pHVar5,pHVar4);
          param_1[1] = (int)pvVar3;
          if ((*param_1 == 0) || (pvVar3 == (HGDIOBJ)0x0)) {
            FUN_1005ba69(param_1);
            goto LAB_10089930;
          }
        }
        if ((param_3 < 1) || (param_4 < 1)) {
          *(undefined4 *)(this + 100) = *(undefined4 *)(this + 0x54);
          *(undefined4 *)(this + 0x68) = *(undefined4 *)(this + 0x58);
        }
        else {
          *(int *)(this + 100) = param_3;
          *(int *)(this + 0x68) = param_4;
        }
        if (*(int *)(this + 8) == 0x20) {
          local_14 = -1;
        }
        else {
          local_14 = *(int *)(this + 0xa8);
        }
        iVar2 = CSize::operator!=((CSize *)(this + 100),*(tagSIZE *)(this + 0x54));
        if ((iVar2 != 0) || (local_14 != -1)) {
          CWindowDC::CWindowDC(local_28,(CWnd *)0x0);
          local_8 = 0;
          iVar2 = CSize::operator!=((CSize *)(this + 100),*(tagSIZE *)(this + 0x54));
          *(int *)(this + 0x20) = iVar2;
          pHVar5 = CreateCompatibleDC((HDC)0x0);
          CDC::Attach((CDC *)(this + 0x44),pHVar5);
          pHVar4 = CreateCompatibleBitmap
                             (local_24,*(int *)(this + 0x54) + 2,*(int *)(this + 0x58) + 2);
          CMenu::Attach((CMenu *)(this + 0x9c),(HMENU__ *)pHVar4);
          if ((CMenu *)(this + 0x9c) != (CMenu *)0x0) {
            pvVar7 = *(void **)(this + 0xa0);
          }
          pCVar6 = CDC::SelectGdiObject(*(HDC__ **)(this + 0x48),pvVar7);
          *(CGdiObject **)(this + 0xa4) = pCVar6;
          if (pCVar6 == (CGdiObject *)0x0) goto LAB_100898d9;
          CWindowDC::~CWindowDC(local_28);
        }
        return 1;
      }
    }
  }
LAB_100898d9:
                    /* WARNING: Subroutine does not return */
  FUN_1004a383();
}

