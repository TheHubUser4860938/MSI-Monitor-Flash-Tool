// rea decompile_all
// name: CWnd::UpdateData
// address: 0x1003fb4e
// body: available
// range: 0x1003fb4e-0x1003fbb2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall CWnd::UpdateData(int)
   
   Library: Visual Studio 2008 Release */

int __thiscall CWnd::UpdateData(CWnd *this,int param_1)

{
  int local_30;
  CWnd *local_2c;
  undefined4 local_28;
  _AFX_THREAD_STATE *local_1c;
  undefined4 local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0x1003fb5a;
  local_30 = param_1;
  local_28 = 0;
  local_2c = this;
  local_1c = AfxGetThreadState();
  local_18 = *(undefined4 *)(local_1c + 0x13c);
  *(undefined4 *)(local_1c + 0x13c) = *(undefined4 *)(this + 0x20);
  local_8 = 0;
  (**(code **)(*(int *)this + 0xfc))(&local_30);
  *(undefined4 *)(local_1c + 0x13c) = local_18;
  return 1;
}

