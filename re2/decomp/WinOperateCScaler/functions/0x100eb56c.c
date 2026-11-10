// rea decompile_all
// name: CFrameImpl::DeleteToolBar
// address: 0x100eb56c
// body: available
// range: 0x100eb56c-0x100eb669 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CFrameImpl::DeleteToolBar(class CMFCToolBar *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CFrameImpl::DeleteToolBar(CFrameImpl *this,CMFCToolBar *param_1)

{
  code *pcVar1;
  __POSITION *p_Var2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  
  p_Var2 = CObList::Find((CObList *)(this + 0x54),(CObject *)param_1,(__POSITION *)0x0);
  iVar5 = 0;
  if (p_Var2 != (__POSITION *)0x0) {
    FUN_10039ef3(p_Var2);
    pcVar1 = *(code **)(*(int *)param_1 + 0x380);
    guard_check_icall(*(undefined4 *)(this + 0xa8),0xffffffff,0xffffffff);
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)param_1 + 0x1a0);
    guard_check_icall();
    piVar3 = (int *)(*pcVar1)();
    uVar6 = 0;
    pcVar1 = *(code **)(*(int *)param_1 + 0x228);
    guard_check_icall(0);
    piVar4 = (int *)(*pcVar1)();
    if (piVar3 == (int *)0x0) {
      if (piVar4 != (int *)0x0) {
        pcVar1 = *(code **)(*piVar4 + 0x17c);
        guard_check_icall(param_1,0,0);
        (*pcVar1)();
      }
    }
    else {
      pcVar1 = *(code **)(*piVar3 + 0x27c);
      guard_check_icall(param_1,0);
      (*pcVar1)();
    }
    pcVar1 = *(code **)(*(int *)param_1 + 0x60);
    guard_check_icall(uVar6);
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)param_1 + 4);
    guard_check_icall(1);
    (*pcVar1)();
    pcVar1 = *(code **)(**(int **)(this + 0xb0) + 0x178);
    guard_check_icall(1);
    (*pcVar1)();
    iVar5 = 1;
  }
  return iVar5;
}

