// rea decompile_all
// name: CMFCToolBarSystemMenuButton::OnDraw
// address: 0x100fb4c3
// body: available
// range: 0x100fb4c3-0x100fb55b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBarSystemMenuButton::OnDraw(class CDC *,class CRect
   const &,class CMFCToolBarImages *,int,int,int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCToolBarSystemMenuButton::OnDraw
          (CMFCToolBarSystemMenuButton *this,CDC *param_1,CRect *param_2,CMFCToolBarImages *param_3,
          int param_4,int param_5,int param_6,int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  HDC hdc;
  
  if (*(int *)(this + 0xe8) != 0) {
    iVar1 = GetSystemMetrics(0x37);
    iVar2 = GetSystemMetrics(0x32);
    if (iVar2 < iVar1) {
      iVar1 = 0x32;
    }
    else {
      iVar1 = 0x37;
    }
    iVar1 = GetSystemMetrics(iVar1);
    iVar2 = GetSystemMetrics(0x36);
    iVar3 = GetSystemMetrics(0x31);
    if (iVar3 < iVar2) {
      iVar2 = 0x31;
    }
    else {
      iVar2 = 0x36;
    }
    iVar2 = GetSystemMetrics(iVar2);
    hdc = (HDC)0x0;
    if (param_1 != (CDC *)0x0) {
      hdc = *(HDC *)(param_1 + 4);
    }
    DrawIconEx(hdc,*(int *)param_2,
               ((*(int *)(param_2 + 0xc) - *(int *)(param_2 + 4)) - iVar1) / 2 +
               *(int *)(param_2 + 4),*(HICON *)(this + 0xe8),iVar2,iVar1,0,(HBRUSH)0x0,3);
  }
  return;
}

