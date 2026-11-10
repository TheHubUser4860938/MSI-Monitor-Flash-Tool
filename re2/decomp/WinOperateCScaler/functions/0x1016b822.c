// rea decompile_all
// name: _CallSETranslator
// address: 0x1016b822
// body: available
// range: 0x1016b822-0x1016b8fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl _CallSETranslator(struct EHExceptionRecord *,struct EHRegistrationNode *,void *,void
   *,struct _s_FuncInfo const *,int,struct EHRegistrationNode *)
   
   Library: Visual Studio 2015 Release */

int __cdecl
_CallSETranslator(EHExceptionRecord *param_1,EHRegistrationNode *param_2,void *param_3,void *param_4
                 ,_s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7)

{
  int iVar1;
  undefined4 *local_3c;
  code *local_38;
  uint local_34;
  _s_FuncInfo *local_30;
  EHRegistrationNode *local_2c;
  int local_28;
  EHRegistrationNode *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int local_18;
  EHExceptionRecord *local_14;
  void *local_10;
  int local_c;
  code *local_8;
  
  local_1c = &stack0xfffffffc;
  local_20 = &stack0xffffffc0;
  if (param_1 == (EHExceptionRecord *)0x123) {
    *(undefined4 *)param_2 = 0x1016b8d1;
    local_c = 1;
  }
  else {
    local_38 = __TranslatorGuardHandler;
    local_34 = DAT_10201fec ^ (uint)&local_3c;
    local_30 = param_5;
    local_2c = param_2;
    local_28 = param_6;
    local_24 = param_7;
    local_18 = 0;
    local_3c = ExceptionList;
    ExceptionList = &local_3c;
    local_c = 1;
    local_14 = param_1;
    local_10 = param_3;
    iVar1 = ___vcrt_getptd();
    local_8 = *(code **)(iVar1 + 8);
    guard_check_icall();
    (*local_8)(*(undefined4 *)param_1,&local_14);
    local_c = 0;
    if (local_18 != 0) {
      *local_3c = *(undefined4 *)ExceptionList;
    }
    ExceptionList = local_3c;
  }
  return local_c;
}

