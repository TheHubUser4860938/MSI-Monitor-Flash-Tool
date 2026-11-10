// rea decompile_all
// name: CDockablePane::CalcRectForSliding
// address: 0x1012a2b5
// body: available
// range: 0x1012a2b5-0x1012a47b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CDockablePane::CalcRectForSliding(class CRect &,class CRect &,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CDockablePane::CalcRectForSliding(CDockablePane *this,CRect *param_1,CRect *param_2,int param_3)

{
  CRect *pCVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  
  pcVar2 = *(code **)(*(int *)this + 0x1dc);
  guard_check_icall();
  iVar4 = (*pcVar2)();
  if (iVar4 == 0) {
    return;
  }
  pcVar2 = *(code **)(*(int *)this + 0x194);
  guard_check_icall();
  iVar4 = (*pcVar2)();
  if (iVar4 != 0x1000) {
    if (iVar4 != 0x2000) {
      if (iVar4 == 0x4000) {
        if (param_3 == 0) {
          *(int *)param_1 = *(int *)param_1 + *(int *)(this + 0x308);
          if (*(int *)(param_1 + 8) < *(int *)param_1) {
            *(int *)param_1 = *(int *)(param_1 + 8);
          }
        }
        else {
          *(int *)param_1 = *(int *)param_1 - *(int *)(this + 0x308);
          if (*(int *)(this + 0x314) - *(int *)(this + 0x30c) <
              *(int *)(param_1 + 8) - *(int *)param_1) {
            *(int *)param_1 =
                 (*(int *)(param_1 + 8) - *(int *)(this + 0x314)) + *(int *)(this + 0x30c);
          }
        }
        iVar4 = *(int *)param_1;
        iVar3 = *(int *)(param_2 + 8);
        *(int *)(param_2 + 8) = iVar4;
        *(int *)param_2 = iVar4 - (iVar3 - *(int *)param_2);
        return;
      }
      if (iVar4 != 0x8000) {
        return;
      }
      pCVar1 = param_1 + 4;
      if (param_3 == 0) {
        *(int *)pCVar1 = *(int *)pCVar1 + *(int *)(this + 0x308);
        iVar4 = *(int *)(param_1 + 0xc);
        if (*(int *)pCVar1 <= iVar4) goto LAB_1012a358;
      }
      else {
        *(int *)pCVar1 = *(int *)pCVar1 - *(int *)(this + 0x308);
        if (*(int *)(param_1 + 0xc) - *(int *)pCVar1 <=
            *(int *)(this + 0x318) - *(int *)(this + 0x310)) goto LAB_1012a358;
        iVar4 = (*(int *)(this + 0x310) - *(int *)(this + 0x318)) + *(int *)(param_1 + 0xc);
      }
      *(int *)pCVar1 = iVar4;
LAB_1012a358:
      iVar4 = *(int *)pCVar1;
      iVar3 = *(int *)(param_2 + 0xc);
      *(int *)(param_2 + 0xc) = iVar4;
      *(int *)(param_2 + 4) = iVar4 - (iVar3 - *(int *)(param_2 + 4));
      return;
    }
    pCVar1 = param_1 + 0xc;
    if (param_3 == 0) {
      *(int *)pCVar1 = *(int *)pCVar1 - *(int *)(this + 0x308);
      iVar4 = *(int *)(param_1 + 4);
      if (iVar4 <= *(int *)pCVar1) goto LAB_1012a40e;
    }
    else {
      *(int *)pCVar1 = *(int *)pCVar1 + *(int *)(this + 0x308);
      if (*(int *)pCVar1 - *(int *)(param_1 + 4) <= *(int *)(this + 0x318) - *(int *)(this + 0x310))
      goto LAB_1012a40e;
      iVar4 = (*(int *)(this + 0x318) - *(int *)(this + 0x310)) + *(int *)(param_1 + 4);
    }
    *(int *)pCVar1 = iVar4;
LAB_1012a40e:
    iVar4 = *(int *)pCVar1;
    iVar3 = *(int *)(param_2 + 4);
    *(int *)(param_2 + 4) = iVar4;
    *(int *)(param_2 + 0xc) = iVar4 + (*(int *)(param_2 + 0xc) - iVar3);
    return;
  }
  pCVar1 = param_1 + 8;
  if (param_3 == 0) {
    *(int *)pCVar1 = *(int *)pCVar1 - *(int *)(this + 0x308);
    iVar4 = *(int *)param_1;
    if (iVar4 <= *(int *)pCVar1) goto LAB_1012a465;
  }
  else {
    *(int *)pCVar1 = *(int *)pCVar1 + *(int *)(this + 0x308);
    if (*(int *)pCVar1 - *(int *)param_1 <= *(int *)(this + 0x314) - *(int *)(this + 0x30c))
    goto LAB_1012a465;
    iVar4 = (*(int *)(this + 0x314) - *(int *)(this + 0x30c)) + *(int *)param_1;
  }
  *(int *)pCVar1 = iVar4;
LAB_1012a465:
  iVar4 = *(int *)pCVar1;
  iVar3 = *(int *)param_2;
  *(int *)param_2 = iVar4;
  *(int *)(param_2 + 8) = iVar4 + (*(int *)(param_2 + 8) - iVar3);
  return;
}

