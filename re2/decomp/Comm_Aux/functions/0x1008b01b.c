// rea decompile_all
// name: CMFCVisualManager::OnDrawComboDropButton
// address: 0x1008b01b
// body: available
// range: 0x1008b01b-0x1008b15f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawComboDropButton(class CDC *,class
   CRect,int,int,int,class CMFCToolBarComboBoxButton *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCVisualManager::OnDrawComboDropButton(undefined4 param_1_00,CDC *param_1)

{
  code *pcVar1;
  COLORREF CVar2;
  AFX_GLOBAL_DATA *pAVar3;
  HBRUSH hbr;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  ulong uVar4;
  ulong uVar5;
  undefined4 local_20;
  undefined4 local_1c;
  CDrawingManager local_18 [16];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x1008b027;
  CVar2 = GetTextColor(*(HDC *)(param_1 + 8));
  if (DAT_1020e40c == 0) {
    pAVar3 = GetGlobalData();
    hbr = (HBRUSH)0x0;
    if (pAVar3 != (AFX_GLOBAL_DATA *)0xffffff30) {
      hbr = *(HBRUSH *)(pAVar3 + 0xd4);
    }
    FillRect(*(HDC *)(param_1 + 4),(RECT *)&stack0x00000008,hbr);
    pAVar3 = GetGlobalData();
    uVar5 = *(ulong *)(pAVar3 + 0x5c);
    pAVar3 = GetGlobalData();
    CDC::Draw3dRect(param_1,(tagRECT *)&stack0x00000008,*(ulong *)(pAVar3 + 0x5c),uVar5);
    if (in_stack_0000001c == 0) {
      if (in_stack_00000020 == 0) goto LAB_1008b126;
      pAVar3 = GetGlobalData();
      uVar5 = *(ulong *)(pAVar3 + 0x58);
      pAVar3 = GetGlobalData();
      uVar4 = *(ulong *)(pAVar3 + 0x5c);
    }
    else {
      OffsetRect((LPRECT)&stack0x00000008,1,1);
      pAVar3 = GetGlobalData();
      uVar5 = *(ulong *)(pAVar3 + 0x5c);
      pAVar3 = GetGlobalData();
      uVar4 = *(ulong *)(pAVar3 + 0x58);
    }
    CDC::Draw3dRect(param_1,(tagRECT *)&stack0x00000008,uVar4,uVar5);
    goto LAB_1008b126;
  }
  CDrawingManager::CDrawingManager(local_18,param_1);
  local_8 = 0;
  pAVar3 = GetGlobalData();
  uVar5 = *(ulong *)(pAVar3 + 0x5c);
  pAVar3 = GetGlobalData();
  CDrawingManager::DrawRect(local_18,(CRect *)&stack0x00000008,*(ulong *)(pAVar3 + 0x54),uVar5);
  if (in_stack_0000001c == 0) {
    if (in_stack_00000020 != 0) goto LAB_1008b083;
  }
  else {
    OffsetRect((LPRECT)&stack0x00000008,1,1);
LAB_1008b083:
    pAVar3 = GetGlobalData();
    CDrawingManager::DrawRect
              (local_18,(CRect *)&stack0x00000008,0xffffffff,*(ulong *)(pAVar3 + 0x58));
  }
  local_8 = 0xffffffff;
  FUN_100afd36();
LAB_1008b126:
  local_20 = 0;
  local_1c = 0;
  CMenuImages::Draw(param_1,0,(CRect *)&stack0x00000008,(uint)(in_stack_00000018 != 0),
                    (CSize *)&local_20);
  pcVar1 = *(code **)(*(int *)param_1 + 0x30);
  guard_check_icall(CVar2);
  (*pcVar1)();
  return;
}

