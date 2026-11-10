// rea decompile_all
// name: CMFCColorBar::GetColorGridSize
// address: 0x4ab55f
// body: available
// range: 0x4ab55f-0x4ab61c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: class CSize __thiscall CMFCColorBar::GetColorGridSize(int)const 
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCColorBar::GetColorGridSize(CMFCColorBar *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int in_stack_00000008;
  
  iVar1 = *(int *)(this + 0xe10);
  if (*(int *)(this + 0xdf8) == 0) goto LAB_004ab5d9;
  pcVar2 = *(code **)(*(int *)this + 0x170);
  guard_check_icall();
  iVar3 = (*pcVar2)();
  if (((iVar3 == 0) && (in_stack_00000008 == 0)) && (iVar3 = *(int *)(this + 0xdd4), 0 < iVar3)) {
    iVar4 = iVar1 / iVar3;
    if (iVar1 % iVar3 != 0) {
      iVar4 = iVar4 + 1;
    }
    goto LAB_004ab60c;
  }
  if (*(int *)(this + 0xdf8) == 0) {
LAB_004ab5d9:
    iVar4 = *(int *)(this + 0xdd0);
    if (iVar4 < 1) {
      FUN_00586e14((double)iVar1);
      iVar4 = FUN_0055bce0();
      iVar4 = iVar4 + 1;
    }
  }
  else {
    pcVar2 = *(code **)(*(int *)this + 0x170);
    guard_check_icall();
    iVar3 = (*pcVar2)();
    if ((iVar3 != 0) || (iVar4 = *(int *)(this + 0xdd8), iVar4 < 1)) goto LAB_004ab5d9;
  }
  iVar3 = iVar1 / iVar4;
  if (iVar1 % iVar4 != 0) {
    iVar3 = iVar3 + 1;
  }
LAB_004ab60c:
  *(int *)(param_1 + 4) = iVar3;
  *(int *)param_1 = iVar4;
  return;
}

