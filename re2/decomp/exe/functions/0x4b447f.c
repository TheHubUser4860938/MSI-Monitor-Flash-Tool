// rea decompile_all
// name: CMFCVisualManagerOffice2007::DrawSeparator
// address: 0x4b447f
// body: available
// range: 0x4b447f-0x4b45cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCVisualManagerOffice2007::DrawSeparator(class CDC *,class CRect
   const &,class CPen &,class CPen &,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2007::DrawSeparator
          (CMFCVisualManagerOffice2007 *this,CDC *param_1,CRect *param_2,CPen *param_3,CPen *param_4
          ,int param_5)

{
  CPen *pCVar1;
  bool bVar2;
  undefined1 local_58 [4];
  CPen *local_54;
  CDrawingManager local_50 [8];
  CPen *local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined1 local_34 [12];
  ulong local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x48;
  local_8 = 0x4b448b;
  bVar2 = param_5 == 0;
  local_48 = param_3;
  local_44 = *(int *)param_2;
  local_54 = param_4;
  local_40 = *(int *)(param_2 + 4);
  local_3c = *(int *)(param_2 + 8);
  local_38 = *(int *)(param_2 + 0xc);
  if (bVar2) {
    local_44 = (*(int *)(param_2 + 8) - *(int *)param_2) / 2 + local_44 + -1;
    local_3c = local_44;
  }
  else {
    local_40 = (*(int *)(param_2 + 0xc) - *(int *)(param_2 + 4)) / 2 + local_40 + -1;
    local_38 = local_40;
  }
  local_24.left = local_44;
  local_24.top = local_40;
  local_24.right = local_3c;
  local_24.bottom = local_38;
  OffsetRect(&local_24,(uint)bVar2,(uint)!bVar2);
  if (DAT_00614e28 == 0) {
    pCVar1 = CDC::SelectObject(param_1,local_48);
    CDC::MoveTo(param_1,(int)local_50,local_44);
    CDC::LineTo(param_1,local_3c,local_38);
    CDC::SelectObject(param_1,local_54);
    CDC::MoveTo(param_1,(int)local_58,local_24.left);
    CDC::LineTo(param_1,local_24.right,local_24.bottom);
    CDC::SelectObject(param_1,pCVar1);
  }
  else {
    CDrawingManager::CDrawingManager(local_50,param_1);
    local_8 = 0;
    GetObjectW(*(HANDLE *)(local_48 + 4),0x10,local_34);
    CDrawingManager::DrawLine(local_50,local_44,local_40,local_3c,local_38,local_28);
    GetObjectW(*(HANDLE *)(local_54 + 4),0x10,local_34);
    CDrawingManager::DrawLine
              (local_50,local_24.left,local_24.top,local_24.right,local_24.bottom,local_28);
    FUN_00461ef9();
  }
  FUN_0055bae6();
  return;
}

