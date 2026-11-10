// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnDrawPaneCaption
// address: 0x100cdbde
// body: available
// range: 0x100cdbde-0x100cdd3d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual unsigned long __thiscall CMFCVisualManagerOffice2007::OnDrawPaneCaption(class
   CDC *,class CDockablePane *,int,class CRect,class CRect)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall
CMFCVisualManagerOffice2007::OnDrawPaneCaption
          (CMFCVisualManagerOffice2007 *this,CDC *param_1,int param_2,int param_3,int param_5,
          int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,
          undefined4 param_11,undefined4 param_12)

{
  int iVar1;
  AFX_GLOBAL_DATA *pAVar2;
  CPen *pCVar3;
  ulong uVar4;
  HBRUSH hbr;
  undefined1 local_2c [8];
  undefined **local_24 [2];
  undefined1 local_1c [4];
  CMFCVisualManagerOffice2003 *local_18;
  CDC *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x100cdbea;
  local_14 = param_1;
  local_18 = (CMFCVisualManagerOffice2003 *)this;
  iVar1 = CanDrawImage(this);
  if (((iVar1 == 0) || (param_2 == 0)) || (*(int *)(param_2 + 0x8c) != 0)) {
    uVar4 = CMFCVisualManagerOffice2003::OnDrawPaneCaption
                      (local_18,local_14,param_2,param_3,param_5,param_6,param_7,param_8,param_9,
                       param_10,param_11,param_12);
  }
  else {
    pAVar2 = GetGlobalData();
    hbr = (HBRUSH)0x0;
    CPen::CPen((CPen *)local_24,0,1,*(ulong *)(pAVar2 + 0x54));
    local_8 = 0;
    pCVar3 = CDC::SelectObject(param_1,(CPen *)local_24);
    param_8 = param_8 + 2;
    CDC::MoveTo(param_1,(int)local_1c,param_5);
    CDC::LineTo(param_1,param_5,param_6);
    CDC::MoveTo(param_1,(int)local_1c,param_5 + 1);
    CDC::LineTo(param_1,param_7 + -1,param_6);
    CDC::MoveTo(param_1,(int)local_2c,param_7 + -1);
    CDC::LineTo(param_1,param_7 + -1,param_8);
    CDC::SelectObject(param_1,pCVar3);
    param_5 = param_5 + 1;
    param_6 = param_6 + 1;
    param_7 = param_7 + -1;
    pAVar2 = GetGlobalData();
    if (param_3 == 0) {
      pAVar2 = pAVar2 + 0xc0;
    }
    else {
      pAVar2 = pAVar2 + 0xb8;
    }
    if (pAVar2 != (AFX_GLOBAL_DATA *)0x0) {
      hbr = *(HBRUSH *)(pAVar2 + 4);
    }
    FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_5,hbr);
    pAVar2 = GetGlobalData();
    if (param_3 == 0) {
      uVar4 = *(ulong *)(pAVar2 + 0x84);
    }
    else {
      uVar4 = *(ulong *)(pAVar2 + 0x74);
    }
    local_24[0] = CPen::vftable;
    CImageList::~CImageList((CImageList *)local_24);
  }
  return uVar4;
}

