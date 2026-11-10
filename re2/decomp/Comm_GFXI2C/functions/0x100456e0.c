// rea decompile_all
// name: CMapPtrToPtr::GetNextAssoc
// address: 0x100456e0
// body: available
// range: 0x100456e0-0x1004575c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004570f to 0x10038e31 FUN_10038e31 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMapPtrToPtr::GetNextAssoc(struct __POSITION * &,void * &,void * &)const
   
   
   Library: Visual Studio 2008 Release */

void __thiscall
CMapPtrToPtr::GetNextAssoc(CMapPtrToPtr *this,__POSITION **param_1,void **param_2,void **param_3)

{
  int *piVar1;
  uint uVar2;
  __POSITION *p_Var3;
  uint uVar4;
  __POSITION *p_Var5;
  
  p_Var3 = *param_1;
  if (p_Var3 != (__POSITION *)0x0) {
    if (p_Var3 == (__POSITION *)0xffffffff) {
      uVar4 = 0;
      if (*(uint *)(this + 8) != 0) {
        piVar1 = *(int **)(this + 4);
        while (p_Var3 = (__POSITION *)*piVar1, p_Var3 == (__POSITION *)0x0) {
          uVar4 = uVar4 + 1;
          piVar1 = piVar1 + 1;
          if (*(uint *)(this + 8) <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_10038e31();
          }
        }
      }
    }
    p_Var5 = *(__POSITION **)p_Var3;
    if (p_Var5 == (__POSITION *)0x0) {
      uVar4 = *(uint *)(this + 8);
      uVar2 = (*(uint *)(p_Var3 + 4) >> 4) % uVar4 + 1;
      if (uVar2 < uVar4) {
        piVar1 = (int *)(*(int *)(this + 4) + uVar2 * 4);
        do {
          p_Var5 = (__POSITION *)*piVar1;
          if (p_Var5 != (__POSITION *)0x0) break;
          uVar2 = uVar2 + 1;
          piVar1 = piVar1 + 1;
        } while (uVar2 < uVar4);
      }
    }
    *param_1 = p_Var5;
    *param_2 = *(void **)(p_Var3 + 4);
    *param_3 = *(void **)(p_Var3 + 8);
  }
  return;
}

