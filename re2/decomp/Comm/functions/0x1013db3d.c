// rea decompile_all
// name: CMFCColorPickerCtrl::GetCursorRect
// address: 0x1013db3d
// body: available
// range: 0x1013db3d-0x1013dbdd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: class CRect __thiscall CMFCColorPickerCtrl::GetCursorRect(void)
   
   Library: Visual Studio 2015 Release */

LPRECT __thiscall CMFCColorPickerCtrl::GetCursorRect(CMFCColorPickerCtrl *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LPRECT in_stack_00000004;
  int local_c;
  
  in_stack_00000004->left = 0;
  in_stack_00000004->top = 0;
  in_stack_00000004->right = 0;
  in_stack_00000004->bottom = 0;
  if (*(int *)(this + 0x80) == 1) {
    piVar1 = (int *)GetCursorPos(this);
    iVar3 = *piVar1;
    iVar4 = piVar1[1];
    local_c = iVar3 + 9;
    iVar2 = iVar4 + 9;
  }
  else {
    if (*(int *)(this + 0x80) != 2) {
      SetRectEmpty(in_stack_00000004);
      goto LAB_1013dbb1;
    }
    piVar1 = (int *)GetCursorPos(this);
    iVar3 = *piVar1;
    iVar4 = piVar1[1];
    local_c = iVar3 + 0x13;
    iVar2 = iVar4 + 0x13;
  }
  in_stack_00000004->left = iVar3;
  in_stack_00000004->top = iVar4;
  in_stack_00000004->right = local_c;
  in_stack_00000004->bottom = iVar2;
LAB_1013dbb1:
  OffsetRect(in_stack_00000004,-((in_stack_00000004->right - in_stack_00000004->left) / 2),
             -((in_stack_00000004->bottom - in_stack_00000004->top) / 2));
  return in_stack_00000004;
}

