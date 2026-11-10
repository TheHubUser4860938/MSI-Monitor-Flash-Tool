// rea decompile_all
// name: CSmartDockingManager::Start
// address: 0x100d305c
// body: available
// range: 0x100d305c-0x100d3198 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CSmartDockingManager::Start(class CWnd *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CSmartDockingManager::Start(CSmartDockingManager *this,CWnd *param_1)

{
  code *pcVar1;
  uint uVar2;
  CObject *pCVar3;
  undefined4 uVar4;
  CSmartDockingManager *pCVar5;
  LONG LStack_24;
  int local_8;
  
  if ((*(int *)(this + 8) != 0) && (*(int *)(this + 4) == 0)) {
    *(undefined4 *)(this + 0x110) = 0xffffffff;
    *(CWnd **)(this + 0x18) = param_1;
    *(CWnd **)(this + 0xb4) = param_1;
    *(undefined4 *)(this + 0x1c) = 0xf000;
    if (param_1 != (CWnd *)0x0) {
      LStack_24 = 0x100d30a3;
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_102018e4,(CObject *)param_1)
      ;
      if (pCVar3 != (CObject *)0x0) {
        pcVar1 = *(code **)(*(int *)pCVar3 + 0x1ac);
        guard_check_icall();
        pCVar3 = (CObject *)(*pcVar1)();
        LStack_24 = 0x100d30c9;
        pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_10201ba4,pCVar3);
        if (pCVar3 != (CObject *)0x0) {
          pcVar1 = *(code **)(*(int *)pCVar3 + 0x198);
          guard_check_icall();
          uVar4 = (*pcVar1)();
          *(undefined4 *)(this + 0x1c) = uVar4;
        }
      }
    }
    pCVar5 = this + 0xe8;
    local_8 = 0;
    do {
      CopyRect((LPRECT)&stack0xffffffd8,(RECT *)(this + 0x20));
      pcVar1 = *(code **)(**(int **)pCVar5 + 0x18);
      guard_check_icall();
      (*pcVar1)();
      uVar2 = *(uint *)(this + 0x1c);
      if ((((((uVar2 & 0x1000) != 0) && (local_8 == 0)) ||
           (((uVar2 & 0x4000) != 0 && (local_8 == 1)))) ||
          (((uVar2 & 0x2000) != 0 && (local_8 == 2)))) ||
         (((uVar2 & 0x8000) != 0 && (local_8 == 3)))) {
        pcVar1 = *(code **)(**(int **)pCVar5 + 0x14);
        guard_check_icall();
        (*pcVar1)();
      }
      local_8 = local_8 + 1;
      pCVar5 = pCVar5 + 4;
    } while (local_8 < 4);
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 0xc) = 1;
    *(undefined4 *)(this + 4) = 1;
  }
  return;
}

