// rea decompile_all
// name: ATL::AtlInternalQueryInterface
// address: 0x1005391d
// body: available
// range: 0x1005391d-0x100539cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    long __stdcall ATL::AtlInternalQueryInterface(void *,struct ATL::_ATL_INTMAP_ENTRY const
   *,struct _GUID const &,void * *)
   
   Library: Visual Studio 2015 Release */

long ATL::AtlInternalQueryInterface
               (void *param_1,_ATL_INTMAP_ENTRY *param_2,_GUID *param_3,void **param_4)

{
  code *pcVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  if ((param_1 == (void *)0x0) || (param_2 == (_ATL_INTMAP_ENTRY *)0x0)) {
    lVar2 = -0x7ff8ffa9;
  }
  else if (param_4 == (void **)0x0) {
    lVar2 = -0x7fffbffd;
  }
  else {
    iVar3 = InlineIsEqualUnknown(param_3);
    if (iVar3 == 0) {
      for (; pcVar1 = *(code **)(param_2 + 8), pcVar1 != (code *)0x0; param_2 = param_2 + 0xc) {
        iVar3 = *(int *)param_2;
        if (iVar3 == 0) {
LAB_10053986:
          if (pcVar1 == (code *)0x1) goto LAB_10053953;
          guard_check_icall(param_1,param_3,param_4,*(int *)(param_2 + 4));
          lVar2 = (*pcVar1)();
          if (lVar2 == 0) goto LAB_1005396a;
          if ((iVar3 != 0) && (lVar2 < 0)) goto LAB_100539bb;
        }
        else {
          iVar4 = _InlineIsEqualGUID(iVar3,param_3);
          if (iVar4 != 0) goto LAB_10053986;
        }
      }
      lVar2 = -0x7fffbffe;
LAB_100539bb:
      *param_4 = (void *)0x0;
    }
    else {
LAB_10053953:
      piVar5 = (int *)(*(int *)(param_2 + 4) + (int)param_1);
      pcVar1 = *(code **)(*piVar5 + 4);
      guard_check_icall(piVar5);
      (*pcVar1)();
      *param_4 = piVar5;
LAB_1005396a:
      lVar2 = 0;
    }
  }
  return lVar2;
}

