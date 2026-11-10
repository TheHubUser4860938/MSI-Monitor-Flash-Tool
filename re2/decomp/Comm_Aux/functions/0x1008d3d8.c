// rea decompile_all
// name: CMFCVisualManager::OnDrawRibbonPanel
// address: 0x1008d3d8
// body: available
// range: 0x1008d3d8-0x1008d4dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual unsigned long __thiscall CMFCVisualManager::OnDrawRibbonPanel(class CDC *,class
   CMFCRibbonPanel *,class CRect,class CRect)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall
CMFCVisualManager::OnDrawRibbonPanel
          (undefined4 param_1_00,CDC *param_1,CMFCRibbonPanel *param_2,LONG param_4,LONG param_5,
          LONG param_6,LONG param_7)

{
  code *pcVar1;
  AFX_GLOBAL_DATA *pAVar2;
  int iVar3;
  HBRUSH hbr;
  CDC *this;
  ulong uVar4;
  CDrawingManager local_20 [8];
  ulong local_18;
  CDC *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x1008d3e4;
  local_14 = param_1;
  pAVar2 = GetGlobalData();
  local_18 = *(ulong *)(pAVar2 + 0x68);
  iVar3 = CMFCRibbonPanel::IsCollapsed(param_2);
  if (iVar3 != 0) {
    pcVar1 = *(code **)(*(int *)(param_2 + 0x2e0) + 0xd4);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    param_1 = local_14;
    if (iVar3 != 0) {
      pAVar2 = GetGlobalData();
      this = local_14;
      hbr = (HBRUSH)0x0;
      if (pAVar2 != (AFX_GLOBAL_DATA *)0xffffff60) {
        hbr = *(HBRUSH *)(pAVar2 + 0xa4);
      }
      FillRect(*(HDC *)(local_14 + 4),(RECT *)&param_4,hbr);
      pAVar2 = GetGlobalData();
      local_18 = *(ulong *)(pAVar2 + 0x40);
      goto LAB_1008d48e;
    }
  }
  this = local_14;
  if (*(int *)(param_2 + 0x68) != 0) {
    CDrawingManager::CDrawingManager(local_20,param_1);
    local_8 = 0;
    FUN_100b2b1f(param_4,param_5,param_6,param_7,0xffffffff,0xffffffff,0,0xffffffff);
    local_8 = 0xffffffff;
    FUN_100afd36();
    this = local_14;
  }
LAB_1008d48e:
  pAVar2 = GetGlobalData();
  uVar4 = *(ulong *)(pAVar2 + 0x5c);
  pAVar2 = GetGlobalData();
  CDC::Draw3dRect(this,(tagRECT *)&param_4,*(ulong *)(pAVar2 + 0x5c),uVar4);
  OffsetRect((LPRECT)&param_4,-1,-1);
  pAVar2 = GetGlobalData();
  uVar4 = *(ulong *)(pAVar2 + 0x58);
  pAVar2 = GetGlobalData();
  CDC::Draw3dRect(this,(tagRECT *)&param_4,*(ulong *)(pAVar2 + 0x58),uVar4);
  return local_18;
}

