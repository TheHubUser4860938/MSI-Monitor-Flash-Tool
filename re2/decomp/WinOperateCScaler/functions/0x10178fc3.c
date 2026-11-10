// rea decompile_all
// name: __crt_strtox::assemble_floating_point_value_from_big_integer
// address: 0x10178fc3
// body: available
// range: 0x10178fc3-0x10179150 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    enum SLD_STATUS __cdecl __crt_strtox::assemble_floating_point_value_from_big_integer(struct
   __crt_strtox::big_integer const &,unsigned int,bool,bool,class __crt_strtox::floating_point_value
   const &)
   
   Library: Visual Studio 2015 Release */

SLD_STATUS __cdecl
__crt_strtox::assemble_floating_point_value_from_big_integer
          (big_integer *param_1,uint param_2,bool param_3,bool param_4,floating_point_value *param_5
          )

{
  big_integer *pbVar1;
  big_integer *pbVar2;
  uint uVar3;
  __uint64 _Var4;
  uint uVar5;
  SLD_STATUS SVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  bool bVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  
  iVar8 = ((param_5[4] == (floating_point_value)0x0) - 1 & 0x1d) + 0x17;
  if (param_2 < 0x41) {
    if (*(int *)param_1 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined4 *)(param_1 + 4);
    }
    if (*(uint *)param_1 < 2) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)(param_1 + 8);
    }
    _Var4 = CONCAT44(uVar7,uVar9);
    bVar11 = !param_4;
  }
  else {
    uVar5 = param_2 & 0x1f;
    iVar10 = (param_2 >> 5) - 2;
    if (uVar5 == 0) {
      iVar8 = iVar10 * 0x20 + iVar8;
      pbVar1 = param_1 + (param_2 >> 5) * 4;
      pbVar2 = param_1 + iVar10 * 4 + 4;
      bVar11 = !param_4;
      for (; _Var4 = CONCAT44(*(undefined4 *)pbVar1,*(undefined4 *)pbVar2), iVar10 != 0;
          iVar10 = iVar10 + -1) {
        param_1 = param_1 + 4;
        bVar11 = (bool)(bVar11 & *(int *)param_1 == 0);
      }
    }
    else {
      bVar11 = true;
      iVar8 = iVar10 * 0x20 + uVar5 + iVar8;
      uVar3 = *(uint *)(param_1 + iVar10 * 4 + 4);
      lVar12 = __allshl();
      lVar13 = __allshl();
      lVar14 = __aullshr();
      _Var4 = lVar12 + lVar13 + lVar14;
      if ((param_4) || ((uVar3 & (1 << (sbyte)uVar5) - 1U) != 0)) {
        bVar11 = false;
      }
      for (; iVar10 != 0; iVar10 = iVar10 + -1) {
        param_1 = param_1 + 4;
        bVar11 = (bool)(bVar11 & *(int *)param_1 == 0);
      }
    }
  }
  SVar6 = assemble_floating_point_value(_Var4,iVar8,param_3,bVar11,param_5);
  return SVar6;
}

