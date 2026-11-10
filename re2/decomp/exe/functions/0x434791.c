// rea decompile_all
// name: CWnd::RemoveRadioCheckFromGroup
// address: 0x434791
// body: available
// range: 0x434791-0x4348a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CWnd::RemoveRadioCheckFromGroup(struct COleControlSiteOrWnd const
   *)const 
   
   Library: Visual Studio 2015 Release */

void __thiscall CWnd::RemoveRadioCheckFromGroup(CWnd *this,COleControlSiteOrWnd *param_1)

{
  LRESULT LVar1;
  __POSITION *p_Var2;
  undefined4 *puVar3;
  ulong uVar4;
  __POSITION *local_8;
  
  if (*(int *)(this + 0x70) == 0) {
    return;
  }
  if (param_1 == (COleControlSiteOrWnd *)0x0) {
    return;
  }
  local_8 = (__POSITION *)this;
  if ((*(int *)(param_1 + 8) == 0) || (LVar1 = SendMessageW(*(HWND *)param_1,0xf0,0,0), LVar1 != 1))
  {
    p_Var2 = CObList::Find((CObList *)(*(int *)(this + 0x70) + 0x40),(CObject *)param_1,
                           (__POSITION *)0x0);
    local_8 = p_Var2;
    FUN_004ead48(&local_8);
    do {
      if (local_8 == (__POSITION *)0x0) {
LAB_00434830:
        local_8 = p_Var2;
        FUN_00434304(&local_8);
        while( true ) {
          if (local_8 == (__POSITION *)0x0) {
            return;
          }
          puVar3 = (undefined4 *)FUN_00434304(&local_8);
          param_1 = (COleControlSiteOrWnd *)*puVar3;
          if ((*(int *)(param_1 + 8) != 0) &&
             (LVar1 = SendMessageW(*(HWND *)param_1,0xf0,0,0), LVar1 == 1)) break;
          uVar4 = COleControlSiteOrWnd::GetStyle(param_1);
          if ((uVar4 & 0x20000) != 0) {
            return;
          }
        }
        break;
      }
      puVar3 = (undefined4 *)FUN_004ead48(&local_8);
      param_1 = (COleControlSiteOrWnd *)*puVar3;
      uVar4 = COleControlSiteOrWnd::GetStyle(param_1);
      if ((uVar4 & 0x20000) != 0) goto LAB_00434830;
    } while ((*(int *)(param_1 + 8) == 0) ||
            (LVar1 = SendMessageW(*(HWND *)param_1,0xf0,0,0), LVar1 != 1));
  }
  SendMessageW(*(HWND *)param_1,0xf1,0,0);
  return;
}

