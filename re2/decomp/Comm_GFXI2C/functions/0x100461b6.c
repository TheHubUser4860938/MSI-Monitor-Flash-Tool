// rea decompile_all
// name: CArchive::WriteClass
// address: 0x100461b6
// body: available
// range: 0x100461b6-0x10046264 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100461cc to 0x1003aa69 FUN_1003aa69 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CArchive::WriteClass(struct CRuntimeClass const *)
   
   Library: Visual Studio 2008 Release */

void __thiscall CArchive::WriteClass(CArchive *this,CRuntimeClass *param_1)

{
  void *pvVar1;
  void **ppvVar2;
  CArchive *extraout_ECX;
  CArchive *this_00;
  undefined4 uVar3;
  short *psVar4;
  
  if (param_1 == (CRuntimeClass *)0x0) {
    psVar4 = *(short **)(this + 0x14);
    uVar3 = 6;
  }
  else {
    if ((~*(uint *)(this + 0x18) & 1) != 0) {
      this_00 = this;
      if (*(int *)(param_1 + 8) == 0xffff) {
        FUN_10038e15();
        this_00 = extraout_ECX;
      }
      MapObject(this_00,(CObject *)0x0);
      ppvVar2 = CMapPtrToPtr::operator[](*(CMapPtrToPtr **)(this + 0x38),param_1);
      pvVar1 = *ppvVar2;
      if (pvVar1 == (void *)0x0) {
        operator<<(this,0xffff);
        CRuntimeClass::Store(param_1,this);
        CheckCount(this);
        ppvVar2 = CMapPtrToPtr::operator[](*(CMapPtrToPtr **)(this + 0x38),param_1);
        *ppvVar2 = *(void **)(this + 0x34);
        *(int *)(this + 0x34) = *(int *)(this + 0x34) + 1;
      }
      else if (pvVar1 < (void *)0x7fff) {
        operator<<(this,(ushort)pvVar1 | 0x8000);
      }
      else {
        operator<<(this,0x7fff);
        operator<<(this,(uint)pvVar1 | 0x80000000);
      }
      return;
    }
    psVar4 = *(short **)(this + 0x14);
    uVar3 = 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1003aa69(uVar3,psVar4);
}

