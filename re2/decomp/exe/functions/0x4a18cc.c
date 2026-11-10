// rea decompile_all
// name: FUN_004a18cc
// address: 0x4a18cc
// body: available
// range: 0x4a18cc-0x4a1f3c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a18cc(void)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  AFX_GLOBAL_DATA *pAVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  COLORREF color;
  HBRUSH pHVar9;
  HPEN pHVar10;
  int *in_ECX;
  undefined4 unaff_EBX;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 local_3c [8];
  double local_34;
  double local_2c;
  uint local_24;
  uint local_20;
  COLORREF local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  guard_check_icall();
  CGdiObject::DeleteObject((CGdiObject *)(in_ECX + 0x3f));
  CGdiObject::DeleteObject((CGdiObject *)(in_ECX + 0x41));
  CGdiObject::DeleteObject((CGdiObject *)(in_ECX + 0x43));
  CGdiObject::DeleteObject((CGdiObject *)(in_ECX + 0x47));
  CGdiObject::DeleteObject((CGdiObject *)(in_ECX + 0x49));
  CGdiObject::DeleteObject((CGdiObject *)(in_ECX + 0x4b));
  CGdiObject::DeleteObject((CGdiObject *)(in_ECX + 0x4d));
  CGdiObject::DeleteObject((CGdiObject *)(in_ECX + 0x4f));
  CGdiObject::DeleteObject((CGdiObject *)(in_ECX + 0x45));
  pAVar5 = GetGlobalData();
  if (8 < *(int *)(pAVar5 + 0x1ac)) {
    pAVar5 = GetGlobalData();
    iVar6 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar5);
    if (iVar6 == 0) {
      pcVar1 = *(code **)(*in_ECX + 0x310);
      guard_check_icall();
      uVar7 = (*pcVar1)();
      pAVar5 = GetGlobalData();
      local_20 = uVar7 >> 0x10 & 0xff;
      uVar11 = *(uint *)(pAVar5 + 0x54);
      local_8 = uVar11 >> 0x10 & 0xff;
      local_10 = uVar7 >> 8 & 0xff;
      local_c = uVar11 >> 8 & 0xff;
      local_14 = uVar11 & 0xff;
      local_24 = uVar7 & 0xff;
      in_ECX[0x30] = (((local_20 * 0xdb + local_8 * 0x24) / 0xff & 0xff) << 8 |
                     (local_10 * 0xdb + local_c * 0x24) / 0xff & 0xff) << 8 |
                     (local_24 * 0xdb + local_14 * 0x24) / 0xff & 0xff;
      local_18 = uVar11;
      FUN_004659f1(uVar11,local_3c,&local_34,&local_2c);
      if (0.1 <= local_34) {
        dVar4 = local_2c * 0.5 + 0.5;
        if (1.0 < dVar4) {
          dVar4 = 1.0;
        }
        dVar2 = 1.0;
        dVar3 = local_34 + local_34;
        if (1.0 < dVar3) {
LAB_004a1a83:
          dVar3 = dVar2;
        }
      }
      else {
        dVar4 = (1.0 - local_2c) * 0.5 + local_2c;
        if (1.0 < dVar4) {
          dVar4 = 1.0;
        }
        dVar3 = 0.0;
        if (local_34 != 0.0) {
          dVar2 = local_34 + 0.1;
          dVar3 = 1.0;
          if (dVar2 <= 1.0) goto LAB_004a1a83;
        }
      }
      local_1c = FUN_004649d1(local_3c._0_4_,local_3c._4_4_,SUB84(dVar4,0),
                              (int)((ulonglong)dVar4 >> 0x20),SUB84(dVar3,0),
                              (int)((ulonglong)dVar3 >> 0x20));
      uVar7 = (((local_8 * 0xd7 + local_20 * 0x28) / 0xff & 0xff) << 8 |
              (local_c * 0xd7 + local_10 * 0x28) / 0xff & 0xff) << 8 |
              (local_14 * 0xd7 + local_24 * 0x28) / 0xff & 0xff;
      in_ECX[0x2e] = uVar7;
      uVar8 = CDrawingManager::PixelAlpha(uVar7,0x5e);
      in_ECX[0x2f] = uVar8;
      uVar8 = CDrawingManager::PixelAlpha(uVar11,0x37);
      in_ECX[0x31] = uVar8;
      pAVar5 = GetGlobalData();
      uVar11 = *(uint *)(pAVar5 + 0x3c);
      FUN_004659f1(uVar11,local_3c,&local_34,&local_2c);
      uVar7 = uVar11 >> 8 & 0xff;
      local_20 = uVar11 >> 0x10 & 0xff;
      local_14 = uVar11 & 0xff;
      uVar11 = ((((uint)*(byte *)((int)in_ECX + 0xc2) * 0xb2 + local_20 * 0x4d) / 0xff & 0xff) << 8
               | ((uint)*(byte *)((int)in_ECX + 0xc1) * 0xb2 + uVar7 * 0x4d) / 0xff & 0xff) << 8 |
               ((uint)*(byte *)(in_ECX + 0x30) * 0xb2 + local_14 * 0x4d) / 0xff & 0xff;
      local_24 = uVar7;
      if (local_2c <= 0.8) {
        uVar8 = CDrawingManager::PixelAlpha(uVar11,0x66);
        in_ECX[0x32] = uVar8;
        uVar8 = CDrawingManager::PixelAlpha(uVar8,0x57);
        in_ECX[0x33] = uVar8;
        pAVar5 = GetGlobalData();
        uVar8 = *(ulong *)(pAVar5 + 0x3c);
      }
      else {
        uVar8 = CDrawingManager::PixelAlpha(uVar11,0x5b);
        in_ECX[0x32] = uVar8;
        uVar8 = CDrawingManager::PixelAlpha(uVar11,0x62);
        iVar6 = 0x54;
        in_ECX[0x33] = uVar8;
        pAVar5 = GetGlobalData();
        uVar8 = CDrawingManager::PixelAlpha(*(ulong *)(pAVar5 + 0x3c),iVar6);
      }
      in_ECX[0x3a] = uVar8;
      uVar8 = CDrawingManager::PixelAlpha
                        (((((uint)*(byte *)((int)in_ECX + 0xc2) * 5 + local_20) / 6 & 0xff) << 8 |
                         ((uint)*(byte *)((int)in_ECX + 0xc1) * 5 + uVar7) / 6 & 0xff) << 8 |
                         ((uint)*(byte *)(in_ECX + 0x30) * 5 + local_14) / 6 & 0xff,100);
      in_ECX[0x34] = uVar8;
      uVar15 = 0xb851eb85;
      uVar16 = 0x3feb851e;
      uVar13 = 0xb851eb85;
      uVar14 = 0x3feb851e;
      uVar12 = 0x3feb851e;
      pAVar5 = GetGlobalData();
      uVar8 = CDrawingManager::PixelAlpha
                        (*(ulong *)(pAVar5 + 0x54),(double)CONCAT44(uVar13,uVar12),
                         (double)CONCAT44(uVar15,uVar14),(double)CONCAT44(unaff_EBX,uVar16));
      in_ECX[0x37] = uVar8;
      pAVar5 = GetGlobalData();
      in_ECX[0x38] = *(int *)(pAVar5 + 0x58);
      uVar8 = CDrawingManager::PixelAlpha(local_18,0x37);
      in_ECX[0x39] = uVar8;
      uVar15 = 0x33333333;
      uVar16 = 0x3feb3333;
      uVar13 = 0x33333333;
      uVar14 = 0x3feb3333;
      uVar12 = 0x3feb3333;
      pAVar5 = GetGlobalData();
      color = CDrawingManager::PixelAlpha
                        (*(ulong *)(pAVar5 + 0x58),(double)CONCAT44(uVar13,uVar12),
                         (double)CONCAT44(uVar15,uVar14),(double)CONCAT44(unaff_EBX,uVar16));
      iVar6 = 0x6e;
      pAVar5 = GetGlobalData();
      uVar8 = CDrawingManager::PixelAlpha(*(ulong *)(pAVar5 + 0x58),iVar6);
      in_ECX[0x36] = uVar8;
      goto LAB_004a1e37;
    }
  }
  pAVar5 = GetGlobalData();
  in_ECX[0x30] = *(int *)(pAVar5 + 0x6c);
  pAVar5 = GetGlobalData();
  in_ECX[0x2e] = *(int *)(pAVar5 + 0x1c);
  pAVar5 = GetGlobalData();
  if (*(int *)(pAVar5 + 0x184) == 0) {
    pAVar5 = GetGlobalData();
    iVar6 = *(int *)(pAVar5 + 0x1c);
    in_ECX[0x32] = iVar6;
    in_ECX[0x33] = iVar6;
    pAVar5 = GetGlobalData();
    in_ECX[0x34] = *(int *)(pAVar5 + 0x6c);
    pAVar5 = GetGlobalData();
    iVar6 = *(int *)(pAVar5 + 100);
  }
  else {
    pAVar5 = GetGlobalData();
    iVar6 = *(int *)(pAVar5 + 0x3c);
    in_ECX[0x32] = iVar6;
    in_ECX[0x33] = iVar6;
    in_ECX[0x34] = iVar6;
    pAVar5 = GetGlobalData();
    iVar6 = *(int *)(pAVar5 + 0x1c);
  }
  in_ECX[0x2f] = iVar6;
  pAVar5 = GetGlobalData();
  local_1c = *(COLORREF *)(pAVar5 + 0x1c);
  pAVar5 = GetGlobalData();
  in_ECX[0x31] = *(int *)(pAVar5 + 0x30);
  pAVar5 = GetGlobalData();
  in_ECX[0x37] = *(int *)(pAVar5 + 0x20);
  pAVar5 = GetGlobalData();
  in_ECX[0x36] = *(int *)(pAVar5 + 0x20);
  pAVar5 = GetGlobalData();
  in_ECX[0x38] = *(int *)(pAVar5 + 0x20);
  pAVar5 = GetGlobalData();
  in_ECX[0x39] = *(int *)(pAVar5 + 0x30);
  pAVar5 = GetGlobalData();
  color = *(COLORREF *)(pAVar5 + 0x20);
  pAVar5 = GetGlobalData();
  iVar6 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar5);
  if (iVar6 == 0) {
    pAVar5 = GetGlobalData();
    iVar6 = *(int *)(pAVar5 + 0x3c);
  }
  else {
    pAVar5 = GetGlobalData();
    iVar6 = *(int *)(pAVar5 + 0x30);
  }
  in_ECX[0x3a] = iVar6;
