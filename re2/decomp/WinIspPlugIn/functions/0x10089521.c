// rea decompile_all
// name: FUN_10089521
// address: 0x10089521
// body: available
// range: 0x10089521-0x10089768 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10089764 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 * FUN_10089521(void)

{
  uint *puVar1;
  double dVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  AFX_GLOBAL_DATA *pAVar6;
  int iVar7;
  HBITMAP__ *h;
  CMFCToolBarImages *in_ECX;
  UINT fuLoad;
  undefined1 local_48 [18];
  ushort local_36;
  undefined4 local_30;
  undefined4 local_2c;
  undefined **local_28;
  undefined4 local_24;
  undefined4 *local_20;
  HINSTANCE local_1c;
  LPCWSTR local_18;
  HBITMAP__ *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x38;
  puVar5 = &LAB_101c6e28;
  local_8 = 0x1008952d;
  if (*(int *)(in_ECX + 0x28) == 0) {
    dVar2 = *(double *)(in_ECX + 0xb8);
    puVar5 = (undefined1 *)
             CONCAT22(0x101c,(ushort)(1.0 < dVar2) << 8 | (ushort)NAN(dVar2) << 10 |
                             (ushort)(dVar2 == 1.0) << 0xe);
    if (dVar2 != 1.0) {
      iVar7 = *(int *)(in_ECX + 0xac);
      *(undefined4 *)(in_ECX + 8) = 0;
      *(undefined8 *)(in_ECX + 0xb8) = 0x3ff0000000000000;
      if (iVar7 != -1) {
        *(undefined4 *)(in_ECX + 0xac) = 0xffffffff;
        *(int *)(in_ECX + 0xa8) = iVar7;
      }
      *(undefined4 *)(in_ECX + 0x6c) = 0;
      *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(in_ECX + 0x5c);
      puVar5 = *(undefined1 **)(in_ECX + 0x60);
      *(undefined4 *)(in_ECX + 0x70) = 0;
      *(undefined1 **)(in_ECX + 0x58) = puVar5;
      *(undefined4 *)(in_ECX + 0x5c) = 0;
      *(undefined4 *)(in_ECX + 0x60) = 0;
      *(undefined4 *)(in_ECX + 0x74) = 0;
      *(undefined4 *)(in_ECX + 100) = 0;
      *(undefined4 *)(in_ECX + 0x68) = 0;
      *(undefined4 *)(in_ECX + 0x78) = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = (undefined **)0x0;
      local_24 = 0;
      *(undefined4 *)(in_ECX + 0x7c) = 0;
      *(undefined4 *)(in_ECX + 0x80) = 0;
      *(undefined4 *)(in_ECX + 0x84) = 0;
      *(undefined4 *)(in_ECX + 0x88) = 0;
    }
    if (*(int *)(in_ECX + 0x8c) != 0) {
      if (*(int *)(in_ECX + 0x18) == 0) {
        if (*(int *)(in_ECX + 0xcc) == 0) {
          return puVar5;
        }
        FUN_1005ba69(in_ECX + 0x8c);
        puVar3 = *(undefined4 **)(in_ECX + 0xc4);
        puVar4 = *(undefined4 **)(in_ECX + 0xe0);
        while (puVar3 != (undefined4 *)0x0) {
          if (puVar4 == (undefined4 *)0x0) {
LAB_10089764:
                    /* WARNING: Subroutine does not return */
            FUN_1004a383();
          }
          puVar1 = puVar3 + 2;
          puVar3 = (undefined4 *)*puVar3;
          if (*puVar1 == 0) goto LAB_10089764;
          local_1c = (HINSTANCE)puVar4[2];
          local_20 = (undefined4 *)*puVar4;
          local_24 = 0;
          local_28 = CPngImage::vftable;
          local_8 = 0;
          local_18 = (LPCWSTR)(*puVar1 & 0xffff);
          iVar7 = Load(local_18,local_1c);
          if ((iVar7 == 0) ||
             (h = CGdiObject::Detach((CGdiObject *)&local_28), local_14[0] = h,
             h == (HBITMAP__ *)0x0)) {
            fuLoad = 0x2000;
            if (*(int *)(in_ECX + 0x34) != 0) {
              pAVar6 = GetGlobalData();
              iVar7 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar6);
              if (iVar7 == 0) {
                fuLoad = 0x3000;
              }
            }
            h = LoadImageW(local_1c,local_18,0,0,0,fuLoad);
          }
          local_14[0] = h;
          GetObjectW(h,0x18,local_48);
          *(uint *)(in_ECX + 8) = (uint)local_36;
          if (local_36 < 0x20) {
            if (((8 < local_36) && (*(int *)(in_ECX + 0x34) != 0)) ||
               (pAVar6 = GetGlobalData(), *(int *)(pAVar6 + 0x184) != 0)) {
              CMFCToolBarImages::MapBmpTo3dColors(local_14,0,0xffffffff,0xffffffff);
              h = local_14[0];
            }
          }
          else {
            CMFCToolBarImages::PreMultiplyAlpha(h,*(int *)(in_ECX + 0x3c));
          }
          CMFCToolBarImages::AddImage(in_ECX,h,0);
          DeleteObject(h);
          local_8 = 0xffffffff;
          local_28 = CBitmap::vftable;
          CImageList::~CImageList((CImageList *)&local_28);
          puVar4 = local_20;
        }
      }
      else {
        FUN_100885d2(*(undefined4 *)(in_ECX + 0x98),0);
      }
    }
    CMFCToolBarImages::UpdateCount(in_ECX);
    if (DAT_10245be4 != 0) {
      CMFCToolBarImages::MirrorBitmap((HBITMAP__ **)(in_ECX + 0x8c),*(int *)(in_ECX + 0x54));
    }
    FUN_1005ba69(in_ECX + 0x90);
    *(undefined4 *)(in_ECX + 0x90) = 0;
    FUN_1005ba69(in_ECX + 0x94);
    *(undefined4 *)(in_ECX + 0x94) = 0;
    if (*(int *)(in_ECX + 0x30) != 0) {
      CMFCToolBarImages::GrayImages(in_ECX,*(int *)(in_ECX + 0xc));
    }
    pAVar6 = GetGlobalData();
    puVar5 = *(undefined1 **)(pAVar6 + 0x20);
    *(undefined1 **)(in_ECX + 0xb0) = puVar5;
  }
  return puVar5;
}

