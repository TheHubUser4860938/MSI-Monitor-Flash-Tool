// rea decompile_all
// name: CPane::CalcInsideRect
// address: 0x1007ff37
// body: available
// range: 0x1007ff37-0x1008003f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CPane::CalcInsideRect(class CRect &,int)const 
   
   Library: Visual Studio 2015 Release */

void __thiscall CPane::CalcInsideRect(CPane *this,CRect *param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  pcVar1 = *(code **)(*(int *)this + 0x1c0);
  guard_check_icall();
  uVar2 = (*pcVar1)();
  pcVar1 = *(code **)(*(int *)this + 0x170);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  if (iVar3 == 0) {
    pcVar1 = *(code **)(*(int *)this + 0x16c);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 == 0) {
      if ((uVar2 & 0x100) != 0) {
        *(int *)param_1 = *(int *)param_1 + 1;
      }
      if ((uVar2 & 0x200) != 0) {
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
      }
      if ((uVar2 & 0x400) != 0) {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
      }
      if ((uVar2 & 0x800) != 0) {
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
      }
    }
  }
  if (param_2 == 0) {
    *(int *)param_1 = *(int *)param_1 + *(int *)(this + 0x130);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + *(int *)(this + 0x128);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - *(int *)(this + 0x134);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - *(int *)(this + 300);
    if ((uVar2 & 0x400001) == 0x400000) {
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 7;
    }
  }
  else {
    *(int *)param_1 = *(int *)param_1 + *(int *)(this + 0x128);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + *(int *)(this + 0x130);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - *(int *)(this + 300);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - *(int *)(this + 0x134);
    if ((uVar2 & 0x400001) == 0x400000) {
      uVar4 = CWnd::GetExStyle((CWnd *)this);
      if ((uVar4 & 0x400000) == 0) {
        *(int *)param_1 = *(int *)param_1 + 7;
      }
      else {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -7;
      }
    }
  }
  return;
}

