// rea decompile_all
// name: CMFCBaseAccessibleObject::get_accState
// address: 0x46f723
// body: available
// range: 0x46f723-0x46f7c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual long __thiscall CMFCBaseAccessibleObject::get_accState(struct tagVARIANT,struct
   tagVARIANT *)
   
   Library: Visual Studio 2015 Release */

long __thiscall
CMFCBaseAccessibleObject::get_accState
          (CMFCBaseAccessibleObject *this,short param_2,undefined4 param_3,int param_4,
          undefined4 param_5,undefined2 *param_6)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  
  if ((param_2 == 3) && (param_4 == 0)) {
    pcVar1 = *(code **)(*(int *)this + 0xa4);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x20) != 0)) {
      pcVar1 = *(code **)(*(int *)this + 0xac);
      guard_check_icall(iVar2,this + 0x20);
      (*pcVar1)();
      *param_6 = 3;
      *(undefined4 *)(param_6 + 4) = *(undefined4 *)(this + 0x3c);
      return 0;
    }
  }
  if (((param_6 == (undefined2 *)0x0) || (param_2 != 3)) || (param_4 < 1)) {
    lVar3 = -0x7ff8ffa9;
  }
  else {
    pcVar1 = *(code **)(*(int *)this + 0xa8);
    guard_check_icall(param_4);
    (*pcVar1)();
    *param_6 = 3;
    *(undefined4 *)(param_6 + 4) = *(undefined4 *)(this + 0x3c);
    lVar3 = 0;
  }
  return lVar3;
}

