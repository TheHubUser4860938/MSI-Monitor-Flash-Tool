// rea decompile_all
// name: FUN_00489d88
// address: 0x489d88
// body: available
// range: 0x489d88-0x489e92 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x489e8e to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00489d88(undefined4 param_1,int param_2,LPRECT param_3)

{
  int iVar1;
  LONG LVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int local_10;
  int local_c;
  int local_8;
  
  if (*(int *)(in_ECX + 0xd78) == 0) {
    GetClientRect(*(HWND *)(in_ECX + 0x20),param_3);
    if (*(int *)(in_ECX + 0xc48) == 0) {
      param_3->bottom = param_3->top + 6;
      iVar4 = 0;
    }
    else {
      local_c = param_2;
      if (param_2 < 0) {
        local_c = 0;
      }
      local_10 = *(int *)(in_ECX + 0xc40);
      local_8 = 0;
      while (local_10 != 0) {
        iVar4 = FUN_0043410a(&local_10);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00429127();
        }
        iVar1 = *(int *)(iVar4 + 0x58);
        LVar2 = *(LONG *)(iVar4 + 0x5c);
        iVar3 = *(int *)(iVar4 + 0x60);
        if (local_c < iVar1) {
LAB_00489e82:
          param_3->top = iVar1;
          iVar4 = local_8;
LAB_00489e87:
          if (iVar4 != -1) goto LAB_00489e3a;
          break;
        }
        if (local_c <= iVar3) {
          param_3->left = *(LONG *)(iVar4 + 0x54);
          param_3->top = iVar1;
          param_3->right = LVar2;
          param_3->bottom = iVar3;
          if (local_c - iVar1 <= iVar3 - local_c) goto LAB_00489e82;
          param_3->top = param_3->bottom;
          iVar4 = local_8 + 1;
          goto LAB_00489e87;
        }
        local_8 = local_8 + 1;
      }
      param_3->top = param_3->bottom + -6;
      iVar4 = local_8;
LAB_00489e3a:
      param_3->bottom = param_3->top + 6;
      OffsetRect(param_3,0,-3);
    }
  }
  else {
    iVar4 = -1;
  }
  return iVar4;
}

