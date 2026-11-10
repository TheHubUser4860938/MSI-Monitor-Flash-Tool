// rea decompile_all
// name: CArchive::ReadObject
// address: 0x1005c9e9
// body: available
// range: 0x1005c9e9-0x1005cb44 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005ca08 to 0x1004e3b5 FUN_1004e3b5 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1005ca61 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1005caca to 0x10048884 FUN_10048884 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: class CObject * __thiscall CArchive::ReadObject(struct CRuntimeClass const *)
   
   Library: Visual Studio 2015 Release */

CObject * __thiscall CArchive::ReadObject(CArchive *this,CRuntimeClass *param_1)

{
  code *pcVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  CObject *pCVar6;
  undefined4 uVar7;
  undefined4 local_24;
  undefined4 local_20;
  CObject *local_1c;
  void *local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x1005c9f5;
  if (((byte)this[0x18] & 1) == 0) {
    uVar3 = FUN_10034ad0();
    uVar7 = 4;
    goto LAB_1005ca08;
  }
  iVar4 = FUN_1005c7c2(param_1,&local_24,local_18);
  pvVar2 = local_18[0];
  local_1c = (CObject *)0x0;
  if (iVar4 != 0) {
    local_8 = 0;
    pCVar6 = (CObject *)FUN_1004e514();
    local_1c = pCVar6;
    if (pCVar6 == (CObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10048884();
    }
    FUN_1005c4de();
    FUN_10067c9f(*(undefined4 *)(this + 0x34),pCVar6,1);
    local_18[0] = (void *)0x0;
    CMapPtrToPtr::Lookup(*(CMapPtrToPtr **)(this + 0x3c),(void *)0x1,local_18);
    if (local_18[0] != (void *)0x0) {
      local_20 = 2;
      FUN_1005c5d5(*(undefined4 *)(this + 0x34),&local_20,1);
      local_20 = *(undefined4 *)(this + 0x10);
      *(int *)(this + 0x34) = *(int *)(this + 0x34) + 1;
      *(undefined4 *)(this + 0x10) = local_24;
      pcVar1 = *(code **)(*(int *)pCVar6 + 8);
      guard_check_icall(this);
      (*pcVar1)();
      *(undefined4 *)(this + 0x10) = local_20;
      return pCVar6;
    }
LAB_1005ca61:
                    /* WARNING: Subroutine does not return */
    FUN_1004886a();
  }
  if ((void *)(*(int *)(*(int *)(this + 0x38) + 8) - 1U) < local_18[0]) {
LAB_1005ca38:
    uVar3 = FUN_10034ad0();
    uVar7 = 5;
  }
  else {
    local_18[0] = (void *)0x0;
    iVar4 = CMapPtrToPtr::Lookup(*(CMapPtrToPtr **)(this + 0x3c),(void *)0x1,local_18);
    if (iVar4 != 0) {
      if (local_18[0] == (void *)0x0) goto LAB_1005ca61;
      if ((pvVar2 <= (void *)(*(int *)((int)local_18[0] + 8) - 1U)) &&
         (piVar5 = (int *)FUN_10151a1d(pvVar2), *piVar5 == 1)) goto LAB_1005ca38;
    }
    pCVar6 = (CObject *)FUN_10067dc8(pvVar2);
    if (((pCVar6 == (CObject *)0x0) || (param_1 == (CRuntimeClass *)0x0)) ||
       (iVar4 = FUN_1004e58b(param_1), iVar4 != 0)) {
      return pCVar6;
    }
    uVar3 = FUN_10034ad0();
    uVar7 = 6;
  }
LAB_1005ca08:
                    /* WARNING: Subroutine does not return */
  FUN_1004e3b5(uVar7,uVar3);
}

