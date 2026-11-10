// rea decompile_all
// name: _AfxRelayToolTipMessage
// address: 0x1007909e
// body: available
// range: 0x1007909e-0x10079123 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    void __stdcall _AfxRelayToolTipMessage(class CToolTipCtrl *,struct tagMSG *)
   
   Library: Visual Studio 2015 Release */

void _AfxRelayToolTipMessage(CToolTipCtrl *param_1,tagMSG *param_2)

{
  int iVar1;
  tagMSG *ptVar2;
  HWND *ppHVar3;
  HWND local_28;
  int local_24;
  uint local_1c;
  undefined1 local_14 [8];
  tagPOINT local_c;
  
  ptVar2 = param_2;
  ppHVar3 = &local_28;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppHVar3 = ptVar2->hwnd;
    ptVar2 = (tagMSG *)&ptVar2->message;
    ppHVar3 = ppHVar3 + 1;
  }
  local_28 = (HWND)SendMessageW(*(HWND *)(param_1 + 0x20),0x410,0,(LPARAM)local_14);
  local_c.x = (param_2->pt).x;
  local_c.y = (param_2->pt).y;
  if (local_24 - 0x200U < 10) {
    ScreenToClient(local_28,&local_c);
  }
  local_1c = local_c.y << 0x10 | local_c.x & 0xffffU;
  SendMessageW(*(HWND *)(param_1 + 0x20),0x407,0,(LPARAM)&local_28);
  return;
}

