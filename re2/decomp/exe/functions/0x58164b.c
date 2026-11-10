// rea decompile_all
// name: __crt_strtox::assemble_floating_point_value
// address: 0x58164b
// body: available
// range: 0x58164b-0x581996 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005817f4) */
/* WARNING: Removing unreachable block (ram,0x00581911) */
/* Library Function - Single Match
    enum SLD_STATUS __cdecl __crt_strtox::assemble_floating_point_value(unsigned
   __int64,int,bool,bool,class __crt_strtox::floating_point_value const &)
   
   Library: Visual Studio 2015 Release */

SLD_STATUS __cdecl
__crt_strtox::assemble_floating_point_value
          (__uint64 param_1,int param_2,bool param_3,bool param_4,floating_point_value *param_5)

{
  floating_point_value fVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  double *pdVar6;
  SLD_STATUS SVar7;
  float *pfVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  __uint64 _Var14;
  int local_c;
  
  uVar10 = 0;
  if (param_1._4_4_ == 0) {
    iVar9 = 0x1f;
    if ((uint)param_1 != 0) {
      for (; (uint)param_1 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if ((uint)param_1 == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = iVar9 + 1;
    }
  }
  else {
    iVar9 = 0x1f;
    if (param_1._4_4_ != 0) {
      for (; param_1._4_4_ >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    iVar9 = iVar9 + 1;
    if (param_1._4_4_ == 0) {
      iVar9 = 0;
    }
    iVar9 = iVar9 + 0x20;
  }
  fVar1 = param_5[4];
  iVar9 = (((fVar1 == (floating_point_value)0x0) - 1 & 0x1d) + 0x18) - iVar9;
  local_c = param_2 - iVar9;
  uVar3 = (fVar1 == (floating_point_value)0x0) - 1 & 0x380;
  iVar4 = uVar3 + 0x7f;
  if (iVar4 < local_c) {
LAB_005816c7:
    assemble_floating_point_infinity(param_3,param_5);
    return 3;
  }
  if (local_c < (int)(((fVar1 == (floating_point_value)0x0) - 1 & 0xfffffc80) - 0x7e)) {
    iVar5 = uVar3 + 0x7e + local_c + iVar9;
    local_c = -iVar4;
    if (iVar5 < 0) {
      if ((uint)-iVar5 < 0x40) {
        uVar11 = __allshl();
        uVar12 = __allshl();
        bVar2 = false;
        if ((!param_4) || ((uVar11 - 1 & param_1) != 0)) {
          bVar2 = true;
        }
        if (((param_1 & uVar11) != 0) || (bVar2)) {
          iVar4 = FUN_00590d93();
          if (iVar4 == 0) {
            if (((param_1 & uVar11) != 0) && ((bVar2 || ((param_1 & uVar12) != 0)))) {
              uVar10 = 1;
            }
          }
          else if (iVar4 == 0x100) {
            uVar10 = (uint)!param_3;
          }
          else if (iVar4 == 0x200) {
            uVar10 = (uint)param_3;
          }
        }
        lVar13 = __aullshr();
        param_1 = lVar13 + (ulonglong)uVar10;
        if (lVar13 + (ulonglong)uVar10 != 0) {
          _Var14 = floating_point_value::denormal_mantissa_mask(param_5);
          if (_Var14 < param_1) {
            local_c = ((param_2 - iVar5) - iVar9) + -1;
          }
          goto LAB_00581952;
        }
      }
      assemble_floating_point_zero(param_3,param_5);
      return 2;
    }
  }
  else {
    if (iVar9 < 0) {
      if ((uint)-iVar9 < 0x40) {
        uVar11 = __allshl();
        uVar12 = __allshl();
        if ((!param_4) || (bVar2 = false, (uVar11 - 1 & param_1) != 0)) {
          bVar2 = true;
        }
        if (((uVar11 & param_1) != 0) || (bVar2)) {
          iVar9 = FUN_00590d93();
          if (iVar9 == 0) {
            if (((uVar11 & param_1) != 0) && ((bVar2 || ((uVar12 & param_1) != 0)))) {
              uVar10 = 1;
            }
          }
          else if (iVar9 == 0x100) {
            uVar10 = (uint)!param_3;
          }
          else if (iVar9 == 0x200) {
            uVar10 = (uint)param_3;
          }
        }
        lVar13 = __aullshr();
        param_1 = lVar13 + (ulonglong)uVar10;
      }
      else {
        param_1 = 0;
      }
      _Var14 = floating_point_value::normal_mantissa_mask(param_5);
      if (_Var14 < param_1) {
        param_1 = param_1 >> 1;
        local_c = local_c + 1;
        if ((int)(((param_5[4] == (floating_point_value)0x0) - 1 & 0x380) + 0x7f) < local_c)
        goto LAB_005816c7;
      }
      goto LAB_00581952;
    }
    if (iVar9 < 1) goto LAB_00581952;
  }
  param_1 = __allshl();
LAB_00581952:
  _Var14 = floating_point_value::denormal_mantissa_mask(param_5);
  if (param_5[4] == (floating_point_value)0x0) {
    pfVar8 = (float *)FUN_005815ec();
    SVar7 = assemble_floating_point_value_t<float>(param_3,local_c,param_1 & _Var14,pfVar8);
  }
  else {
    pdVar6 = (double *)FUN_005815c7();
    SVar7 = assemble_floating_point_value_t<double>(param_3,local_c,param_1 & _Var14,pdVar6);
  }
  return SVar7;
}

