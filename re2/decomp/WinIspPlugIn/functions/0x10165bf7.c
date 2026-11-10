// rea decompile_all
// name: CCmdTarget::GetStandardProp
// address: 0x10165bf7
// body: available
// range: 0x10165bf7-0x10165c98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CCmdTarget::GetStandardProp(struct AFX_DISPMAP_ENTRY const *,struct
   tagVARIANT *,unsigned int *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CCmdTarget::GetStandardProp
          (CCmdTarget *this,AFX_DISPMAP_ENTRY *param_1,tagVARIANT *param_2,uint *param_3)

{
  int *piVar1;
  code *pcVar2;
  short sVar3;
  wchar_t *pwVar4;
  int iVar5;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  
  this_00 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
            (this + *(int *)(param_1 + 0x18));
  if (*(short *)(param_1 + 0xc) != 0xc) {
    *(short *)param_2 = *(short *)(param_1 + 0xc);
  }
  switch(*(undefined2 *)(param_1 + 0xc)) {
  case 2:
  case 0x12:
    sVar3 = *(short *)this_00;
    goto LAB_10165c2f;
  case 3:
  case 10:
  case 0x13:
    pwVar4 = *(wchar_t **)this_00;
    goto LAB_10165c37;
  case 4:
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)this_00;
    break;
  case 5:
  case 7:
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)this_00;
    break;
  case 6:
  case 0x14:
  case 0x15:
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)this_00;
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(this_00 + 4);
    break;
  case 8:
    pwVar4 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::AllocSysString
                       (this_00);
LAB_10165c37:
    *(wchar_t **)(param_2 + 8) = pwVar4;
    break;
  case 9:
  case 0xd:
    piVar1 = *(int **)this_00;
    *(int **)(param_2 + 8) = piVar1;
    if (piVar1 != (int *)0x0) {
      pcVar2 = *(code **)(*piVar1 + 4);
      guard_check_icall(piVar1);
      (*pcVar2)();
    }
    break;
  case 0xb:
    sVar3 = -(ushort)(*(int *)this_00 != 0);
LAB_10165c2f:
    *(short *)(param_2 + 8) = sVar3;
    break;
  case 0xc:
    iVar5 = Ordinal_10(param_2,this_00);
    if (iVar5 == 0) {
      return;
    }
  default:
    *param_3 = 0;
    break;
  case 0x10:
  case 0x11:
    *(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)(param_2 + 8) = *this_00;
  }
  return;
}

