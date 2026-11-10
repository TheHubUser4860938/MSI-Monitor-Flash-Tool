// rea decompile_all
// name: CMFCToolBarImages::UpdateImage
// address: 0x1005e656
// body: available
// range: 0x1005e656-0x1005e78f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall CMFCToolBarImages::UpdateImage(int,struct HBITMAP__ *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCToolBarImages::UpdateImage(CMFCToolBarImages *this,int param_1,HBITMAP__ *param_2)

{
  int iVar1;
  HDC pHVar2;
  HGDIOBJ h;
  HGDIOBJ h_00;
  CWindowDC local_4c [4];
  HDC local_48;
  CDC local_38 [4];
  HDC local_34;
  CDC local_28 [4];
  HDC local_24;
  undefined **local_18;
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x3c;
  local_8 = 0x1005e662;
  h_00 = (HGDIOBJ)0x0;
  if ((*(int *)(this + 0x28) == 0) && (*(int *)(this + 0x18) != 0)) {
    CWindowDC::CWindowDC(local_4c,(CWnd *)0x0);
    local_14 = 0;
    local_18 = CBitmap::vftable;
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    CDC::CDC(local_38);
    local_8._0_1_ = 2;
    CDC::CDC(local_28);
    local_8 = CONCAT31(local_8._1_3_,3);
    pHVar2 = CreateCompatibleDC(local_48);
    CDC::Attach(local_38,pHVar2);
    pHVar2 = CreateCompatibleDC(local_48);
    CDC::Attach(local_28,pHVar2);
    if (*(HGDIOBJ *)(this + 0x8c) == (HGDIOBJ)0x0) {
      h = (HGDIOBJ)0x0;
    }
    else {
      h = SelectObject(local_24,*(HGDIOBJ *)(this + 0x8c));
    }
    if (param_2 != (HBITMAP__ *)0x0) {
      h_00 = SelectObject(local_34,param_2);
    }
    BitBlt(local_24,*(int *)(this + 0x54) * param_1,0,*(int *)(this + 0x54),*(int *)(this + 0x58),
           local_34,0,0,0xcc0020);
    if (h != (HGDIOBJ)0x0) {
      SelectObject(local_24,h);
    }
    if (h_00 != (HGDIOBJ)0x0) {
      SelectObject(local_34,h_00);
    }
    iVar1 = 1;
    *(undefined4 *)(this + 0x1c) = 1;
    FUN_1002f6d2(this + 0x90);
    *(undefined4 *)(this + 0x90) = 0;
    FUN_1002f6d2(this + 0x94);
    *(undefined4 *)(this + 0x94) = 0;
    CDC::~CDC(local_28);
    CDC::~CDC(local_38);
    local_18 = CBitmap::vftable;
    CImageList::~CImageList((CImageList *)&local_18);
    CWindowDC::~CWindowDC(local_4c);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

