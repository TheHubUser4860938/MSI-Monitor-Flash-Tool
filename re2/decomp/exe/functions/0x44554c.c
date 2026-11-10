// rea decompile_all
// name: FUN_0044554c
// address: 0x44554c
// body: available
// range: 0x44554c-0x4455f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4455ed to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0044554c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  CDynamicAccessor *this;
  IRowset *pIVar2;
  int iVar3;
  void *_Dst;
  
  FUN_00434a7a(*(undefined4 *)(param_1 + -0xd0));
  if ((param_3 == 0xe) && (iVar1 = *(int *)(param_1 + -0x5c), iVar1 != 0)) {
    if ((*(undefined4 **)(iVar1 + 0x50) == (undefined4 *)0x0) ||
       (this = *(CDynamicAccessor **)(iVar1 + 0x54), this == (CDynamicAccessor *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00429127();
    }
    pIVar2 = (IRowset *)**(undefined4 **)(iVar1 + 0x50);
    ATL::CDynamicAccessor::FreeRecordMemory(this,pIVar2);
    ATL::CAccessorBase::ReleaseAccessors((CAccessorBase *)this,(IUnknown *)pIVar2);
    ATL::CDynamicAccessor::Close(*(CDynamicAccessor **)(iVar1 + 0x54));
    ATL::CDynamicAccessor::BindColumns
              (*(CDynamicAccessor **)(iVar1 + 0x54),(IUnknown *)**(undefined4 **)(iVar1 + 0x50));
    iVar3 = *(int *)(*(int *)(iVar1 + 0x54) + 0xc);
    if (*(int *)(iVar1 + 0x10) != iVar3) {
      *(int *)(iVar1 + 0x10) = iVar3;
      CoTaskMemFree(*(LPVOID *)(iVar1 + 0x14));
      _Dst = ATL::AtlCoTaskMemCAlloc(0x28,*(ulong *)(iVar1 + 0x10));
      *(void **)(iVar1 + 0x14) = _Dst;
      _memset(_Dst,0,*(int *)(iVar1 + 0x10) * 0x28);
    }
  }
  guard_check_icall();
  return 0;
}

