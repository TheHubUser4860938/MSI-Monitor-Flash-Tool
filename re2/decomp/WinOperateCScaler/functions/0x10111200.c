// rea decompile_all
// name: CToolBar::GetButtonInfo
// address: 0x10111200
// body: available
// range: 0x10111200-0x10111253 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CToolBar::GetButtonInfo(int,unsigned int &,unsigned int &,int &)const 
   
   Library: Visual Studio 2015 Release */

void __thiscall
CToolBar::GetButtonInfo(CToolBar *this,int param_1,uint *param_2,uint *param_3,int *param_4)

{
  int local_1c;
  uint local_18;
  byte local_14;
  byte local_13;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  _GetButton(this,param_1,(_TBBUTTON *)&local_1c);
  *param_2 = local_18;
  *param_3 = (uint)local_14 << 0x10 | (uint)local_13;
  *param_4 = local_1c;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

