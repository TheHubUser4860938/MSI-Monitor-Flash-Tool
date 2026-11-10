// rea decompile_all
// name: CPaneFrameWnd::FindFloatingPaneByID
// address: 0x100b04b5
// body: available
// range: 0x100b04b5-0x100b04ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static class CBasePane * __stdcall CPaneFrameWnd::FindFloatingPaneByID(unsigned int)
   
   Library: Visual Studio 2015 Release */

CBasePane * CPaneFrameWnd::FindFloatingPaneByID(uint param_1)

{
  int iVar1;
  CWnd *pCVar2;
  CBasePane *pCVar3;
  HWND__ *local_8;
  
  local_8 = (HWND__ *)0x0;
  iVar1 = CMap<int,int,int,int>::Lookup
                    ((CMap<int,int,int,int> *)&PTR_vftable_102018ac,param_1,(int *)&local_8);
  pCVar3 = (CBasePane *)0x0;
  if (iVar1 != 0) {
    pCVar2 = CWnd::FromHandlePermanent(local_8);
    pCVar3 = (CBasePane *)
             AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_101b236c,(CObject *)pCVar2);
  }
  return pCVar3;
}

