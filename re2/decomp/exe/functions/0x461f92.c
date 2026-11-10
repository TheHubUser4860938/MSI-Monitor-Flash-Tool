// rea decompile_all
// name: CDrawingManager::CreateBitmap_32
// address: 0x461f92
// body: available
// range: 0x461f92-0x462036 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static struct HBITMAP__ * __stdcall CDrawingManager::CreateBitmap_32(class CSize const
   &,void * *)
   
   Library: Visual Studio 2015 Release */

HBITMAP__ * CDrawingManager::CreateBitmap_32(CSize *param_1,void **param_2)

{
  int _X;
  long lVar1;
  HBITMAP pHVar2;
  HBITMAP__ *pHVar3;
  int iVar4;
  LONG *pLVar5;
  void *local_38;
  BITMAPINFO local_34;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  if (param_2 != (void **)0x0) {
    *param_2 = (void *)0x0;
  }
  if ((0 < *(int *)param_1) && (_X = *(int *)(param_1 + 4), _X != 0)) {
    pLVar5 = &local_34.bmiHeader.biWidth;
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pLVar5 = 0;
      pLVar5 = pLVar5 + 1;
    }
    local_34.bmiHeader.biWidth = *(LONG *)param_1;
    local_34.bmiHeader.biSize = 0x28;
    local_34.bmiHeader.biHeight = _X;
    lVar1 = _labs(_X);
    local_34.bmiHeader.biSizeImage = *(int *)param_1 * lVar1;
    local_34.bmiHeader.biPlanes = 1;
    local_34.bmiHeader.biBitCount = 0x20;
    local_34.bmiHeader.biCompression = 0;
    local_38 = (void *)0x0;
    pHVar2 = CreateDIBSection((HDC)0x0,&local_34,0,&local_38,(HANDLE)0x0,0);
    if (((local_38 != (void *)0x0) && (pHVar2 != (HBITMAP)0x0)) && (param_2 != (void **)0x0)) {
      *param_2 = local_38;
    }
  }
  pHVar3 = (HBITMAP__ *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pHVar3;
}

