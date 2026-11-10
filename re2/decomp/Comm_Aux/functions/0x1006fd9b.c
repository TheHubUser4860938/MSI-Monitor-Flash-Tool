// rea decompile_all
// name: CMFCMaskedEdit::DoUpdate
// address: 0x1006fd9b
// body: available
// range: 0x1006fd9b-0x1006fe57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    private: int __thiscall CMFCMaskedEdit::DoUpdate(int,int,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCMaskedEdit::DoUpdate(CMFCMaskedEdit *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  wchar_t *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x1006fda7;
  if (*(int *)(this + 0xa4) == 0) {
    *(undefined4 *)(this + 0xa4) = 1;
    uVar2 = FUN_10048e90();
    FUN_10034c30(uVar2);
    local_8 = 0;
    CWnd::GetWindowTextW
              ((CWnd *)this,
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14);
    iVar1 = SetValue(this,local_14[0],1);
    if (iVar1 == 0) {
      MessageBeep(0xffffffff);
      if (param_1 != 0) {
        iVar3 = FUN_100349e0(*(int *)(this + 0x80) + -0x10);
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_10056072(iVar3 + 0x10);
        if (param_2 != -1) {
          CEdit::SetSel((CEdit *)this,param_2,param_3,0);
        }
        FUN_10034f00();
      }
    }
    *(undefined4 *)(this + 0xa4) = 0;
    FUN_10034f00();
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

