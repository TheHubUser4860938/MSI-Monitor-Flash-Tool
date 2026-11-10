// rea decompile_all
// name: _AfxChangePropPageFont
// address: 0x10064ecb
// body: available
// range: 0x10064ecb-0x10064f8e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  local_8 = 0x10064ed7;
  uVar1 = FUN_10049868();
  FUN_100476a0(uVar1);
  pDVar3 = (DLGTEMPLATE *)0x0;
  local_8 = 0;
  iVar2 = FUN_10069d5c(&local_18,local_20,param_2);
  if (iVar2 == 0) goto LAB_10064f7a;
  uVar1 = FUN_10049868();
  FUN_100476a0(uVar1);
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar2 = CDialogTemplate::GetFont(param_1,local_1c,local_14);
  if (iVar2 == 0) {
LAB_10064f40:
    FUN_100654a4(param_1);
    local_8 = CONCAT31(local_8._1_3_,2);
    CDialogTemplate::SetFont(local_2c,local_18,local_20[0]);
    pDVar3 = (DLGTEMPLATE *)FUN_100654ed();
    CDialogTemplate::~CDialogTemplate(local_2c);
  }
  else {
    iVar2 = FUN_1005c824(local_18);
    if ((iVar2 != 0) || (local_14[0] != local_20[0])) goto LAB_10064f40;
  }
  FUN_100476d0();
LAB_10064f7a:
  FUN_100476d0();
  return pDVar3;
}

