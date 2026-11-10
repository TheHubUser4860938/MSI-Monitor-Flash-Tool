// rea decompile_all
// name: CPreviewView::CalcPageDisplaySize
// address: 0x10151440
// body: available
// range: 0x10151440-0x101514cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: class CSize __thiscall CPreviewView::CalcPageDisplaySize(void)
   
   Library: Visual Studio 2015 Release */

CSize * __thiscall CPreviewView::CalcPageDisplaySize(CPreviewView *this)

{
  short sVar1;
  int iVar2;
  CSize *in_stack_00000004;
  int local_c [2];
  
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  local_c[0] = 0;
  local_c[1] = 0;
  CScrollView::GetTrueClientSize((CScrollView *)this,in_stack_00000004,(CSize *)local_c);
  if (*(int *)(this + 0x13c) == 0) {
    sVar1 = *(short *)(*(int *)(**(int **)(this + 0x164) + 0xa8) + 0x1e);
    if ((sVar1 != -1) && (sVar1 != *(short *)(*(int *)(**(int **)(this + 0x164) + 0xa8) + 0x1c))) {
      *(int *)in_stack_00000004 = *(int *)in_stack_00000004 - local_c[0];
    }
  }
  *(int *)(this + 0x14c) = (*(int *)in_stack_00000004 + -8) / 2;
  if (*(int *)(this + 0x148) == 2) {
    iVar2 = (*(int *)in_stack_00000004 + -0x18) / 2;
  }
  else {
    iVar2 = *(int *)in_stack_00000004 + -0x10;
  }
  *(int *)(in_stack_00000004 + 4) = *(int *)(in_stack_00000004 + 4) + -0x10;
  *(int *)in_stack_00000004 = iVar2;
  return in_stack_00000004;
}

