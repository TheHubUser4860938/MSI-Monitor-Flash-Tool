// rea decompile_all
// name: CCmdTarget::SetStandardProp
// address: 0x4da79b
// body: available
// range: 0x4da79b-0x4da8f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: long __thiscall CCmdTarget::SetStandardProp(struct AFX_DISPMAP_ENTRY const *,struct
   tagDISPPARAMS *,unsigned int *)
   
   Library: Visual Studio 2015 Release */

long __thiscall
CCmdTarget::SetStandardProp
          (CCmdTarget *this,AFX_DISPMAP_ENTRY *param_1,tagDISPPARAMS *param_2,uint *param_3)

{
  short sVar1;
  code *pcVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *pCVar6;
  short *psVar7;
  short local_2c [8];
  CCmdTarget *local_1c;
  int iVar8;
  
  iVar8 = 0;
  local_1c = this;
  FUN_004c8e1e(local_2c);
  psVar7 = *(short **)param_2;
  sVar1 = *(short *)(param_1 + 0xc);
  if ((sVar1 != 0xc) && (*psVar7 != sVar1)) {
    iVar8 = Ordinal_12(local_2c,psVar7,0,sVar1);
    if (iVar8 < 0) {
      *param_3 = 0;
      return iVar8;
    }
    psVar7 = local_2c;
  }
  pCVar6 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
           (local_1c + *(int *)(param_1 + 0x18));
  switch(*(undefined2 *)(param_1 + 0xc)) {
  case 2:
  case 0x12:
    *(short *)pCVar6 = psVar7[4];
    break;
  case 4:
    *(undefined4 *)pCVar6 = *(undefined4 *)(psVar7 + 4);
    break;
  case 5:
  case 7:
    *(undefined8 *)pCVar6 = *(undefined8 *)(psVar7 + 4);
    break;
  case 6:
  case 0x14:
  case 0x15:
    *(undefined4 *)pCVar6 = *(undefined4 *)(psVar7 + 4);
    *(undefined4 *)(pCVar6 + 4) = *(undefined4 *)(psVar7 + 6);
    break;
  case 8:
    AfxBSTR2CString(pCVar6,*(wchar_t **)(psVar7 + 4));
    break;
  case 9:
  case 0xd:
    piVar3 = *(int **)(psVar7 + 4);
    if (piVar3 != (int *)0x0) {
      pcVar2 = *(code **)(*piVar3 + 4);
      guard_check_icall(piVar3);
      (*pcVar2)();
    }
    _AfxRelease((IUnknown **)pCVar6);
  case 3:
  case 10:
  case 0x13:
    uVar4 = *(uint *)(psVar7 + 4);
    goto LAB_004da86a;
  case 0xb:
    uVar4 = (uint)(psVar7[4] != 0);
LAB_004da86a:
    *(uint *)pCVar6 = uVar4;
    break;
  case 0xc:
    iVar5 = Ordinal_10(pCVar6,psVar7);
    if (iVar5 != 0) {
      *param_3 = 0;
    }
    break;
  default:
    iVar8 = -0x7ffdfff8;
    *param_3 = 0;
    break;
  case 0x10:
  case 0x11:
    *pCVar6 = *(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)(psVar7 + 4);
  }
  Ordinal_9(local_2c);
  if ((-1 < iVar8) && (*(int *)(param_1 + 0x14) != 0)) {
    FUN_00434a7a(*(undefined4 *)(local_1c + 0x1c));
    pcVar2 = *(code **)(param_1 + 0x14);
    guard_check_icall();
    (*pcVar2)();
    guard_check_icall();
  }
  return iVar8;
}

