// rea decompile_all
// name: _raise
// address: 0x10166cd7
// body: available
// range: 0x10166cd7-0x10166e87 inclusive
// range: 0x10166ea6-0x10166ede inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4_GS replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    _raise
   
   Library: Visual Studio 2015 Release */

int __cdecl _raise(int _SigNum)

{
  bool bVar1;
  bool bVar2;
  __crt_signal_action_t *p_Var3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  char extraout_CL;
  char cVar7;
  byte bVar8;
  _func_void_int *p_Var9;
  int *piVar10;
  undefined4 local_38;
  int local_34;
  
  piVar10 = (int *)0x0;
  local_38 = 0;
  bVar2 = true;
  if (8 < _SigNum) {
    if (_SigNum == 0xb) goto LAB_10166d31;
    if ((_SigNum == 0xf) || ((0x14 < _SigNum && (_SigNum < 0x17)))) goto LAB_10166d26;
LAB_10166d5c:
    piVar10 = __errno();
    *piVar10 = 0x16;
    FUN_1014f4c6();
    goto LAB_10166ed9;
  }
  if (_SigNum == 8) {
LAB_10166d31:
    piVar10 = (int *)___acrt_getptd_noexit();
    if (piVar10 == (int *)0x0) goto LAB_10166ed9;
    p_Var3 = siglookup(_SigNum,(__crt_signal_action_t *)*piVar10);
    if (p_Var3 == (__crt_signal_action_t *)0x0) goto LAB_10166d5c;
    p_Var3 = p_Var3 + 8;
    cVar7 = '\0';
    bVar2 = false;
  }
  else {
    if (_SigNum != 2) {
      if (_SigNum == 4) goto LAB_10166d31;
      if (_SigNum != 6) goto LAB_10166d5c;
    }
LAB_10166d26:
    p_Var3 = (__crt_signal_action_t *)get_global_action_nolock(_SigNum);
    cVar7 = extraout_CL;
  }
  local_34 = 0;
  bVar1 = false;
  if (cVar7 != '\0') {
    ___acrt_lock(3);
    bVar1 = bVar2;
  }
  if (bVar1) {
    bVar8 = (byte)DAT_101d3fec & 0x1f;
    p_Var9 = (_func_void_int *)
             ((DAT_101d3fec ^ (uint)*(_func_void_int **)p_Var3) >> bVar8 |
             (DAT_101d3fec ^ (uint)*(_func_void_int **)p_Var3) << 0x20 - bVar8);
  }
  else {
    p_Var9 = *(_func_void_int **)p_Var3;
    bVar2 = false;
  }
  if (p_Var9 != (_func_void_int *)0x1) {
    if (p_Var9 == (_func_void_int *)0x0) {
      if (bVar2) {
        ___acrt_unlock(3);
      }
      __exit(3);
    }
    if (((_SigNum == 8) || (_SigNum == 0xb)) || (_SigNum == 4)) {
      local_34 = piVar10[1];
      piVar10[1] = 0;
      if (_SigNum == 8) {
        puVar4 = (undefined4 *)FUN_10166cce();
        local_38 = *puVar4;
        puVar4 = (undefined4 *)FUN_10166cce();
        *puVar4 = 0x8c;
        goto LAB_10166e18;
      }
    }
    else {
LAB_10166e18:
      if (_SigNum == 8) {
        iVar6 = *piVar10;
        for (iVar5 = iVar6 + 0x24; iVar5 != iVar6 + 0x90; iVar5 = iVar5 + 0xc) {
          *(undefined4 *)(iVar5 + 8) = 0;
        }
        goto LAB_10166e5a;
      }
    }
    bVar8 = 0x20 - ((byte)DAT_101d3fec & 0x1f) & 0x1f;
    *(_func_void_int **)p_Var3 =
         (_func_void_int *)((0U >> bVar8 | 0 << 0x20 - bVar8) ^ DAT_101d3fec);
  }
LAB_10166e5a:
  FUN_10166e97();
  if (p_Var9 != (_func_void_int *)0x1) {
    if (_SigNum == 8) {
      iVar6 = FUN_1015ddfc();
      iVar5 = 8;
      guard_check_icall(8,*(undefined4 *)(iVar6 + 8));
      (*p_Var9)(iVar5);
    }
    else {
      iVar6 = _SigNum;
      guard_check_icall();
      (*p_Var9)(iVar6);
      if ((_SigNum != 0xb) && (_SigNum != 4)) goto LAB_10166ed9;
    }
    piVar10[1] = local_34;
    if (_SigNum == 8) {
      iVar6 = FUN_1015ddfc();
      *(undefined4 *)(iVar6 + 8) = local_38;
    }
  }
LAB_10166ed9:
  iVar6 = FUN_101492a9();
  return iVar6;
}

