// rea decompile_all
// name: CMFCEditBrowseCtrl::SetInternalImage
// address: 0x10043fa3
// body: available
// range: 0x10043fa3-0x10044090 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCEditBrowseCtrl::SetInternalImage(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCEditBrowseCtrl::SetInternalImage(CMFCEditBrowseCtrl *this)

{
  AFX_GLOBAL_DATA *this_00;
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  CGdiObject *pCVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 local_20 [18];
  short local_e;
  HANDLE local_8;
  
  if (((CImageList *)(this + 0xc4) != (CImageList *)0x0) && (*(int *)(this + 200) != 0)) {
    CImageList::DeleteImageList((CImageList *)(this + 0xc4));
  }
  this_00 = GetGlobalData();
  iVar1 = AFX_GLOBAL_DATA::Is32BitIcons(this_00);
  uVar4 = 0x11;
  pAVar2 = AfxGetModuleState();
  local_8 = LoadImageW(*(HINSTANCE *)(pAVar2 + 0xc),(LPCWSTR)((-(uint)(iVar1 != 0) & 0x11) + 0x4288)
                       ,0,0,0,0x2000);
  if (local_8 != (HANDLE)0x0) {
    GetObjectW(local_8,0x18,local_20);
    if (local_e == 8) {
      uVar4 = 9;
    }
    else if (local_e != 0x10) {
      if (local_e == 0x18) {
        uVar4 = 0x19;
      }
      else {
        uVar4 = ((local_e == 0x20) - 1 & 0xffffffe4) + 0x21;
      }
    }
    uVar5 = 0;
    CImageList::Create((CImageList *)(this + 0xc4),0x10,0x10,uVar4,0,0);
    pCVar3 = CGdiObject::FromHandle(local_8);
    if (pCVar3 != (CGdiObject *)0x0) {
      uVar5 = *(undefined4 *)(pCVar3 + 4);
    }
    _IsolationAwareImageList_AddMasked_12(*(undefined4 *)(this + 200),uVar5,0xff00ff);
    *(undefined4 *)(this + 0xa4) = 0x10;
    *(undefined4 *)(this + 0xa8) = 0x10;
    *(undefined4 *)(this + 0x90) = 1;
  }
  return;
}

