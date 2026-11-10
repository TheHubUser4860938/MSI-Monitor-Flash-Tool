// rea decompile_all
// name: CMFCButton::SizeToContent
// address: 0x10041e7d
// body: available
// range: 0x10041e7d-0x100420c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10041ea0 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual class CSize __thiscall CMFCButton::SizeToContent(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCButton::SizeToContent(CMFCButton *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int in_stack_00000008;
  int local_4c [5];
  int *local_38;
  CPen *local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 local_24 [8];
  int local_1c;
  int local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x3c;
  local_8 = 0x10041e89;
  local_38 = (int *)param_1;
  iVar2 = 0;
  if (this != (CMFCButton *)0x0) {
    iVar2 = *(int *)(this + 0x20);
  }
  if (iVar2 != 0) {
    CClientDC::CClientDC((CClientDC *)local_4c,(CWnd *)this);
    local_8 = 0;
    pcVar1 = *(code **)(*(int *)this + 0x18c);
    guard_check_icall(local_4c);
    local_34 = (CPen *)(*pcVar1)();
    if (local_34 != (CPen *)0x0) {
      uVar3 = FUN_1001e20a();
      FUN_1001d224(uVar3);
      local_8 = CONCAT31(local_8._1_3_,1);
      CWnd::GetWindowTextW
                ((CWnd *)this,
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_30);
      iVar2 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                        ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         &local_30,L'\n',0);
      if (iVar2 < 0) {
        piVar4 = (int *)CDC::GetTextExtent((CDC *)local_4c,
                                           (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                            *)&local_1c);
        local_28 = *piVar4;
        local_2c = piVar4[1];
      }
      else {
        local_24._0_4_ = 0;
        local_24._4_4_ = 0;
        local_1c = 0;
        local_18 = 0;
        GetClientRect(*(HWND *)(this + 0x20),(LPRECT)local_24);
        pcVar1 = *(code **)(local_4c[0] + 0x68);
        guard_check_icall(local_30,*(undefined4 *)(local_30 + -0xc),local_24,0x400);
        (*pcVar1)();
        local_28 = local_1c - local_24._0_4_;
        local_2c = local_18 - local_24._4_4_;
      }
      if (*(int *)(this + 0x8c) == 0) {
        pcVar1 = *(code **)(*(int *)this + 400);
        guard_check_icall();
        iVar2 = (*pcVar1)();
        iVar2 = iVar2 + *(int *)(this + 0xe0) + local_28;
        if (0 < local_28) {
          pcVar1 = *(code **)(*(int *)this + 400);
          guard_check_icall();
          iVar5 = (*pcVar1)();
          iVar2 = iVar2 + iVar5;
        }
        if (local_2c <= *(int *)(this + 0xe4)) {
          local_2c = *(int *)(this + 0xe4);
        }
        pcVar1 = *(code **)(*(int *)this + 0x194);
        guard_check_icall();
        iVar5 = (*pcVar1)();
        iVar5 = local_2c + iVar5 * 2;
      }
      else {
        local_18 = *(int *)(this + 0xe0);
        if (local_18 < local_28) {
          local_18 = local_28;
        }
        pcVar1 = *(code **)(*(int *)this + 400);
        guard_check_icall();
        iVar2 = (*pcVar1)();
        iVar2 = iVar2 + local_18;
        local_18 = iVar2;
        if (0 < local_28) {
          pcVar1 = *(code **)(*(int *)this + 400);
          guard_check_icall();
          local_18 = (*pcVar1)();
          local_18 = iVar2 + local_18;
        }
        iVar2 = *(int *)(this + 0xe4);
        pcVar1 = *(code **)(*(int *)this + 0x194);
        guard_check_icall();
        iVar5 = (*pcVar1)();
        local_28 = iVar2 + iVar5 + local_2c;
        if (0 < iVar2) {
          pcVar1 = *(code **)(*(int *)this + 0x194);
          guard_check_icall();
          iVar2 = (*pcVar1)();
          local_28 = local_28 + iVar2;
        }
        iVar5 = local_28;
        iVar2 = local_18;
        if (0 < local_2c) {
          pcVar1 = *(code **)(*(int *)this + 0x194);
          guard_check_icall();
          iVar2 = (*pcVar1)();
          iVar5 = local_28 + iVar2;
          iVar2 = local_18;
        }
      }
      if (in_stack_00000008 == 0) {
        CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,-1,-1,iVar2,iVar5,0x16);
      }
      CDC::SelectObject((CDC *)local_4c,local_34);
      *local_38 = iVar2;
      local_38[1] = iVar5;
      ATL::CStringData::Release((CStringData *)(local_30 + -0x10));
      CClientDC::~CClientDC((CClientDC *)local_4c);
      FUN_10154478();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1001d023();
}

