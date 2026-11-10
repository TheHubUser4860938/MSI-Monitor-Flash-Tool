// rea decompile_all
// name: CMFCColorBar::Serialize
// address: 0x4acd51
// body: available
// range: 0x4acd51-0x4acf3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCColorBar::Serialize(class CArchive &)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCColorBar::Serialize(CMFCColorBar *this,CArchive *param_1)

{
  code *pcVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  CMFCColorBar *local_c;
  int local_8;
  
  CMFCToolBar::Serialize((CMFCToolBar *)this,param_1);
  if (((byte)param_1[0x18] & 1) == 0) {
    FUN_0043e915(*(undefined4 *)(this + 0xdd0));
    FUN_0043e915(*(undefined4 *)(this + 0xdd4));
    FUN_0043e915(*(undefined4 *)(this + 0xdd8));
    FUN_0043e915(*(undefined4 *)(this + 0xe4c));
    CArchive::operator<<<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0xe50));
    CArchive::operator<<<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0xe54));
    CArchive::operator<<<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0xe58));
    FUN_0043e915(*(undefined4 *)(this + 0xdf8));
    FUN_0043e915(*(undefined4 *)(this + 0xe04));
    FUN_0043e915(*(undefined4 *)(this + 0xdf0));
    FUN_0043e915(*(undefined4 *)(this + 0xe10));
    iVar4 = 0;
    if (0 < *(int *)(this + 0xe10)) {
      do {
        puVar3 = (undefined4 *)FUN_004ab4cd(iVar4);
        FUN_0043e915(*puVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(this + 0xe10));
    }
  }
  else {
    FUN_00450090(this + 0xdd0);
    FUN_00450090(this + 0xdd4);
    FUN_00450090(this + 0xdd8);
    FUN_00450090(this + 0xe4c);
    CArchive::operator>><wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0xe50));
    CArchive::operator>><wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0xe54));
    CArchive::operator>><wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0xe58));
    FUN_00450090(this + 0xdf8);
    FUN_00450090(this + 0xe04);
    FUN_00450090(this + 0xdf0);
    iVar4 = 0;
    local_8 = 0;
    FUN_00450090(&local_8);
    local_c = this + 0xe08;
    FUN_00558084(local_8,0xffffffff);
    if (0 < local_8) {
      do {
        FUN_00450090(&local_c);
        piVar2 = (int *)FUN_004ab4cd(iVar4);
        iVar4 = iVar4 + 1;
        *piVar2 = (int)local_c;
      } while (iVar4 < local_8);
    }
    pcVar1 = *(code **)(*(int *)this + 0x45c);
    guard_check_icall();
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)this + 0x3e4);
    guard_check_icall();
    (*pcVar1)();
  }
  return;
}

