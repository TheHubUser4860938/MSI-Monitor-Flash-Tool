// rea decompile_all
// name: FUN_100854cb
// address: 0x100854cb
// body: available
// range: 0x100854cb-0x100859fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_100854cb(undefined4 param_1,undefined4 param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  undefined4 uVar6;
  HDC pHVar7;
  HBITMAP h;
  AFX_GLOBAL_DATA *pAVar8;
  COLORREF color;
  int iVar9;
  int in_ECX;
  int y;
  undefined1 *puVar10;
  HGDIOBJ h_00;
  int iVar11;
  undefined1 local_128 [4];
  int local_124;
  int local_120;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  CDC local_c0 [4];
  HDC local_bc;
  double local_b0;
  undefined4 local_a8;
  HGDIOBJ pvStack_a4;
  undefined4 local_a0;
  HBITMAP pHStack_9c;
  undefined4 local_98;
  int iStack_94;
  CDC local_90 [4];
  HDC local_8c;
  undefined4 local_80;
  int iStack_7c;
  HGDIOBJ local_78;
  COLORREF local_74;
  COLORREF local_70;
  int local_6c;
  undefined1 local_68 [4];
  int local_64;
  int local_60;
  short local_56;
  int local_54;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x118;
  local_8 = 0x100854da;
  iStack_94 = in_ECX;
  FUN_100b467d(param_1,&local_e0,&local_100,&local_f0);
  FUN_100b467d(param_2,&local_b0,&local_f8,&local_e8);
  local_c8 = local_b0 - local_e0;
  local_d8 = local_e8 - local_f0;
  local_d0 = local_f8 - local_100;
  if (*(int *)(in_ECX + 8) == 0x20) {
    iVar5 = GetObjectW(*(HANDLE *)(in_ECX + 0x8c),0x54,local_68);
    if ((((iVar5 != 0) && (local_56 == 0x20)) && (local_54 != 0)) &&
       (iVar5 = 0, 0 < local_60 * local_64)) {
      puVar10 = (undefined1 *)(local_54 + 2);
      iVar11 = local_60;
      iVar9 = local_64;
      do {
        if (puVar10[1] != '\0') {
          FUN_100b467d((uint)CONCAT21(CONCAT11(puVar10[-2],puVar10[-1]),*puVar10),&local_a8,
                       &local_a0,&local_98);
          dVar1 = (double)CONCAT44(pvStack_a4,local_a8) + local_c8;
          dVar2 = 0.0;
          if (((1.0 < dVar1) || (0.0 <= dVar1)) && (dVar2 = dVar1, 1.0 < dVar1)) {
            dVar2 = 1.0;
          }
          dVar1 = 0.0;
          dVar4 = (double)CONCAT44(pHStack_9c,local_a0) + local_d0;
          if (((1.0 < dVar4) || (dVar3 = dVar1, 0.0 <= dVar4)) && (dVar3 = dVar4, 1.0 < dVar4)) {
            dVar3 = 1.0;
          }
          dVar4 = (double)CONCAT44(iStack_94,local_98) + local_d8;
          if (((1.0 < dVar4) || (0.0 <= dVar4)) && (dVar1 = dVar4, 1.0 < dVar4)) {
            dVar1 = 1.0;
          }
          if (0.5 < local_b0) {
            dVar1 = (double)CONCAT44(iStack_94,local_98);
          }
          uVar6 = FUN_100b365d(dVar2,dVar1,dVar3);
          *puVar10 = (char)uVar6;
          puVar10[-1] = (char)((uint)uVar6 >> 8);
          puVar10[-2] = (char)((uint)uVar6 >> 0x10);
          iVar11 = local_60;
          iVar9 = local_64;
        }
        iVar5 = iVar5 + 1;
        puVar10 = puVar10 + 4;
      } while (iVar5 < iVar11 * iVar9);
    }
  }
  else {
    CDC::CDC(local_90);
    local_8 = 0;
    pHVar7 = CreateCompatibleDC((HDC)0x0);
    CDC::Attach(local_90,pHVar7);
    iVar5 = GetObjectW(*(HANDLE *)(in_ECX + 0x8c),0x18,local_128);
    if (iVar5 != 0) {
      if (*(HGDIOBJ *)(in_ECX + 0x8c) == (HGDIOBJ)0x0) {
        local_78 = (HGDIOBJ)0x0;
      }
      else {
        local_78 = SelectObject(local_8c,*(HGDIOBJ *)(in_ECX + 0x8c));
      }
      h_00 = local_78;
      if (local_78 != (HGDIOBJ)0x0) {
        local_6c = local_124;
        iStack_7c = local_120;
        h = CreateCompatibleBitmap(local_8c,local_124,local_120);
        pHStack_9c = h;
        if (h == (HBITMAP)0x0) {
          SelectObject(local_8c,h_00);
        }
        else {
          CDC::CDC(local_c0);
          local_8 = CONCAT31(local_8._1_3_,1);
          pHVar7 = CreateCompatibleDC(local_8c);
          CDC::Attach(local_c0,pHVar7);
          pvStack_a4 = SelectObject(local_bc,h);
          if (pvStack_a4 == (HGDIOBJ)0x0) {
            SelectObject(local_8c,h_00);
            DeleteObject(h);
          }
          else {
            BitBlt(local_bc,0,0,local_6c,iStack_7c,local_8c,0,0,0xcc0020);
            local_74 = *(COLORREF *)(in_ECX + 0xa8);
            if (local_74 == 0xffffffff) {
              pAVar8 = GetGlobalData();
              local_74 = *(COLORREF *)(pAVar8 + 0x1c);
            }
            iVar5 = iStack_7c;
            local_70 = 0;
            if (0 < local_6c) {
              iVar11 = 0;
              iVar9 = local_6c;
              do {
                y = 0;
                if (0 < iVar5) {
                  do {
                    local_70 = GetPixel(local_bc,iVar11,y);
                    if (local_70 != local_74) {
                      FUN_100b467d(local_70,&local_80,&local_108,&local_110);
                      dVar1 = (double)CONCAT44(iStack_7c,local_80) + local_c8;
                      dVar2 = 0.0;
                      if (((1.0 < dVar1) || (0.0 <= dVar1)) && (dVar2 = dVar1, 1.0 < dVar1)) {
                        dVar2 = 1.0;
                      }
                      dVar1 = 0.0;
                      dVar4 = local_108 + local_d0;
                      if (((1.0 < dVar4) || (dVar3 = dVar1, 0.0 <= dVar4)) &&
                         (dVar3 = dVar4, 1.0 < dVar4)) {
                        dVar3 = 1.0;
                      }
                      dVar4 = local_110 + local_d8;
                      if (((1.0 < dVar4) || (0.0 <= dVar4)) && (dVar1 = dVar4, 1.0 < dVar4)) {
                        dVar1 = 1.0;
                      }
                      if (0.5 < local_b0) {
                        dVar1 = local_110;
                      }
                      color = FUN_100b365d(dVar2,dVar1,dVar3);
                      if (local_70 != color) {
                        SetPixel(local_bc,iVar11,y,color);
                      }
                    }
                    y = y + 1;
                    iVar9 = local_6c;
                  } while (y < iVar5);
                }
                iVar11 = iVar11 + 1;
                h = pHStack_9c;
                h_00 = local_78;
                in_ECX = iStack_94;
              } while (iVar11 < iVar9);
            }
            SelectObject(local_bc,pvStack_a4);
            SelectObject(local_8c,h_00);
            DeleteObject(*(HGDIOBJ *)(in_ECX + 0x8c));
            *(HBITMAP *)(in_ECX + 0x8c) = h;
            FUN_1005ba69();
            *(undefined4 *)(in_ECX + 0x90) = 0;
            FUN_1005ba69();
            *(undefined4 *)(in_ECX + 0x94) = 0;
          }
          CDC::~CDC(local_c0);
        }
      }
    }
    CDC::~CDC(local_90);
  }
  FUN_1018015d();
  return;
}

