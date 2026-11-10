// rea decompile_all
// name: AFX_GLOBAL_DATA::GetITaskbarList3
// address: 0x1007ded9
// body: available
// range: 0x1007ded9-0x1007deeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: struct ITaskbarList3 * __thiscall AFX_GLOBAL_DATA::GetITaskbarList3(void)
   
   Library: Visual Studio 2015 Release */

ITaskbarList3 * __thiscall AFX_GLOBAL_DATA::GetITaskbarList3(AFX_GLOBAL_DATA *this)

{
  LPVOID *ppv;
  int iVar1;
  HRESULT HVar2;
  AFX_MODULE_STATE *pAVar3;
  
  pAVar3 = AfxGetModuleState();
  iVar1 = *(int *)(pAVar3 + 4);
  if (iVar1 == 0) {
    return (ITaskbarList3 *)0x0;
  }
  if ((*(int *)(iVar1 + 0xb8) == 0) || (*(int *)(iVar1 + 0xb4) == 0)) {
    return (ITaskbarList3 *)0x0;
  }
  ppv = (LPVOID *)(iVar1 + 200);
  if (*ppv != (ITaskbarList3 *)0x0) {
    return *ppv;
  }
  if (*(int *)(iVar1 + 0xbc) == 0) {
    HVar2 = CoInitialize((LPVOID)0x0);
    if (HVar2 < 0) goto LAB_1004e998;
    *(undefined4 *)(iVar1 + 0xbc) = 1;
  }
  CoCreateInstance((IID *)&DAT_10200a9c,(LPUNKNOWN)0x0,1,(IID *)&DAT_101d4cd8,ppv);
LAB_1004e998:
  return *ppv;
}

