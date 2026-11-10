// rea decompile_all
// name: CMFCToolTipCtrl::OnFillBackground
// address: 0x10102888
// body: available
// range: 0x10102888-0x10102963 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolTipCtrl::OnFillBackground(class CDC *,class
   CRect,unsigned long &,unsigned long &)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCToolTipCtrl::OnFillBackground
          (CMFCToolTipCtrl *this,CDC *param_1,LONG param_3,LONG param_4,LONG param_5,LONG param_6,
          undefined4 param_7,undefined4 param_8)

{
  code *pcVar1;
  undefined4 uVar2;
  CMFCVisualManager *pCVar3;
  int iVar4;
  undefined **local_28;
  HBRUSH local_24;
  CMFCToolTipCtrl *local_20;
  undefined4 local_1c;
  CDrawingManager local_18 [4];
  CDC *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uVar2 = param_7;
  uStack_4 = 0x18;
  local_8 = 0x10102894;
  local_1c = param_8;
  local_14 = param_1;
  local_20 = this;
  if (*(ulong *)(this + 0xd4) == 0xffffffff) {
    pCVar3 = CMFCVisualManager::GetInstance();
    pcVar1 = *(code **)(*(int *)pCVar3 + 0x2d8);
    guard_check_icall(local_14,local_20,param_3,param_4,param_5,param_6,uVar2,local_1c);
    (*pcVar1)();
  }
  else if (*(int *)(this + 0xd8) == -1) {
    CBrush::CBrush((CBrush *)&local_28,*(ulong *)(this + 0xd4));
    FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_3,local_24);
    local_28 = CBrush::vftable;
    CImageList::~CImageList((CImageList *)&local_28);
  }
  else {
    CDrawingManager::CDrawingManager(local_18,param_1);
    local_8 = 0;
    iVar4 = *(int *)(this + 0xd0);
    if (iVar4 == -1) {
      iVar4 = 0x5a;
    }
    CDrawingManager::FillGradient2
              (local_18,param_3,param_4,param_5,param_6,*(undefined4 *)(this + 0xd8),
               *(undefined4 *)(this + 0xd4),iVar4);
    FUN_10079775();
  }
  return;
}

