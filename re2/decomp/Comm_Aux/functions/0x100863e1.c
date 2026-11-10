// rea decompile_all
// name: CMFCToolBarImages::GrayImages
// address: 0x100863e1
// body: available
// range: 0x100863e1-0x1008680b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: int __thiscall CMFCToolBarImages::GrayImages(int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCToolBarImages::GrayImages(CMFCToolBarImages *this,int param_1)

{
  AFX_GLOBAL_DATA *pAVar1;
  HDC pHVar2;
  int iVar3;
  ulong uVar4;
  undefined1 *puVar5;
  uint uVar6;
  HGDIOBJ h;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 in_stack_fffffedc;
  undefined1 local_114 [4];
  undefined1 *local_110;
  int local_10c;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined1 *local_ec;
  int local_e8;
  CDC local_e4 [4];
  HDC local_e0;
  HGDIOBJ local_d4;
  CMFCToolBarImages *local_d0;
  void *local_cc;
  CDC local_c8 [4];
  HDC local_c4;
  CDrawingManager local_b8 [4];
  int local_b4;
  undefined4 local_b0;
  int iStack_ac;
  undefined8 local_a8;
  HBITMAP local_a0;
  HGDIOBJ local_9c;
  undefined1 *local_98;
  undefined1 local_94 [4];
  int local_90;
  int local_8c;
  short local_82;
  int local_80;
  BITMAPINFO local_40;
  undefined1 local_8;
  undefined3 uStack_7;
  undefined4 uStack_4;
  
  uStack_4 = 0x104;
  local_8 = 0xf0;
  uStack_7 = 0x100863;
  *(int *)(this + 0xc) = param_1;
  iVar7 = 0;
  *(undefined4 *)(this + 0x30) = 1;
  local_d0 = this;
  if ((*(int *)(this + 0x8c) == 0) || (pAVar1 = GetGlobalData(), *(int *)(pAVar1 + 0x1ac) < 9))
  goto LAB_10086804;
  CDC::CDC(local_c8);
  local_8 = 0;
  uStack_7 = 0;
  pHVar2 = CreateCompatibleDC((HDC)0x0);
  CDC::Attach(local_c8,pHVar2);
  iVar3 = GetObjectW(*(HANDLE *)(this + 0x8c),0x18,local_114);
  if (iVar3 != 0) {
    local_98 = local_110;
    iStack_ac = local_10c;
    if (*(HGDIOBJ *)(this + 0x8c) == (HGDIOBJ)0x0) {
      local_9c = (HGDIOBJ)0x0;
    }
    else {
      local_9c = SelectObject(local_c4,*(HGDIOBJ *)(this + 0x8c));
    }
    h = local_9c;
    if (local_9c != (HGDIOBJ)0x0) {
      CDC::CDC(local_e4);
      local_8 = 1;
      pHVar2 = CreateCompatibleDC(local_c4);
      CDC::Attach(local_e4,pHVar2);
      local_40.bmiHeader.biHeight = iStack_ac;
      local_40.bmiHeader.biSizeImage = iStack_ac * (int)local_98;
      local_40.bmiHeader.biPlanes = 1;
      local_40.bmiHeader.biSize = 0x28;
      local_40.bmiHeader.biWidth = (LONG)local_98;
      local_40.bmiHeader.biBitCount = 0x20;
      local_40.bmiHeader.biCompression = 0;
      local_40.bmiHeader.biXPelsPerMeter = 0;
      local_40.bmiHeader.biYPelsPerMeter = 0;
      local_40.bmiHeader.biClrUsed = 0;
      local_40.bmiHeader.biClrImportant = 0;
      local_cc = (void *)0x0;
      local_a0 = CreateDIBSection(local_e0,&local_40,0,&local_cc,(HANDLE)0x0,0);
      if (local_a0 == (HBITMAP)0x0) {
        SelectObject(local_c4,h);
      }
      else {
        local_d4 = SelectObject(local_e0,local_a0);
        if (local_d4 == (HGDIOBJ)0x0) {
          SelectObject(local_c4,h);
          DeleteObject(local_a0);
        }
        else {
          BitBlt(local_e0,0,0,(int)local_98,iStack_ac,local_c4,0,0,0xcc0020);
          local_b4 = *(int *)(this + 0xc);
          local_a8 = (double)CONCAT44(local_b4,(undefined4)local_a8);
          if (local_b4 < 1) {
            local_b4 = 0x82;
            local_a8 = (double)CONCAT44(0x82,(undefined4)local_a8);
          }
          if (*(int *)(this + 8) == 0x20) {
            iVar3 = GetObjectW(local_a0,0x54,local_94);
            if (((iVar3 == 0) || (local_82 != 0x20)) || (local_80 == 0)) goto LAB_100867ec;
            if (0 < local_8c * local_90) {
              local_a8 = (double)local_b4 * 0.01;
              puVar5 = (undefined1 *)(local_80 + 1);
              do {
                local_98 = puVar5;
                FUN_100b3831((uint)CONCAT21(CONCAT11(puVar5[-1],*puVar5),puVar5[1]),&local_fc,
                             &local_ec,&local_b0);
                uVar9 = SUB84(local_a8,0);
                uVar11 = (undefined4)((ulonglong)local_a8 >> 0x20);
                uVar8 = uVar11;
                uVar10 = uVar9;
                uVar12 = uVar11;
                uVar4 = FUN_100b280e(local_fc,CONCAT44(iStack_ac,local_b0),0);
                uVar4 = CDrawingManager::PixelAlpha
                                  (uVar4,(double)CONCAT44(uVar9,uVar11),
                                   (double)CONCAT44(uVar10,uVar8),
                                   (double)CONCAT44(in_stack_fffffedc,uVar12));
                uVar6 = (uint)(byte)puVar5[2];
                local_98[1] = (char)((ulonglong)((uVar4 & 0xff) * uVar6) / 0xff);
                *local_98 = (char)((ulonglong)((uVar4 >> 8 & 0xff) * uVar6) / 0xff);
                iVar7 = iVar7 + 1;
                local_98[-1] = (char)((ulonglong)((uVar4 >> 0x10 & 0xff) * uVar6) / 0xff);
                puVar5 = local_98 + 4;
                this = local_d0;
                h = local_9c;
                local_98 = puVar5;
              } while (iVar7 < local_8c * local_90);
            }
          }
          else {
            CDrawingManager::CDrawingManager(local_b8,local_e4);
            local_8 = 2;
            if (*(int *)(this + 0xa8) == -1) {
              GetGlobalData();
            }
            local_f4 = 0;
            local_f0 = 0;
            local_ec = local_98;
            local_e8 = iStack_ac;
            CDrawingManager::GrayRect(local_b8);
            FUN_100afd36();
            h = local_9c;
          }
          SelectObject(local_e0,local_d4);
          SelectObject(local_c4,h);
          DeleteObject(*(HGDIOBJ *)(this + 0x8c));
          *(HBITMAP *)(this + 0x8c) = local_a0;
        }
      }
LAB_100867ec:
      CDC::~CDC(local_e4);
    }
  }
  CDC::~CDC(local_c8);
LAB_10086804:
  iVar7 = FUN_1017f5f4();
  return iVar7;
}

