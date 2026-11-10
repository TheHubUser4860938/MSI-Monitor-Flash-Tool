// rea decompile_all
// name: CArchive::ReadClass
// address: 0x10046265
// body: available
// range: 0x10046265-0x10046458 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004627d to 0x1003aa69 FUN_1003aa69 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10046385 to 0x10038e31 FUN_10038e31 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: struct CRuntimeClass * __thiscall CArchive::ReadClass(struct CRuntimeClass const
   *,unsigned int *,unsigned long *)
   
   Library: Visual Studio 2008 Release */

CRuntimeClass * __thiscall
CArchive::ReadClass(CArchive *this,CRuntimeClass *param_1,uint *param_2,ulong *param_3)

{
  void *pvVar1;
  CRuntimeClass *this_00;
  void **ppvVar2;
  int *piVar3;
  int iVar4;
  CArchive *extraout_ECX;
  CArchive *this_01;
  uint uVar5;
  undefined4 in_stack_ffffffd4;
  short *psVar6;
  void *local_14;
  uint local_10;
  void *local_c;
  void *local_8;
  
  if (((byte)this[0x18] & 1) == 0) {
    psVar6 = (short *)0x1;
    goto LAB_1004627d;
  }
  this_01 = this;
  if ((param_1 != (CRuntimeClass *)0x0) && (*(int *)(param_1 + 8) == 0xffff)) {
    FUN_10038e15();
    this_01 = extraout_ECX;
  }
  MapObject(this_01,(CObject *)0x0);
  operator>>(this,(ushort *)&local_8);
  if ((short)local_8 == 0x7fff) {
    operator>>(this,&local_10);
  }
  else {
    local_10 = ((uint)local_8 & 0x8000) << 0x10 | (uint)local_8 & 0x7fff;
  }
  if ((local_10 & 0x80000000) == 0) {
    if (param_3 != (ulong *)0x0) {
      *param_3 = local_10;
      return (CRuntimeClass *)0x0;
    }
  }
  else {
    if ((short)local_8 == -1) {
      in_stack_ffffffd4 = 0x10046311;
      this_00 = CRuntimeClass::Load(this,(uint *)&local_c);
      if (this_00 != (CRuntimeClass *)0x0) {
        if ((void *)(*(uint *)(this_00 + 8) & 0x7fffffff) != local_c) {
          if ((*(uint *)(this_00 + 8) & 0x80000000) == 0) {
            psVar6 = (short *)0x7;
            goto LAB_1004627d;
          }
          FUN_10045fa3((int)this);
          pvVar1 = local_c;
          ppvVar2 = CMapPtrToPtr::operator[](*(CMapPtrToPtr **)(this + 0x3c),this_00);
          *ppvVar2 = pvVar1;
        }
        CheckCount(this);
        FUN_10046a65(*(void **)(this + 0x38),*(int *)(this + 0x34),this_00,1);
        local_14 = (void *)0x0;
        CMapPtrToPtr::Lookup(*(CMapPtrToPtr **)(this + 0x3c),(void *)0x1,&local_14);
        if (local_14 == (void *)0x0) goto LAB_10046385;
        local_8 = (void *)0x1;
        FUN_10045e45(local_14,*(int *)(this + 0x34),&local_8,1);
        *(int *)(this + 0x34) = *(int *)(this + 0x34) + 1;
LAB_1004641b:
        if ((param_1 == (CRuntimeClass *)0x0) ||
           (iVar4 = CRuntimeClass::IsDerivedFrom(this_00,param_1), iVar4 != 0)) {
          if (param_2 == (uint *)0x0) {
            *(void **)(this + 0x10) = local_c;
          }
          else {
            *param_2 = (uint)local_c;
          }
          if (param_3 != (ulong *)0x0) {
            *param_3 = local_10;
          }
          return this_00;
        }
      }
      psVar6 = *(short **)(this + 0x14);
      in_stack_ffffffd4 = 6;
      goto LAB_1004627d;
    }
    uVar5 = local_10 & 0x7fffffff;
    if ((uVar5 != 0) && (uVar5 <= *(int *)(*(int *)(this + 0x38) + 8) - 1U)) {
      local_8 = (void *)0x0;
      in_stack_ffffffd4 = 0x100463d1;
      CMapPtrToPtr::Lookup(*(CMapPtrToPtr **)(this + 0x3c),(void *)0x1,&local_8);
      if (local_8 == (void *)0x0) {
LAB_10046385:
                    /* WARNING: Subroutine does not return */
        FUN_10038e31();
      }
      piVar3 = (int *)FUN_10045c9d(local_8,uVar5);
      if (*piVar3 != 2) {
        this_00 = (CRuntimeClass *)FUN_10045cbe(*(void **)(this + 0x38),uVar5);
        local_c = (void *)0x0;
        if ((*(CMapPtrToPtr **)(this + 0x3c) == (CMapPtrToPtr *)0x0) ||
           (iVar4 = CMapPtrToPtr::Lookup(*(CMapPtrToPtr **)(this + 0x3c),this_00,&local_8),
           local_c = local_8, iVar4 == 0)) {
          local_c = (void *)(*(uint *)(this_00 + 8) & 0x7fffffff);
        }
        goto LAB_1004641b;
      }
    }
  }
  psVar6 = (short *)0x5;
LAB_1004627d:
                    /* WARNING: Subroutine does not return */
  FUN_1003aa69(in_stack_ffffffd4,psVar6);
}

