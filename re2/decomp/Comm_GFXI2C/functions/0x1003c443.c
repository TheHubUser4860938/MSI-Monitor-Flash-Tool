// rea decompile_all
// name: CCmdTarget::OnCmdMsg
// address: 0x1003c443
// body: available
// range: 0x1003c443-0x1003c560 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003c45e to 0x10038e31 FUN_10038e31 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CCmdTarget::OnCmdMsg(unsigned int,int,void *,struct
   AFX_CMDHANDLERINFO *)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __thiscall
CCmdTarget::OnCmdMsg
          (CCmdTarget *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  void *pvVar1;
  bool bVar2;
  AFX_MODULE_STATE *pAVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined3 extraout_var;
  uint uVar6;
  int *piVar7;
  AFX_MSGMAP_ENTRY *pAVar8;
  uint uVar9;
  
  if (param_2 == -2) {
    pAVar3 = AfxGetModuleState();
    if (*(int *)(pAVar3 + 0x3c) != 0) {
      pAVar3 = AfxGetModuleState();
      iVar4 = (**(code **)(**(int **)(pAVar3 + 0x3c) + 4))(this,param_1,param_3,param_4);
      return iVar4;
    }
LAB_1003c45e:
                    /* WARNING: Subroutine does not return */
    FUN_10038e31();
  }
  if (param_2 == -3) {
    param_2 = 0;
    if (param_3 != (void *)0x0) {
      pvVar1 = *(void **)((int)param_3 + 0x30);
      puVar5 = (undefined4 *)(**(code **)(*(int *)this + 0x2c))();
      do {
        if (puVar5 == (undefined4 *)0x0) {
          return param_2;
        }
        if (param_2 != 0) {
          return param_2;
        }
        piVar7 = (int *)puVar5[1];
        while (((piVar7[1] != 0 && (piVar7[2] != 0)) && (param_2 == 0))) {
          if (param_1 == piVar7[1]) {
            if (pvVar1 == (void *)0x0) {
              if (*piVar7 == 0) {
LAB_1003c4e0:
                *(int *)((int)param_3 + 4) = piVar7[2];
                param_2 = 1;
              }
            }
            else if (((void *)*piVar7 != (void *)0x0) &&
                    (bVar2 = _IsEqualGUID(pvVar1,(void *)*piVar7), CONCAT31(extraout_var,bVar2) != 0
                    )) goto LAB_1003c4e0;
          }
          piVar7 = piVar7 + 3;
        }
        puVar5 = (undefined4 *)*puVar5;
      } while( true );
    }
    goto LAB_1003c45e;
  }
  if (param_2 != -1) {
    uVar6 = param_2 & 0xffff;
    uVar9 = (uint)param_2 >> 0x10;
    param_2 = uVar6;
    if (uVar9 != 0) goto LAB_1003c51b;
  }
  uVar9 = 0x111;
LAB_1003c51b:
  piVar7 = (int *)(**(code **)(*(int *)this + 0x28))();
  while( true ) {
    if (*piVar7 == 0) {
      return 0;
    }
    pAVar8 = AfxFindMessageEntry((AFX_MSGMAP_ENTRY *)piVar7[1],uVar9,param_2,param_1);
    if (pAVar8 != (AFX_MSGMAP_ENTRY *)0x0) break;
    piVar7 = (int *)(*(code *)*piVar7)();
  }
  iVar4 = _AfxDispatchCmdMsg(this,param_1,param_2,*(_func_void **)(pAVar8 + 0x14),param_3,
                             *(uint *)(pAVar8 + 0x10),param_4);
  return iVar4;
}

