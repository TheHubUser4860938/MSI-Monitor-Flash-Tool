// rea decompile_all
// name: CWnd::_EnableToolTips
// address: 0x10084682
// body: available
// range: 0x10084682-0x1008472e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CWnd::_EnableToolTips(int,unsigned int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CWnd::_EnableToolTips(CWnd *this,int param_1,uint param_2)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  AFX_MODULE_STATE *pAVar2;
  int iVar3;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  pAVar1 = AfxGetModuleThreadState();
  iVar3 = *(int *)(pAVar1 + 0x3c);
  if (param_1 == 0) {
    if ((*(uint *)(this + 0x60) & param_2) != 0) {
      if (*(CWnd **)(pAVar1 + 0x40) == this) {
        CancelToolTips(1);
      }
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x20) != 0)) {
        _memset(&local_38,0,0x30);
        local_30 = *(undefined4 *)(this + 0x20);
        local_38 = 0x2c;
        local_34 = 1;
        local_2c = local_30;
        SendMessageW(*(HWND *)(iVar3 + 0x20),0x433,0,(LPARAM)&local_38);
      }
      *(uint *)(this + 0x60) = *(uint *)(this + 0x60) & ~param_2;
    }
  }
  else if ((*(uint *)(this + 0x60) & param_2) == 0) {
    pAVar2 = AfxGetModuleState();
    *(code **)(pAVar2 + 0x38) = _FilterToolTipMessage;
    *(uint *)(this + 0x60) = *(uint *)(this + 0x60) | param_2;
  }
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}

