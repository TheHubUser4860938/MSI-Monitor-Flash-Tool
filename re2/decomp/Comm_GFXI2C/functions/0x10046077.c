// rea decompile_all
// name: CArchive::MapObject
// address: 0x10046077
// body: available
// range: 0x10046077-0x100461b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10046139 to 0x10038e31 FUN_10038e31 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CArchive::MapObject(class CObject const *)
   
   Library: Visual Studio 2008 Release */

void __thiscall CArchive::MapObject(CArchive *this,CObject *param_1)

{
  CMapPtrToPtr *this_00;
  void **ppvVar1;
  CPtrArray *this_01;
  CMapPtrToPtr *local_1c;
  void *local_18;
  void *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x10046083;
  if ((~(byte)*(undefined4 *)(this + 0x18) & 1) == 0) {
    if (*(int *)(this + 0x38) == 0) {
      local_1c = FUN_10038ad8(0x14);
      local_8 = 1;
      if (local_1c == (CMapPtrToPtr *)0x0) {
        this_01 = (CPtrArray *)0x0;
      }
      else {
        this_01 = (CPtrArray *)CPtrArray::CPtrArray((CPtrArray *)local_1c);
      }
      local_8 = 0xffffffff;
      *(CPtrArray **)(this + 0x38) = this_01;
      CPtrArray::SetSize(this_01,1,*(int *)(this + 0x40));
      if (*(int *)(*(int *)(this + 0x38) + 8) < 1) goto LAB_10046139;
      **(undefined4 **)(*(int *)(this + 0x38) + 4) = 0;
      *(undefined4 *)(this + 0x34) = 1;
      local_14 = (void *)0x0;
      FUN_10045fa3((int)this);
      local_1c = (CMapPtrToPtr *)0x0;
      FUN_10045e45(local_14,0,&local_1c,1);
    }
    if (param_1 == (CObject *)0x0) {
      return;
    }
    CheckCount(this);
    FUN_10046a65(*(void **)(this + 0x38),*(int *)(this + 0x34),param_1,1);
    local_18 = (void *)0x0;
    CMapPtrToPtr::Lookup(*(CMapPtrToPtr **)(this + 0x3c),(void *)0x1,&local_18);
    if (local_18 == (void *)0x0) {
LAB_10046139:
                    /* WARNING: Subroutine does not return */
      FUN_10038e31();
    }
    param_1 = (CObject *)0x2;
    FUN_10045e45(local_18,*(int *)(this + 0x34),&param_1,1);
  }
  else {
    if (*(int *)(this + 0x38) == 0) {
      local_1c = FUN_10038ad8(0x1c);
      local_8 = 0;
      if (local_1c == (CMapPtrToPtr *)0x0) {
        this_00 = (CMapPtrToPtr *)0x0;
      }
      else {
        this_00 = (CMapPtrToPtr *)CMapPtrToPtr::CMapPtrToPtr(local_1c,*(int *)(this + 0x40));
      }
      local_8 = 0xffffffff;
      *(CMapPtrToPtr **)(this + 0x38) = this_00;
      CMapPtrToPtr::InitHashTable(this_00,*(uint *)(this + 0x44),1);
      ppvVar1 = CMapPtrToPtr::operator[](*(CMapPtrToPtr **)(this + 0x38),(void *)0x0);
      *ppvVar1 = (void *)0x0;
      *(undefined4 *)(this + 0x34) = 1;
    }
    if (param_1 == (CObject *)0x0) {
      return;
    }
    CheckCount(this);
    ppvVar1 = CMapPtrToPtr::operator[](*(CMapPtrToPtr **)(this + 0x38),param_1);
    *ppvVar1 = *(void **)(this + 0x34);
  }
  *(int *)(this + 0x34) = *(int *)(this + 0x34) + 1;
  return;
}

