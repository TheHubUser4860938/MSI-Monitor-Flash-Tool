// rea decompile_all
// name: CMFCToolBarButton::Serialize
// address: 0x4e7f86
// body: available
// range: 0x4e7f86-0x4e807e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBarButton::Serialize(class CArchive &)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCToolBarButton::Serialize(CMFCToolBarButton *this,CArchive *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  CMFCToolBarButton *local_8;
  
  local_8 = this;
  if (((byte)param_1[0x18] & 1) == 0) {
    FUN_0043e915(*(undefined4 *)(this + 0x20));
    FUN_0043e915(*(undefined4 *)(this + 0x24));
    if (*(int *)(this + 4) == 0) {
      uVar2 = *(undefined4 *)(this + 0x34);
    }
    else {
      uVar2 = *(undefined4 *)(this + 0x38);
    }
    FUN_0043e915(uVar2);
    CArchive::operator<<<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0x2c));
    FUN_0043e915(*(undefined4 *)(this + 4));
    FUN_0043e915(*(undefined4 *)(this + 0x1c));
    FUN_0043e915(*(undefined4 *)(this + 8));
    FUN_0043e915(*(undefined4 *)(this + 0xc));
    FUN_0043e915(*(undefined4 *)(this + 0x50));
  }
  else {
    FUN_00450090(this + 0x20);
    FUN_00450090(this + 0x24);
    FUN_00450090(&local_8);
    CArchive::operator>><wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       (this + 0x2c));
    FUN_00450090(this + 4);
    FUN_00450090(this + 0x1c);
    FUN_00450090(this + 8);
    FUN_00450090(this + 0xc);
    FUN_00450090(this + 0x50);
    pcVar1 = *(code **)(*(int *)this + 0xc0);
    guard_check_icall(local_8);
    (*pcVar1)();
  }
  return;
}

