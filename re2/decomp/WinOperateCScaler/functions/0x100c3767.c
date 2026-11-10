// rea decompile_all
// name: CMFCPopupMenuBar::CalcSize
// address: 0x100c3767
// body: available
// range: 0x100c3767-0x100c39ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c37bd to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual class CSize __thiscall CMFCPopupMenuBar::CalcSize(int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCPopupMenuBar::CalcSize(CMFCPopupMenuBar *this,int param_1)

{
  AFX_GLOBAL_DATA *pAVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  CClientDC local_58 [20];
  undefined1 local_44 [8];
  int local_3c;
  int local_38;
  CPen *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x48;
  local_8 = 0x100c3773;
  if (*(int *)(this + 0xd78) == 0) {
    iVar6 = 0;
    local_20 = 0;
    CClientDC::CClientDC(local_58,(CWnd *)this);
    local_8 = 0;
    pAVar1 = GetGlobalData();
    local_34 = CDC::SelectObject((CDC *)local_58,(CPen *)(pAVar1 + 0x11c));
    if (local_34 == (CPen *)0x0) {
LAB_100c37bd:
                    /* WARNING: Subroutine does not return */
      FUN_1001d023();
    }
    if (*(int *)(this + 0xc48) == 0) {
      iVar6 = 0x32;
      iVar5 = 0x14;
    }
    else {
      local_14 = 0;
      local_1c = 0;
      FUN_10137696(0,0xffffffff);
      FUN_1006a934(&local_3c);
      local_3c = local_3c + 2;
      local_38 = local_38 + 2;
      pAVar1 = GetGlobalData();
      if (local_38 <= *(int *)(pAVar1 + 0x1cc)) {
        pAVar1 = GetGlobalData();
        local_38 = *(int *)(pAVar1 + 0x1cc);
      }
      local_30 = *(int *)(this + 0xc40);
      iVar5 = 0;
      if (local_30 != 0) {
        do {
          piVar2 = (int *)FUN_100972dc(&local_30);
          piVar2 = (int *)*piVar2;
          local_18 = piVar2;
          if (piVar2 == (int *)0x0) goto LAB_100c37bd;
          local_2c = 0;
          if ((*(int *)(this + 0xd48) != 0) && (piVar2[8] == *(int *)(this + 0xd48))) {
            pAVar1 = GetGlobalData();
            CDC::SelectObject((CDC *)local_58,(CPen *)(pAVar1 + 300));
            local_2c = 1;
          }
          iVar5 = *piVar2;
          guard_check_icall(local_44,local_58,&local_3c,1);
          piVar2 = (int *)(**(code **)(iVar5 + 0x1c))();
          local_24 = *piVar2;
          local_28 = piVar2[1];
          if (((local_18[9] & 0x20000000U) != 0) && (DAT_10209cf0 == 0)) {
            if ((local_14 != 0) && (local_1c != 0)) {
              if (local_20 < local_1c) {
                local_20 = local_1c;
              }
              iVar6 = iVar6 + local_14 + 1;
              FUN_10137663(*(undefined4 *)(this + 0xda0),iVar6);
            }
            local_1c = 0;
            local_14 = 0;
          }
          iVar5 = local_14;
          if ((*(byte *)(local_18 + 9) & 1) == 0) {
            iVar4 = local_24;
            if (((local_18[2] != 0) && (*(int *)(local_18[0xb] + -0xc) != 0)) &&
               (iVar3 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                        Find((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             (local_18 + 0xb),L'\t',0), iVar4 = local_24, 0 < iVar3)) {
              iVar4 = local_24 + 10;
            }
            if ((*(int *)(this + 0xd58) < 1) || (iVar4 <= *(int *)(this + 0xd58) + -2)) {
              iVar3 = 1;
            }
            else {
              iVar3 = 0;
            }
            local_18[5] = iVar3;
            if (iVar5 < iVar4) {
              local_14 = iVar4;
            }
          }
          else {
            local_28 = 8;
          }
          local_1c = local_1c + local_28;
          if (local_2c != 0) {
            pAVar1 = GetGlobalData();
            CDC::SelectObject((CDC *)local_58,(CPen *)(pAVar1 + 0x11c));
          }
        } while (local_30 != 0);
        iVar5 = local_20;
        if (local_20 < local_1c) {
          iVar5 = local_1c;
        }
      }
      iVar6 = iVar6 + local_14;
    }
    iVar4 = *(int *)(this + 0xd58);
    local_20 = iVar5 + 2;
    iVar6 = iVar6 + 2;
    if ((0 < iVar4) && (iVar4 < iVar6)) {
      iVar6 = iVar4;
    }
    iVar5 = *(int *)(this + 0xd5c);
    if ((0 < iVar5) && (iVar6 < iVar5)) {
      iVar6 = iVar5;
    }
    FUN_10137663(*(undefined4 *)(this + 0xda0),iVar6);
    CDC::SelectObject((CDC *)local_58,local_34);
    *(int *)param_1 = iVar6;
    *(int *)(param_1 + 4) = local_20;
    CClientDC::~CClientDC(local_58);
  }
  else {
    CMFCToolBar::CalcSize((CMFCToolBar *)this,param_1);
  }
  return param_1;
}

