// rea decompile_all
// name: CDockingManager::DeterminePaneAndStatus
// address: 0x100e3922
// body: available
// range: 0x100e3922-0x100e3b0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual enum AFX_CS_STATUS __thiscall CDockingManager::DeterminePaneAndStatus(class
   CPoint,int,unsigned long,class CBasePane * *,class CBasePane const *,class CBasePane const *)
   
   Library: Visual Studio 2015 Release */

AFX_CS_STATUS __thiscall
CDockingManager::DeterminePaneAndStatus
          (CDockingManager *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          uint param_5,int *param_6,undefined4 param_7,int *param_8)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  CObject *pCVar5;
  uint uVar6;
  AFX_CS_STATUS AVar7;
  undefined4 local_c;
  uint local_8;
  
  iVar2 = *(int *)this;
  guard_check_icall(param_2,param_3,param_4,1,&PTR_s_CDockablePane_1023db9c,1,param_7);
  iVar2 = (**(code **)(iVar2 + 0x10))();
  *param_6 = iVar2;
  if (iVar2 == 0) {
    pcVar1 = *(code **)(*(int *)this + 0x14);
    guard_check_icall(param_2,param_3,0,1);
    piVar3 = (int *)(*pcVar1)();
    if (piVar3 != (int *)0x0) {
      pcVar1 = *(code **)(*param_8 + 0x228);
      guard_check_icall(0);
      piVar4 = (int *)(*pcVar1)();
      if (piVar4 != piVar3) {
        pcVar1 = *(code **)(*piVar3 + 0x1ec);
        guard_check_icall(param_2,param_3,1);
        iVar2 = (*pcVar1)();
        if (iVar2 == 2) {
          pcVar1 = *(code **)(*piVar3 + 0x1a4);
          guard_check_icall();
          iVar2 = (*pcVar1)();
          if (iVar2 == 1) {
            pcVar1 = *(code **)(*piVar3 + 0x1ac);
            guard_check_icall();
            pCVar5 = (CObject *)(*pcVar1)();
            pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_101de5b4,pCVar5);
            *param_6 = (int)pCVar5;
            return 3;
          }
        }
      }
    }
  }
  if ((int *)*param_6 == (int *)0x0) goto LAB_100e3ad2;
  pcVar1 = *(code **)(*(int *)*param_6 + 0x228);
  guard_check_icall(0);
  iVar2 = (*pcVar1)();
  if (iVar2 == 0) {
LAB_100e3a56:
    pcVar1 = *(code **)(*(int *)*param_6 + 0x228);
    guard_check_icall(0);
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) goto LAB_100e3ad2;
  }
  else {
    pcVar1 = *(code **)(*param_8 + 0x1c0);
    guard_check_icall();
    uVar6 = (*pcVar1)();
    if ((uVar6 & 0x40) == 0) goto LAB_100e3a56;
    pcVar1 = *(code **)(*(int *)*param_6 + 0x1c0);
    guard_check_icall();
    uVar6 = (*pcVar1)();
    if ((uVar6 & 0x40) == 0) goto LAB_100e3a56;
  }
  pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1023db9c,(CObject *)*param_6);
  if (pCVar5 != (CObject *)0x0) {
    pcVar1 = *(code **)(*(int *)pCVar5 + 0x170);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 == 0) {
      pcVar1 = *(code **)(*(int *)pCVar5 + 0x194);
      guard_check_icall();
      uVar6 = (*pcVar1)();
      if ((param_5 & uVar6) == 0) {
        return 0;
      }
    }
    pcVar1 = *(code **)(*(int *)pCVar5 + 0x348);
    guard_check_icall(param_2,param_3,param_4);
    AVar7 = (*pcVar1)();
    return AVar7;
  }
LAB_100e3ad2:
  *param_6 = 0;
  local_c = 0;
  local_8 = 0;
  iVar2 = IsPointNearDockSite(this,param_2,param_3,&local_8,&local_c);
  if ((iVar2 != 0) && ((param_5 & local_8) != 0)) {
    return 2;
  }
  return 0;
}

