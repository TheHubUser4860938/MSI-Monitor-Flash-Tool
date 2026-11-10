// rea decompile_all
// name: CPane::OnLButtonDown
// address: 0x10081967
// body: available
// range: 0x10081967-0x10081aa2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CPane::OnLButtonDown(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CPane::OnLButtonDown(CPane *this,WPARAM param_1,undefined2 param_3,undefined2 param_4)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if (this[0x170] == (CPane)0x0) {
    pcVar1 = *(code **)(*(int *)this + 0x1cc);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      uVar5 = 0;
      pcVar1 = *(code **)(*(int *)this + 0x228);
      guard_check_icall(0);
      piVar3 = (int *)(*pcVar1)();
      pcVar1 = *(code **)(*(int *)this + 0x1b8);
      guard_check_icall();
      uVar4 = (*pcVar1)();
      if (((uVar4 & 1) == 0) && (piVar3 == (int *)0x0)) {
        pcVar1 = *(code **)(*(int *)this + 0x1b8);
        guard_check_icall(uVar5);
        uVar4 = (*pcVar1)();
        if ((uVar4 & 2) != 0) {
          pcVar1 = *(code **)(*(int *)this + 0x314);
          guard_check_icall(1);
          (*pcVar1)();
        }
      }
      else {
        pcVar1 = *(code **)(*(int *)this + 0x31c);
        guard_check_icall(uVar5);
        (*pcVar1)();
        if (piVar3 != (int *)0x0) {
          pcVar1 = *(code **)(*piVar3 + 0x1a0);
          guard_check_icall();
          iVar2 = (*pcVar1)();
          if (iVar2 == 1) {
            MapWindowPoints(*(HWND *)(this + 0x20),(HWND)piVar3[8],(LPPOINT)&param_3,1);
            SendMessageW((HWND)piVar3[8],0x201,param_1,CONCAT22(param_4,param_3));
            *(undefined4 *)(this + 0x2ac) = 1;
            return;
          }
          pcVar1 = *(code **)(*(int *)this + 0x314);
          guard_check_icall();
          (*pcVar1)();
          *(undefined4 *)(this + 0x2ac) = 0;
          return;
        }
        pcVar1 = *(code **)(*(int *)this + 0x314);
        guard_check_icall(1);
        (*pcVar1)();
        *(undefined4 *)(this + 0x2ac) = 0;
      }
    }
  }
  FUN_100509af();
  return;
}