LAB_004a1e37:
  pHVar9 = CreateSolidBrush(in_ECX[0x2e]);
  CMenu::Attach((CMenu *)(in_ECX + 0x3f),(HMENU__ *)pHVar9);
  pHVar9 = CreateSolidBrush(in_ECX[0x2f]);
  CMenu::Attach((CMenu *)(in_ECX + 0x41),(HMENU__ *)pHVar9);
  pHVar9 = CreateSolidBrush(in_ECX[0x30]);
  CMenu::Attach((CMenu *)(in_ECX + 0x43),(HMENU__ *)pHVar9);
  pHVar9 = CreateSolidBrush(in_ECX[0x32]);
  CMenu::Attach((CMenu *)(in_ECX + 0x47),(HMENU__ *)pHVar9);
  pHVar9 = CreateSolidBrush(in_ECX[0x33]);
  CMenu::Attach((CMenu *)(in_ECX + 0x49),(HMENU__ *)pHVar9);
  pHVar9 = CreateSolidBrush(in_ECX[0x34]);
  CMenu::Attach((CMenu *)(in_ECX + 0x4b),(HMENU__ *)pHVar9);
  pHVar9 = CreateSolidBrush(local_1c);
  CMenu::Attach((CMenu *)(in_ECX + 0x45),(HMENU__ *)pHVar9);
  pHVar10 = CreatePen(0,1,in_ECX[0x37]);
  CMenu::Attach((CMenu *)(in_ECX + 0x4f),(HMENU__ *)pHVar10);
  pHVar9 = CreateSolidBrush(color);
  CMenu::Attach((CMenu *)(in_ECX + 0x4d),(HMENU__ *)pHVar9);
  in_ECX[0x35] = -1;
  CGdiObject::DeleteObject((CGdiObject *)(in_ECX + 0x51));
  pHVar10 = CreatePen(0,1,in_ECX[0x3a]);
  CMenu::Attach((CMenu *)(in_ECX + 0x51),(HMENU__ *)pHVar10);
  return;
}

