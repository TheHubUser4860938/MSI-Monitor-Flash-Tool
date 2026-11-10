// rea decompile_all
// name: ATL::CImage::CDCCache::ReleaseDC
// address: 0x10089a60
// body: available
// range: 0x10089a60-0x10089a81 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall ATL::CImage::CDCCache::ReleaseDC(struct HDC__ *)
   
   Library: Visual Studio 2015 Release */

void __thiscall ATL::CImage::CDCCache::ReleaseDC(CDCCache *this,HDC__ *param_1)

{
  HDC hdc;
  int iVar1;
  
  iVar1 = 0;
  do {
    LOCK();
    hdc = *(HDC *)this;
    *(HDC__ **)this = param_1;
    UNLOCK();
    if (hdc == (HDC)0x0) {
      return;
    }
    iVar1 = iVar1 + 1;
    this = this + 4;
    param_1 = hdc;
  } while (iVar1 < 4);
  DeleteDC(hdc);
  return;
}

