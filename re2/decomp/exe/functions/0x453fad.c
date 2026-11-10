// rea decompile_all
// name: CMFCToolBar::LoadLastOriginalState
// address: 0x453fad
// body: available
// range: 0x453fad-0x45403d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual int __thiscall CMFCToolBar::LoadLastOriginalState(class CSettingsStore &)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCToolBar::LoadLastOriginalState(CMFCToolBar *this,CSettingsStore *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  CObList local_30 [12];
  int local_24;
  CMFCToolBar *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_8 = 0x453fb9;
  iVar4 = 0;
  local_14 = this;
  CObList::CObList(local_30,10);
  local_8 = 0;
  pcVar1 = *(code **)(*(int *)param_1 + 0x40);
  guard_check_icall(L"OriginalItems",local_30);
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    pcVar1 = *(code **)(*(int *)local_14 + 0x430);
    guard_check_icall(local_30);
    iVar4 = (*pcVar1)();
  }
  while (local_24 != 0) {
    piVar3 = (int *)FUN_004d265a();
    if (piVar3 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar3 + 4);
      guard_check_icall(1);
      (*pcVar1)();
    }
  }
  CObList::~CObList(local_30);
  return iVar4;
}

