// rea decompile_all
// name: CMFCCaptionBar::OnDrawImage
// address: 0x4900eb
// body: available
// range: 0x4900eb-0x4901a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCCaptionBar::OnDrawImage(class CDC *,class CRect)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCCaptionBar::OnDrawImage
          (CMFCCaptionBar *this,CDC *param_1,int param_3,int param_4,int param_5,int param_6)

{
  HDC hdc;
  undefined1 local_10 [12];
  
  if (*(HICON *)(this + 0x2cc) == (HICON)0x0) {
    if (0 < *(int *)(this + 0x2d4)) {
      if (*(int *)(this + 1000) == 0) {
        param_5 = *(int *)(this + 0x3f8) - *(int *)(this + 0x3f0);
        param_6 = *(int *)(this + 0x3fc) - *(int *)(this + 0x3f4);
      }
      else {
        param_5 = param_5 - param_3;
        param_6 = param_6 - param_4;
      }
      CMFCToolBarImages::PrepareDrawImage
                ((CMFCToolBarImages *)(this + 0x2d0),local_10,param_5,param_6,0);
      CMFCToolBarImages::Draw
                ((CMFCToolBarImages *)(this + 0x2d0),param_1,param_3,param_4,0,0,0,0,0,0,0xff);
      FUN_0044c977(local_10);
    }
  }
  else {
    hdc = (HDC)0x0;
    if (param_1 != (CDC *)0x0) {
      hdc = *(HDC *)(param_1 + 4);
    }
    DrawIconEx(hdc,param_3,param_4,*(HICON *)(this + 0x2cc),param_5 - param_3,param_6 - param_4,0,
               (HBRUSH)0x0,3);
  }
  return;
}

