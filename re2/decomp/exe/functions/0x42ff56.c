// rea decompile_all
// name: FUN_0042ff56
// address: 0x42ff56
// body: available
// range: 0x42ff56-0x430241 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4301ec to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0042ff56(undefined4 param_1,undefined4 param_2)

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
  if ((*(int *)(iVar2 + 4) < DAT_00614cb0) && (FUN_0055b543(), DAT_00614cb0 == -1)) {
    DAT_00614cac = GetModuleHandleW(L"user32.dll");
    FUN_0055b504();
  }
  if (DAT_00614cac == (HMODULE)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
  if ((*(int *)(iVar2 + 4) < DAT_00614cb8) && (FUN_0055b543(), DAT_00614cb8 == -1)) {
    DAT_00614cb4 = GetProcAddress(DAT_00614cac,"GetGestureInfo");
    DAT_00614cbc = GetProcAddress(DAT_00614cac,"CloseGestureInfoHandle");
    FUN_0055b504();
  }
  if ((DAT_00614cb4 == (FARPROC)0x0) || (DAT_00614cbc == (FARPROC)0x0)) goto LAB_004301a7;
  if (in_ECX[0x15] == 0) {
    iVar2 = FUN_00416408();
    in_ECX[0x15] = iVar2;
  }
  _memset((void *)in_ECX[0x15],0,0x30);
  *(undefined4 *)in_ECX[0x15] = 0x30;
  pFVar1 = DAT_00614cb4;
  guard_check_icall(param_2);
  iVar2 = (*pFVar1)();
  if (iVar2 == 0) {
LAB_00430199:
    _Dst = (void *)in_ECX[0x15];
  }
  else {
    iVar2 = in_ECX[0x15];
    if (*(HWND *)(iVar2 + 0xc) != (HWND)in_ECX[8]) goto LAB_00430199;
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
      goto LAB_004301a7;
    }
    if (iVar2 != 2) {
      if (iVar2 == 3) {
        iVar2 = *(int *)((int)_Dst + 0x20) - in_ECX[0x12];
        pcVar4 = *(code **)(*in_ECX + 0x134);
LAB_00430118:
        guard_check_icall(local_c.x,local_c.y,iVar2);
        iVar2 = (*pcVar4)();
LAB_00430129:
        pFVar1 = DAT_00614cbc;
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
LAB_004300e6:
          guard_check_icall(iVar6,iVar2,dVar7);
          iVar2 = (*pcVar4)();
          goto LAB_00430129;
        }
        if (iVar2 == 5) {
          local_14 = *(ulonglong *)((int)_Dst + 0x20) & 0x7fffffffffffffff;
          dVar7 = (double)local_14;
          local_14 = ((ulonglong)*(uint *)((int)_Dst + 0x24) & 0x80000000) << 0x20;
          pcVar4 = *(code **)(*in_ECX + 0x13c);
          dVar7 = ((-(double)(longlong)local_14 + dVar7) / 65535.0) * 4.0 * 3.14159265 - 6.2831853;
          iVar6 = local_c.x;
          iVar2 = local_c.y;
          goto LAB_004300e6;
        }
        if (iVar2 == 6) {
          pcVar4 = *(code **)(*in_ECX + 0x140);
          guard_check_icall(local_c.x,local_c.y);
          iVar2 = (*pcVar4)();
          goto LAB_00430129;
        }
        if (iVar2 == 7) {
          iVar2 = *(int *)((int)_Dst + 0x20);
          pcVar4 = *(code **)(*in_ECX + 0x144);
          goto LAB_00430118;
        }
      }
      in_ECX[0xf] = local_c.x;
      in_ECX[0x10] = local_c.y;
      in_ECX[0x12] = *(int *)(in_ECX[0x15] + 0x20);
      in_ECX[0x13] = *(int *)(in_ECX[0x15] + 0x24);
      if (!bVar5) {
        return 0;
      }
      goto LAB_004301a7;
    }
    in_ECX[0xf] = -1;
    in_ECX[0x10] = -1;
    in_ECX[0x12] = 0;
    in_ECX[0x13] = 0;
  }
  _memset(_Dst,0,0x30);
LAB_004301a7:
  uVar3 = FUN_0042ec70();
  return uVar3;
}

