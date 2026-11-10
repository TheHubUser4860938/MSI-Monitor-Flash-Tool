// rea decompile_all
// name: CMFCToolBarImages::MapBmpTo3dColors
// address: 0x1005cc64
// body: available
// range: 0x1005cc64-0x1005ce38 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: static int __stdcall CMFCToolBarImages::MapBmpTo3dColors(struct HBITMAP__ *
   &,int,unsigned long,unsigned long)
   
   Library: Visual Studio 2015 Release */

int CMFCToolBarImages::MapBmpTo3dColors(HBITMAP__ **param_1,int param_2,ulong param_3,ulong param_4)

{
  COLORREF CVar1;
  HDC pHVar2;
  int iVar3;
  COLORREF color;
  int y;
  int iVar4;
  HGDIOBJ h;
  undefined1 local_60 [4];
  int local_5c;
  COLORREF local_58;
  short local_4e;
  CDC local_48 [4];
  HDC local_44;
  CDC local_38 [4];
  HDC local_34;
  HGDIOBJ local_28;
  HGDIOBJ local_24;
  COLORREF local_20;
  HBITMAP local_1c;
  int local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x50;
  local_8 = 0x1005cc70;
  iVar4 = 0;
  if ((*param_1 == (HBITMAP__ *)0x0) || ((param_3 != 0xffffffff && (param_4 == 0xffffffff)))) {
    iVar4 = 0;
  }
  else {
    CDC::CDC(local_38);
    local_8 = 0;
    pHVar2 = CreateCompatibleDC((HDC)0x0);
    CDC::Attach(local_38,pHVar2);
    iVar3 = GetObjectW(*param_1,0x18,local_60);
    if (iVar3 != 0) {
      if (*param_1 == (HBITMAP__ *)0x0) {
        local_24 = (HGDIOBJ)0x0;
      }
      else {
        local_24 = SelectObject(local_34,*param_1);
      }
      h = local_24;
      if (local_24 != (HGDIOBJ)0x0) {
        local_14 = local_5c;
        local_20 = local_58;
        local_1c = CreateCompatibleBitmap(local_34,local_5c,local_58);
        if (local_1c == (HBITMAP)0x0) {
          SelectObject(local_34,h);
        }
        else {
          CDC::CDC(local_48);
          local_8 = CONCAT31(local_8._1_3_,1);
          pHVar2 = CreateCompatibleDC(local_34);
          CDC::Attach(local_48,pHVar2);
          local_28 = SelectObject(local_44,local_1c);
          if (local_28 == (HGDIOBJ)0x0) {
            SelectObject(local_34,h);
            DeleteObject(local_1c);
          }
          else {
            BitBlt(local_44,0,0,local_14,local_20,local_34,0,0,0xcc0020);
            CVar1 = local_20;
            local_18 = 0;
            iVar4 = local_14;
            if (0 < local_14) {
              do {
                iVar3 = local_18;
                y = 0;
                if (0 < (int)CVar1) {
                  do {
                    local_20 = GetPixel(local_44,iVar3,y);
                    if (param_3 == 0xffffffff) {
                      if ((local_4e == 0x18) && (DAT_10201530 == 0)) {
                        color = FUN_1005cf64(local_20);
                      }
                      else {
                        color = MapToSysColor(local_20,param_2);
                      }
                      if (local_20 != color) goto LAB_1005cdd3;
                    }
                    else {
                      color = param_4;
                      if (local_20 == param_3) {
LAB_1005cdd3:
                        SetPixel(local_44,iVar3,y,color);
                      }
                    }
                    y = y + 1;
                    iVar4 = local_14;
                  } while (y < (int)CVar1);
                }
                local_18 = local_18 + 1;
                h = local_24;
              } while (local_18 < iVar4);
            }
            SelectObject(local_44,local_28);
            SelectObject(local_34,h);
            DeleteObject(*param_1);
            *param_1 = local_1c;
            iVar4 = 1;
          }
          CDC::~CDC(local_48);
        }
      }
    }
    CDC::~CDC(local_38);
  }
  return iVar4;
}

