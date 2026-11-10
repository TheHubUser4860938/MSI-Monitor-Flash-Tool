// rea decompile_all
// name: CMFCToolBarImages::UpdateInternalImage
// address: 0x44f3cd
// body: available
// range: 0x44f3cd-0x44f6c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: int __thiscall CMFCToolBarImages::UpdateInternalImage(int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCToolBarImages::UpdateInternalImage(CMFCToolBarImages *this,int param_1)

{
  CMFCToolBarImages *pCVar1;
  code *pcVar2;
  int x;
  AFX_GLOBAL_DATA *pAVar3;
  HDC pHVar4;
  HBITMAP h;
  CMFCVisualManager *pCVar5;
  ulong uVar6;
  COLORREF CVar7;
  int iVar8;
  int iVar9;
  COLORREF CVar10;
  int y;
  undefined1 local_ac [4];
  int local_a8;
  int local_a4;
  undefined4 local_94;
  undefined4 local_90;
  int local_8c;
  int local_88;
  HGDIOBJ local_84;
  void *local_80;
  CDC local_7c [4];
  HDC local_78;
  CDC local_6c [4];
  HDC local_68;
  CDrawingManager local_5c [4];
  ulong local_58;
  int local_54;
  COLORREF local_50;
  HGDIOBJ local_4c;
  int local_48;
  int local_44;
  BITMAPINFO local_40;
  undefined1 local_8;
  undefined3 uStack_7;
  undefined4 uStack_4;
  
  uStack_4 = 0x9c;
  local_8 = 0xdc;
  uStack_7 = 0x44f3;
  pCVar1 = this + (uint)(param_1 != 0) * 4 + 0x90;
  if ((param_1 != 0) ||
     (((*(int *)(this + 8) < 5 || (*(int *)(this + 0x38) != 0)) && (*(int *)(this + 8) != 0)))) {
    FUN_0043b1ac(pCVar1);
    *(undefined4 *)pCVar1 = 0;
    if ((*(int *)(this + 0x8c) != 0) && (pAVar3 = GetGlobalData(), 8 < *(int *)(pAVar3 + 0x1ac))) {
      CDC::CDC(local_7c);
      local_8 = 0;
      uStack_7 = 0;
      pHVar4 = CreateCompatibleDC((HDC)0x0);
      CDC::Attach(local_7c,pHVar4);
      iVar8 = GetObjectW(*(HANDLE *)(this + 0x8c),0x18,local_ac);
      if (iVar8 != 0) {
        local_48 = local_a8;
        local_44 = local_a4;
        if (*(HGDIOBJ *)(this + 0x8c) == (HGDIOBJ)0x0) {
          local_4c = (HGDIOBJ)0x0;
        }
        else {
          local_4c = SelectObject(local_78,*(HGDIOBJ *)(this + 0x8c));
        }
        if (local_4c != (HGDIOBJ)0x0) {
          CDC::CDC(local_6c);
          local_8 = 1;
          pHVar4 = CreateCompatibleDC(local_78);
          CDC::Attach(local_6c,pHVar4);
          local_40.bmiHeader.biHeight = local_44;
          local_40.bmiHeader.biSizeImage = local_44 * local_48;
          local_40.bmiHeader.biPlanes = 1;
          local_40.bmiHeader.biSize = 0x28;
          local_40.bmiHeader.biWidth = local_48;
          local_40.bmiHeader.biBitCount = 0x20;
          local_40.bmiHeader.biCompression = 0;
          local_40.bmiHeader.biXPelsPerMeter = 0;
          local_40.bmiHeader.biYPelsPerMeter = 0;
          local_40.bmiHeader.biClrUsed = 0;
          local_40.bmiHeader.biClrImportant = 0;
          local_80 = (void *)0x0;
          h = CreateDIBSection(local_68,&local_40,0,&local_80,(HANDLE)0x0,0);
          *(HBITMAP *)pCVar1 = h;
          if (h == (HBITMAP)0x0) {
            SelectObject(local_78,local_4c);
          }
          else {
            local_84 = SelectObject(local_68,h);
            if (local_84 == (HGDIOBJ)0x0) {
              SelectObject(local_78,local_4c);
              DeleteObject(*(HGDIOBJ *)pCVar1);
              *(undefined4 *)pCVar1 = 0;
            }
            else {
              if (*(int *)(this + 8) == 0x20) {
                CVar10 = 0xffffffff;
              }
              else {
                CVar10 = *(COLORREF *)(this + 0xa8);
              }
              local_50 = CVar10;
              BitBlt(local_68,0,0,local_48,local_44,local_78,0,0,0xcc0020);
              if (param_1 == 0) {
                CDrawingManager::CDrawingManager(local_5c,local_6c);
                local_8 = 2;
                if (CVar10 == 0xffffffff) {
                  pAVar3 = GetGlobalData();
                  CVar10 = *(COLORREF *)(pAVar3 + 0x1c);
                }
                local_8c = local_48;
                local_88 = local_44;
                local_94 = 0;
                local_90 = 0;
                FUN_00464ce2(0,0,local_48,local_44,*(undefined4 *)(this + 0x10),CVar10,0,0xffffffff)
                ;
                FUN_00461ef9();
              }
              else {
                if (CVar10 == 0xffffffff) {
                  pAVar3 = GetGlobalData();
                  local_50 = *(COLORREF *)(pAVar3 + 0x1c);
                }
                pCVar5 = CMFCVisualManager::GetInstance();
                pcVar2 = *(code **)(*(int *)pCVar5 + 0xc0);
                guard_check_icall();
                uVar6 = (*pcVar2)();
                pAVar3 = GetGlobalData();
                if (*(int *)(pAVar3 + 0x1ac) < 9) {
                  pAVar3 = GetGlobalData();
                  local_58 = *(ulong *)(pAVar3 + 0x20);
                }
                else {
                  local_58 = CDrawingManager::PixelAlpha(uVar6,0x43);
                }
                CVar10 = local_50;
                local_54 = 0;
                iVar8 = local_48;
                iVar9 = local_44;
                if (0 < local_48) {
                  do {
                    x = local_54;
                    y = 0;
                    if (0 < iVar9) {
                      do {
                        CVar7 = GetPixel(local_68,x,y);
                        if (CVar7 != CVar10) {
                          SetPixel(local_68,x,y,local_58);
                        }
                        y = y + 1;
                        iVar8 = local_48;
                        iVar9 = local_44;
                      } while (y < local_44);
                    }
                    local_54 = local_54 + 1;
                  } while (local_54 < iVar8);
                }
              }
              SelectObject(local_68,local_84);
              SelectObject(local_78,local_4c);
            }
          }
          CDC::~CDC(local_6c);
        }
      }
      CDC::~CDC(local_7c);
    }
  }
  iVar8 = FUN_0055bae6();
  return iVar8;
}

