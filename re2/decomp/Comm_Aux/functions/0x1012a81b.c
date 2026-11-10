// rea decompile_all
// name: CDockablePane::DockToWindow
// address: 0x1012a81b
// body: available
// range: 0x1012a81b-0x1012a928 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CDockablePane::DockToWindow(class CDockablePane *,unsigned
   long,struct tagRECT const *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CDockablePane::DockToWindow
          (CDockablePane *this,CDockablePane *param_1,ulong param_2,tagRECT *param_3)

{
  code *pcVar1;
  CPaneDivider *pCVar2;
  uint uVar3;
  BOOL BVar4;
  CFrameWnd *pCVar5;
  int iVar6;
  undefined4 uVar7;
  
  pCVar2 = GetDefaultPaneDivider(param_1);
  if (pCVar2 == (CPaneDivider *)0x0) {
    CWnd::ShowWindow((CWnd *)this,5);
    uVar3 = 0;
  }
  else {
    if ((*(HWND *)(this + 0x350) != (HWND)0x0) &&
       (BVar4 = IsWindow(*(HWND *)(this + 0x350)), BVar4 != 0)) {
      pcVar1 = *(code **)(*(int *)this + 0x240);
      guard_check_icall(0);
      (*pcVar1)();
    }
    iVar6 = *(int *)this;
    uVar7 = 0;
    pCVar5 = AFXGetParentFrame((CWnd *)this);
    pcVar1 = *(code **)(iVar6 + 0x308);
    guard_check_icall(pCVar5,uVar7);
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)pCVar2 + 0x278);
    guard_check_icall(this,param_1,param_2,param_3);
    iVar6 = (*pcVar1)();
    if (iVar6 != 0) {
      CBasePane::InsertPane((CBasePane *)this,(CBasePane *)this,(CBasePane *)param_1,1);
      *(undefined4 *)(this + 0x350) = *(undefined4 *)(pCVar2 + 0x20);
      pcVar1 = *(code **)(*(int *)this + 0x1f0);
      guard_check_icall(1);
      (*pcVar1)();
      pcVar1 = *(code **)(*(int *)this + 0x238);
      guard_check_icall(0,0,0,0,0,0x7f,0);
      (*pcVar1)();
      pcVar1 = *(code **)(*(int *)this + 0x268);
      guard_check_icall(0);
      (*pcVar1)();
      pcVar1 = *(code **)(*(int *)this + 0x2fc);
      guard_check_icall(this,0,0);
      (*pcVar1)();
    }
    uVar3 = (uint)(iVar6 != 0);
  }
  return uVar3;
}

