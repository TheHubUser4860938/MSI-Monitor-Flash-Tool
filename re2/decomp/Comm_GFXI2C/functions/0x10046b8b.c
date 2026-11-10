// rea decompile_all
// name: CPtrArray::SetSize
// address: 0x10046b8b
// body: available
// range: 0x10046b8b-0x10046cb0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10046b9e to 0x10038e31 FUN_10038e31 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CPtrArray::SetSize(int,int)
   
   Library: Visual Studio 2008 Release */

void __thiscall CPtrArray::SetSize(CPtrArray *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  
  iVar2 = param_1;
  pvVar5 = (void *)0x0;
  if (param_1 < 0) goto LAB_10046b9e;
  if (-1 < param_2) {
    *(int *)(this + 0x10) = param_2;
  }
  if (param_1 == 0) {
    FUN_10038b07(*(void **)(this + 4));
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 8) = 0;
LAB_10046ca7:
    *(void **)(this + 4) = pvVar5;
  }
  else {
    if (*(int *)(this + 4) == 0) {
      pvVar5 = FUN_10038ad8(param_1 << 2);
      *(void **)(this + 4) = pvVar5;
      _memset(pvVar5,0,param_1 << 2);
      *(int *)(this + 0xc) = param_1;
    }
    else {
      iVar1 = *(int *)(this + 0xc);
      if (iVar1 < param_1) {
        iVar4 = *(int *)(this + 0x10);
        if (iVar4 == 0) {
          iVar4 = (int)(*(int *)(this + 8) + (*(int *)(this + 8) >> 0x1f & 7U)) >> 3;
          if (iVar4 < 4) {
LAB_10046c41:
            iVar4 = 4;
          }
          else if (iVar4 < 0x401) {
            if (iVar4 < 4) goto LAB_10046c41;
          }
          else {
            iVar4 = 0x400;
          }
        }
        iVar3 = iVar4 + iVar1;
        if (iVar4 + iVar1 <= param_1) {
          iVar3 = param_1;
        }
        param_1 = iVar3;
        if (param_1 < iVar1) {
LAB_10046b9e:
                    /* WARNING: Subroutine does not return */
          FUN_10038e31();
        }
        pvVar5 = FUN_10038ad8(param_1 << 2);
        FUN_10038b3c(pvVar5,param_1 << 2,*(void **)(this + 4),*(int *)(this + 8) << 2);
        _memset((void *)((int)pvVar5 + *(int *)(this + 8) * 4),0,(iVar2 - *(int *)(this + 8)) * 4);
        FUN_10038b07(*(void **)(this + 4));
        *(int *)(this + 8) = iVar2;
        *(int *)(this + 0xc) = param_1;
        goto LAB_10046ca7;
      }
      iVar2 = *(int *)(this + 8);
      if (iVar2 < param_1) {
        _memset((void *)(*(int *)(this + 4) + iVar2 * 4),0,(param_1 - iVar2) * 4);
      }
    }
    *(int *)(this + 8) = param_1;
  }
  return;
}

