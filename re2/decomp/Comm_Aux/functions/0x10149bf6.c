// rea decompile_all
// name: CMFCVisualManagerOffice2003::OnDrawScrollButtons
// address: 0x10149bf6
// body: available
// range: 0x10149bf6-0x10149cfd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2003::OnDrawScrollButtons(class CDC
   *,class CRect const &,int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2003::OnDrawScrollButtons
          (CMFCVisualManagerOffice2003 *this,CDC *param_1,CRect *param_2,int param_3,int param_4,
          int param_5)

{
  CMFCVisualManagerOffice2003 *pCVar1;
  AFX_GLOBAL_DATA *pAVar2;
  HBRUSH hbr;
  int iVar3;
  ulong uVar4;
  tagRECT *ptVar5;
  undefined1 local_44 [8];
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34;
  HBRUSH local_30;
  tagRECT *local_2c;
  CMFCVisualManagerOffice2003 *local_28;
  RECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x34;
  local_8 = 0x10149c02;
  local_2c = (tagRECT *)param_2;
  local_28 = this;
  FUN_100afca7(local_44);
  local_24.left = *(LONG *)param_2;
  local_24.right = *(LONG *)(param_2 + 8);
  local_24.bottom = *(LONG *)(param_2 + 0xc);
  local_24.top = *(int *)(param_2 + 4) - param_3;
  pAVar2 = GetGlobalData();
  hbr = (HBRUSH)0x0;
  if (pAVar2 != (AFX_GLOBAL_DATA *)0xffffff30) {
    hbr = *(HBRUSH *)(pAVar2 + 0xd4);
  }
  FillRect(*(HDC *)(param_1 + 4),&local_24,hbr);
  pAVar2 = GetGlobalData();
  if (param_5 == 0) {
    uVar4 = *(ulong *)(pAVar2 + 0x58);
    pAVar2 = GetGlobalData();
    ptVar5 = local_2c;
    CDC::Draw3dRect(param_1,local_2c,*(ulong *)(pAVar2 + 0x58),uVar4);
    goto LAB_10149cde;
  }
  if (*(int *)(pAVar2 + 0x1ac) < 9) {
LAB_10149c7b:
    pAVar2 = GetGlobalData();
    uVar4 = *(ulong *)(pAVar2 + 0x6c);
  }
  else {
    pAVar2 = GetGlobalData();
    iVar3 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar2);
    if (iVar3 != 0) goto LAB_10149c7b;
    uVar4 = *(ulong *)(local_28 + 0x18c);
    if (uVar4 == 0xffffffff) {
      uVar4 = *(ulong *)(local_28 + 200);
    }
  }
  pCVar1 = local_28;
  CBrush::CBrush((CBrush *)&local_34,uVar4);
  ptVar5 = local_2c;
  local_8 = 0;
  FillRect(*(HDC *)(param_1 + 4),local_2c,local_30);
  CDC::Draw3dRect(param_1,ptVar5,*(ulong *)(pCVar1 + 0xe8),*(ulong *)(pCVar1 + 0xe8));
  local_8 = 0xffffffff;
  local_34 = CBrush::vftable;
  CImageList::~CImageList((CImageList *)&local_34);
LAB_10149cde:
  local_3c = 0;
  local_38 = 0;
  CMenuImages::Draw(param_1,param_4,(CRect *)ptVar5,0,(CSize *)&local_3c);
  FUN_1017f5f4();
  return;
}

