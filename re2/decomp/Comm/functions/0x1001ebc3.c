// rea decompile_all
// name: CWnd::OnTouchInputs
// address: 0x1001ebc3
// body: available
// range: 0x1001ebc3-0x1001ec3d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CWnd::OnTouchInputs(unsigned int,struct tagTOUCHINPUT *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CWnd::OnTouchInputs(CWnd *this,uint param_1,tagTOUCHINPUT *param_2)

{
  code *pcVar1;
  CWnd *pCVar2;
  int iVar3;
  uint uVar4;
  tagPOINT local_10;
  CWnd *local_8;
  
  uVar4 = 0;
  local_8 = this;
  if (param_1 != 0) {
    do {
      pCVar2 = local_8;
      local_10.x = *(int *)param_2 / 100;
      local_10.y = *(int *)(param_2 + 4) / 100;
      ::ScreenToClient(*(HWND *)(local_8 + 0x20),&local_10);
      pcVar1 = *(code **)(*(int *)pCVar2 + 300);
      guard_check_icall(local_10.x,local_10.y,uVar4,param_1,param_2);
      iVar3 = (*pcVar1)();
      if (iVar3 == 0) {
        return 0;
      }
      uVar4 = uVar4 + 1;
      param_2 = param_2 + 0x28;
    } while (uVar4 < param_1);
  }
  return 1;
}

