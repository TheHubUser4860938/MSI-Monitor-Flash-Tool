// rea decompile_all
// name: CDrawingManager::DrawLine
// address: 0x463594
// body: available
// range: 0x463594-0x4637ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4636b0 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CDrawingManager::DrawLine(int,int,int,int,unsigned long)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CDrawingManager::DrawLine
          (CDrawingManager *this,int param_1,int param_2,int param_3,int param_4,ulong param_5)

{
  long lVar1;
  HDC pHVar2;
  int iVar3;
  HBITMAP pHVar4;
  long lVar5;
  int iVar6;
  int cx;
  uint uVar7;
  CDC local_74 [4];
  HDC__ *local_70;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  undefined **local_44;
  void *local_40;
  HBITMAP__ *local_3c;
  CGdiObject *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  long local_24;
  CDrawingManager *local_20;
  void *local_1c;
  long local_18;
  undefined1 local_11;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 100;
  local_8 = 0x4635a0;
  if (param_5 != 0xffffffff) {
    local_20 = this;
    local_18 = _labs(param_3 - param_1);
    local_24 = _labs(param_4 - param_2);
    local_2c = sign(param_3 - param_1);
    local_28 = sign(param_4 - param_2);
    if ((local_18 != 0) || (local_24 != 0)) {
      local_60 = param_2;
      local_5c = param_3;
      local_64 = param_1;
      local_58 = param_4;
      CRect::NormalizeRect((CRect *)&local_64);
      local_5c = local_5c + 1;
      local_58 = local_58 + 1;
      iVar6 = local_58 - local_60;
      cx = local_5c - local_64;
      if ((cx != 0) && (iVar6 != 0)) {
        local_4c = cx;
        local_48 = iVar6;
        CDC::CDC(local_74);
        local_8 = 0;
        pHVar2 = (HDC)0x0;
        if (*(int *)(local_20 + 4) != 0) {
          pHVar2 = *(HDC *)(*(int *)(local_20 + 4) + 4);
        }
        pHVar2 = CreateCompatibleDC(pHVar2);
        iVar3 = CDC::Attach(local_74,pHVar2);
        if (iVar3 != 0) {
          local_40 = (void *)0x0;
          local_44 = CBitmap::vftable;
          local_30 = 1;
          local_8 = CONCAT31(local_8._1_3_,1);
          pHVar4 = CreateCompatibleBitmap(*(HDC *)(*(int *)(local_20 + 4) + 4),cx,iVar6);
          iVar6 = CMenu::Attach((CMenu *)&local_44,(HMENU__ *)pHVar4);
          if (iVar6 != 0) {
            local_38 = CDC::SelectGdiObject(local_70,local_40);
            if (local_38 == (CGdiObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00429127();
            }
            local_3c = CreateBitmap_32((CSize *)&local_4c,&local_1c);
            if ((local_3c != (HBITMAP__ *)0x0) && (local_1c != (void *)0x0)) {
              SelectObject(local_70,local_3c);
              lVar1 = local_18;
              local_11 = local_18 < local_24;
              lVar5 = local_24;
              if ((bool)local_11) {
                local_18 = local_24;
                lVar5 = lVar1;
              }
              local_34 = lVar5 * 2;
              iVar6 = -local_18;
              uVar7 = ((param_5 & 0xff | 0xffffff00) << 8 | param_5 >> 8 & 0xff) << 8 |
                      param_5 >> 0x10 & 0xff;
              do {
                iVar6 = local_34 + iVar6;
                *(uint *)((int)local_1c +
                         ((((local_60 - param_2) + local_48 + -1) * local_4c - local_64) + param_1)
                         * 4) = uVar7;
                if (-1 < iVar6) {
                  local_24 = local_18 * 2;
                  do {
                    if ((bool)local_11) {
                      param_1 = param_1 + local_2c;
                    }
                    else {
                      param_2 = param_2 + local_28;
                    }
                    iVar6 = iVar6 + local_18 * -2;
                  } while (-1 < iVar6);
                }
                if ((bool)local_11) {
                  param_2 = param_2 + local_28;
                }
                else {
                  param_1 = param_1 + local_2c;
                }
                local_30 = local_30 + 1;
              } while (local_30 <= local_18);
              local_54 = 0;
              local_50 = 0;
              *(uint *)((int)local_1c +
                       ((((local_60 - param_2) + -1 + local_48) * local_4c - local_64) + param_1) *
                       4) = uVar7;
              DrawAlpha(local_20,*(CDC **)(local_20 + 4),(CRect *)&local_64,local_74,
                        (CRect *)&local_54);
              CDC::SelectGdiObject(local_70,*(void **)(local_38 + 4));
              DeleteObject(local_3c);
            }
          }
          local_44 = CBitmap::vftable;
          FUN_0040ee80();
        }
        CDC::~CDC(local_74);
      }
    }
  }
  return;
}

