// rea decompile_all
// name: CMFCVisualManager::OnFillCommandsListBackground
// address: 0x10091ffa
// body: available
// range: 0x10091ffa-0x100920da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual unsigned long __thiscall CMFCVisualManager::OnFillCommandsListBackground(class
   CDC *,class CRect,int)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall
CMFCVisualManager::OnFillCommandsListBackground
          (undefined4 param_1_00,int param_1,int param_3,int param_4,int param_5,int param_6,
          int param_7)

{
  AFX_GLOBAL_DATA *pAVar1;
  HBRUSH pHVar2;
  ulong uVar3;
  
  pAVar1 = GetGlobalData();
  if (param_7 == 0) {
    pHVar2 = (HBRUSH)0x0;
    if (pAVar1 != (AFX_GLOBAL_DATA *)0xffffff30) {
      pHVar2 = *(HBRUSH *)(pAVar1 + 0xd4);
    }
    FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_3,pHVar2);
    pAVar1 = GetGlobalData();
    uVar3 = *(ulong *)(pAVar1 + 0x68);
  }
  else {
    pHVar2 = (HBRUSH)0x0;
    if (pAVar1 != (AFX_GLOBAL_DATA *)0xffffff60) {
      pHVar2 = *(HBRUSH *)(pAVar1 + 0xa4);
    }
    FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_3,pHVar2);
    InflateRect((LPRECT)&param_3,-1,-1);
    param_5 = param_5 + -1;
    param_6 = param_6 + -1;
    PatBlt(*(HDC *)(param_1 + 4),param_3,param_4 + 1,1,param_6 - param_4,0x5a0049);
    PatBlt(*(HDC *)(param_1 + 4),param_3,param_4,param_5 - param_3,1,0x5a0049);
    PatBlt(*(HDC *)(param_1 + 4),param_5,param_4,1,param_6 - param_4,0x5a0049);
    PatBlt(*(HDC *)(param_1 + 4),param_3 + 1,param_6,param_5 - param_3,1,0x5a0049);
    pAVar1 = GetGlobalData();
    uVar3 = *(ulong *)(pAVar1 + 0x40);
  }
  return uVar3;
}

