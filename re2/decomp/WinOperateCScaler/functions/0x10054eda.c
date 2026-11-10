// rea decompile_all
// name: CBasePane::SetWindowPos
// address: 0x10054eda
// body: available
// range: 0x10054eda-0x10054f60 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void * __thiscall CBasePane::SetWindowPos(class CWnd const
   *,int,int,int,int,unsigned int,void *)
   
   Library: Visual Studio 2015 Release */

void * __thiscall
CBasePane::SetWindowPos
          (CBasePane *this,CWnd *param_1,int param_2,int param_3,int param_4,int param_5,
          uint param_6,void *param_7)

{
  code *pcVar1;
  HWND hWnd;
  void *pvVar2;
  
  if (param_7 == (void *)0x0) {
    CWnd::SetWindowPos((CWnd *)this,param_1,param_2,param_3,param_4,param_5,param_6);
    pvVar2 = (void *)0x0;
  }
  else {
    if (this == (CBasePane *)0x0) {
      hWnd = (HWND)0x0;
    }
    else {
      hWnd = *(HWND *)(this + 0x20);
    }
    pvVar2 = DeferWindowPos(param_7,hWnd,(HWND)0x0,param_2,param_3,param_4,param_5,param_6);
    if (pvVar2 == (HDWP)0x0) {
      GetLastError();
      pcVar1 = *(code **)(*(int *)this + 0x238);
      guard_check_icall(0,param_2,param_3,param_4,param_5,param_6,0);
      (*pcVar1)();
      pvVar2 = param_7;
    }
  }
  return pvVar2;
}

