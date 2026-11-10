// rea decompile_all
// name: CDrawingManager::DrawRect
// address: 0x100b163d
// body: available
// range: 0x100b163d-0x100b18e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100b1703 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CDrawingManager::DrawRect(class CRect const &,unsigned long,unsigned
   long)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CDrawingManager::DrawRect(CDrawingManager *this,CRect *param_1,ulong param_2,ulong param_3)

{
  HDC pHVar1;
  int iVar2;
  HBITMAP pHVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  CDC local_54 [4];
  HDC__ *local_50;
  undefined **local_44;
  void *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  HBITMAP__ *local_2c;
  CGdiObject *local_28;
  CDrawingManager *local_24;
  uint *local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x54;
  local_8 = 0x100b1649;
  if ((param_2 != 0xffffffff) || (param_3 != 0xffffffff)) {
    local_64 = *(int *)param_1;
    local_60 = *(int *)(param_1 + 4);
    local_5c = *(int *)(param_1 + 8);
    local_58 = *(int *)(param_1 + 0xc);
    local_24 = this;
    CRect::NormalizeRect((CRect *)&local_64);
    iVar5 = local_58 - local_60;
    iVar7 = local_5c - local_64;
    if ((iVar7 != 0) && (iVar5 != 0)) {
      local_34 = iVar7;
      local_30 = iVar5;
      CDC::CDC(local_54);
      local_8 = 0;
      pHVar1 = (HDC)0x0;
      if (*(int *)(this + 4) != 0) {
        pHVar1 = *(HDC *)(*(int *)(this + 4) + 4);
      }
      pHVar1 = CreateCompatibleDC(pHVar1);
      iVar2 = CDC::Attach(local_54,pHVar1);
      if (iVar2 != 0) {
        local_40 = (void *)0x0;
        local_44 = CBitmap::vftable;
        local_14 = 1;
        local_8 = CONCAT31(local_8._1_3_,1);
        pHVar3 = CreateCompatibleBitmap(*(HDC *)(*(int *)(this + 4) + 4),iVar7,iVar5);
        iVar5 = CMenu::Attach((CMenu *)&local_44,(HMENU__ *)pHVar3);
        if (iVar5 != 0) {
          local_28 = CDC::SelectGdiObject(local_50,local_40);
          if (local_28 == (CGdiObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_1004886a();
          }
          local_2c = CreateBitmap_32((CSize *)&local_34,&local_20);
          if ((local_2c != (HBITMAP__ *)0x0) && (local_20 != (uint *)0x0)) {
            SelectObject(local_50,local_2c);
            iVar7 = local_34;
            local_1c = 0;
            local_18 = local_34;
            iVar5 = local_30;
            puVar6 = local_20;
            if (param_3 != 0xffffffff) {
              uVar4 = ((param_3 & 0xff | 0xffffff00) << 8 | param_3 >> 8 & 0xff) << 8 |
                      param_3 >> 0x10 & 0xff;
              iVar5 = local_34;
              if (0 < local_34) {
                for (; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *puVar6 = uVar4;
                  puVar6 = puVar6 + 1;
                }
                puVar6 = local_20 + local_34;
              }
              if ((1 < local_30) &&
                 (FUN_10181570(puVar6 + (local_30 + -2) * local_34,puVar6 + -local_34,local_34 * 4),
                 2 < local_30)) {
                *puVar6 = uVar4;
                if (1 < iVar7) {
                  puVar6[iVar7 + -1] = uVar4;
                }
                puVar6 = puVar6 + 1;
              }
              local_18 = iVar7 + -1;
              local_1c = 1;
              iVar5 = local_30 + -1;
              local_14 = 2;
            }
            local_20 = (uint *)(-(uint)(param_2 != 0xffffffff) &
                               (((param_2 & 0xff | 0xffffff00) << 8 | param_2 >> 8 & 0xff) << 8 |
                               param_2 >> 0x10 & 0xff));
            if (local_14 <= iVar5) {
              iVar2 = iVar7;
              if (local_1c < local_18) {
                local_18 = local_18 - local_1c;
                puVar8 = puVar6;
                for (iVar7 = local_18; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *puVar8 = (uint)local_20;
                  puVar8 = puVar8 + 1;
                }
                puVar6 = puVar6 + local_18;
                iVar2 = local_34;
                if (param_3 != 0xffffffff) {
                  puVar6 = puVar6 + 1;
                }
              }
              iVar7 = iVar2;
              if (local_14 < iVar5) {
                iVar5 = iVar5 - local_14;
                local_20 = (uint *)(iVar2 * 4);
                do {
                  FUN_10181570(puVar6,puVar6 + -iVar2,(uint *)(iVar2 * 4));
                  puVar6 = puVar6 + iVar2;
                  iVar5 = iVar5 + -1;
                  iVar7 = local_34;
                } while (iVar5 != 0);
              }
            }
            if (param_2 == 0xffffffff) {
              local_3c = 0;
              local_38 = 0;
              local_34 = iVar7;
              DrawAlpha(local_24,*(CDC **)(local_24 + 4),(CRect *)&local_64,local_54,
                        (CRect *)&local_3c);
            }
            else {
              BitBlt(*(HDC *)(*(int *)(local_24 + 4) + 4),local_64,local_60,iVar7,local_30,local_50,
                     0,0,0xcc0020);
            }
            CDC::SelectGdiObject(local_50,*(void **)(local_28 + 4));
            DeleteObject(local_2c);
          }
        }
        local_44 = CBitmap::vftable;
        CImageList::~CImageList((CImageList *)&local_44);
      }
      CDC::~CDC(local_54);
    }
  }
  return;
}

