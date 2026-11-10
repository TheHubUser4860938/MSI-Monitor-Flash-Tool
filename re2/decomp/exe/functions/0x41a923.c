// rea decompile_all
// name: CMFCVisualManager::OnDrawCheckBoxEx
// address: 0x41a923
// body: available
// range: 0x41a923-0x41aaae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawCheckBoxEx(class CDC *,class
   CRect,int,int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCVisualManager::OnDrawCheckBoxEx(undefined4 param_1_00,CDC *param_1)

{
  AFX_GLOBAL_DATA *pAVar1;
  undefined4 uVar2;
  HBRUSH pHVar3;
  ulong uVar4;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000024;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined **local_18;
  HBRUSH local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x41a92f;
  if (DAT_00614e28 == 0) {
    if (in_stack_0000001c != 0) {
      DrawFocusRect(*(HDC *)(param_1 + 4),(RECT *)&stack0x00000008);
    }
    InflateRect((LPRECT)&stack0x00000008,-1,-1);
    pAVar1 = GetGlobalData();
    if (in_stack_00000024 == 0) {
      uVar2 = *(undefined4 *)(pAVar1 + 0x54);
    }
    else {
      uVar2 = *(undefined4 *)(pAVar1 + 0x6c);
    }
    FUN_0044847c(&stack0x00000008,uVar2);
    pAVar1 = GetGlobalData();
    uVar4 = *(ulong *)(pAVar1 + 0x5c);
    pAVar1 = GetGlobalData();
    CDC::Draw3dRect(param_1,(tagRECT *)&stack0x00000008,*(ulong *)(pAVar1 + 0x60),uVar4);
    InflateRect((LPRECT)&stack0x00000008,-1,-1);
    pAVar1 = GetGlobalData();
    uVar4 = *(ulong *)(pAVar1 + 100);
    pAVar1 = GetGlobalData();
    CDC::Draw3dRect(param_1,(tagRECT *)&stack0x00000008,*(ulong *)(pAVar1 + 0x58),uVar4);
    if (in_stack_00000018 == 1) {
      local_20 = 0;
      local_1c = 0;
      CMenuImages::Draw(param_1,2,(CRect *)&stack0x00000008,0,(CSize *)&local_20);
    }
    else if (in_stack_00000018 == 2) {
      InflateRect((LPRECT)&stack0x00000008,-1,-1);
      local_14 = (HBRUSH)0x0;
      local_18 = CBrush::vftable;
      local_8 = 1;
      pAVar1 = GetGlobalData();
      pHVar3 = CreateHatchBrush(5,*(COLORREF *)(pAVar1 + 0x28));
      CMenu::Attach((CMenu *)&local_18,(HMENU__ *)pHVar3);
      FillRect(*(HDC *)(param_1 + 4),(RECT *)&stack0x00000008,local_14);
      local_18 = CBrush::vftable;
      FUN_0040ee80();
    }
  }
  else {
    CDrawingManager::CDrawingManager((CDrawingManager *)&local_20,param_1);
    local_8 = 0;
    InflateRect((LPRECT)&stack0x00000008,-1,-1);
    pAVar1 = GetGlobalData();
    if (in_stack_00000024 == 0) {
      uVar4 = *(ulong *)(pAVar1 + 0x54);
    }
    else {
      uVar4 = *(ulong *)(pAVar1 + 0x6c);
    }
    pAVar1 = GetGlobalData();
    CDrawingManager::DrawRect
              ((CDrawingManager *)&local_20,(CRect *)&stack0x00000008,uVar4,
               *(ulong *)(pAVar1 + 0x58));
    if (in_stack_00000018 == 1) {
      local_28 = 0;
      local_24 = 0;
      CMenuImages::Draw(param_1,2,(CRect *)&stack0x00000008,0,(CSize *)&local_28);
    }
    FUN_00461ef9();
  }
  return;
}

