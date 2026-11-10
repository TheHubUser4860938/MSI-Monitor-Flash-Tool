// rea decompile_all
// name: CMFCVisualManagerOfficeXP::CreateGripperBrush
// address: 0x101425b2
// body: available
// range: 0x101425b2-0x10142694 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCVisualManagerOfficeXP::CreateGripperBrush(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCVisualManagerOfficeXP::CreateGripperBrush(CMFCVisualManagerOfficeXP *this)

{
  HBITMAP pHVar1;
  HBRUSH pHVar2;
  undefined **local_44;
  HBITMAP local_40;
  undefined **local_3c;
  HBITMAP local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x34;
  local_40 = (HBITMAP)0x0;
  local_24 = 0xff;
  local_20 = 0xff;
  local_1c = 0xff;
  local_18 = 0xff;
  local_44 = CBitmap::vftable;
  local_8 = 0;
  pHVar1 = CreateBitmap(8,8,1,1,&local_24);
  CMenu::Attach((CMenu *)&local_44,(HMENU__ *)pHVar1);
  pHVar2 = CreatePatternBrush(local_40);
  CMenu::Attach((CMenu *)(this + 0xec),(HMENU__ *)pHVar2);
  local_38 = (HBITMAP)0x0;
  local_34 = 0xaa00aa;
  local_30 = 0xaa00aa;
  local_2c = 0xaa00aa;
  local_28 = 0xaa00aa;
  local_3c = CBitmap::vftable;
  local_8 = CONCAT31(local_8._1_3_,1);
  pHVar1 = CreateBitmap(8,8,1,1,&local_34);
  CMenu::Attach((CMenu *)&local_3c,(HMENU__ *)pHVar1);
  pHVar2 = CreatePatternBrush(local_38);
  CMenu::Attach((CMenu *)(this + 0xf4),(HMENU__ *)pHVar2);
  local_3c = CBitmap::vftable;
  CImageList::~CImageList((CImageList *)&local_3c);
  local_44 = CBitmap::vftable;
  CImageList::~CImageList((CImageList *)&local_44);
  FUN_1017f5f4();
  return;
}

