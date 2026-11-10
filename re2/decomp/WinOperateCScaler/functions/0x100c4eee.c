// rea decompile_all
// name: OnCreate
// address: 0x100c4eee
// body: available
// range: 0x100c4eee-0x100c4fcd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: int __thiscall CMFCPopupMenuBar::OnCreate(struct tagCREATESTRUCTA *)
    protected: int __thiscall CMFCPopupMenuBar::OnCreate(struct tagCREATESTRUCTW *)
   
   Library: Visual Studio 2015 Release */

undefined4 OnCreate(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  CSettingsStore *pCVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined4 local_1c;
  undefined4 local_18;
  wchar_t *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x100c4efa;
  iVar2 = OnCreate(param_1);
  if (iVar2 == -1) {
    uVar4 = 0xffffffff;
  }
  else {
    if (DAT_10201928 == 0xffffffff) {
      DAT_10201928 = 500;
      local_1c = 0;
      local_18 = 0;
      local_8 = 0;
      pCVar3 = CSettingsStoreSP::Create((CSettingsStoreSP *)&local_1c,0,1);
      pcVar1 = *(code **)(*(int *)pCVar3 + 0x10);
      guard_check_icall(L"Control Panel\\Desktop");
      iVar2 = (*pcVar1)();
      if (iVar2 != 0) {
        uVar4 = FUN_1001e20a();
        FUN_1001d224(uVar4);
        local_8 = CONCAT31(local_8._1_3_,1);
        pcVar1 = *(code **)(*(int *)pCVar3 + 0x4c);
        guard_check_icall(L"MenuShowDelay",local_14);
        iVar2 = (*pcVar1)();
        if (iVar2 != 0) {
          DAT_10201928 = __wtol(local_14[0]);
          if (5000 < DAT_10201928) {
            DAT_10201928 = 5000;
          }
        }
        ATL::CStringData::Release((CStringData *)(local_14[0] + -8));
      }
      CSettingsStoreSP::~CSettingsStoreSP((CSettingsStoreSP *)&local_1c);
    }
    GetCursorPos((LPPOINT)(in_ECX + 0xd90));
    uVar4 = 0;
  }
  return uVar4;
}

