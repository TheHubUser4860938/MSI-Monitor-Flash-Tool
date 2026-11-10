// rea decompile_all
// name: _AfxChangePropPageFont
// address: 0x4d212a
// body: available
// range: 0x4d212a-0x4d21ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    struct DLGTEMPLATE * __stdcall _AfxChangePropPageFont(struct DLGTEMPLATE const *,int)
   
   Library: Visual Studio 2015 Release */

DLGTEMPLATE * _AfxChangePropPageFont(DLGTEMPLATE *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  DLGTEMPLATE *pDVar3;
  CDialogTemplate local_2c [12];
  ushort local_20 [2];
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_1c [4];
  wchar_t *local_18;
  ushort local_14 [6];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x4d2136;
  uVar1 = FUN_004295fe();
  FUN_0040eb30(uVar1);
  pDVar3 = (DLGTEMPLATE *)0x0;
  local_8 = 0;
  iVar2 = FUN_0053133c(&local_18,local_20,param_2);
  if (iVar2 == 0) goto LAB_004d21d9;
  uVar1 = FUN_004295fe();
  FUN_0040eb30(uVar1);
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar2 = CDialogTemplate::GetFont(param_1,local_1c,local_14);
  if (iVar2 == 0) {
LAB_004d219f:
    FUN_004b06f3(param_1);
    local_8 = CONCAT31(local_8._1_3_,2);
    CDialogTemplate::SetFont(local_2c,local_18,local_20[0]);
    pDVar3 = (DLGTEMPLATE *)FUN_004b073c();
    CDialogTemplate::~CDialogTemplate(local_2c);
  }
  else {
    iVar2 = FUN_0042cb39(local_18);
    if ((iVar2 != 0) || (local_14[0] != local_20[0])) goto LAB_004d219f;
  }
  FUN_0040efa0();
LAB_004d21d9:
  FUN_0040efa0();
  return pDVar3;
}

