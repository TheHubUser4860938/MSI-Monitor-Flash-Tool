// rea decompile_all
// name: CMFCTabInfo::CMFCTabInfo
// address: 0x10067a8a
// body: available
// range: 0x10067a8a-0x10067b8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    private: __thiscall CMFCTabInfo::CMFCTabInfo(class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > const &,unsigned int,class CWnd
   *,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCTabInfo::CMFCTabInfo
          (CMFCTabInfo *this,
          CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_1,uint param_2,
          CWnd *param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  WCHAR local_214 [262];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x214;
  local_8 = 0x10067a99;
  *(undefined ***)this = vftable;
  uVar1 = FUN_10013071();
  FUN_10003190(uVar1);
  *(uint *)(this + 8) = param_2;
  local_8 = 0;
  ((LPRECT)(this + 0x10))->left = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(CWnd **)(this + 0x20) = param_3;
  *(int *)(this + 0x28) = param_4;
  *(int *)(this + 0x44) = param_5;
  FUN_100030d0(param_1);
  SetRectEmpty((LPRECT)(this + 0x10));
  *(undefined4 *)(this + 0x2c) = 0xffffffff;
  *(undefined4 *)(this + 0x30) = 0xffffffff;
  *(undefined4 *)(this + 0x34) = 1;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  if (*(int *)(this + 0x20) == 0) {
    *(undefined4 *)(this + 0x38) = 0;
  }
  else {
    GetClassNameW(*(HWND *)(*(int *)(this + 0x20) + 0x20),local_214,0xff);
    FUN_100037c0(local_214);
    local_8 = CONCAT31(local_8._1_3_,1);
    iVar2 = FUN_100257be(L"SysListView32");
    *(uint *)(this + 0x38) = (uint)(iVar2 == 0);
    FUN_10003460();
  }
  FUN_101490fe();
  return;
}

