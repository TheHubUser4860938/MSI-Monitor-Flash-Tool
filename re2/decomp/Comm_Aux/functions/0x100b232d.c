// rea decompile_all
// name: CDrawingManager::FillGradient
// address: 0x100b232d
// body: available
// range: 0x100b232d-0x100b2507 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100b2415 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: void __thiscall CDrawingManager::FillGradient(class CRect,unsigned long,unsigned
   long,int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CDrawingManager::FillGradient
          (CDrawingManager *this,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
          undefined4 param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10)

{
  CDrawingManager *pCVar1;
  HDC pHVar2;
  int iVar3;
  HBITMAP pHVar4;
  uint *puVar5;
  void *pvVar6;
  int iVar7;
  undefined **local_5c;
  CDC *local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  HBITMAP__ *local_44;
  CGdiObject *local_40;
  CDC local_3c [4];
  HDC__ *local_38;
  CDrawingManager *local_2c;
  uint *local_28;
  int local_24;
  undefined **local_20;
  void *local_1c;
  uint *local_18 [4];
  undefined1 local_8;
  undefined3 uStack_7;
  undefined4 uStack_4;
  
  uStack_4 = 0x5c;
  local_8 = 0x39;
  uStack_7 = 0x100b23;
  local_2c = this;
  if (DAT_1020e40c == 0) {
    _FillGradient(this,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  }
  else {
    local_54 = param_2;
    local_50 = param_3;
    local_4c = param_4;
    local_48 = param_5;
    CRect::NormalizeRect((CRect *)&local_54);
    iVar7 = local_48 - local_50;
    local_28 = (uint *)(local_4c - local_54);
    local_24 = iVar7;
    local_18[0] = local_28;
    if ((local_28 != (uint *)0x0) && (iVar7 != 0)) {
      CDC::CDC(local_3c);
      pCVar1 = local_2c;
      pvVar6 = (void *)0x0;
      local_8 = 0;
      uStack_7 = 0;
      if (*(int *)(local_2c + 4) == 0) {
        pHVar2 = (HDC)0x0;
      }
      else {
        pHVar2 = *(HDC *)(*(int *)(local_2c + 4) + 4);
      }
      pHVar2 = CreateCompatibleDC(pHVar2);
      iVar3 = CDC::Attach(local_3c,pHVar2);
      if (iVar3 != 0) {
        local_1c = (void *)0x0;
        local_20 = CBitmap::vftable;
        local_8 = 1;
        pHVar4 = CreateCompatibleBitmap(*(HDC *)(*(int *)(pCVar1 + 4) + 4),(int)local_18[0],iVar7);
        iVar7 = CMenu::Attach((CMenu *)&local_20,(HMENU__ *)pHVar4);
        if (iVar7 != 0) {
          local_40 = CDC::SelectGdiObject(local_38,local_1c);
          if (local_40 == (CGdiObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_1004886a();
          }
          local_44 = CreateBitmap_32((CSize *)&local_28,local_18);
          if ((local_44 != (HBITMAP__ *)0x0) && (local_18[0] != (uint *)0x0)) {
            SelectObject(local_38,local_44);
            local_58 = local_3c;
            local_5c = vftable;
            local_8 = 2;
            _FillGradient((CDrawingManager *)&local_5c,0,0,local_28,local_24,param_6,param_7,param_8
                          ,param_9,param_10);
            iVar7 = local_24 * (int)local_28;
            puVar5 = local_18[0];
            if (0 < iVar7) {
              do {
                *puVar5 = *puVar5 | 0xff000000;
                iVar7 = iVar7 + -1;
                puVar5 = puVar5 + 1;
              } while (iVar7 != 0);
            }
            BitBlt(*(HDC *)(*(int *)(local_2c + 4) + 4),local_54,local_50,(int)local_28,local_24,
                   local_38,0,0,0xcc0020);
            if (local_40 != (CGdiObject *)0x0) {
              pvVar6 = *(void **)(local_40 + 4);
            }
            CDC::SelectGdiObject(local_38,pvVar6);
            DeleteObject(local_44);
          }
        }
        local_20 = CBitmap::vftable;
        CImageList::~CImageList((CImageList *)&local_20);
      }
      CDC::~CDC(local_3c);
    }
  }
  FUN_1017f5f4();
  return;
}

