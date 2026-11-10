// rea decompile_all
// name: FID_conflict:LoadState
// address: 0x100e0727
// body: available
// range: 0x100e0727-0x100e076f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Different Base Names
    public: virtual int __thiscall CPaneFrameWnd::LoadState(char const *,unsigned int)
    public: virtual int __thiscall CPaneFrameWnd::LoadState(wchar_t const *,unsigned int)
    public: virtual int __thiscall CPaneFrameWnd::SaveState(char const *,unsigned int)
    public: virtual int __thiscall CPaneFrameWnd::SaveState(wchar_t const *,unsigned int)
   
   Library: Visual Studio 2015 Release */

undefined4 FID_conflict_LoadState(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  CWnd *pCVar2;
  CObject *pCVar3;
  undefined4 uVar4;
  int in_ECX;
  
  pCVar2 = CWnd::FromHandlePermanent(*(HWND__ **)(in_ECX + 0xd4));
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_101de5b4,(CObject *)pCVar2);
  if (pCVar3 == (CObject *)0x0) {
    uVar4 = 1;
  }
  else {
    pcVar1 = *(code **)(*(int *)pCVar3 + 0x230);
    guard_check_icall(param_1,param_2,0xffffffff);
    uVar4 = (*pcVar1)();
  }
  return uVar4;
}

