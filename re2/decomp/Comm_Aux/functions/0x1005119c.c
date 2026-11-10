// rea decompile_all
// name: CWnd::GetScrollRange
// address: 0x1005119c
// body: available
// range: 0x1005119c-0x100511d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CWnd::GetScrollRange(int,int *,int *)const 
   
   Library: Visual Studio 2015 Release */

void __thiscall CWnd::GetScrollRange(CWnd *this,int param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  int iVar2;
  HWND hWnd;
  
  pcVar1 = *(code **)(*(int *)this + 0x78);
  guard_check_icall(param_1);
  iVar2 = (*pcVar1)();
  if (iVar2 == 0) {
    hWnd = *(HWND *)(this + 0x20);
  }
  else {
    param_1 = 2;
    hWnd = *(HWND *)(iVar2 + 0x20);
  }
  ::GetScrollRange(hWnd,param_1,param_2,param_3);
  return;
}

