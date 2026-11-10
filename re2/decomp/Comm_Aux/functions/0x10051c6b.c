// rea decompile_all
// name: FUN_10051c6b
// address: 0x10051c6b
// body: available
// range: 0x10051c6b-0x10051f56 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10051f01 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10051c6b(undefined4 param_1,undefined4 param_2)

{
  FARPROC pFVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  void *_Dst;
  double dVar7;
  ulonglong local_14;
  tagPOINT local_c;
  
  iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  if ((*(int *)(iVar2 + 4) < DAT_1020d834) && (FUN_1017f1aa(), DAT_1020d834 == -1)) {
    DAT_1020d830 = GetModuleHandleW(L"user32.dll");
    FUN_1017f16b();
  }
  if (DAT_1020d830 == (HMODULE)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1004886a();
  }
  if ((*(int *)(iVar2 + 4) < DAT_1020d83c) && (FUN_1017f1aa(), DAT_1020d83c == -1)) {
    DAT_1020d838 = GetProcAddress(DAT_1020d830,"GetGestureInfo");
    DAT_1020d840 = GetProcAddress(DAT_1020d830,"CloseGestureInfoHandle");
    FUN_1017f16b();
  }
  if ((DAT_1020d838 == (FARPROC)0x0) || (DAT_1020d840 == (FARPROC)0x0)) goto LAB_10051ebc;
  if (in_ECX[0x15] == 0) {
    iVar2 = FUN_10047eb4();
    in_ECX[0x15] = iVar2;
  }
  _memset((void *)in_ECX[0x15],0,0x30);
  *(undefined4 *)in_ECX[0x15] = 0x30;
  pFVar1 = DAT_1020d838;
  guard_check_icall(param_2);
  iVar2 = (*pFVar1)();
  if (iVar2 == 0) {
LAB_10051eae:
    _Dst = (void *)in_ECX[0x15];
  }
  else {
    iVar2 = in_ECX[0x15];
    if (*(HWND *)(iVar2 + 0xc) != (HWND)in_ECX[8]) goto LAB_10051eae;
    local_c.y = (LONG)*(short *)(iVar2 + 0x12);
    local_c.x = (LONG)*(short *)(iVar2 + 0x10);
    ScreenToClient((HWND)in_ECX[8],&local_c);
    _Dst = (void *)in_ECX[0x15];
    bVar5 = true;
    iVar2 = *(int *)((int)_Dst + 8);
    if (iVar2 == 1) {
      in_ECX[0xf] = local_c.x;
      in_ECX[0x10] = local_c.y;
      in_ECX[0x12] = *(int *)((int)_Dst + 0x20);
      in_ECX[0x13] = *(int *)((int)_Dst + 0x24);
      goto LAB_10051ebc;
    }
    if (iVar2 != 2) {
      if (iVar2 == 3) {
        iVar2 = *(int *)((int)_Dst + 0x20) - in_ECX[0x12];
        pcVar4 = *(code **)(*in_ECX + 0x134);
LAB_10051e2d:
        guard_check_icall(local_c.x,local_c.y,iVar2);
        iVar2 = (*pcVar4)();
LAB_10051e3e:
        pFVar1 = DAT_1020d840;
        bVar5 = iVar2 == 0;
        if (!bVar5) {
          guard_check_icall();
          (*pFVar1)();
        }
      }
      else {
        if (iVar2 == 4) {
          dVar7 = (double)CONCAT44(local_c.y,local_c.x);
          iVar2 = in_ECX[0x10];
          pcVar4 = *(code **)(*in_ECX + 0x138);
          iVar6 = in_ECX[0xf];
LAB_10051dfb:
          guard_check_icall(iVar6,iVar2,dVar7);
          iVar2 = (*pcVar4)();
          goto LAB_10051e3e;
        }
        if (iVar2 == 5) {
          local_14 = *(ulonglong *)((int)_Dst + 0x20) & 0x7fffffffffffffff;
          dVar7 = (double)local_14;
          local_14 = ((ulonglong)*(uint *)((int)_Dst + 0x24) & 0x80000000) << 0x20;
          pcVar4 = *(code **)(*in_ECX + 0x13c);
          dVar7 = ((-(double)(longlong)local_14 + dVar7) / 65535.0) * 4.0 * 3.14159265 - 6.2831853;
          iVar6 = local_c.x;
          iVar2 = local_c.y;
          goto LAB_10051dfb;
        }
        if (iVar2 == 6) {
          pcVar4 = *(code **)(*in_ECX + 0x140);
          guard_check_icall(local_c.x,local_c.y);
          iVar2 = (*pcVar4)();
          goto LAB_10051e3e;
        }
        if (iVar2 == 7) {
          iVar2 = *(int *)((int)_Dst + 0x20);
          pcVar4 = *(code **)(*in_ECX + 0x144);
          goto LAB_10051e2d;
        }
      }
      in_ECX[0xf] = local_c.x;
      in_ECX[0x10] = local_c.y;
      in_ECX[0x12] = *(int *)(in_ECX[0x15] + 0x20);
      in_ECX[0x13] = *(int *)(in_ECX[0x15] + 0x24);
      if (!bVar5) {
        return 0;
      }
      goto LAB_10051ebc;
    }
    in_ECX[0xf] = -1;
    in_ECX[0x10] = -1;
    in_ECX[0x12] = 0;
    in_ECX[0x13] = 0;
  }
  _memset(_Dst,0,0x30);
LAB_10051ebc:
  uVar3 = FUN_100509af();
  return uVar3;
}

