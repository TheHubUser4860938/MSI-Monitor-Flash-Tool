// rea decompile_all
// name: ATL::CFixedStringMgr::Reallocate
// address: 0x4c908b
// body: available
// range: 0x4c908b-0x4c915b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual struct ATL::CStringData * __thiscall ATL::CFixedStringMgr::Reallocate(struct
   ATL::CStringData *,int,int)
   
   Library: Visual Studio 2015 Release */

CStringData * __thiscall
ATL::CFixedStringMgr::Reallocate(CFixedStringMgr *this,CStringData *param_1,int param_2,int param_3)

{
  code *pcVar1;
  CStringData *pCVar2;
  
  if (param_1 == *(CStringData **)(this + 8)) {
    pCVar2 = param_1;
    if (*(int *)(param_1 + 8) < param_2) {
      if (DAT_00616acc != (int *)0x0) {
        pcVar1 = *(code **)(*DAT_00616acc + 4);
        guard_check_icall(param_2,*(undefined4 *)(param_1 + 8),param_1);
        (*pcVar1)();
      }
      pcVar1 = *(code **)**(undefined4 **)(this + 4);
      guard_check_icall(param_2,param_3);
      pCVar2 = (CStringData *)(*pcVar1)();
      if (pCVar2 != (CStringData *)0x0) {
        Checked::memmove_s(pCVar2 + 0x10,param_2 * param_3,param_1 + 0x10,
                           (*(int *)(param_1 + 8) + 1) * param_3);
        *(undefined4 *)(pCVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
        *(CFixedStringMgr **)pCVar2 = this;
        *(undefined4 *)(pCVar2 + 4) = *(undefined4 *)(param_1 + 4);
      }
    }
  }
  else {
    *(undefined4 *)param_1 = *(undefined4 *)(this + 4);
    pcVar1 = *(code **)(**(int **)(this + 4) + 8);
    guard_check_icall(param_1,param_2,param_3);
    pCVar2 = (CStringData *)(*pcVar1)();
    if (pCVar2 == (CStringData *)0x0) {
      *(CFixedStringMgr **)param_1 = this;
    }
    else {
      *(CFixedStringMgr **)pCVar2 = this;
    }
  }
  return pCVar2;
}

