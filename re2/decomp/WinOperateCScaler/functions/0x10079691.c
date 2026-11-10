// rea decompile_all
// name: CMFCOutlookBarPane::OnEraseWorkArea
// address: 0x10079691
// body: available
// range: 0x10079691-0x1007975d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCOutlookBarPane::OnEraseWorkArea(class CDC *,class CRect)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCOutlookBarPane::OnEraseWorkArea
          (CMFCOutlookBarPane *this,CDC *param_1,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 local_24 [12];
  undefined **local_18;
  HBRUSH local_14;
  int local_10;
  CMFCToolBarImages *local_c;
  int local_8;
  
  if (*(int *)(this + 0xd54) == 0) {
    CBrush::CBrush((CBrush *)&local_18,*(ulong *)(this + 0xd48));
    FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_3,local_14);
    local_18 = CBrush::vftable;
    CImageList::~CImageList((CImageList *)&local_18);
  }
  else {
    local_c = (CMFCToolBarImages *)(this + 0xd50);
    CMFCToolBarImages::PrepareDrawImage(local_c,local_24,0,0,0);
    iVar3 = *(int *)(this + 0xda4);
    local_10 = *(int *)(this + 0xda8);
    iVar1 = param_6;
    iVar2 = param_5;
    iVar4 = param_4;
    iVar6 = param_3;
    local_8 = iVar3;
    if (param_3 < param_5) {
      do {
        iVar5 = iVar4;
        if (iVar4 < iVar1) {
          do {
            CMFCToolBarImages::Draw(local_c,param_1,iVar6,iVar4,0,0,0,0,0,0,0xff);
            iVar4 = iVar4 + local_10;
            iVar1 = param_6;
            iVar2 = param_5;
            iVar3 = local_8;
            iVar5 = param_4;
          } while (iVar4 < param_6);
        }
        iVar6 = iVar6 + iVar3;
        iVar4 = iVar5;
      } while (iVar6 < iVar2);
    }
    FUN_1005bd4d(local_24);
  }
  return;
}

