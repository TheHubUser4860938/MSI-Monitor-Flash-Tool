// rea decompile_all
// name: COleStreamFile::COleStreamFile
// address: 0x542271
// body: available
// range: 0x542271-0x542365 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x542322 to 0x4d36dd FUN_004d36dd (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: __thiscall COleStreamFile::COleStreamFile(struct IStream *)
   
   Library: Visual Studio 2015 Release */

void __thiscall COleStreamFile::COleStreamFile(COleStreamFile *this,IStream *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  wchar_t *local_268;
  LPVOID local_264 [18];
  wchar_t local_21c [266];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x260;
  local_8 = 0x542280;
  CFile::CFile((CFile *)this);
  local_8 = 0;
  *(undefined ***)this = vftable;
  uVar2 = FUN_004295fe();
  FUN_0040eb30(uVar2);
  local_8._0_1_ = 1;
  *(IStream **)(this + 0x14) = param_1;
  FUN_00415d60();
  piVar1 = *(int **)(this + 0x14);
  if (piVar1 != (int *)0x0) {
    iVar3 = *piVar1;
    guard_check_icall(piVar1,local_264,0);
    iVar3 = (**(code **)(iVar3 + 0x30))();
    if ((iVar3 == 0) && (local_264[0] != (LPVOID)0x0)) {
      FUN_00415a10(local_264[0]);
      local_8._0_1_ = 2;
      if (0x103 < *(int *)(local_268 + -6)) {
        CoTaskMemFree(local_264[0]);
                    /* WARNING: Subroutine does not return */
        FUN_004d36dd(3,0xffffffff,0);
      }
      AfxFullPath(local_21c,local_268);
      CoTaskMemFree(local_264[0]);
      FUN_00415ad0(local_21c);
      FUN_0040efa0();
    }
  }
  FUN_0055bae6();
  return;
}

