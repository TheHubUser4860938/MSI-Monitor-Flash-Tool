// rea decompile_all
// name: CPreviewView::OnDisplayPageNumber
// address: 0x54cbd6
// body: available
// range: 0x54cbd6-0x54ccac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CPreviewView::OnDisplayPageNumber(unsigned int,unsigned int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPreviewView::OnDisplayPageNumber(CPreviewView *this,uint param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_b8;
  wchar_t local_b4 [86];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xb0;
  local_8 = 0x54cbe5;
  iVar1 = FUN_0042bc8f();
  iVar1 = *(int *)(iVar1 + 0x20);
  uVar2 = FUN_004295fe();
  FUN_0040eb30(uVar2);
  local_8 = 0;
  iVar3 = AfxExtractSubString((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                              &local_b8,*(wchar_t **)(*(int *)(this + 0x164) + 0x1c),
                              (uint)(param_2 != 1),L'\n');
  if (iVar3 != 0) {
    if (param_2 == 1) {
      iVar3 = FID_conflict___swprintf_c(local_b4,(wchar_t *)0x50,local_b8,param_1);
    }
    else {
      iVar3 = FID_conflict___swprintf_c
                        (local_b4,(wchar_t *)0x50,local_b8,param_1,(param_2 - 1) + param_1);
    }
    if (0 < iVar3) {
      SendMessageW(*(HWND *)(iVar1 + 0x20),0x362,0,(LPARAM)local_b4);
    }
  }
  FUN_0040efa0();
  FUN_0055bae6();
  return;
}

