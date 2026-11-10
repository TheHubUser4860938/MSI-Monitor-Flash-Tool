// rea decompile_all
// name: CMFCColorMenuButton::Serialize
// address: 0x521091
// body: available
// range: 0x521091-0x5212d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x5211ff to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCColorMenuButton::Serialize(class CArchive &)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCColorMenuButton::Serialize(CMFCColorMenuButton *this,CArchive *param_1)

{
  int *piVar1;
  CObject *pCVar2;
  undefined4 *puVar3;
  int iVar4;
  CObList local_3c [4];
  undefined4 *local_38;
  CObject *local_20;
  CMFCColorMenuButton *local_1c [2];
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_8 = 0x52109d;
  local_20 = (CObject *)this;
  FUN_0048f0f6(param_1);
  if (((byte)param_1[0x18] & 1) == 0) {
    FUN_0043e915(*(undefined4 *)(this + 0xf8));
    iVar4 = 0;
    if (0 < *(int *)(this + 0xf8)) {
      do {
        puVar3 = (undefined4 *)FUN_004ab4cd(iVar4);
        FUN_0043e915(*puVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(this + 0xf8));
    }
    FUN_0043e915(*(undefined4 *)(this + 0x10c));
    FUN_0043e915(*(undefined4 *)(this + 0x110));
    FUN_0043e915(*(undefined4 *)(this + 0x114));
    FUN_0043e915(*(undefined4 *)(this + 0x118));
    FUN_0043e915(*(undefined4 *)(this + 0x11c));
    FUN_0043e915(*(undefined4 *)(this + 0x120));
    CArchive::operator<<<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0x124));
    CArchive::operator<<<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0x128));
    CArchive::operator<<<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 300));
    FUN_0043e915(*(undefined4 *)(this + 0xec));
    FUN_0043e915(*(undefined4 *)(this + 0x130));
  }
  else {
    FUN_00450090(local_14);
    local_1c[0] = this + 0xf0;
    FUN_00558084(local_14[0],0xffffffff);
    iVar4 = 0;
    if (0 < local_14[0]) {
      do {
        FUN_00450090(local_1c);
        piVar1 = (int *)FUN_004ab4cd(iVar4);
        iVar4 = iVar4 + 1;
        *piVar1 = (int)local_1c[0];
        this = (CMFCColorMenuButton *)local_20;
      } while (iVar4 < local_14[0]);
    }
    FUN_00450090((CObject *)(this + 0x10c));
    FUN_00450090((CObject *)(this + 0x110));
    FUN_00450090((CObject *)(this + 0x114));
    FUN_00450090((CObject *)(this + 0x118));
    FUN_00450090((CObject *)(this + 0x11c));
    FUN_00450090((CObject *)(this + 0x120));
    CArchive::operator>><wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0x124));
    CArchive::operator>><wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0x128));
    CArchive::operator>><wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 300));
    FUN_00450090((CObject *)(this + 0xec));
    FUN_00450090((CObject *)(this + 0x130));
    CObList::CObList(local_3c,10);
    local_8 = 0;
    iVar4 = FUN_004530d2(*(undefined4 *)(this + 0x20),local_3c);
    if (0 < iVar4) {
      while (local_38 != (undefined4 *)0x0) {
        if (local_38 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00429127();
        }
        puVar3 = (undefined4 *)*local_38;
        pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCColorMenuButton_0060cb20,
                                    (CObject *)local_38[2]);
        local_38 = puVar3;
        if (((pCVar2 != (CObject *)0x0) && (pCVar2 != (CObject *)this)) &&
           (*(int *)(pCVar2 + 0xe8) != -1)) {
          *(int *)(this + 0xe8) = *(int *)(pCVar2 + 0xe8);
        }
      }
    }
    CObList::~CObList(local_3c);
  }
  return;
}

