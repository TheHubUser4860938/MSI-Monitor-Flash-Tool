// rea decompile_all
// name: LoadDynamicLayoutResource
// address: 0x1001dde5
// body: available
// range: 0x1001dde5-0x1001dead inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: int __thiscall CWnd::LoadDynamicLayoutResource(char const *)
    protected: int __thiscall CWnd::LoadDynamicLayoutResource(wchar_t const *)
   
   Library: Visual Studio 2015 Release */

int LoadDynamicLayoutResource(LPCWSTR param_1)

{
  HMODULE hModule;
  BOOL BVar1;
  AFX_MODULE_STATE *pAVar2;
  HRSRC hResInfo;
  int iVar3;
  CWnd *in_ECX;
  HGLOBAL hResData;
  void *local_c;
  ulong local_8;
  
  if ((((in_ECX == (CWnd *)0x0) || (*(int *)(in_ECX + 0x20) == 0)) ||
      (BVar1 = IsWindow(*(HWND *)(in_ECX + 0x20)), BVar1 == 0)) || (param_1 == (LPCWSTR)0x0)) {
LAB_1001dea3:
    iVar3 = 0;
  }
  else {
    local_8 = 0;
    local_c = (void *)0x0;
    hResData = (HGLOBAL)0x0;
    pAVar2 = AfxGetModuleState();
    hModule = *(HMODULE *)(pAVar2 + 0xc);
    hResInfo = FindResourceW(hModule,param_1,L"AFX_DIALOG_LAYOUT");
    if (hResInfo != (HRSRC)0x0) {
      local_8 = SizeofResource(hModule,hResInfo);
      hResData = LoadResource(hModule,hResInfo);
      if (hResData == (HGLOBAL)0x0) goto LAB_1001dea3;
      local_c = LockResource(hResData);
    }
    iVar3 = CMFCDynamicLayout::LoadResource(in_ECX,local_c,local_8);
    if ((local_c != (void *)0x0) && (hResData != (HGLOBAL)0x0)) {
      FreeResource(hResData);
    }
    if (iVar3 != 0) {
      CWnd::InitDynamicLayout(in_ECX);
    }
  }
  return iVar3;
}

