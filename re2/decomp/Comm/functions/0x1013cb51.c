// rea decompile_all
// name: CMFCColorPickerCtrl::CreateHexGreyScaleBar
// address: 0x1013cb51
// body: available
// range: 0x1013cb51-0x1013cd9e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCColorPickerCtrl::CreateHexGreyScaleBar(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCColorPickerCtrl::CreateHexGreyScaleBar(CMFCColorPickerCtrl *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  CCellObj *pCVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  int local_44;
  uint local_40;
  int local_38;
  int local_30;
  int local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x4c;
  local_8 = 0x1013cb5d;
  if (*(int *)(this + 0xc0) == 0) {
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_24);
    uVar7 = (local_24.bottom - local_24.top) / 2 - 2;
    uVar1 = (local_24.right - local_24.left) / 0xd;
    if ((int)uVar1 <= (int)uVar7) {
      uVar7 = uVar1;
    }
    if ((uVar7 & 1) != 0) {
      uVar7 = uVar7 + 1;
    }
    iVar8 = (local_24.bottom + local_24.top) / 2;
    iVar2 = FUN_10149490();
    iVar9 = iVar8 - iVar2 / 2;
    local_38 = local_24.left;
    local_28 = 0;
    iVar3 = (int)uVar7 / 2;
    do {
      if (local_28 == 1) {
        pCVar4 = (CCellObj *)FUN_10011f7d(0x48);
        local_8 = 0;
        if (pCVar4 == (CCellObj *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = CCellObj::CCellObj(pCVar4,*(CPalette **)(this + 0xac),0xffffff,
                                     (int)(uVar7 * 2) / 2 + local_38,iVar8,uVar7 * 2,0);
        }
        local_8 = 0xffffffff;
        FUN_10032849(*(undefined4 *)(this + 0xc0),uVar5);
      }
      iVar6 = uVar7 * 3 + local_38;
      local_40 = 0xf0;
      local_44 = 0xf;
      local_30 = iVar9;
      do {
        uVar1 = local_40 & 0xff;
        if (local_28 == 1) {
          pCVar4 = (CCellObj *)FUN_10011f7d(0x48);
          local_8 = 1;
          if (pCVar4 == (CCellObj *)0x0) {
            uVar5 = 0;
          }
          else {
            uVar5 = CCellObj::CCellObj(pCVar4,*(CPalette **)(this + 0xac),
                                       (uVar1 << 8 | uVar1) << 8 | uVar1,iVar6,local_30,uVar7,7);
          }
          local_8 = 0xffffffff;
          FUN_10032849(*(undefined4 *)(this + 0xc0),uVar5);
        }
        iVar6 = iVar6 + iVar3;
        bVar10 = local_30 == iVar9;
        local_30 = iVar9;
        if (bVar10) {
          local_30 = iVar9 + iVar2;
        }
        local_40 = local_40 - 0xf;
        local_44 = local_44 + -1;
      } while (local_44 != 0);
      if (local_28 == 1) {
        pCVar4 = (CCellObj *)FUN_10011f7d(0x48);
        local_8 = 2;
        if (pCVar4 == (CCellObj *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = CCellObj::CCellObj(pCVar4,*(CPalette **)(this + 0xac),0,iVar3 + -1 + iVar6 + uVar7
                                     ,iVar8,uVar7 * 2,0);
        }
        local_8 = 0xffffffff;
        FUN_10032849(*(undefined4 *)(this + 0xc0),uVar5);
      }
      if (local_28 == 0) {
        local_38 = (int)(((local_24.right - iVar3) - iVar6) + uVar7 * -2) / 2;
      }
      local_28 = local_28 + 1;
    } while (local_28 < 2);
  }
  FUN_101490fe();
  return;
}

