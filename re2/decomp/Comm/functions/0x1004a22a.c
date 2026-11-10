// rea decompile_all
// name: CBasePane::get_accState
// address: 0x1004a22a
// body: available
// range: 0x1004a22a-0x1004a2a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual long __thiscall CBasePane::get_accState(struct tagVARIANT,struct tagVARIANT *)
   
   Library: Visual Studio 2015 Release */

long __thiscall
CBasePane::get_accState
          (CBasePane *this,short param_2,undefined4 param_3,int param_4,undefined4 param_5,
          undefined2 *param_6)

{
  code *pcVar1;
  CObject *pCVar2;
  
  if (param_6 == (undefined2 *)0x0) {
    return -0x7ff8ffa9;
  }
  if (param_2 == 3) {
    if (param_4 == 0) {
      *param_6 = 3;
      pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_101d3640,(CObject *)this);
      *(uint *)(param_6 + 4) = (-(uint)(pCVar2 != (CObject *)0x0) & 0xffffff00) + 0x100;
      return 0;
    }
    if (0 < param_4) {
      pcVar1 = *(code **)(*(int *)this + 0x254);
      guard_check_icall(param_4);
      (*pcVar1)();
      *param_6 = 3;
      *(undefined4 *)(param_6 + 4) = *(undefined4 *)(this + 0xec);
      return 0;
    }
  }
  return 1;
}

