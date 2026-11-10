// rea decompile_all
// name: CDataRecoveryHandler::RestoreAutosavedDocuments
// address: 0x10066c76
// body: available
// range: 0x10066c76-0x10067207 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CDataRecoveryHandler::RestoreAutosavedDocuments(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CDataRecoveryHandler::RestoreAutosavedDocuments(CDataRecoveryHandler *this)

{
  CMap<ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>,wchar_t_const*,CDocument*,CDocument*>
  *this_00;
  code *pcVar1;
  wchar_t *pwVar2;
  undefined4 uVar3;
  int iVar4;
  AFX_MODULE_STATE *pAVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  CMap<ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>,wchar_t_const*,bool,bool>
  *this_01;
  undefined1 local_270 [4];
  undefined1 local_26c [4];
  undefined4 local_268;
  CDataRecoveryHandler *local_264;
  int local_260;
  wchar_t *local_25c;
  wchar_t *local_258;
  undefined4 local_254;
  wchar_t *local_250;
  bool local_249;
  wchar_t *local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x264;
  local_8 = 0x10066c85;
  this_00 = (CMap<ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>,wchar_t_const*,CDocument*,CDocument*>
             *)(this + 0x3c);
  local_264 = this;
  CMap<ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>,wchar_t_const*,CDocument*,CDocument*>
  ::RemoveAll(this_00);
  *(undefined4 *)(this + 0xc4) = 1;
  this_01 = (CMap<ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>,wchar_t_const*,bool,bool>
             *)this_00;
  if (((byte)*(undefined4 *)(this + 0xb4) & 0x30) == 0x30) {
    local_244 = 0;
    local_240 = 0;
    local_260 = -(uint)(*(int *)(this + 0x10) != 0);
    local_23c = 0;
    local_238 = 0;
    local_234 = 0;
    local_230 = 0;
    while (local_260 != 0) {
      uVar3 = FUN_10048e90();
      FUN_10034c30(uVar3);
      local_8 = 0;
      uVar3 = FUN_10048e90();
      FUN_10034c30(uVar3);
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_10065e6d(&local_260,&local_248,&local_258);
      if ((*(int *)(local_258 + -6) != 0) &&
         (iVar4 = CFile::GetStatus(local_258,(CFileStatus *)&local_244,(CAtlTransactionManager *)0x0
                                  ), iVar4 != 0)) {
        FUN_10034f00();
        local_8 = 0xffffffff;
        FUN_10034f00();
        pcVar1 = *(code **)(*(int *)this + 0x60);
        guard_check_icall();
        (*pcVar1)();
        local_260 = -(uint)(*(int *)(this + 0x10) != 0);
        goto joined_r0x10066db6;
      }
      FUN_10034f00();
      local_8 = 0xffffffff;
      FUN_10034f00();
    }
  }
LAB_100671e9:
  CMap<ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>,wchar_t_const*,CDocument*,CDocument*>
  ::RemoveAll((CMap<ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>,wchar_t_const*,CDocument*,CDocument*>
               *)this_01);
  CMap<ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>,wchar_t_const*,CDocument*,CDocument*>
  ::RemoveAll((CMap<ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>,wchar_t_const*,CDocument*,CDocument*>
               *)(this + 0x20));
  *(int *)(this + 0xc4) = 0;
  iVar4 = FUN_1017f5f4();
  return iVar4;
joined_r0x10066db6:
  if (local_260 == 0) goto LAB_100671e9;
  uVar3 = FUN_10048e90();
  FUN_10034c30(uVar3);
  local_8 = 2;
  uVar3 = FUN_10048e90();
  FUN_10034c30(uVar3);
  local_8._0_1_ = 3;
  FUN_10065e6d(&local_260,&local_248,&local_25c);
  pwVar2 = local_248;
  if ((*(int *)(local_25c + -6) != 0) &&
     (iVar4 = CFile::GetStatus(local_25c,(CFileStatus *)&local_244,(CAtlTransactionManager *)0x0),
     iVar4 != 0)) {
    CMap<ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>,wchar_t_const*,bool,bool>
    ::Lookup(this_01,pwVar2,&local_249);
    if (local_249 == false) {
      FUN_100652e7(pwVar2);
      FUN_100352a0(&DAT_101e24d0);
      pcVar1 = *(code **)(*(int *)this + 0x54);
      guard_check_icall(&local_25c);
      (*pcVar1)();
    }
    else {
      pAVar5 = AfxGetModuleState();
      pcVar1 = *(code **)(**(int **)(pAVar5 + 4) + 0x74);
      guard_check_icall();
      iVar4 = (*pcVar1)();
      SendMessageW(*(HWND *)(iVar4 + 0x20),0xb,0,0);
      pAVar5 = AfxGetModuleState();
      uVar3 = 0;
      pcVar1 = *(code **)(**(int **)(pAVar5 + 4) + 0xa0);
      pwVar7 = local_25c;
      guard_check_icall(local_25c,0);
      pwVar6 = (wchar_t *)(*pcVar1)();
      local_250 = pwVar6;
      if (pwVar6 == (wchar_t *)0x0) {
        pAVar5 = AfxGetModuleState();
        pcVar1 = *(code **)(**(int **)(pAVar5 + 4) + 0x74);
        guard_check_icall(pwVar7,uVar3);
        iVar4 = (*pcVar1)();
        SendMessageW(*(HWND *)(iVar4 + 0x20),0xb,1,0);
        pAVar5 = AfxGetModuleState();
        pcVar1 = *(code **)(**(int **)(pAVar5 + 4) + 0x74);
        guard_check_icall();
        iVar4 = (*pcVar1)();
        InvalidateRect(*(HWND *)(iVar4 + 0x20),(RECT *)0x0,1);
        pAVar5 = AfxGetModuleState();
        pcVar1 = *(code **)(**(int **)(pAVar5 + 4) + 0x74);
        guard_check_icall();
        iVar4 = (*pcVar1)();
        UpdateWindow(*(HWND *)(iVar4 + 0x20));
        this = local_264;
        this_01 = (CMap<ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>,wchar_t_const*,bool,bool>
                   *)this_00;
        goto LAB_100671c2;
      }
      uVar3 = FUN_10048e90();
      FUN_10034c30(uVar3);
      local_8._0_1_ = 4;
      pwVar7 = _wcspbrk(pwVar2,L":/\\");
      if ((pwVar7 == (wchar_t *)0x0) || ((int)pwVar7 - (int)pwVar2 >> 1 == -1)) {
        pcVar1 = *(code **)(*(int *)pwVar6 + 0x5c);
        guard_check_icall();
        (*pcVar1)();
        FUN_10034940(&local_248);
        iVar4 = FUN_10180644(pwVar2,0x2e);
        if ((iVar4 != 0) && (iVar4 = iVar4 - (int)pwVar2 >> 1, 0 < iVar4)) {
          uVar3 = FUN_10033e10(local_270,iVar4);
          local_8._0_1_ = 5;
          FUN_10034940(uVar3);
          local_8._0_1_ = 4;
          FUN_10034f00();
        }
        pcVar1 = *(code **)(*(int *)pwVar6 + 0x54);
        guard_check_icall(local_254);
        (*pcVar1)();
      }
      else {
        pcVar1 = *(code **)(*(int *)pwVar6 + 0x58);
        guard_check_icall(pwVar2,0);
        (*pcVar1)();
        FUN_10034940(pwVar6 + 0x10);
      }
      pcVar1 = *(code **)(*(int *)local_264 + 0x68);
      guard_check_icall(local_26c,local_250);
      (*pcVar1)();
      local_8 = CONCAT31(local_8._1_3_,6);
      FUN_100bee0c(local_250);
      FUN_10034940(local_26c);
      local_258 = (wchar_t *)0x0;
      Lookup(pwVar2,&local_258);
      pwVar2 = local_250;
      if ((local_258 != (wchar_t *)0x0) && (local_258 != local_250)) {
        pcVar1 = *(code **)(*(int *)local_258 + 0x84);
        guard_check_icall();
        (*pcVar1)();
      }
      pcVar1 = *(code **)(*(int *)pwVar2 + 100);
      guard_check_icall(1);
      (*pcVar1)();
      pAVar5 = AfxGetModuleState();
      pcVar1 = *(code **)(**(int **)(pAVar5 + 4) + 0x74);
      guard_check_icall();
      iVar4 = (*pcVar1)();
      SendMessageW(*(HWND *)(iVar4 + 0x20),0xb,1,0);
      pAVar5 = AfxGetModuleState();
      pcVar1 = *(code **)(**(int **)(pAVar5 + 4) + 0x74);
      guard_check_icall();
      iVar4 = (*pcVar1)();
      InvalidateRect(*(HWND *)(iVar4 + 0x20),(RECT *)0x0,1);
      pAVar5 = AfxGetModuleState();
      pcVar1 = *(code **)(**(int **)(pAVar5 + 4) + 0x74);
      guard_check_icall();
      iVar4 = (*pcVar1)();
      UpdateWindow(*(HWND *)(iVar4 + 0x20));
      this = local_264;
      FUN_100bee0c(local_250);
      FUN_10034940(&local_254);
      pcVar1 = *(code **)(*(int *)this + 0x70);
      guard_check_icall(&local_268,&local_254);
      (*pcVar1)();
      local_8._0_1_ = 7;
      pcVar1 = *(code **)(*(int *)local_250 + 0x54);
      guard_check_icall(local_268);
      (*pcVar1)();
      FUN_10034f00();
      FUN_10034f00();
      FUN_10034f00();
    }
    this_01 = (CMap<ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>,wchar_t_const*,bool,bool>
               *)(this + 0x3c);
  }
LAB_100671c2:
  FUN_10034f00();
  local_8 = 0xffffffff;
  FUN_10034f00();
  goto joined_r0x10066db6;
}

