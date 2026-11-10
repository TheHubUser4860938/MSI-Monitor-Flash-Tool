// rea decompile_all
// name: FUN_10173d2d
// address: 0x10173d2d
// body: available
// range: 0x10173d2d-0x10173f81 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_10173d2d(void)

{
  int iVar1;
  CCellObj *pCVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  CMFCColorPickerCtrl *in_ECX;
  int iVar9;
  float10 extraout_ST0;
  float10 extraout_ST1;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  int local_4c;
  int local_40;
  int local_3c;
  int local_38;
  int local_2c;
  int local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x58;
  local_8 = 0x10173d39;
  if (*(int *)(in_ECX + 0xc0) == 0) {
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    GetClientRect(*(HWND *)(in_ECX + 0x20),&local_24);
    if (local_24.bottom - local_24.top < local_24.right - local_24.left) {
      iVar13 = 0;
      iVar1 = -((((local_24.top - local_24.bottom) - local_24.left) + local_24.right) / 2);
    }
    else {
      iVar13 = -((((local_24.bottom - local_24.top) - local_24.right) + local_24.left) / 2);
      iVar1 = 0;
    }
    InflateRect(&local_24,iVar1,iVar13);
    iVar1 = (local_24.bottom - local_24.top) / 0xd + 1;
    iVar13 = (local_24.right + local_24.left) / 2;
    iVar9 = (local_24.bottom + local_24.top) / 2;
    pCVar2 = (CCellObj *)FUN_100491ae(0x48);
    local_8 = 0;
    if (pCVar2 == (CCellObj *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = CCellObj::CCellObj(pCVar2,*(CPalette **)(in_ECX + 0xac),0xffffff,iVar13,iVar9,iVar1,0)
      ;
    }
    local_8 = 0xffffffff;
    FUN_1016326a(*(undefined4 *)(in_ECX + 0xc0),uVar3);
    local_3c = 1;
    local_40 = 6;
    iVar4 = iVar13;
    do {
      iVar4 = iVar4 + iVar1;
      local_38 = 0;
      local_2c = iVar4;
      local_28 = iVar9;
      do {
        iVar5 = FUN_101804f0();
        iVar6 = FUN_101804f0();
        if (local_40 < 7) {
          local_4c = local_3c;
          do {
            iVar7 = CMFCColorPickerCtrl::GetAngleFromPoint
                              (in_ECX,local_2c - iVar13,local_28 - iVar9);
            pCVar2 = (CCellObj *)FUN_100491ae(0x48);
            local_8 = 1;
            if (pCVar2 == (CCellObj *)0x0) {
              uVar3 = 0;
            }
            else {
              lVar14 = 0x10;
              iVar10 = local_2c;
              iVar11 = local_28;
              iVar12 = iVar1;
              uVar8 = FUN_100b376a((double)iVar7,
                                   (double)(extraout_ST0 + (float10)local_40 / extraout_ST1),
                                   0x3ff0000000000000);
              uVar3 = CCellObj::CCellObj(pCVar2,*(CPalette **)(in_ECX + 0xac),uVar8,iVar10,iVar11,
                                         iVar12,lVar14);
            }
            local_8 = 0xffffffff;
            FUN_1016326a(*(undefined4 *)(in_ECX + 0xc0),uVar3);
            local_2c = local_2c + iVar5;
            local_28 = local_28 + iVar6;
            local_4c = local_4c + -1;
          } while (local_4c != 0);
        }
        local_38 = local_38 + 4;
      } while (local_38 < 0x18);
      local_3c = local_3c + 1;
      local_40 = local_40 + -1;
    } while (0 < local_40);
  }
  FUN_1018015d();
  return;
}

