// rea decompile_all
// name: OnDrawExpandingBox
// address: 0x1011dce0
// body: available
// range: 0x1011dce0-0x1011dd36 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual void __thiscall CMFCVisualManagerOffice2003::OnDrawExpandingBox(class CDC
   *,class CRect,int,unsigned long)
    public: virtual void __thiscall CMFCVisualManagerWindows::OnDrawExpandingBox(class CDC *,class
   CRect,int,unsigned long)
   
   Library: Visual Studio 2015 Release */

void OnDrawExpandingBox(int param_1,LONG param_2,LONG param_3,LONG param_4,LONG param_5,int param_6,
                       undefined4 param_7)

{
  CMFCVisualManager *in_ECX;
  HDC hdc;
  
  if (*(int *)(in_ECX + 0x2c) == 0) {
    CMFCVisualManager::OnDrawExpandingBox
              (in_ECX,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    if (param_1 == 0) {
      hdc = (HDC)0x0;
    }
    else {
      hdc = *(HDC *)(param_1 + 4);
    }
    DrawThemeBackground(*(HTHEME *)(in_ECX + 0x2c),hdc,2,(param_6 != 0) + 1,(LPCRECT)&param_2,
                        (LPCRECT)0x0);
  }
  return;
}

