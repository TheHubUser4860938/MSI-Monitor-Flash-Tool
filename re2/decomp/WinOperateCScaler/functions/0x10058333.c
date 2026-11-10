// rea decompile_all
// name: CPane::PrepareToDock
// address: 0x10058333
// body: available
// range: 0x10058333-0x100583e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CPane::PrepareToDock(class CDockSite *,enum AFX_DOCK_METHOD)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPane::PrepareToDock(CPane *this,CDockSite *param_1,AFX_DOCK_METHOD param_2)

{
  code *pcVar1;
  int iVar2;
  CObject *pCVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if (param_1 != (CDockSite *)0x0) {
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockSite_101c037c,(CObject *)param_1);
    *(CObject **)(this + 0xb8) = pCVar3;
    pcVar1 = *(code **)(*(int *)this + 0x308);
    guard_check_icall(param_1,param_2);
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)this + 0x1c0);
    guard_check_icall();
    uVar4 = (*pcVar1)();
    pcVar1 = *(code **)(*(int *)this + 0x1e4);
    guard_check_icall(*(uint *)(this + 0x9c) & 0xf000 | uVar4 & 0xffff0ffe | 0xf00);
    (*pcVar1)();
    iVar2 = *(int *)this;
    pcVar1 = *(code **)(*(int *)param_1 + 0x194);
    guard_check_icall();
    uVar5 = (*pcVar1)();
    pcVar1 = *(code **)(iVar2 + 0x1e0);
    guard_check_icall(uVar5);
    (*pcVar1)();
  }
  return;
}

