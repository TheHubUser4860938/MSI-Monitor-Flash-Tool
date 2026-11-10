// rea decompile_all
// name: CMDIChildWndEx::OnTaskbarTabThumbnailStretch
// address: 0x100ed484
// body: available
// range: 0x100ed484-0x100ed53e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMDIChildWndEx::OnTaskbarTabThumbnailStretch(struct HBITMAP__
   *,class CRect const &,struct HBITMAP__ *,class CRect const &)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMDIChildWndEx::OnTaskbarTabThumbnailStretch
          (CMDIChildWndEx *this,HBITMAP__ *param_1,CRect *param_2,HBITMAP__ *param_3,CRect *param_4)

{
  HDC pHVar1;
  HGDIOBJ h;
  int iVar2;
  CImage local_68 [4];
  HBITMAP__ *local_64;
  CClientDC local_34 [4];
  HDC local_30;
  CDC local_20 [4];
  HDC local_1c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x58;
  local_8 = 0x100ed490;
  if ((param_3 == (HBITMAP__ *)0x0) || (param_1 == (HBITMAP__ *)0x0)) {
    iVar2 = 0;
  }
  else {
    ATL::CImage::CImage(local_68);
    local_8 = 0;
    local_64 = param_3;
    ATL::CImage::UpdateBitmapInfo(local_68,0);
    CClientDC::CClientDC(local_34,(CWnd *)this);
    local_8._0_1_ = 1;
    CDC::CDC(local_20);
    local_8 = CONCAT31(local_8._1_3_,2);
    pHVar1 = CreateCompatibleDC(local_30);
    CDC::Attach(local_20,pHVar1);
    h = SelectObject(local_1c,param_1);
    iVar2 = ATL::CImage::Draw(local_68,local_1c,(tagRECT *)param_2,7);
    if (h != (HGDIOBJ)0x0) {
      SelectObject(local_1c,h);
    }
    CDC::~CDC(local_20);
    CClientDC::~CClientDC(local_34);
    ATL::CImage::~CImage(local_68);
  }
  return iVar2;
}

