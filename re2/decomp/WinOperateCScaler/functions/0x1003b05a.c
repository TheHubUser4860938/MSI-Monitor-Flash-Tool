// rea decompile_all
// name: CTaskDialog::CTaskDialog
// address: 0x1003b05a
// body: available
// range: 0x1003b05a-0x1003b1a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CTaskDialog::CTaskDialog(class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > const &,class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > const &,class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > const &,int,int,int,int,class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > const &)
   
   Library: Visual Studio 2015 Release */

CTaskDialog * __thiscall
CTaskDialog::CTaskDialog
          (CTaskDialog *this,
          CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_1,
          CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_2,
          CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_3,int param_4,
          int param_5,int param_6,int param_7,
          CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_8)

{
  int iVar1;
  
  *(int *)(this + 8) = param_6;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(int *)(this + 0x14) = param_7;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  CArray<CTaskDialog::_CTaskDialogButton,CTaskDialog::_CTaskDialogButton_const&>::
  CArray<CTaskDialog::_CTaskDialogButton,CTaskDialog::_CTaskDialogButton_const&>
            ((CArray<CTaskDialog::_CTaskDialogButton,CTaskDialog::_CTaskDialogButton_const&> *)
             (this + 0x2c));
  CArray<CTaskDialog::_CTaskDialogButton,CTaskDialog::_CTaskDialogButton_const&>::
  CArray<CTaskDialog::_CTaskDialogButton,CTaskDialog::_CTaskDialogButton_const&>
            ((CArray<CTaskDialog::_CTaskDialogButton,CTaskDialog::_CTaskDialogButton_const&> *)
             (this + 0x40));
  iVar1 = FUN_100187a0(*(int *)param_1 + -0x10);
  *(int *)(this + 0x54) = iVar1 + 0x10;
  iVar1 = FUN_100187a0(*(int *)param_2 + -0x10);
  *(int *)(this + 0x58) = iVar1 + 0x10;
  iVar1 = FUN_100187a0(*(int *)param_3 + -0x10);
  *(int *)(this + 0x5c) = iVar1 + 0x10;
  iVar1 = FUN_100187a0(*(int *)param_8 + -0x10);
  *(int *)(this + 0x60) = iVar1 + 0x10;
  FUN_100185a0(&DAT_101a63a8);
  FUN_100185a0(&DAT_101a63a8);
  FUN_100185a0(&DAT_101a63a8);
  FUN_100185a0(&DAT_101a63a8);
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 100;
  *(undefined4 *)(this + 0x7c) = 1;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  if ((*(uint *)(this + 0x14) & 0x100) != 0) {
    *(undefined4 *)(this + 0x84) = 1;
  }
  LoadCommandControls(this,param_4,param_5);
  return this;
}

