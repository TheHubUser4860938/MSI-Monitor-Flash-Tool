// rea decompile_all
// name: CMFCVisualManager::OnFillMiniFrameCaption
// address: 0x1006627b
// body: available
// range: 0x1006627b-0x10066316 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual unsigned long __thiscall CMFCVisualManager::OnFillMiniFrameCaption(class CDC
   *,class CRect,class CPaneFrameWnd *,int)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall CMFCVisualManager::OnFillMiniFrameCaption(undefined4 param_1_00,int param_1)

{
  code *pcVar1;
  CObject *pCVar2;
  AFX_GLOBAL_DATA *pAVar3;
  ulong uVar4;
  int iVar5;
  int *in_stack_00000018;
  int in_stack_0000001c;
  undefined **local_18;
  HBRUSH local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x10066287;
  pcVar1 = *(code **)(*in_stack_00000018 + 0x1a8);
  guard_check_icall();
  pCVar2 = (CObject *)(*pcVar1)();
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCBaseToolBar_101b3400,pCVar2);
  iVar5 = in_stack_0000001c;
  if (pCVar2 != (CObject *)0x0) {
    iVar5 = 1;
  }
  pAVar3 = GetGlobalData();
  if (iVar5 == 0) {
    uVar4 = *(ulong *)(pAVar3 + 0x80);
  }
  else {
    uVar4 = *(ulong *)(pAVar3 + 0x7c);
  }
  CBrush::CBrush((CBrush *)&local_18,uVar4);
  local_8 = 0;
  FillRect(*(HDC *)(param_1 + 4),(RECT *)&stack0x00000008,local_14);
  pAVar3 = GetGlobalData();
  if (iVar5 == 0) {
    uVar4 = *(ulong *)(pAVar3 + 0x84);
  }
  else {
    uVar4 = *(ulong *)(pAVar3 + 0x74);
  }
  local_18 = CBrush::vftable;
  CImageList::~CImageList((CImageList *)&local_18);
  return uVar4;
}

