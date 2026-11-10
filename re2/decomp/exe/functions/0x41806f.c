// rea decompile_all
// name: CreateDlgControls
// address: 0x41806f
// body: available
// range: 0x41806f-0x41810f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall COccManager::CreateDlgControls(class CWnd *,char const *,struct
   _AFX_OCC_DIALOG_INFO *)
    public: virtual int __thiscall COccManager::CreateDlgControls(class CWnd *,wchar_t const
   *,struct _AFX_OCC_DIALOG_INFO *)
   
   Library: Visual Studio 2015 Release */

undefined4 CreateDlgControls(int param_1,LPCWSTR param_2,undefined4 param_3)

{
  HMODULE hModule;
  code *pcVar1;
  AFX_MODULE_STATE *pAVar2;
  HRSRC hResInfo;
  int *in_ECX;
  undefined4 uVar3;
  LPVOID pvVar4;
  HGLOBAL hResData;
  
  pvVar4 = (LPVOID)0x0;
  hResData = (HGLOBAL)0x0;
  if (param_2 != (LPCWSTR)0x0) {
    pAVar2 = AfxGetModuleState();
    hModule = *(HMODULE *)(pAVar2 + 0xc);
    hResInfo = FindResourceW(hModule,param_2,(LPCWSTR)0xf0);
    if (hResInfo != (HRSRC)0x0) {
      hResData = LoadResource(hModule,hResInfo);
      if (hResData == (HGLOBAL)0x0) {
        return 0;
      }
      pvVar4 = LockResource(hResData);
    }
  }
  uVar3 = 1;
  if (pvVar4 != (LPVOID)0x0) {
    pcVar1 = *(code **)(*in_ECX + 0x20);
    guard_check_icall(param_1,pvVar4,param_3);
    uVar3 = (*pcVar1)();
    if (hResData != (HGLOBAL)0x0) {
      FreeResource(hResData);
    }
  }
  if (*(int **)(param_1 + 0x70) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(param_1 + 0x70) + 0xa0);
    guard_check_icall(param_3);
    (*pcVar1)();
  }
  return uVar3;
}

