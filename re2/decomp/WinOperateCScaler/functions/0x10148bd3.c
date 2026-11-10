// rea decompile_all
// name: CCellObj::DrawSelected
// address: 0x10148bd3
// body: available
// range: 0x10148bd3-0x10148d65 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    private: void __thiscall CCellObj::DrawSelected(class CDC *,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CCellObj::DrawSelected(CCellObj *this,CDC *param_1,int param_2)

{
  HGDIOBJ pvVar1;
  CGdiObject *pCVar2;
  CGdiObject *pCVar3;
  HRGN pHVar4;
  undefined **local_bc;
  undefined4 local_b8;
  undefined **local_b4;
  undefined4 local_b0;
  undefined **local_ac;
  undefined4 local_a8;
  tagPOINT local_a4 [6];
  tagPOINT local_74 [6];
  tagPOINT local_44 [7];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xb0;
  local_8 = 0x10148be2;
  pvVar1 = GetStockObject((-(uint)(param_2 != 0) & 0xfffffffe) + 2);
  pCVar2 = CGdiObject::FromHandle(pvVar1);
  pvVar1 = GetStockObject(4);
  pCVar3 = CGdiObject::FromHandle(pvVar1);
  local_bc = CRgn::vftable;
  local_b8 = 0;
  local_b0 = 0;
  local_b4 = CRgn::vftable;
  local_a8 = 0;
  local_ac = CRgn::vftable;
  local_8 = 2;
  GetPoints(this,*(int *)(this + 0x3c),*(int *)(this + 0x40) + -1,*(int *)(this + 0x44) + 2,local_44
           );
  pHVar4 = CreatePolygonRgn(local_44,6,1);
  CMenu::Attach((CMenu *)&local_b4,(HMENU__ *)pHVar4);
  CDC::FrameRgn(param_1,(CRgn *)&local_b4,(CBrush *)pCVar2,2,2);
  GetPoints(this,*(int *)(this + 0x3c),*(int *)(this + 0x40),*(int *)(this + 0x44) + 2,local_74);
  pHVar4 = CreatePolygonRgn(local_74,6,1);
  CMenu::Attach((CMenu *)&local_ac,(HMENU__ *)pHVar4);
  CDC::FrameRgn(param_1,(CRgn *)&local_ac,(CBrush *)pCVar3,1,1);
  GetPoints(this,*(int *)(this + 0x3c),*(int *)(this + 0x40),*(int *)(this + 0x44) + -1,local_a4);
  pHVar4 = CreatePolygonRgn(local_a4,6,1);
  CMenu::Attach((CMenu *)&local_bc,(HMENU__ *)pHVar4);
  CDC::FrameRgn(param_1,(CRgn *)&local_bc,(CBrush *)pCVar3,1,1);
  local_ac = CRgn::vftable;
  CImageList::~CImageList((CImageList *)&local_ac);
  local_b4 = CRgn::vftable;
  CImageList::~CImageList((CImageList *)&local_b4);
  local_bc = CRgn::vftable;
  CImageList::~CImageList((CImageList *)&local_bc);
  FUN_10154478();
  return;
}

