// rea decompile_all
// name: CArchive::ReadObject
// address: 0x10046537
// body: available
// range: 0x10046537-0x10046678 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10046550 to 0x1003aa69 FUN_1003aa69 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x100465a3 to 0x10038e31 FUN_10038e31 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10046606 to 0x10038df9 FUN_10038df9 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: class CObject * __thiscall CArchive::ReadObject(struct CRuntimeClass const *)
   
   Library: Visual Studio 2008 Release */

CObject * __thiscall CArchive::ReadObject(CArchive *this,CRuntimeClass *param_1)

{
  CRuntimeClass *this_00;
  int iVar1;
  int *piVar2;
  CObject *pCVar3;
  undefined4 uVar4;
  short *psVar5;
  uint local_20;
  ulong local_1c;
  CObject *local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x10046543;
  if (((byte)this[0x18] & 1) == 0) {
    psVar5 = *(short **)(this + 0x14);
    uVar4 = 4;
    goto LAB_10046550;
  }
  this_00 = ReadClass(this,param_1,&local_20,&local_1c);
  local_18[0] = (CObject *)0x0;
  if (this_00 != (CRuntimeClass *)0x0) {
    local_8 = 0;
    pCVar3 = CRuntimeClass::CreateObject(this_00);
    local_18[0] = pCVar3;
    if (pCVar3 == (CObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10038df9();
    }
    CheckCount(this);
    FUN_10046a65(*(void **)(this + 0x38),*(int *)(this + 0x34),pCVar3,1);
    param_1 = (CRuntimeClass *)0x0;
    CMapPtrToPtr::Lookup(*(CMapPtrToPtr **)(this + 0x3c),(void *)0x1,&param_1);
    if (param_1 != (CRuntimeClass *)0x0) {
      local_1c = 2;
      FUN_10045e45(param_1,*(int *)(this + 0x34),&local_1c,1);
      uVar4 = *(undefined4 *)(this + 0x10);
      *(int *)(this + 0x34) = *(int *)(this + 0x34) + 1;
      *(uint *)(this + 0x10) = local_20;
      (**(code **)(*(int *)pCVar3 + 8))(this);
      *(undefined4 *)(this + 0x10) = uVar4;
      return pCVar3;
    }
LAB_100465a3:
                    /* WARNING: Subroutine does not return */
    FUN_10038e31();
  }
  if (*(int *)(*(int *)(this + 0x38) + 8) - 1U < local_1c) {
LAB_10046580:
    psVar5 = *(short **)(this + 0x14);
    uVar4 = 5;
  }
  else {
    local_18[0] = (CObject *)0x0;
    iVar1 = CMapPtrToPtr::Lookup(*(CMapPtrToPtr **)(this + 0x3c),(void *)0x1,local_18);
    if (iVar1 != 0) {
      if (local_18[0] == (CObject *)0x0) goto LAB_100465a3;
      if ((local_1c <= *(int *)(local_18[0] + 8) - 1U) &&
         (piVar2 = (int *)FUN_10045c9d(local_18[0],local_1c), *piVar2 == 1)) goto LAB_10046580;
    }
    pCVar3 = (CObject *)FUN_10045cbe(*(void **)(this + 0x38),local_1c);
    if (((pCVar3 == (CObject *)0x0) || (param_1 == (CRuntimeClass *)0x0)) ||
       (iVar1 = CObject::IsKindOf(pCVar3,param_1), iVar1 != 0)) {
      return pCVar3;
    }
    psVar5 = *(short **)(this + 0x14);
    uVar4 = 6;
  }
LAB_10046550:
                    /* WARNING: Subroutine does not return */
  FUN_1003aa69(uVar4,psVar5);
}

