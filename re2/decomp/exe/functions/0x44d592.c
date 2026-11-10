// rea decompile_all
// name: Load
// address: 0x44d592
// body: available
// range: 0x44d592-0x44d608 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall CPngImage::Load(char const *,struct HINSTANCE__ *)
    public: int __thiscall CPngImage::Load(wchar_t const *,struct HINSTANCE__ *)
   
   Library: Visual Studio 2015 Release */

undefined4 Load(LPCWSTR param_1,HMODULE param_2)

{
  AFX_MODULE_STATE *pAVar1;
  HRSRC hResInfo;
  HGLOBAL hResData;
  LPVOID pvVar2;
  DWORD DVar3;
  undefined4 uVar4;
  
  if (param_2 == (HMODULE)0x0) {
    pAVar1 = AfxGetModuleState();
    param_2 = *(HMODULE *)(pAVar1 + 0xc);
  }
  hResInfo = FindResourceW(param_2,param_1,L"PNG");
  uVar4 = 0;
  if (hResInfo != (HRSRC)0x0) {
    hResData = LoadResource(param_2,hResInfo);
    uVar4 = 0;
    if (hResData != (HGLOBAL)0x0) {
      pvVar2 = LockResource(hResData);
      if (pvVar2 == (LPVOID)0x0) {
        uVar4 = 0;
      }
      else {
        DVar3 = SizeofResource(param_2,hResInfo);
        uVar4 = FUN_0044d609(pvVar2,DVar3);
      }
      FreeResource(hResData);
    }
  }
  return uVar4;
}

