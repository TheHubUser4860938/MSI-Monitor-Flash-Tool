// rea decompile_all
// name: ATL::CImage::CreateFromGdiplusBitmap
// address: 0x10084e8d
// body: available
// range: 0x10084e8d-0x100851e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    private: long __thiscall ATL::CImage::CreateFromGdiplusBitmap(class Gdiplus::Bitmap &)
   
   Library: Visual Studio 2015 Release */

long __thiscall ATL::CImage::CreateFromGdiplusBitmap(CImage *this,Bitmap *param_1)

{
  undefined4 uVar1;
  Bitmap *pBVar2;
  int iVar3;
  int iVar4;
  CImage *pCVar5;
  long lVar6;
  undefined4 *_Memory;
  ColorPalette *pCVar7;
  undefined4 *puVar8;
  uint uVar9;
  bool bVar10;
  undefined1 local_458 [8];
  int local_450;
  uint local_448;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438;
  undefined4 local_434;
  undefined4 local_430;
  CImage *local_42c;
  uint local_428;
  uint local_424;
  undefined4 *local_420;
  uint local_41c;
  uint local_418;
  ColorPalette *local_414;
  undefined4 *local_410;
  Bitmap *local_40c;
  tagRGBQUAD local_408 [256];
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  local_40c = param_1;
  local_42c = this;
  local_418 = Gdiplus::Image::GetPixelFormat((Image *)param_1);
  local_428 = 0x22009;
  local_41c = 0x20;
  if ((local_418 & 0x20000) != 0) {
    local_41c = (int)local_418 >> 8 & 0xff;
    local_428 = local_418;
  }
  bVar10 = (local_418 & 0x40000) != 0;
  if (bVar10) {
    local_41c = 0x20;
    local_428 = 0x26200a;
  }
  local_410 = (undefined4 *)(uint)bVar10;
  iVar3 = FID_conflict_GetHeight();
  iVar4 = FID_conflict_GetHeight();
  iVar3 = CreateEx(this,iVar4,iVar3,local_41c,0,(ulong *)0x0,(ulong)local_410);
  if (iVar3 == 0) goto LAB_100851cc;
  _Memory = (undefined4 *)0x0;
  local_410 = (undefined4 *)0x0;
  local_420 = (undefined4 *)0x0;
  if ((local_418 & 0x10000) == 0) {
LAB_10085057:
    if (local_428 == local_418) {
      local_438 = *(undefined4 *)(this + 0xc);
      local_434 = *(undefined4 *)(this + 0x10);
      local_440 = 0;
      local_43c = 0;
      iVar3 = GdipBitmapLockBits(*(undefined4 *)(local_40c + 4),&local_440,1,local_418,local_458);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        *(int *)(local_40c + 8) = iVar3;
      }
      if (iVar3 == 0) {
        local_414 = (ColorPalette *)0x0;
        pCVar5 = (CImage *)(*(int *)(this + 0xc) * local_41c + 7 >> 3);
        puVar8 = *(undefined4 **)(this + 8);
        local_418 = local_448;
        local_42c = pCVar5;
        local_420 = puVar8;
        if (0 < *(int *)(this + 0x10)) {
          do {
            local_418 = local_448;
            FUN_100345e0(puVar8,pCVar5,local_448,pCVar5);
            local_448 = local_418 + local_450;
            puVar8 = (undefined4 *)((int)puVar8 + *(int *)(this + 0x14));
            local_414 = local_414 + 1;
            _Memory = local_410;
            local_418 = local_448;
          } while ((int)local_414 < *(int *)(this + 0x10));
        }
        pBVar2 = local_40c;
        iVar3 = GdipBitmapUnlockBits(*(undefined4 *)(local_40c + 4),local_458);
        if (iVar3 != 0) {
          *(int *)(pBVar2 + 8) = iVar3;
        }
      }
    }
    else {
      Gdiplus::Bitmap::Bitmap
                ((Bitmap *)&local_440,*(int *)(this + 0xc),*(int *)(this + 0x10),
                 *(int *)(this + 0x14),local_428,*(uchar **)(this + 8));
      Gdiplus::Graphics::Graphics((Graphics *)&local_430,(Image *)&local_440);
      Gdiplus::Graphics::DrawImage((Graphics *)&local_430,(Image *)local_40c,0,0);
      GdipDeleteGraphics(local_430);
      GdipDisposeImage(local_43c);
    }
  }
  else {
    local_424 = FID_conflict_GetHeight();
    if ((local_424 < 0x401) &&
       (bVar10 = _ATL_SAFE_ALLOCA_IMPL::_AtlVerifyStackAvailable(local_424), bVar10)) {
      local_414 = (ColorPalette *)&stack0xfffffb9c;
    }
    else {
      local_414 = _ATL_SAFE_ALLOCA_IMPL::CAtlSafeAllocBufferManager<ATL::CCRTAllocator>::Allocate
                            ((CAtlSafeAllocBufferManager<ATL::CCRTAllocator> *)&local_420,local_424)
      ;
      local_410 = local_420;
      _Memory = local_420;
    }
    if (local_414 != (ColorPalette *)0x0) {
      Gdiplus::Image::GetPalette((Image *)local_40c,local_414,local_424);
      uVar9 = *(uint *)(local_414 + 4);
      if ((uVar9 != 0) && (uVar9 < 0x101)) {
        if (uVar9 != 0) {
          pCVar7 = local_414 + 8;
          uVar9 = 0;
          do {
            uVar1 = *(undefined4 *)pCVar7;
            pCVar7 = pCVar7 + 4;
            local_408[uVar9].rgbRed = (BYTE)((uint)uVar1 >> 0x10);
            local_408[uVar9].rgbGreen = (BYTE)((uint)uVar1 >> 8);
            local_408[uVar9].rgbBlue = (BYTE)uVar1;
            local_408[uVar9].rgbReserved = '\0';
            uVar9 = uVar9 + 1;
            _Memory = local_410;
            this = local_42c;
          } while (uVar9 < *(uint *)(local_414 + 4));
        }
        SetColorTable(this,0,*(uint *)(local_414 + 4),local_408);
        goto LAB_10085057;
      }
    }
  }
  while (_Memory != (undefined4 *)0x0) {
    puVar8 = (undefined4 *)*_Memory;
    FID_conflict__free(_Memory);
    _Memory = puVar8;
  }
LAB_100851cc:
  lVar6 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return lVar6;
}

