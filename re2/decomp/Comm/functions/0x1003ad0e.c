// rea decompile_all
// name: CMFCMaskedEdit::OnCharPrintchar
// address: 0x1003ad0e
// body: available
// range: 0x1003ad0e-0x1003b127 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    private: void __thiscall CMFCMaskedEdit::OnCharPrintchar(unsigned int,unsigned int,unsigned int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCMaskedEdit::OnCharPrintchar(CMFCMaskedEdit *this,uint param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  short sVar2;
  undefined2 uVar3;
  ulong uVar4;
  int iVar5;
  LPARAM *pLVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  CMFCMaskedEdit *local_3c;
  CMFCMaskedEdit *local_38;
  CMFCMaskedEdit *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_8 = 0x1003ad1a;
  uVar10 = param_1 & 0xffff;
  local_34 = this;
  local_1c = uVar10;
  uVar4 = CWnd::GetExStyle((CWnd *)this);
  if ((uVar4 & 8) == 0) {
    if ((uVar4 & 0x10) != 0) {
      uVar1 = _towlower((wint_t)param_1);
      goto LAB_1003ad43;
    }
  }
  else {
    uVar1 = _towupper((wint_t)param_1);
LAB_1003ad43:
    uVar10 = (uint)uVar1;
    local_1c = uVar10;
  }
  SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&local_18,(LPARAM)local_14);
  GetGroupBounds(this,&local_24,&local_20,local_18,1);
  iVar7 = local_24;
  if (((((local_18 < 0) && (*(int *)(*(int *)(this + 0x80) + -0xc) < local_14[0])) ||
       (local_18 < local_24)) || ((local_20 < local_18 || (local_14[0] < local_24)))) ||
     (local_20 < local_14[0])) {
    MessageBeep(0xffffffff);
LAB_1003b118:
    CEdit::SetSel((CEdit *)this,iVar7,local_20,0);
  }
  else {
    if (local_18 == local_14[0]) {
      if (*(int *)(*(int *)(this + 0x84) + -0xc) == 0) {
        iVar7 = CheckChar(this,(wchar_t)local_1c,local_18);
        if (iVar7 != 0) {
          SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&local_30,(LPARAM)&local_34);
          FUN_1001d029();
          local_3c = local_34;
LAB_1003af21:
          DoUpdate(this,1,local_30,(int)local_3c);
          return;
        }
      }
      else {
        if (local_14[0] == local_20) {
          if (((*(int *)(*(int *)(this + 0x80) + -0xc) + -1 <= local_14[0]) ||
              (GetGroupBounds(this,&local_24,&local_20,local_14[0] + 1,1), iVar7 = local_24,
              local_24 == -1)) || (local_24 <= local_14[0])) goto LAB_1003addf;
          CEdit::SetSel((CEdit *)this,local_24,local_24,0);
          local_14[0] = iVar7;
          local_18 = iVar7;
        }
        iVar5 = CheckChar(this,(wchar_t)local_1c,local_18);
        if (iVar5 != 0) {
          CEdit::SetSel((CEdit *)this,local_18,local_14[0] + 1,0);
          pLVar6 = (LPARAM *)
                   ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                   CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                             ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                              &local_34,(wchar_t)local_1c,1);
          SendMessageW(*(HWND *)(this + 0x20),0xc2,1,*pLVar6);
          FUN_10003460();
          FUN_10011020(local_14[0],local_1c);
          CEdit::SetSel((CEdit *)this,local_14[0] + 1,local_14[0] + 1,0);
          SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&local_18,(LPARAM)local_14);
          if (local_14[0] != local_20) {
            return;
          }
          if (local_14[0] < *(int *)(*(int *)(this + 0x80) + -0xc) + -1) {
            GetGroupBounds(this,&local_24,&local_20,local_14[0] + 1,1);
            iVar7 = local_24;
          }
          if (iVar7 == -1) {
            return;
          }
          local_20 = iVar7;
          if (iVar7 <= local_14[0]) {
            return;
          }
          goto LAB_1003b118;
        }
      }
    }
    else {
      iVar5 = CheckChar(this,(wchar_t)uVar10,local_18);
      iVar7 = local_18;
      if (iVar5 != 0) {
        if (*(int *)(*(int *)(this + 0x88) + -0xc) == 0) {
          SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&local_2c,(LPARAM)&local_3c);
          FUN_1001d029();
          local_30 = local_2c;
          goto LAB_1003af21;
        }
        local_28 = local_18;
        local_24 = 1;
        local_38 = this + 0x84;
        uVar10 = FUN_10011080(local_18);
        iVar5 = local_20;
        local_3c = (CMFCMaskedEdit *)(uVar10 & 0xffff);
        iVar11 = 0;
        local_2c = iVar7 + 1;
        local_30 = 1;
        iVar12 = local_24;
        do {
          if (iVar5 <= local_2c) break;
          sVar2 = FUN_10011080(local_2c);
          if (sVar2 == (short)local_3c) {
            iVar12 = iVar12 + 1;
            local_2c = local_2c + 1;
          }
          else {
            local_30 = 0;
          }
        } while (local_30 != 0);
        iVar7 = local_28;
        this = local_34;
        local_24 = iVar12;
        if (local_14[0] - local_18 <= iVar12) {
          local_38 = local_34 + 0x80;
          FUN_10010e70(&local_20,local_28,iVar12);
          local_8 = 0;
          if (0 < local_24) {
            iVar7 = local_14[0] - local_18;
            uVar8 = FUN_10002e00(&local_3c,(local_24 - iVar7) + 1);
            local_8._0_1_ = 1;
            FUN_100030d0(uVar8);
            local_8._0_1_ = 0;
            FUN_10003460();
            piVar9 = (int *)ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                            ::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                      ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                        *)&local_3c,*(wchar_t *)(this + 0x8c),iVar7 + -1);
            local_8._0_1_ = 2;
            FUN_100123a8(*piVar9,*(undefined4 *)(*piVar9 + -0xc));
            local_8 = (uint)local_8._1_3_ << 8;
            FUN_10003460();
            FUN_10011020(0,local_1c);
            iVar7 = local_28;
          }
          CEdit::SetSel((CEdit *)this,iVar7,local_24 + iVar7,0);
          SendMessageW(*(HWND *)(this + 0x20),0xc2,1,local_20);
          CEdit::SetSel((CEdit *)this,local_28,local_28,0);
          iVar7 = local_28;
          local_3c = (CMFCMaskedEdit *)0x0;
          if (0 < *(int *)(local_20 + -0xc)) {
            do {
              uVar3 = FUN_10011080(iVar11);
              FUN_10011020(iVar11 + iVar7,uVar3);
              iVar11 = iVar11 + 1;
              this = local_34;
            } while (iVar11 < *(int *)(local_20 + -0xc));
          }
          CEdit::SetSel((CEdit *)this,local_18 + 1,local_18 + 1,0);
          FUN_10003460();
          return;
        }
        MessageBeep(0xffffffff);
        local_20 = local_24 + iVar7;
        goto LAB_1003b118;
      }
    }
LAB_1003addf:
    MessageBeep(0xffffffff);
  }
  return;
}

