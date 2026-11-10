// rea decompile_all
// name: FUN_004463de
// address: 0x4463de
// body: available
// range: 0x4463de-0x4467ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4463f6 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_004463de(COleVariant *param_1,ulong param_2)

{
  undefined8 uVar1;
  CDynamicAccessor *this;
  undefined4 uVar2;
  double dVar3;
  bool bVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  long *plVar9;
  tagVARIANT *ptVar10;
  short *psVar11;
  undefined1 *puVar12;
  void *pvVar13;
  int in_ECX;
  COleVariant local_50 [16];
  undefined2 local_40;
  char local_3e;
  undefined5 uStack_3d;
  undefined3 local_38;
  undefined5 uStack_35;
  short local_2c;
  ushort local_2a;
  ushort local_28;
  ushort uStack_26;
  undefined1 uStack_24;
  undefined1 uStack_23;
  ushort uStack_22;
  undefined4 uStack_20;
  uint local_1c;
  ushort local_18 [8];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x44;
  local_8 = 0x4463ea;
  if ((*(int *)(in_ECX + 0x48) == 0) || (*(int *)(in_ECX + 0x54) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
  FUN_004c8e1e(local_50);
  local_8 = 0;
  local_1c = 3;
  FUN_00444277(param_2,&local_1c);
  if (local_1c == 3) goto LAB_004467cd;
  this = *(CDynamicAccessor **)(in_ECX + 0x54);
  bVar4 = ATL::CDynamicAccessor::GetColumnType(this,param_2,local_18);
  if (!bVar4) goto LAB_004467cd;
  if (local_18[0] < 0x82) {
    if (local_18[0] == 0x81) {
      pvVar13 = ATL::CDynamicAccessor::GetValue(this,param_2);
      puVar7 = (undefined4 *)FUN_00415670(pvVar13);
      local_8._0_1_ = 2;
      ptVar10 = (tagVARIANT *)
                COleVariant::COleVariant((COleVariant *)&local_40,(wchar_t *)*puVar7,8);
      local_8._0_1_ = 3;
LAB_004467ac:
      COleVariant::operator=(local_50,ptVar10);
      Ordinal_9(&local_40);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_0040efa0();
      goto LAB_004467cd;
    }
    if (8 < local_18[0]) {
      if (local_18[0] == 0xb) {
        psVar11 = ATL::CDynamicAccessor::GetValue(this,param_2);
        ptVar10 = (tagVARIANT *)COleVariant::COleVariant((COleVariant *)&local_40,*psVar11,0xb);
        local_8._0_1_ = 0xb;
      }
      else {
        if (local_18[0] != 0xc) {
          if (local_18[0] < 0x10) goto LAB_004467cd;
          if (local_18[0] < 0x12) {
            puVar12 = ATL::CDynamicAccessor::GetValue(this,param_2);
            uStack_24 = *puVar12;
            local_2c = 0x11;
            local_8._0_1_ = 6;
            goto LAB_00446590;
          }
          if (local_18[0] != 0x12) {
            if (local_18[0] != 0x13) goto LAB_004467cd;
            goto LAB_00446542;
          }
          goto LAB_0044655c;
        }
        ptVar10 = ATL::CDynamicAccessor::GetValue(this,param_2);
        ptVar10 = (tagVARIANT *)COleVariant::COleVariant((COleVariant *)&local_40,ptVar10);
        local_8._0_1_ = 1;
      }
LAB_004465b9:
      COleVariant::operator=(local_50,ptVar10);
      goto LAB_004465c5;
    }
    if (local_18[0] == 8) goto LAB_00446787;
    if (local_18[0] == 2) {
LAB_0044655c:
      psVar11 = ATL::CDynamicAccessor::GetValue(this,param_2);
      ptVar10 = (tagVARIANT *)COleVariant::COleVariant((COleVariant *)&local_40,*psVar11,2);
      local_8._0_1_ = 7;
      goto LAB_004465b9;
    }
    if (local_18[0] == 3) {
LAB_00446542:
      plVar9 = ATL::CDynamicAccessor::GetValue(this,param_2);
      ptVar10 = (tagVARIANT *)COleVariant::COleVariant((COleVariant *)&local_40,*plVar9,3);
      local_8._0_1_ = 8;
      goto LAB_004465b9;
    }
    if (local_18[0] == 4) {
      puVar8 = ATL::CDynamicAccessor::GetValue(this,param_2);
      local_1c = *puVar8;
      uStack_24 = (undefined1)local_1c;
      uStack_23 = (undefined1)(local_1c >> 8);
      uStack_22 = (ushort)(local_1c >> 0x10);
      local_2c = 4;
      local_8._0_1_ = 9;
    }
    else if (local_18[0] == 5) {
      puVar6 = ATL::CDynamicAccessor::GetValue(this,param_2);
      uVar1 = *puVar6;
      uStack_24 = (undefined1)uVar1;
      uStack_23 = (undefined1)((ulonglong)uVar1 >> 8);
      uStack_22 = (ushort)((ulonglong)uVar1 >> 0x10);
      uStack_20 = (undefined4)((ulonglong)uVar1 >> 0x20);
      local_2c = 5;
      local_8._0_1_ = 10;
    }
    else if (local_18[0] == 6) {
      puVar7 = ATL::CDynamicAccessor::GetValue(this,param_2);
      local_2c = 6;
      uVar2 = *puVar7;
      uStack_20 = puVar7[1];
      uStack_24 = (undefined1)uVar2;
      uStack_23 = (undefined1)((uint)uVar2 >> 8);
      uStack_22 = (ushort)((uint)uVar2 >> 0x10);
      local_8._0_1_ = 0xd;
    }
    else {
      if (local_18[0] != 7) goto LAB_004467cd;
      puVar6 = ATL::CDynamicAccessor::GetValue(this,param_2);
      uVar1 = *puVar6;
      uStack_24 = (undefined1)uVar1;
      uStack_23 = (undefined1)((ulonglong)uVar1 >> 8);
      uStack_22 = (ushort)((ulonglong)uVar1 >> 0x10);
      uStack_20 = (undefined4)((ulonglong)uVar1 >> 0x20);
      local_2c = 7;
      local_8._0_1_ = 0xc;
    }
LAB_00446590:
    COleVariant::operator=(local_50,(tagVARIANT *)&local_2c);
    psVar11 = &local_2c;
  }
  else {
    if (local_18[0] == 0x82) {
LAB_00446787:
      pvVar13 = ATL::CDynamicAccessor::GetValue(this,param_2);
      puVar7 = (undefined4 *)FUN_00415a10(pvVar13);
      local_8._0_1_ = 4;
      ptVar10 = (tagVARIANT *)
                COleVariant::COleVariant((COleVariant *)&local_40,(wchar_t *)*puVar7,8);
      local_8._0_1_ = 5;
      goto LAB_004467ac;
    }
    if (local_18[0] == 0x83) {
      bVar4 = ATL::CDynamicAccessor::GetValue<tagDB_NUMERIC>
                        (this,param_2,(tagDB_NUMERIC *)&local_40);
      if (!bVar4) goto LAB_004467cd;
      dVar3 = (double)CONCAT35(local_38,uStack_3d);
      for (; local_40._1_1_ != '\0'; local_40._1_1_ = local_40._1_1_ + -1) {
        dVar3 = dVar3 / 10.0;
      }
      if (local_3e == '\0') {
        dVar3 = -dVar3;
      }
      local_38 = SUB83(dVar3,0);
      uStack_35 = (undefined5)((ulonglong)dVar3 >> 0x18);
      local_40 = 5;
      local_8._0_1_ = 0xe;
LAB_0044677f:
      ptVar10 = (tagVARIANT *)&local_40;
      goto LAB_004465b9;
    }
    if (local_18[0] == 0x85) {
      cVar5 = GetValue<>(param_2,&local_1c);
      if (cVar5 == '\0') goto LAB_004467cd;
      uStack_20 = 0;
      local_28 = 0;
      uStack_26 = 0;
      uStack_24 = 0;
      uStack_23 = 0;
      uStack_22 = 0;
      ATL::COleDateTime::SetDateTime
                ((COleDateTime *)&local_28,(int)(short)local_1c,local_1c >> 0x10,(uint)local_18[0],0
                 ,0,0);
      local_38 = (undefined3)CONCAT22(uStack_26,local_28);
      uStack_35 = (undefined5)
                  (CONCAT26(uStack_22,
                            CONCAT15(uStack_23,CONCAT14(uStack_24,CONCAT22(uStack_26,local_28)))) >>
                  0x18);
      local_40 = 7;
      local_8._0_1_ = 0xf;
      goto LAB_0044677f;
    }
    if (local_18[0] == 0x86) {
      cVar5 = GetValue<>(param_2,&local_1c);
      if (cVar5 == '\0') goto LAB_004467cd;
      uStack_20 = 0;
      local_28 = 0;
      uStack_26 = 0;
      uStack_24 = 0;
      uStack_23 = 0;
      uStack_22 = 0;
      ATL::COleDateTime::SetDateTime
                ((COleDateTime *)&local_28,0x76b,0xc,0x1e,local_1c & 0xffff,local_1c >> 0x10,
                 (uint)local_18[0]);
      local_38 = (undefined3)CONCAT22(uStack_26,local_28);
      uStack_35 = (undefined5)
                  (CONCAT26(uStack_22,
                            CONCAT15(uStack_23,CONCAT14(uStack_24,CONCAT22(uStack_26,local_28)))) >>
                  0x18);
      local_40 = 7;
      local_8._0_1_ = 0x10;
      goto LAB_0044677f;
    }
    if ((local_18[0] != 0x87) ||
       (bVar4 = ATL::CDynamicAccessor::GetValue<tagDBTIMESTAMP>
                          (this,param_2,(tagDBTIMESTAMP *)&local_2c), !bVar4)) goto LAB_004467cd;
    ATL::COleDateTime::SetDateTime
              ((COleDateTime *)&local_28,(int)local_2c,(uint)local_2a,(uint)local_28,(uint)uStack_26
               ,(uint)CONCAT11(uStack_23,uStack_24),(uint)uStack_22);
    local_38 = (undefined3)CONCAT22(uStack_26,local_28);
    uStack_35 = (undefined5)
                (CONCAT26(uStack_22,
                          CONCAT15(uStack_23,CONCAT14(uStack_24,CONCAT22(uStack_26,local_28)))) >>
                0x18);
    local_40 = 7;
    local_8._0_1_ = 0x11;
    COleVariant::operator=(local_50,(tagVARIANT *)&local_40);
LAB_004465c5:
    psVar11 = &local_40;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  Ordinal_9(psVar11);
LAB_004467cd:
  COleVariant::COleVariant(param_1,(tagVARIANT *)local_50);
  Ordinal_9(local_50);
  FUN_0055bae6();
  return;
}

