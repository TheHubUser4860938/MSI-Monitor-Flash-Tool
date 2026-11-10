// rea decompile_all
// name: FUN_0051bcce
// address: 0x51bcce
// body: available
// range: 0x51bcce-0x51bd8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x51bd7d to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

bool FUN_0051bcce(int param_1)

{
  CWnd *this;
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  CObject *in_ECX;
  bool bVar4;
  CObList local_30 [4];
  undefined4 *local_2c;
  CObject *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_8 = 0x51bcda;
  this = *(CWnd **)(in_ECX + 0x78);
  if (((this == (CWnd *)0x0) || (*(int *)(this + 0x20) == 0)) || (param_1 != 0x400)) {
    bVar4 = false;
  }
  else {
    CWnd::GetWindowTextW
              (this,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                    (in_ECX + 0x7c));
    CObList::CObList(local_30,10);
    local_8 = 0;
    iVar3 = FUN_004530d2(*(undefined4 *)(in_ECX + 0x20),local_30);
    if (0 < iVar3) {
      while (local_2c != (undefined4 *)0x0) {
        if (local_2c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00429127();
        }
        puVar1 = (undefined4 *)*local_2c;
        local_14 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarEditBoxButton_0060cae0,
                                      (CObject *)local_2c[2]);
        local_2c = puVar1;
        if ((local_14 != (CObject *)0x0) && (local_14 != in_ECX)) {
          pcVar2 = *(code **)(*(int *)local_14 + 0xd0);
          guard_check_icall(in_ECX + 0x7c);
          (*pcVar2)();
        }
      }
    }
    CObList::~CObList(local_30);
    bVar4 = *(int *)(in_ECX + 0x80) == 0;
  }
  return bVar4;
}

