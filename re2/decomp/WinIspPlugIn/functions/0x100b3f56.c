// rea decompile_all
// name: CDrawingManager::MirrorRect
// address: 0x100b3f56
// body: available
// range: 0x100b3f56-0x100b4251 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100b4061 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: void __thiscall CDrawingManager::MirrorRect(class CRect,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CDrawingManager::MirrorRect
          (CDrawingManager *this,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  code *pcVar1;
  undefined4 uVar2;
  BOOL BVar3;
  HDC pHVar4;
  int iVar5;
  HBITMAP pHVar6;
  CGdiObject *pCVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  int cx;
  undefined4 *puVar12;
  int iVar13;
  int local_88;
  HBITMAP__ *local_84;
  CDC local_80 [4];
  HDC__ *local_7c;
  CDrawingManager *local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  undefined4 *local_54;
  undefined **local_50;
  void *local_4c;
  int local_48;
  int local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  tagRECT local_34;
  RECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x7c;
  local_8 = 0x100b3f62;
  local_70 = this;
  if ((param_5 != param_3 && -1 < param_5 - param_3) &&
     (param_4 != param_2 && -1 < param_4 - param_2)) {
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    pcVar1 = *(code **)(**(int **)(this + 4) + 0x50);
    guard_check_icall(&local_24);
    (*pcVar1)();
    local_34.left = 0;
    local_34.top = 0;
    local_34.right = 0;
    local_34.bottom = 0;
    UnionRect(&local_34,&local_24,(RECT *)&param_2);
    BVar3 = EqualRect(&local_34,&local_24);
    if (BVar3 != 0) {
      cx = param_4 - param_2;
      iVar13 = param_5 - param_3;
      local_6c = iVar13;
      local_68 = cx;
      CDC::CDC(local_80);
      local_8 = 0;
      pHVar4 = (HDC)0x0;
      if (*(int *)(this + 4) != 0) {
        pHVar4 = *(HDC *)(*(int *)(this + 4) + 4);
      }
      pHVar4 = CreateCompatibleDC(pHVar4);
      iVar5 = CDC::Attach(local_80,pHVar4);
      if (iVar5 != 0) {
        local_4c = (void *)0x0;
        local_50 = CBitmap::vftable;
        local_8 = CONCAT31(local_8._1_3_,1);
        pHVar6 = CreateCompatibleBitmap(*(HDC *)(*(int *)(this + 4) + 4),cx,iVar13);
        iVar5 = CMenu::Attach((CMenu *)&local_50,(HMENU__ *)pHVar6);
        if (iVar5 != 0) {
          pCVar7 = CDC::SelectGdiObject(local_7c,local_4c);
          if (pCVar7 == (CGdiObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_1004a383();
          }
          local_88 = cx;
          local_84 = (HBITMAP__ *)iVar13;
          local_84 = CreateBitmap_32((CSize *)&local_88,&local_38);
          puVar8 = local_38;
          if ((local_84 != (HBITMAP__ *)0x0) && (local_40 = local_38, local_38 != (undefined4 *)0x0)
             ) {
            SelectObject(local_7c,local_84);
            pHVar4 = (HDC)0x0;
            if (*(int *)(local_70 + 4) != 0) {
              pHVar4 = *(HDC *)(*(int *)(local_70 + 4) + 4);
            }
            BitBlt(local_7c,0,0,cx,iVar13,pHVar4,param_2,param_3,0xcc0020);
            iVar5 = cx;
            if (param_6 == 0) {
              if (-1 < iVar13 / 2) {
                local_38 = (undefined4 *)(cx * -4);
                local_48 = cx * 4;
                puVar9 = (undefined4 *)((iVar13 * 4 + -4) * cx + (int)puVar8);
                local_3c = (undefined4 *)(iVar13 / 2 + 1);
                iVar10 = cx;
                do {
                  puVar11 = puVar8;
                  iVar5 = iVar10;
                  puVar12 = puVar9;
                  if (0 < iVar10) {
                    do {
                      uVar2 = *puVar8;
                      *puVar8 = *puVar12;
                      puVar8 = puVar8 + 1;
                      *puVar12 = uVar2;
                      iVar10 = iVar10 + -1;
                      puVar11 = local_40;
                      iVar5 = local_68;
                      puVar12 = puVar12 + 1;
                      local_54 = puVar9;
                    } while (iVar10 != 0);
                  }
                  puVar8 = puVar11 + cx;
                  puVar9 = puVar9 + -cx;
                  local_3c = (undefined4 *)((int)local_3c + -1);
                  iVar10 = iVar5;
                  iVar13 = local_6c;
                  local_40 = puVar8;
                } while (local_3c != (undefined4 *)0x0);
              }
            }
            else if (-1 < iVar13) {
              local_48 = cx * -4;
              local_54 = (undefined4 *)-cx;
              local_64 = cx / 2;
              local_58 = iVar13 * cx;
              local_3c = puVar8 + local_58;
              local_38 = (undefined4 *)(iVar13 + 1);
              local_40 = puVar8 + (iVar13 + 1) * cx + -1;
              iVar13 = local_58;
              local_44 = local_58;
              do {
                if (-1 < local_64) {
                  local_5c = iVar5 + -1 + iVar13;
                  local_44 = local_64 + 1;
                  local_60 = iVar13;
                  puVar8 = local_3c;
                  puVar9 = local_40;
                  do {
                    if ((local_60 < local_58) && (local_5c < local_58)) {
                      uVar2 = *puVar8;
                      *puVar8 = *puVar9;
                      *puVar9 = uVar2;
                    }
                    puVar8 = puVar8 + 1;
                    puVar9 = puVar9 + -1;
                    local_5c = local_5c + -1;
                    local_60 = local_60 + 1;
                    local_44 = local_44 + -1;
                  } while (local_44 != 0);
                  local_44 = 0;
                  iVar5 = local_68;
                }
                iVar13 = iVar13 + (int)local_54;
                local_3c = local_3c + -cx;
                local_40 = local_40 + -cx;
                local_38 = (undefined4 *)((int)local_38 + -1);
              } while (local_38 != (undefined4 *)0x0);
              local_38 = (undefined4 *)0x0;
              iVar13 = local_6c;
            }
            BitBlt(*(HDC *)(*(int *)(local_70 + 4) + 4),param_2,param_3,iVar5,iVar13,local_7c,0,0,
                   0xcc0020);
            CDC::SelectGdiObject(local_7c,*(void **)(pCVar7 + 4));
            DeleteObject(local_84);
          }
        }
        local_50 = CBitmap::vftable;
        CImageList::~CImageList((CImageList *)&local_50);
      }
      CDC::~CDC(local_80);
    }
  }
  FUN_1018015d();
  return;
}

