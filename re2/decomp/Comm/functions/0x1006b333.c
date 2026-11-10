// rea decompile_all
// name: CMFCBaseTabCtrl::Serialize
// address: 0x1006b333
// body: available
// range: 0x1006b333-0x1006b4bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  local_8 = 0x1006b33f;
  local_18 = (CList<CMFCRestoredTabInfo,CMFCRestoredTabInfo> *)0x0;
  local_14 = 0;
  local_1c = this;
  if (((byte)param_1[0x18] & 1) == 0) {
    local_14 = *(int *)(this + 0x9c);
    uStack_50 = 0x1006b42f;
    FUN_1001b086();
    iVar2 = local_14;
    if (0 < local_14) {
      local_20 = this + 0x94;
      do {
        uStack_50 = 0x1006b448;
        iVar1 = FUN_10032c6d();
        uStack_50 = 0x1006b455;
        CArchive::operator<<<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                  (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           (iVar1 + 4));
        uStack_50 = 0x1006b45f;
        FUN_1001b086();
        CWnd::GetDlgCtrlID(*(CWnd **)(iVar1 + 0x20));
        uStack_50 = 0x1006b46f;
        FUN_1001b086();
        uStack_50 = 0x1006b479;
        FUN_1001b086();
        uStack_50 = 0x1006b483;
        FUN_1001b086();
        uStack_50 = 0x1006b48d;
        FUN_1001b086();
        local_18 = (CList<CMFCRestoredTabInfo,CMFCRestoredTabInfo> *)((int)local_18 + 1);
      } while ((int)local_18 < iVar2);
    }
    uStack_50 = 0x1006b4ab;
    FUN_1001b086();
    uStack_50 = 0x1006b4b8;
    FUN_1001b086();
  }
  else {
    local_18 = (CList<CMFCRestoredTabInfo,CMFCRestoredTabInfo> *)(this + 0x168);
    CList<CMFCRestoredTabInfo,CMFCRestoredTabInfo>::RemoveAll(local_18);
    uStack_50 = 0x1006b374;
    FUN_1001a6a2();
    iVar2 = local_14;
    if (0 < local_14) {
      do {
        FUN_10013071();
        uStack_50 = 0x1006b38e;
        FUN_10003190();
        local_8 = 0;
        uStack_50 = 0x1006b39c;
        CArchive::operator>><wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                  (param_1,local_38);
        uStack_50 = 0x1006b3a7;
        FUN_1001a6a2();
        uStack_50 = 0x1006b3b2;
        FUN_1001a6a2();
        uStack_50 = 0x1006b3bd;
        FUN_1001a6a2();
        uStack_50 = 0x1006b3c8;
        FUN_1001a6a2();
        uStack_50 = 0x1006b3d3;
        FUN_1001a6a2();
        CMFCRestoredTabInfo::CMFCRestoredTabInfo(aCStack_60,(CMFCRestoredTabInfo *)local_38);
        CList<CMFCRestoredTabInfo,CMFCRestoredTabInfo>::AddTail(local_18);
        local_8 = 0xffffffff;
        FUN_10003460();
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    uStack_50 = 0x1006b40e;
    FUN_1001a6a2();
    uStack_50 = 0x1006b419;
    FUN_1001a6a2();
  }
  return;
}

