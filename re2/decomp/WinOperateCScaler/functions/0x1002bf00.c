// rea decompile_all
// name: _AfxHandleActivate
// address: 0x1002bf00
// body: available
// range: 0x1002bf00-0x1002bf76 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    void __stdcall _AfxHandleActivate(class CWnd *,unsigned int,class CWnd *)
   
   Library: Visual Studio 2015 Release */

void _AfxHandleActivate(CWnd *param_1,uint param_2,CWnd *param_3)

{
  ulong uVar1;
  CWnd *pCVar2;
  BOOL BVar3;
  CWnd *pCVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar1 = CWnd::GetExStyle(param_1);
  if ((((uVar1 & 0x40000000) == 0) &&
      (pCVar2 = CWnd::GetTopLevelParent(param_1), pCVar2 != (CWnd *)0x0)) &&
     ((param_3 == (CWnd *)0x0 ||
      ((BVar3 = IsWindow(*(HWND *)(param_3 + 0x20)), BVar3 == 0 ||
       (pCVar4 = CWnd::GetTopLevelParent(param_3), pCVar2 != pCVar4)))))) {
    local_c = *(undefined4 *)(param_1 + 0x20);
    if (param_3 == (CWnd *)0x0) {
      local_8 = 0;
    }
    else {
      local_8 = *(undefined4 *)(param_3 + 0x20);
    }
    SendMessageW(*(HWND *)(pCVar2 + 0x20),0x36e,param_2,(LPARAM)&local_c);
  }
  return;
}

