// rea decompile_all
// name: Gdiplus::Graphics::DrawImage
// address: 0x100c0af0
// body: available
// range: 0x100c0af0-0x100c0b27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: enum Gdiplus::Status __thiscall Gdiplus::Graphics::DrawImage(class Gdiplus::Image
   *,int,int,int,int)
   
   Library: Visual Studio 2015 Release */

Status __thiscall
Gdiplus::Graphics::DrawImage
          (Graphics *this,Image *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  Status SVar2;
  
  if (param_1 == (Image *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  SVar2 = GdipDrawImageRectI(*(undefined4 *)this,uVar1,param_2,param_3,param_4,param_5);
  if (SVar2 == 0) {
    SVar2 = 0;
  }
  else {
    *(Status *)(this + 4) = SVar2;
  }
  return SVar2;
}

