// rea decompile_all
// name: CMFCToolBarMenuButton::DrawDocumentIcon
// address: 0x101116c6
// body: available
// range: 0x101116c6-0x1011175f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarMenuButton::DrawDocumentIcon(class CDC *,class CRect const
   &,struct HICON__ *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCToolBarMenuButton::DrawDocumentIcon
          (CMFCToolBarMenuButton *this,CDC *param_1,CRect *param_2,HICON__ *param_3)

{
  AFX_GLOBAL_DATA *pAVar1;
  int iVar2;
  int iVar3;
  HDC hdc;
  int cxWidth;
  int iVar4;
  int cyWidth;
  int local_8;
  
  pAVar1 = GetGlobalData();
  cxWidth = *(int *)(pAVar1 + 0x114);
  pAVar1 = GetGlobalData();
  iVar2 = *(int *)(param_2 + 8) - *(int *)param_2;
  if (cxWidth <= iVar2) {
    iVar4 = *(int *)(param_2 + 4);
    iVar3 = *(int *)(param_2 + 0xc) - iVar4;
    cyWidth = *(int *)(pAVar1 + 0x118);
    if (*(int *)(pAVar1 + 0x118) <= iVar3) goto LAB_1011170d;
  }
  iVar4 = *(int *)(param_2 + 4);
  iVar3 = *(int *)(param_2 + 0xc) - iVar4;
  cxWidth = iVar2;
  cyWidth = iVar3;
LAB_1011170d:
  local_8 = (iVar2 - cxWidth) / 2;
  if (local_8 < 0) {
    local_8 = 0;
  }
  iVar2 = (iVar3 - cyWidth) / 2;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  if (param_1 == (CDC *)0x0) {
    hdc = (HDC)0x0;
  }
  else {
    hdc = *(HDC *)(param_1 + 4);
  }
  DrawIconEx(hdc,local_8 + *(int *)param_2,iVar4 + iVar2,param_3,cxWidth,cyWidth,0,(HBRUSH)0x0,3);
  return;
}

