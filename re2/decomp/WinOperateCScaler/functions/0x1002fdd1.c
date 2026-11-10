// rea decompile_all
// name: _AFX_D2D_STATE::InitD2D
// address: 0x1002fdd1
// body: available
// range: 0x1002fdd1-0x1002febb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall _AFX_D2D_STATE::InitD2D(enum D2D1_FACTORY_TYPE,enum DWRITE_FACTORY_TYPE)
   
   Library: Visual Studio 2015 Release */

int __thiscall
_AFX_D2D_STATE::InitD2D(_AFX_D2D_STATE *this,D2D1_FACTORY_TYPE param_1,DWRITE_FACTORY_TYPE param_2)

{
  HRESULT HVar1;
  HINSTANCE__ *pHVar2;
  FARPROC pFVar3;
  int iVar4;
  
  if (*(int *)(this + 0x1c) != 0) {
    return 1;
  }
  if (*(int *)(this + 0x20) == 0) {
    HVar1 = CoInitialize((LPVOID)0x0);
    if (HVar1 < 0) {
      return 0;
    }
    *(undefined4 *)(this + 0x20) = 1;
  }
  pHVar2 = ATL::AtlLoadSystemLibraryUsingFullPath(L"D2D1.dll");
  *(HINSTANCE__ **)(this + 4) = pHVar2;
  if (pHVar2 == (HINSTANCE__ *)0x0) {
    return 0;
  }
  pFVar3 = GetProcAddress(pHVar2,"D2D1CreateFactory");
  if (pFVar3 != (FARPROC)0x0) {
    guard_check_icall(param_1,&DAT_101ac088,0,this + 0xc);
    iVar4 = (*pFVar3)();
    if (iVar4 < 0) {
      *(undefined4 *)(this + 0xc) = 0;
      return 0;
    }
  }
  pFVar3 = GetProcAddress(*(HMODULE *)(this + 4),"D2D1MakeRotateMatrix");
  *(FARPROC *)(this + 0x18) = pFVar3;
  pHVar2 = ATL::AtlLoadSystemLibraryUsingFullPath(L"DWrite.dll");
  *(HINSTANCE__ **)(this + 8) = pHVar2;
  if ((pHVar2 != (HINSTANCE__ *)0x0) &&
     (pFVar3 = GetProcAddress(pHVar2,"DWriteCreateFactory"), pFVar3 != (FARPROC)0x0)) {
    guard_check_icall(param_2,&DAT_101ac098,this + 0x10);
    (*pFVar3)();
  }
  CoCreateInstance((IID *)&DAT_101ac000,(LPUNKNOWN)0x0,1,(IID *)&DAT_101d4814,
                   (LPVOID *)(this + 0x14));
  *(undefined4 *)(this + 0x1c) = 1;
  return 1;
}

