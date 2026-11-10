// rea decompile_all
// name: CMFCBaseTabCtrl::Serialize
// address: 0x100a272d
// body: available
// range: 0x100a272d-0x100a28b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCBaseTabCtrl::Serialize(class CArchive &)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCBaseTabCtrl::Serialize(CMFCBaseTabCtrl *this,CArchive *param_1)

{
  int iVar1;
  int iVar2;
  CMFCRestoredTabInfo aCStack_60 [16];
  undefined4 uStack_50;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_38 [24];
  CMFCBaseTabCtrl *local_20;
  CMFCBaseTabCtrl *local_1c;
  CList<CMFCRestoredTabInfo,CMFCRestoredTabInfo> *local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x100a2739;
  local_18 = (CList<CMFCRestoredTabInfo,CMFCRestoredTabInfo> *)0x0;
  local_14 = 0;
  local_1c = this;
  if (((byte)param_1[0x18] & 1) == 0) {
    local_14 = *(int *)(this + 0x9c);
    uStack_50 = 0x100a2829;
    FUN_10051228();
    iVar2 = local_14;
    if (0 < local_14) {
      local_20 = this + 0x94;
      do {
        uStack_50 = 0x100a2842;
        iVar1 = FUN_10069fb9();
        uStack_50 = 0x100a284f;
        CArchive::operator<<<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                  (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           (iVar1 + 4));
        uStack_50 = 0x100a2859;
        FUN_10051228();
        CWnd::GetDlgCtrlID(*(CWnd **)(iVar1 + 0x20));
        uStack_50 = 0x100a2869;
        FUN_10051228();
        uStack_50 = 0x100a2873;
        FUN_10051228();
        uStack_50 = 0x100a287d;
        FUN_10051228();
        uStack_50 = 0x100a2887;
        FUN_10051228();
        local_18 = (CList<CMFCRestoredTabInfo,CMFCRestoredTabInfo> *)((int)local_18 + 1);
      } while ((int)local_18 < iVar2);
    }
    uStack_50 = 0x100a28a5;
    FUN_10051228();
    uStack_50 = 0x100a28b2;
    FUN_10051228();
  }
  else {
    local_18 = (CList<CMFCRestoredTabInfo,CMFCRestoredTabInfo> *)(this + 0x168);
    CList<CMFCRestoredTabInfo,CMFCRestoredTabInfo>::RemoveAll(local_18);
    uStack_50 = 0x100a276e;
    FUN_10051107();
    iVar2 = local_14;
    if (0 < local_14) {
      do {
        FUN_10049868();
        uStack_50 = 0x100a2788;
        FUN_100476a0();
        local_8 = 0;
        uStack_50 = 0x100a2796;
        CArchive::operator>><wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                  (param_1,local_38);
        uStack_50 = 0x100a27a1;
        FUN_10051107();
        uStack_50 = 0x100a27ac;
        FUN_10051107();
        uStack_50 = 0x100a27b7;
        FUN_10051107();
        uStack_50 = 0x100a27c2;
        FUN_10051107();
        uStack_50 = 0x100a27cd;
        FUN_10051107();
        CMFCRestoredTabInfo::CMFCRestoredTabInfo(aCStack_60,(CMFCRestoredTabInfo *)local_38);
        CList<CMFCRestoredTabInfo,CMFCRestoredTabInfo>::AddTail(local_18);
        local_8 = 0xffffffff;
        FUN_100476d0();
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    uStack_50 = 0x100a2808;
    FUN_10051107();
    uStack_50 = 0x100a2813;
    FUN_10051107();
  }
  return;
}

