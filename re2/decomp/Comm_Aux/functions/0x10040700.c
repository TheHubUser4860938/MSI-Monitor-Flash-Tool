// rea decompile_all
// name: FUN_10040700
// address: 0x10040700
// body: available
// range: 0x10040700-0x100412d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10040745 to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10040700(void)

{
  int *piVar1;
  int iVar2;
  FARPROC pFVar3;
  void *pvVar4;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_00;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_01;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_02;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_03;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_04;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_05;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_06;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_07;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_08;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_01;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_02;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_03;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_09;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_10;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_11;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_12;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_13;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_14;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_15;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_16;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_17;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_18;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_19;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_20;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_04;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_21;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_22;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_23;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *extraout_ECX_24;
  uint uVar5;
  undefined1 *puVar6;
  int local_270;
  undefined4 local_26c;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *local_268;
  undefined4 local_264;
  undefined4 local_260;
  uint local_25c;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *local_258;
  uint local_254;
  void *local_250;
  void *local_24c;
  uint local_248;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *local_244;
  uint local_240;
  undefined1 *local_238;
  undefined1 *local_234;
  undefined4 local_230 [2];
  int *local_228;
  undefined4 local_224;
  int local_220;
  int local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_f8;
  undefined1 local_f4 [12];
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *local_d4;
  uint local_d0;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101a124c;
  local_10 = ExceptionList;
  local_14 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar1 = (int *)FUN_10048e90();
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_100351a0();
  }
  local_270 = (**(code **)(*piVar1 + 0xc))();
  local_270 = local_270 + 0x10;
  local_8 = 0;
  local_250 = (void *)0x0;
  local_24c = (void *)0x0;
  _memset(local_230,0,0x138);
  local_248 = 0;
  local_240 = 0;
  local_30 = 0x10000;
  local_2c = 0;
  local_38 = 0x24;
  local_34 = 0;
  local_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  iVar2 = FUN_1003c3f0();
  *(undefined4 *)(local_244 + 8) = 0;
  FUN_100444a0();
  this_04 = extraout_ECX;
  if (iVar2 == 0) {
    iVar2 = 0x40000001;
    local_234 = *(undefined1 **)(local_244 + 0xc);
    this_04 = local_244;
    if ((DAT_10212a08 != (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x0)
       && (pFVar3 = GetProcAddress((HMODULE)DAT_10212a08,"ctlEnumerateDevices"),
          this_04 = extraout_ECX_00, pFVar3 != (FARPROC)0x0)) {
      iVar2 = (*pFVar3)(local_234);
      this_04 = extraout_ECX_01;
    }
    if (iVar2 == 0) {
      local_250 = (void *)FUN_10188e7e();
      if (local_250 == (void *)0x0) goto LAB_10041293;
      iVar2 = 0x40000001;
      local_234 = *(undefined1 **)(local_244 + 0xc);
      this_04 = DAT_10212a08;
      if ((DAT_10212a08 != (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x0
          ) && (pFVar3 = GetProcAddress((HMODULE)DAT_10212a08,"ctlEnumerateDevices"),
               this_04 = extraout_ECX_02, pFVar3 != (FARPROC)0x0)) {
        iVar2 = (*pFVar3)(local_234);
        this_04 = extraout_ECX_03;
      }
      if (iVar2 != 0) goto LAB_100411c8;
      if (DAT_1021ae54 != 0) {
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                  (this_04,(wchar_t *)&DAT_1021ae14);
        local_238 = &stack0xfffffd7c;
        local_234 = &stack0xfffffd7c;
        FUN_10034a50();
        local_234 = &stack0xfffffd78;
        local_8._0_1_ = 2;
        FUN_10034a50(&DAT_1021ae10);
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_10033a90();
        this_04 = extraout_ECX_04;
      }
      local_254 = 0;
      iVar2 = 0;
      pvVar4 = (void *)0x0;
      if (local_248 != 0) {
        do {
          if (DAT_1021ae54 != 0) {
            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                      (this_04,(wchar_t *)&DAT_1021ae14);
            local_238 = &stack0xfffffd7c;
            local_234 = &stack0xfffffd7c;
            FUN_10034a50();
            local_234 = &stack0xfffffd78;
            local_8._0_1_ = 3;
            FUN_10034a50(&DAT_1021ae10);
            local_8 = (uint)local_8._1_3_ << 8;
            FUN_10033a90();
          }
          local_238 = (undefined1 *)0x0;
          local_230[0] = 0x138;
          local_228 = (int *)FUN_10188e7e();
          local_224 = 8;
          if (local_228 == (int *)0x0) {
            this_04 = this;
            if (DAT_1021ae54 != 0) {
              ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                        (this,(wchar_t *)&DAT_1021ae14);
              local_238 = &stack0xfffffd7c;
              local_234 = &stack0xfffffd7c;
              FUN_10034a50();
              local_234 = &stack0xfffffd78;
              local_8._0_1_ = 0xb;
              FUN_10034a50(&DAT_1021ae10);
              local_8 = (uint)local_8._1_3_ << 8;
              FUN_10033a90();
              this_04 = extraout_ECX_09;
            }
            if (iVar2 == 0) {
LAB_10040c95:
              local_240 = 0;
              if (pvVar4 != (void *)0x0) {
                FID_conflict__free(pvVar4);
                local_24c = (void *)0x0;
              }
              pvVar4 = (void *)0x0;
              iVar2 = 0x40000001;
              local_238 = *(undefined1 **)((int)local_250 + local_254 * 4);
              this_04 = DAT_10212a08;
              if ((DAT_10212a08 !=
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x0) &&
                 (pFVar3 = GetProcAddress((HMODULE)DAT_10212a08,"ctlEnumerateDisplayOutputs"),
                 this_04 = extraout_ECX_10, pFVar3 != (FARPROC)0x0)) {
                iVar2 = (*pFVar3)(local_238);
                this_04 = extraout_ECX_11;
              }
              if (iVar2 == 0) {
                if (DAT_1021ae54 != 0) {
                  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                            (this_04,(wchar_t *)&DAT_1021ae14);
                  local_238 = &stack0xfffffd7c;
                  local_234 = &stack0xfffffd7c;
                  FUN_10034a50();
                  local_234 = &stack0xfffffd78;
                  local_8._0_1_ = 0xc;
                  FUN_10034a50(&DAT_1021ae10);
                  local_8 = (uint)local_8._1_3_ << 8;
                  FUN_10033a90();
                  this_04 = extraout_ECX_12;
                }
                if (local_240 == 0) goto LAB_1004110e;
                pvVar4 = (void *)FUN_10188e7e();
                local_24c = pvVar4;
                if (pvVar4 == (void *)0x0) goto LAB_10041293;
                iVar2 = 0x40000001;
                local_238 = *(undefined1 **)((int)local_250 + local_254 * 4);
                this_04 = DAT_10212a08;
                if ((DAT_10212a08 !=
                     (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x0) &&
                   (pFVar3 = GetProcAddress((HMODULE)DAT_10212a08,"ctlEnumerateDisplayOutputs"),
                   this_04 = extraout_ECX_13, pFVar3 != (FARPROC)0x0)) {
                  iVar2 = (*pFVar3)(local_238);
                  this_04 = extraout_ECX_14;
                }
                if (iVar2 != 0) goto LAB_10040dd7;
              }
              else {
LAB_10040dd7:
                if (DAT_1021ae54 != 0) {
                  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                            (this_04,(wchar_t *)&DAT_1021ae14);
                  local_238 = &stack0xfffffd7c;
                  local_234 = &stack0xfffffd7c;
                  FUN_10034a50();
                  local_234 = &stack0xfffffd78;
                  local_8._0_1_ = 0xd;
                  FUN_10034a50(&DAT_1021ae10);
                  local_8 = (uint)local_8._1_3_ << 8;
                  FUN_10033a90();
                  this_04 = extraout_ECX_15;
                }
              }
              if (pvVar4 == (void *)0x0) {
                if (DAT_1021ae54 == 0) goto LAB_1004121e;
                local_238 = &stack0xfffffd7c;
                FUN_100352e0();
                local_8._0_1_ = 0xe;
                goto LAB_100411ff;
              }
              if (DAT_1021ae54 != 0) {
                ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                          (this_04,(wchar_t *)&DAT_1021ae14);
                local_238 = &stack0xfffffd7c;
                local_234 = &stack0xfffffd7c;
                FUN_10034a50();
                local_234 = &stack0xfffffd78;
                local_8._0_1_ = 0xf;
                FUN_10034a50(&DAT_1021ae10);
                local_8 = (uint)local_8._1_3_ << 8;
                FUN_10033a90();
                this_04 = extraout_ECX_16;
              }
              uVar5 = 0;
              if (local_240 != 0) {
                do {
                  local_238 = *(undefined1 **)((int)local_24c + uVar5 * 4);
                  if (local_238 != (undefined1 *)0x0) {
                    _memset(local_f4,0,0xbc);
                    local_f8 = 0xc0;
                    iVar2 = 0x40000001;
                    this_04 = DAT_10212a08;
                    if ((DAT_10212a08 !=
                         (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x0)
                       && (pFVar3 = GetProcAddress((HMODULE)DAT_10212a08,"ctlGetDisplayProperties"),
                          this_04 = extraout_ECX_17, pFVar3 != (FARPROC)0x0)) {
                      iVar2 = (*pFVar3)();
                      this_04 = extraout_ECX_18;
                    }
                    if (iVar2 == 0) {
                      if (DAT_1021ae54 != 0) {
                        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                        Format(this_04,(wchar_t *)&DAT_1021ae14,
                               L"Dislay Index :%d, Type:%d,AttachedDisplayMuxType:%d, ProtocolConverterOutput:%d DisplayConfigFlags:%d, ProtocolConverterType:%d"
                               ,uVar5,local_e8,local_e4,local_e0);
                        local_238 = &stack0xfffffd7c;
                        local_234 = &stack0xfffffd7c;
                        FUN_10034a50();
                        local_234 = &stack0xfffffd78;
                        local_8._0_1_ = 0x11;
                        FUN_10034a50(&DAT_1021ae10);
                        local_8 = (uint)local_8._1_3_ << 8;
                        FUN_10033a90();
                        this_04 = extraout_ECX_19;
                      }
                      if ((local_d0 & 2) == 0) {
                        if (DAT_1021ae54 != 0) {
                          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                          Format(this_04,(wchar_t *)&DAT_1021ae14);
                          local_238 = &stack0xfffffd7c;
                          local_234 = &stack0xfffffd7c;
                          FUN_10034a50();
                          local_8._0_1_ = 0x12;
                          goto LAB_100410e2;
                        }
                      }
                      else if (((local_e8 ==
                                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                  *)0x1) ||
                               (local_e8 ==
                                (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                 *)0x2)) ||
                              (this_04 = local_e8,
                              local_e8 ==
                              (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                              &DAT_00000005)) {
                        local_268 = local_e8;
                        *(int *)(local_244 + 8) = *(int *)(local_244 + 8) + 1;
                        local_25c = local_d0;
                        local_26c = *(undefined4 *)((int)local_24c + uVar5 * 4);
                        local_260 = local_e0;
                        local_264 = local_e4;
                        local_258 = local_d4;
                        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                        Format(local_d4,(wchar_t *)&local_270,
                               L"Dislay Index :%d, ProtocolConverterType:%d, Type:%d,AttachedDisplayMuxType:%d, ProtocolConverterOutput:%d DisplayConfigFlags:%d"
                               ,uVar5,local_d4,local_e8,local_e4);
                        local_234 = (undefined1 *)FUN_10044690();
                        FUN_100403e0();
                        this_04 = *(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                    **)(local_244 + 0x18);
                        if (this_04 ==
                            (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                            0x0) {
                          *(undefined1 **)(local_244 + 0x14) = local_234;
                          *(undefined1 **)(local_244 + 0x18) = local_234;
                        }
                        else {
                          *(undefined1 **)this_04 = local_234;
                          *(undefined1 **)(local_244 + 0x18) = local_234;
                        }
                      }
                    }
                    else if (DAT_1021ae54 != 0) {
                      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                      Format(this_04,(wchar_t *)&DAT_1021ae14);
                      local_238 = &stack0xfffffd7c;
                      local_234 = &stack0xfffffd7c;
                      FUN_10034a50();
                      local_8._0_1_ = 0x10;
LAB_100410e2:
                      local_234 = &stack0xfffffd78;
                      FUN_10034a50(&DAT_1021ae10);
                      local_8 = (uint)local_8._1_3_ << 8;
                      FUN_10033a90();
                      this_04 = extraout_ECX_20;
                    }
                  }
                  uVar5 = uVar5 + 1;
                } while (uVar5 < local_240);
              }
            }
          }
          else {
            iVar2 = 0x40000001;
            local_234 = *(undefined1 **)((int)local_250 + local_254 * 4);
            this_04 = DAT_10212a08;
            if ((DAT_10212a08 !=
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)0x0) &&
               (pFVar3 = GetProcAddress((HMODULE)DAT_10212a08,"ctlGetDeviceProperties"),
               this_04 = extraout_ECX_05, pFVar3 != (FARPROC)0x0)) {
              iVar2 = (*pFVar3)();
              this_04 = extraout_ECX_06;
            }
            if (iVar2 != 0) {
              if (DAT_1021ae54 != 0) {
                ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                          (this_04,(wchar_t *)&DAT_1021ae14);
                local_238 = &stack0xfffffd7c;
                local_234 = &stack0xfffffd7c;
                FUN_10034a50();
                local_234 = &stack0xfffffd78;
                local_8._0_1_ = 4;
                FUN_10034a50(&DAT_1021ae10);
                local_8 = (uint)local_8._1_3_ << 8;
                FUN_10033a90();
                this_04 = extraout_ECX_22;
              }
              break;
            }
            if (local_220 == 1) {
              puVar6 = local_238;
              if (local_228 != (int *)0x0) {
                local_238 = (undefined1 *)local_228[1];
                puVar6 = (undefined1 *)*local_228;
              }
              if ((local_1f8 == 0x8086) && (DAT_1021ae54 != 0)) {
                ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                          (this_04,(wchar_t *)&DAT_1021ae14);
                local_238 = &stack0xfffffd7c;
                local_234 = &stack0xfffffd7c;
                FUN_10034a50();
                local_234 = &stack0xfffffd78;
                local_8._0_1_ = 6;
                FUN_10034a50(&DAT_1021ae10);
                local_8._0_1_ = 0;
                FUN_10033a90();
                ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                          (this_00,(wchar_t *)&DAT_1021ae14,L"Vendor id 0x%X ",local_1f8);
                local_238 = &stack0xfffffd7c;
                local_234 = &stack0xfffffd7c;
                FUN_10034a50();
                local_8._0_1_ = 7;
                local_234 = &stack0xfffffd78;
                FUN_10034a50(&DAT_1021ae10);
                local_8._0_1_ = 0;
                FUN_10033a90();
                ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                          (this_01,(wchar_t *)&DAT_1021ae14,L"Device id 0x%X ",local_1f4);
                local_238 = &stack0xfffffd7c;
                local_234 = &stack0xfffffd7c;
                FUN_10034a50();
                local_8._0_1_ = 8;
                local_234 = &stack0xfffffd78;
                FUN_10034a50(&DAT_1021ae10);
                local_8._0_1_ = 0;
                FUN_10033a90();
                ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                          (this_02,(wchar_t *)&DAT_1021ae14,L"Rev id 0x%X ",local_1f0);
                local_238 = &stack0xfffffd7c;
                local_234 = &stack0xfffffd7c;
                FUN_10034a50();
                local_8._0_1_ = 9;
                local_234 = &stack0xfffffd78;
                FUN_10034a50(&DAT_1021ae10);
                local_8._0_1_ = 0;
                FUN_10033a90();
                ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                          (this_03,(wchar_t *)&DAT_1021ae14,L"Adapter ID 0x%X ",puVar6);
                local_238 = &stack0xfffffd7c;
                local_234 = &stack0xfffffd7c;
                FUN_10034a50();
                local_8._0_1_ = 10;
                local_234 = &stack0xfffffd78;
                FUN_10034a50(&DAT_1021ae10);
                local_8 = (uint)local_8._1_3_ << 8;
                FUN_10033a90();
              }
              if (local_228 != (int *)0x0) {
                FID_conflict__free(local_228);
              }
              goto LAB_10040c95;
            }
            if (DAT_1021ae54 != 0) {
              ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                        (this_04,(wchar_t *)&DAT_1021ae14);
              local_238 = &stack0xfffffd7c;
              local_234 = &stack0xfffffd7c;
              FUN_10034a50();
              local_234 = &stack0xfffffd78;
              local_8._0_1_ = 5;
              FUN_10034a50(&DAT_1021ae10);
              local_8 = (uint)local_8._1_3_ << 8;
              FUN_10033a90();
              this_04 = extraout_ECX_07;
            }
            iVar2 = 0;
            if (local_228 != (int *)0x0) {
              FID_conflict__free(local_228);
              this_04 = extraout_ECX_08;
            }
          }
LAB_1004110e:
          local_254 = local_254 + 1;
          pvVar4 = local_24c;
        } while (local_254 < local_248);
        if (pvVar4 != (void *)0x0) {
          FID_conflict__free(pvVar4);
          this_04 = extraout_ECX_21;
        }
      }
    }
    else {
LAB_100411c8:
      if (DAT_1021ae54 != 0) {
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                  (this_04,(wchar_t *)&DAT_1021ae14);
        local_238 = &stack0xfffffd7c;
        local_234 = &stack0xfffffd7c;
        FUN_10034a50();
        local_8._0_1_ = 1;
LAB_100411ff:
        local_234 = &stack0xfffffd78;
        FUN_10034a50(&DAT_1021ae10);
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_10033a90();
        this_04 = extraout_ECX_23;
      }
    }
LAB_1004121e:
    if (local_250 != (void *)0x0) {
      FID_conflict__free(local_250);
      this_04 = extraout_ECX_24;
    }
  }
  if (DAT_1021ae54 != 0) {
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (this_04,(wchar_t *)&DAT_1021ae14,
               L"GetDisplayInfo result:0x%x m_ulDisplayIdCount %d \n");
    local_238 = &stack0xfffffd7c;
    local_234 = &stack0xfffffd7c;
    FUN_10034a50();
    local_234 = &stack0xfffffd78;
    local_8._0_1_ = 0x13;
    FUN_10034a50(&DAT_1021ae10);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_10033a90();
  }
LAB_10041293:
  local_8 = 0xffffffff;
  LOCK();
  piVar1 = (int *)(local_270 + -4);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(**(int **)(local_270 + -0x10) + 4))();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

