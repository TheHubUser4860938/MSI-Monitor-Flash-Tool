// rea decompile_all
// name: OnEndEditLabel
// address: 0x1004f598
// body: available
// range: 0x1004f598-0x1004f64f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual void __thiscall CVSListBoxBase::OnEndEditLabel(char const *)
    public: virtual void __thiscall CVSListBoxBase::OnEndEditLabel(wchar_t const *)
   
   Library: Visual Studio 2015 Release */

void OnEndEditLabel(undefined *param_1)

{
  int iVar1;
  int *in_ECX;
  code *pcVar2;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x1004f5a4;
  pcVar2 = *(code **)(*in_ECX + 0x178);
  guard_check_icall();
  iVar1 = (*pcVar2)();
  if (iVar1 < 0) {
    return;
  }
  if (param_1 == (undefined *)0x0) {
    param_1 = &DAT_101a63a8;
  }
  FUN_100185a0(param_1);
  local_8 = 0;
  if (*(int *)(local_14[0] + -0xc) == 0) {
    if (in_ECX[0x36] == 0) goto LAB_1004f636;
    pcVar2 = *(code **)(*in_ECX + 0x170);
  }
  else {
    pcVar2 = *(code **)(*in_ECX + 0x184);
    guard_check_icall(iVar1,local_14);
    (*pcVar2)();
    if (in_ECX[0x36] == 0) {
      pcVar2 = *(code **)(*in_ECX + 0x1b0);
    }
    else {
      pcVar2 = *(code **)(*in_ECX + 0x1ac);
    }
  }
  guard_check_icall(iVar1);
  (*pcVar2)();
LAB_1004f636:
  in_ECX[0x36] = 0;
  ATL::CStringData::Release((CStringData *)(local_14[0] + -0x10));
  return;
}

