// rea decompile_all
// name: SetSize
// address: 0x10045d0a
// body: available
// range: 0x10045d0a-0x10045e44 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10045d1a to 0x10038e31 FUN_10038e31 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall CArray<int,int const &>::SetSize(int,int)
    public: void __thiscall CArray<struct HWND__ *,struct HWND__ *>::SetSize(int,int)
    public: void __thiscall CArray<enum CArchive::LoadArrayObjType,enum CArchive::LoadArrayObjType
   const &>::SetSize(int,int)
   
   Library: Visual Studio 2008 Release */

void __thiscall SetSize(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_1;
  if (param_1 < 0) {
LAB_10045d1a:
                    /* WARNING: Subroutine does not return */
    FUN_10038e31();
  }
  if (-1 < param_2) {
    *(int *)((int)this + 0x10) = param_2;
  }
  if (param_1 == 0) {
    if (*(void **)((int)this + 4) != (void *)0x0) {
      FUN_10038b07(*(void **)((int)this + 4));
      *(undefined4 *)((int)this + 4) = 0;
    }
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 8) = 0;
  }
  else {
    if (*(int *)((int)this + 4) == 0) {
      iVar5 = *(int *)((int)this + 0x10);
      if (*(int *)((int)this + 0x10) < param_1) {
        iVar5 = param_1;
      }
      pvVar3 = FUN_10038ad8(iVar5 << 2);
      *(void **)((int)this + 4) = pvVar3;
      _memset(pvVar3,0,iVar5 << 2);
      *(int *)((int)this + 0xc) = iVar5;
    }
    else {
      iVar5 = *(int *)((int)this + 0xc);
      if (iVar5 < param_1) {
        iVar4 = *(int *)((int)this + 0x10);
        if (iVar4 == 0) {
          iVar4 = (int)(*(int *)((int)this + 8) + (*(int *)((int)this + 8) >> 0x1f & 7U)) >> 3;
          if (iVar4 < 4) {
            iVar4 = 4;
          }
          else if (0x400 < iVar4) {
            iVar4 = 0x400;
          }
        }
        iVar2 = iVar4 + iVar5;
        if (iVar4 + iVar5 <= param_1) {
          iVar2 = param_1;
        }
        param_1 = iVar2;
        if (param_1 < iVar5) goto LAB_10045d1a;
        pvVar3 = FUN_10038ad8(param_1 << 2);
        FUN_10038b3c(pvVar3,param_1 << 2,*(void **)((int)this + 4),*(int *)((int)this + 8) << 2);
        _memset((void *)((int)pvVar3 + *(int *)((int)this + 8) * 4),0,
                (iVar1 - *(int *)((int)this + 8)) * 4);
        FUN_10038b07(*(void **)((int)this + 4));
        *(void **)((int)this + 4) = pvVar3;
        *(int *)((int)this + 0xc) = param_1;
      }
      else {
        iVar5 = *(int *)((int)this + 8);
        if (iVar5 < param_1) {
          _memset((void *)(*(int *)((int)this + 4) + iVar5 * 4),0,(param_1 - iVar5) * 4);
        }
      }
    }
    *(int *)((int)this + 8) = iVar1;
  }
  return;
}

