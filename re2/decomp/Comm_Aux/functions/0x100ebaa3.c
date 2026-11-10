// rea decompile_all
// name: ATL::CImage::Draw
// address: 0x100ebaa3
// body: available
// range: 0x100ebaa3-0x100ebb40 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall ATL::CImage::Draw(struct HDC__ *,struct tagRECT const &,enum
   Gdiplus::InterpolationMode)const 
   
   Library: Visual Studio 2015 Release */

int __thiscall
ATL::CImage::Draw(CImage *this,HDC__ *param_1,tagRECT *param_2,InterpolationMode param_3)

{
  bool bVar1;
  CInitGDIPlus *this_00;
  uint uVar2;
  int iVar3;
  Status SVar4;
  Bitmap local_20 [4];
  undefined4 local_1c;
  int local_18;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  this_00 = (CInitGDIPlus *)FUN_10057114();
  bVar1 = CInitGDIPlus::Init(this_00);
  if (bVar1) {
    uVar2 = 0;
    Gdiplus::Bitmap::Bitmap(local_20,*(HBITMAP__ **)(this + 4),(HPALETTE__ *)0x0);
    iVar3 = local_18;
    local_18 = 0;
    if (iVar3 == 0) {
      local_8 = 0;
      local_c = GdipCreateFromHDC(param_1,&local_8);
      local_10 = local_8;
      iVar3 = GdipSetInterpolationMode(local_8,param_3);
      if (iVar3 != 0) {
        local_c = iVar3;
      }
      SVar4 = Gdiplus::Graphics::DrawImage
                        ((Graphics *)&local_10,(Image *)local_20,param_2->left,param_2->top,
                         param_2->right - param_2->left,param_2->bottom - param_2->top);
      uVar2 = (uint)(SVar4 == 0);
      GdipDeleteGraphics(local_10);
    }
    GdipDisposeImage(local_1c);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

