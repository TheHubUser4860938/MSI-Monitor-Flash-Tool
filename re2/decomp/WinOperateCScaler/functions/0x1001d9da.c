// rea decompile_all
// name: _AfxCopyStgMedium
// address: 0x1001d9da
// body: available
// range: 0x1001d9da-0x1001dcab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001db31 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    int __stdcall _AfxCopyStgMedium(unsigned short,struct tagSTGMEDIUM *,struct tagSTGMEDIUM *)
   
   Library: Visual Studio 2015 Release */

int _AfxCopyStgMedium(ushort param_1,tagSTGMEDIUM *param_2,tagSTGMEDIUM *param_3)

{
  uint uVar1;
  DWORD DVar2;
  HBITMAP pHVar3;
  code *pcVar4;
  HANDLE pvVar5;
  LPVOID pvVar6;
  HMETAFILE pHVar7;
  size_t sVar8;
  void *pvVar9;
  int iVar10;
  uint local_64;
  uint local_60;
  undefined1 local_5c [8];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x54;
  local_8 = 0x1001d9e6;
  if (param_2->tymed == 0) {
    DVar2 = param_3->tymed;
    if (DVar2 == 1) {
LAB_1001da2e:
      param_2->tymed = DVar2;
    }
    else {
      if (DVar2 == 2) {
        param_2->tymed = 2;
        if ((param_3->u).hBitmap == (HBITMAP)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_1001d023();
        }
        sVar8 = _wcslen((param_3->u).lpszFileName);
        pvVar9 = ATL::AtlCoTaskMemCAlloc(sVar8 + 1,2);
        (param_2->u).hMetaFilePict = pvVar9;
        if (pvVar9 != (void *)0x0) {
          uVar1 = sVar8 * 2 + 2;
          ATL::Checked::memmove_s(pvVar9,uVar1,(param_3->u).hMetaFilePict,uVar1);
        }
        goto LAB_1001dca4;
      }
      if (DVar2 == 4) {
        pHVar3 = (param_3->u).hBitmap;
        (param_2->u).hBitmap = pHVar3;
        pcVar4 = *(code **)(pHVar3->unused + 4);
        guard_check_icall(pHVar3);
        (*pcVar4)();
        param_2->tymed = 4;
        goto LAB_1001dca4;
      }
      if (DVar2 == 8) {
        pHVar3 = (param_3->u).hBitmap;
        (param_2->u).hBitmap = pHVar3;
        pcVar4 = *(code **)(pHVar3->unused + 4);
        guard_check_icall(pHVar3);
        (*pcVar4)();
        param_2->tymed = 8;
        goto LAB_1001dca4;
      }
      if (DVar2 != 0x10) {
        if (DVar2 == 0x20) {
          pvVar9 = _AfxCopyGlobalMemory((void *)0x0,(param_3->u).hMetaFilePict);
          if (pvVar9 != (void *)0x0) {
            pvVar6 = GlobalLock(pvVar9);
            pHVar7 = CopyMetaFileW(*(HMETAFILE *)((int)pvVar6 + 0xc),(LPCWSTR)0x0);
            *(HMETAFILE *)((int)pvVar6 + 0xc) = pHVar7;
            if (pHVar7 == (HMETAFILE)0x0) {
              GlobalUnlock(pvVar9);
              GlobalFree(pvVar9);
            }
            else {
              GlobalUnlock(pvVar9);
              (param_2->u).hGlobal = pvVar9;
              param_2->tymed = 0x20;
            }
          }
          goto LAB_1001dca4;
        }
        if (DVar2 != 0x40) goto LAB_1001dca4;
        goto LAB_1001da2e;
      }
      param_2->tymed = 0x10;
    }
    (param_2->u).hBitmap = (HBITMAP)0x0;
  }
  DVar2 = param_3->tymed;
  if (DVar2 == 1) {
    pvVar9 = _AfxCopyGlobalMemory((param_2->u).hMetaFilePict,(param_3->u).hMetaFilePict);
    if (pvVar9 != (void *)0x0) {
      (param_2->u).hMetaFilePict = pvVar9;
    }
  }
  else if (DVar2 == 2) {
    FUN_100185a0((param_3->u).hBitmap);
    local_8 = 0;
    FUN_100185a0((param_2->u).hBitmap);
    CopyFileW((LPCWSTR)(-(uint)((param_3->u).hBitmap != (HBITMAP)0x0) & local_64),
              (LPCWSTR)(-(uint)((param_2->u).hBitmap != (HBITMAP)0x0) & local_60),0);
    ATL::CStringData::Release((CStringData *)(local_60 - 0x10));
    ATL::CStringData::Release((CStringData *)(local_64 - 0x10));
  }
  else if (DVar2 == 4) {
    iVar10 = ((param_3->u).hBitmap)->unused;
    guard_check_icall((param_3->u).hBitmap,local_5c,1);
    iVar10 = (**(code **)(iVar10 + 0x30))();
    if (iVar10 == 0) {
      iVar10 = ((param_2->u).hBitmap)->unused;
      guard_check_icall((param_2->u).hBitmap,0,0,0,0);
      (**(code **)(iVar10 + 0x14))();
      iVar10 = ((param_3->u).hBitmap)->unused;
      guard_check_icall((param_3->u).hBitmap,0,0,0,0);
      (**(code **)(iVar10 + 0x14))();
      iVar10 = ((param_3->u).hBitmap)->unused;
      guard_check_icall((param_3->u).hBitmap,(param_2->u).hBitmap,local_54,local_50,0,0);
      iVar10 = (**(code **)(iVar10 + 0x1c))();
      if (iVar10 == 0) {
        iVar10 = ((param_2->u).hBitmap)->unused;
        guard_check_icall((param_2->u).hBitmap,0,0,0,0);
        (**(code **)(iVar10 + 0x14))();
        iVar10 = ((param_3->u).hBitmap)->unused;
        guard_check_icall((param_3->u).hBitmap,0,0,0,0);
        (**(code **)(iVar10 + 0x14))();
      }
    }
  }
  else if (DVar2 == 8) {
    iVar10 = ((param_3->u).hBitmap)->unused;
    guard_check_icall((param_3->u).hBitmap,0,0,0,(param_2->u).hBitmap);
    (**(code **)(iVar10 + 0x1c))();
  }
  else if (((DVar2 == 0x10) || (DVar2 == 0x40)) && ((param_2->u).hBitmap == (HBITMAP)0x0)) {
    pvVar5 = OleDuplicateData((param_3->u).hMetaFilePict,param_1,0);
    (param_2->u).hMetaFilePict = pvVar5;
  }
LAB_1001dca4:
  iVar10 = FUN_10154478();
  return iVar10;
}

