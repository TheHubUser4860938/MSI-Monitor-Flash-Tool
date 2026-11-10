// rea decompile_all
// name: CMFCVisualManager::OnDrawRibbonCategoryScroll
// address: 0x1008c826
// body: available
// range: 0x1008c826-0x1008c917 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawRibbonCategoryScroll(class CDC *,class
   CRibbonCategoryScroll *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManager::OnDrawRibbonCategoryScroll
          (CMFCVisualManager *this,CDC *param_1,CRibbonCategoryScroll *param_2)

{
  code *pcVar1;
  AFX_GLOBAL_DATA *pAVar2;
  HBRUSH hbr;
  int iVar3;
  uint uVar4;
  CDC *this_00;
  ulong uVar5;
  undefined4 local_38;
  undefined4 local_34;
  CDrawingManager local_30 [8];
  CDC *local_28;
  RECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x1008c832;
  local_28 = param_1;
  local_24.left = *(LONG *)(param_2 + 0x74);
  local_24.top = *(LONG *)(param_2 + 0x78);
  local_24.right = *(LONG *)(param_2 + 0x7c);
  local_24.bottom = *(int *)(param_2 + 0x80) + -1;
  pAVar2 = GetGlobalData();
  this_00 = local_28;
  hbr = (HBRUSH)0x0;
  if (pAVar2 != (AFX_GLOBAL_DATA *)0xffffff30) {
    hbr = *(HBRUSH *)(pAVar2 + 0xd4);
  }
  FillRect(*(HDC *)(local_28 + 4),&local_24,hbr);
  pcVar1 = *(code **)(*(int *)param_2 + 0xd0);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  if (iVar3 != 0) {
    CDrawingManager::CDrawingManager(local_30,this_00);
    local_8 = 0;
    FUN_100b2b1f(local_24.left,local_24.top,local_24.right,local_24.bottom,0xffffffff,0xffffffff,0,
                 0xffffffff);
    local_8 = 0xffffffff;
    FUN_100afd36();
    this_00 = local_28;
  }
  uVar4 = *(uint *)(param_2 + 0x1c4);
  pAVar2 = GetGlobalData();
  if (*(int *)(pAVar2 + 0x198) != 0) {
    uVar4 = (uint)(uVar4 == 0);
  }
  local_38 = 0;
  local_34 = 0;
  CMenuImages::Draw(this_00,(-(uint)(uVar4 != 0) & 3) + 0xe,(CRect *)&local_24,0,(CSize *)&local_38)
  ;
  pAVar2 = GetGlobalData();
  uVar5 = *(ulong *)(pAVar2 + 0x58);
  pAVar2 = GetGlobalData();
  CDC::Draw3dRect(this_00,&local_24,*(ulong *)(pAVar2 + 0x58),uVar5);
  FUN_1017f5f4();
  return;
}

