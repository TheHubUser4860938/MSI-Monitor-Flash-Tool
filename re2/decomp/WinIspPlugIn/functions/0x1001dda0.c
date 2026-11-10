// rea decompile_all
// name: FUN_1001dda0
// address: 0x1001dda0
// body: available
// range: 0x1001dda0-0x1001df94 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001dda0(void)

{
  undefined3 uVar1;
  uint *puVar2;
  void *_Dst;
  void *_Dst_00;
  int iVar3;
  int in_ECX;
  int in_EDX;
  uint _Size;
  undefined1 local_78 [52];
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  uint local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_101c1d3f;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  uStack_7 = 0;
  uVar1 = uStack_7;
  local_8 = 1;
  uStack_7 = 0;
  if (*(int *)(in_ECX + 0x90) != 0) {
    if (in_EDX == 0) {
      uStack_7 = uVar1;
      FUN_1000dbb0(local_78);
      _local_8 = CONCAT31(uStack_7,4);
      puVar2 = (uint *)FUN_10048680(local_44);
    }
    else {
      FUN_1000db50(local_78);
      _local_8 = CONCAT31(uStack_7,2);
      puVar2 = (uint *)FUN_10048680(local_44);
    }
    if (local_2c != puVar2) {
      if (0xf < local_18) {
        FUN_1000b630(local_2c[0],local_18 + 1);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_1000af70(puVar2);
    }
    if (0xf < local_30) {
      FUN_1000b630(local_44[0],local_30 + 1);
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    local_8 = 1;
    FUN_10048130();
    _Size = local_1c / 3;
    _Dst = (void *)FUN_100491e5(_Size);
    _Dst_00 = (void *)FUN_100491e5(_Size);
    _memset(_Dst,0,_Size);
    _memset(_Dst_00,0,_Size);
    iVar3 = FUN_1000e650(local_2c,_Dst,_Size);
    if (iVar3 == 0) {
      if (_Dst != (void *)0x0) {
        FID_conflict__free(_Dst);
      }
      uVar1 = uStack_7;
      if (_Dst_00 != (void *)0x0) {
        FID_conflict__free(_Dst_00);
        uVar1 = uStack_7;
      }
    }
    else {
      FUN_10197c50(_Dst_00,_Dst,_Size);
      iVar3 = FUN_10043160();
      if (iVar3 == 0) {
        if (_Dst != (void *)0x0) {
          FID_conflict__free(_Dst);
        }
        uVar1 = uStack_7;
        if (_Dst_00 != (void *)0x0) {
          FID_conflict__free(_Dst_00);
          uVar1 = uStack_7;
        }
      }
      else {
        if (_Dst != (void *)0x0) {
          FID_conflict__free(_Dst);
        }
        uVar1 = uStack_7;
        if (_Dst_00 != (void *)0x0) {
          FID_conflict__free(_Dst_00);
          uVar1 = uStack_7;
        }
      }
    }
  }
  uStack_7 = uVar1;
  if (0xf < local_18) {
    FUN_1000b630(local_2c[0],local_18 + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

