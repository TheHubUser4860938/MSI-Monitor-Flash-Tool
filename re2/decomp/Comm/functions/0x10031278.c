// rea decompile_all
// name: CArchive::ReadObject
// address: 0x10031278
// body: available
// range: 0x10031278-0x100313d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10031297 to 0x1001a365 FUN_1001a365 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x100312f0 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10031359 to 0x10012a59 FUN_10012a59 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  local_8 = 0x10031284;
  if (((byte)this[0x18] & 1) == 0) {
    uVar3 = FUN_10003050();
    uVar7 = 4;
    goto LAB_10031297;
  }
  iVar4 = FUN_10031051(param_1,&local_24,local_18);
  pvVar2 = local_18[0];
  local_1c = (CObject *)0x0;
  if (iVar4 != 0) {
    local_8 = 0;
    pCVar6 = (CObject *)FUN_10019cd8();
    local_1c = pCVar6;
    if (pCVar6 == (CObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10012a59();
    }
    FUN_10030d6d();
    FUN_10032799(*(undefined4 *)(this + 0x34),pCVar6,1);
    local_18[0] = (void *)0x0;
    CMapPtrToPtr::Lookup(*(CMapPtrToPtr **)(this + 0x3c),(void *)0x1,local_18);
    if (local_18[0] != (void *)0x0) {
      local_20 = 2;
      FUN_10030e64(*(undefined4 *)(this + 0x34),&local_20,1);
      local_20 = *(undefined4 *)(this + 0x10);
      *(int *)(this + 0x34) = *(int *)(this + 0x34) + 1;
      *(undefined4 *)(this + 0x10) = local_24;
      pcVar1 = *(code **)(*(int *)pCVar6 + 8);
      guard_check_icall(this);
      (*pcVar1)();
      *(undefined4 *)(this + 0x10) = local_20;
      return pCVar6;
    }
LAB_100312f0:
                    /* WARNING: Subroutine does not return */
    FUN_10012a3f();
  }
  if ((void *)(*(int *)(*(int *)(this + 0x38) + 8) - 1U) < local_18[0]) {
LAB_100312c7:
    uVar3 = FUN_10003050();
    uVar7 = 5;
  }
  else {
    local_18[0] = (void *)0x0;
    iVar4 = CMapPtrToPtr::Lookup(*(CMapPtrToPtr **)(this + 0x3c),(void *)0x1,local_18);
    if (iVar4 != 0) {
      if (local_18[0] == (void *)0x0) goto LAB_100312f0;
      if ((pvVar2 <= (void *)(*(int *)((int)local_18[0] + 8) - 1U)) &&
         (piVar5 = (int *)FUN_100d7168(pvVar2), *piVar5 == 1)) goto LAB_100312c7;
    }
    pCVar6 = (CObject *)FUN_10032c6d(pvVar2);
    if (((pCVar6 == (CObject *)0x0) || (param_1 == (CRuntimeClass *)0x0)) ||
       (iVar4 = FUN_10019d4f(param_1), iVar4 != 0)) {
      return pCVar6;
    }
    uVar3 = FUN_10003050();
    uVar7 = 6;
  }
LAB_10031297:
                    /* WARNING: Subroutine does not return */
  FUN_1001a365(uVar7,uVar3);
}

