// rea decompile_all
// name: CMFCVisualManager::OnFillTab
// address: 0x10090bb9
// body: available
// range: 0x10090bb9-0x10090c86 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnFillTab(class CDC *,class CRect,class
   CBrush *,int,int,class CMFCBaseTabCtrl const *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCVisualManager::OnFillTab(undefined4 param_1_00,int param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  AFX_GLOBAL_DATA *pAVar4;
  int iVar5;
  HBRUSH hbr;
  int in_stack_00000018;
  undefined4 in_stack_0000001c;
  int in_stack_00000020;
  int *in_stack_00000024;
  HDC hDC;
  
  piVar3 = in_stack_00000024;
  iVar2 = in_stack_00000018;
  if (in_stack_00000020 != 0) {
    pAVar4 = GetGlobalData();
    iVar5 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar4);
    if (iVar5 == 0) {
      pcVar1 = *(code **)(*piVar3 + 0x288);
      guard_check_icall();
      iVar5 = (*pcVar1)();
      if (iVar5 == 0) {
        pcVar1 = *(code **)(*piVar3 + 0x28c);
        guard_check_icall();
        iVar5 = (*pcVar1)();
        if (iVar5 == 0) {
          pcVar1 = *(code **)(*piVar3 + 0x290);
          guard_check_icall();
          iVar5 = (*pcVar1)();
          if (iVar5 == 0) goto LAB_10090c65;
        }
      }
      pcVar1 = *(code **)(*piVar3 + 0x1dc);
      guard_check_icall(in_stack_0000001c);
      iVar5 = (*pcVar1)();
      if (iVar5 == -1) {
        pAVar4 = GetGlobalData();
        hbr = (HBRUSH)0x0;
        if (pAVar4 != (AFX_GLOBAL_DATA *)0xffffff38) {
          hbr = *(HBRUSH *)(pAVar4 + 0xcc);
        }
        hDC = *(HDC *)(param_1 + 4);
        goto LAB_10090c78;
      }
    }
  }
LAB_10090c65:
  if (iVar2 == 0) {
    hbr = (HBRUSH)0x0;
  }
  else {
    hbr = *(HBRUSH *)(iVar2 + 4);
  }
  hDC = *(HDC *)(param_1 + 4);
LAB_10090c78:
  FillRect(hDC,(RECT *)&stack0x00000008,hbr);
  return;
}

