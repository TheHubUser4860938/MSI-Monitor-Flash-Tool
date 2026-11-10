// rea decompile_all
// name: _AfxCopyStgMedium
// address: 0x1004848a
// body: available
// range: 0x1004848a-0x1004875b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100485e1 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    int __stdcall _AfxCopyStgMedium(unsigned short,struct tagSTGMEDIUM *,struct tagSTGMEDIUM *)
   
   Library: Visual Studio 2015 Release */

int _AfxCopyStgMedium(ushort param_1,tagSTGMEDIUM *param_2,tagSTGMEDIUM *param_3)

{
  DWORD DVar1;
  HBITMAP pHVar2;
  code *pcVar3;
  HANDLE pvVar4;
  LPVOID pvVar5;
  HMETAFILE pHVar6;
  size_t sVar7;
  void *pvVar8;
  int iVar9;
  uint local_64;
  uint local_60;
  undefined1 local_5c [8];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x54;
  local_8 = 0x10048496;
  if (param_2->tymed == 0) {
    DVar1 = param_3->tymed;
    if (DVar1 == 1) {
LAB_100484de:
      param_2->tymed = DVar1;
    }
    else {
      if (DVar1 == 2) {
        param_2->tymed = 2;
        if ((param_3->u).hBitmap == (HBITMAP)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_1004886a();
        }
        sVar7 = _wcslen((param_3->u).lpszFileName);
        pvVar8 = ATL::AtlCoTaskMemCAlloc(sVar7 + 1,2);
        (param_2->u).hMetaFilePict = pvVar8;
        if (pvVar8 != (void *)0x0) {
          iVar9 = sVar7 * 2 + 2;
          FUN_100345e0(pvVar8,iVar9,(param_3->u).hBitmap,iVar9);
        }
        goto LAB_10048754;
      }
      if (DVar1 == 4) {
        pHVar2 = (param_3->u).hBitmap;
        (param_2->u).hBitmap = pHVar2;
        pcVar3 = *(code **)(pHVar2->unused + 4);
        guard_check_icall(pHVar2);
        (*pcVar3)();
        param_2->tymed = 4;
        goto LAB_10048754;
      }
      if (DVar1 == 8) {
        pHVar2 = (param_3->u).hBitmap;
        (param_2->u).hBitmap = pHVar2;
        pcVar3 = *(code **)(pHVar2->unused + 4);
        guard_check_icall(pHVar2);
        (*pcVar3)();
        param_2->tymed = 8;
        goto LAB_10048754;
      }
      if (DVar1 != 0x10) {
        if (DVar1 == 0x20) {
          pvVar8 = _AfxCopyGlobalMemory((void *)0x0,(param_3->u).hMetaFilePict);
          if (pvVar8 != (void *)0x0) {
            pvVar5 = GlobalLock(pvVar8);
            pHVar6 = CopyMetaFileW(*(HMETAFILE *)((int)pvVar5 + 0xc),(LPCWSTR)0x0);
            *(HMETAFILE *)((int)pvVar5 + 0xc) = pHVar6;
            if (pHVar6 == (HMETAFILE)0x0) {
              GlobalUnlock(pvVar8);
              GlobalFree(pvVar8);
            }
            else {
              GlobalUnlock(pvVar8);
              (param_2->u).hGlobal = pvVar8;
              param_2->tymed = 0x20;
            }
          }
          goto LAB_10048754;
        }
        if (DVar1 != 0x40) goto LAB_10048754;
        goto LAB_100484de;
      }
      param_2->tymed = 0x10;
    }
    (param_2->u).hBitmap = (HBITMAP)0x0;
  }
  DVar1 = param_3->tymed;
  if (DVar1 == 1) {
    pvVar8 = _AfxCopyGlobalMemory((param_2->u).hMetaFilePict,(param_3->u).hMetaFilePict);
    if (pvVar8 != (void *)0x0) {
      (param_2->u).hMetaFilePict = pvVar8;
    }
  }
  else if (DVar1 == 2) {
    FUN_100352e0((param_3->u).hBitmap);
    local_8 = 0;
    FUN_100352e0((param_2->u).hBitmap);
    CopyFileW((LPCWSTR)(-(uint)((param_3->u).hBitmap != (HBITMAP)0x0) & local_64),
              (LPCWSTR)(-(uint)((param_2->u).hBitmap != (HBITMAP)0x0) & local_60),0);
    FUN_10034f00();
    FUN_10034f00();
  }
  else if (DVar1 == 4) {
    iVar9 = ((param_3->u).hBitmap)->unused;
    guard_check_icall((param_3->u).hBitmap,local_5c,1);
    iVar9 = (**(code **)(iVar9 + 0x30))();
    if (iVar9 == 0) {
      iVar9 = ((param_2->u).hBitmap)->unused;
      guard_check_icall((param_2->u).hBitmap,0,0,0,0);
      (**(code **)(iVar9 + 0x14))();
      iVar9 = ((param_3->u).hBitmap)->unused;
      guard_check_icall((param_3->u).hBitmap,0,0,0,0);
      (**(code **)(iVar9 + 0x14))();
      iVar9 = ((param_3->u).hBitmap)->unused;
      guard_check_icall((param_3->u).hBitmap,(param_2->u).hBitmap,local_54,local_50,0,0);
      iVar9 = (**(code **)(iVar9 + 0x1c))();
      if (iVar9 == 0) {
        iVar9 = ((param_2->u).hBitmap)->unused;
        guard_check_icall((param_2->u).hBitmap,0,0,0,0);
        (**(code **)(iVar9 + 0x14))();
        iVar9 = ((param_3->u).hBitmap)->unused;
        guard_check_icall((param_3->u).hBitmap,0,0,0,0);
        (**(code **)(iVar9 + 0x14))();
      }
    }
  }
  else if (DVar1 == 8) {
    iVar9 = ((param_3->u).hBitmap)->unused;
    guard_check_icall((param_3->u).hBitmap,0,0,0,(param_2->u).hBitmap);
    (**(code **)(iVar9 + 0x1c))();
  }
  else if (((DVar1 == 0x10) || (DVar1 == 0x40)) && ((param_2->u).hBitmap == (HBITMAP)0x0)) {
    pvVar4 = OleDuplicateData((param_3->u).hMetaFilePict,param_1,0);
    (param_2->u).hMetaFilePict = pvVar4;
  }
LAB_10048754:
  iVar9 = FUN_1017f5f4();
  return iVar9;
}

