// rea decompile_all
// name: CSmartDockingHighlighterWnd::Create
// address: 0x54c025
// body: available
// range: 0x54c025-0x54c0d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CSmartDockingHighlighterWnd::Create(class CWnd *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CSmartDockingHighlighterWnd::Create(CSmartDockingHighlighterWnd *this,CWnd *param_1)

{
  int iVar1;
  AFX_GLOBAL_DATA *pAVar2;
  char *pcVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined4 uVar6;
  tagRECT *ptVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  iVar4 = 0;
  local_18.left = 0;
  local_18.top = 0;
  *(CWnd **)(this + 0x80) = param_1;
  local_18.right = 0;
  local_18.bottom = 0;
  SetRectEmpty(&local_18);
  pAVar2 = GetGlobalData();
  if (8 < *(int *)(pAVar2 + 0x1ac)) {
    iVar4 = 0x80000;
  }
  iVar1 = *(int *)this;
  ptVar7 = &local_18;
  uVar9 = 0;
  uVar8 = 0;
  uVar6 = 0x80000000;
  ppuVar5 = &PTR_005e8934;
  pcVar3 = GetSmartDockingWndClassName<0>();
  guard_check_icall(iVar4,pcVar3,ppuVar5,uVar6,ptVar7,param_1,uVar8,uVar9);
  (**(code **)(iVar1 + 0x58))();
  if (iVar4 == 0x80000) {
    SetLayeredWindowAttributes(*(HWND *)(this + 0x20),0,'d',2);
  }
  *(undefined4 *)(this + 0xb0) = DAT_00616090;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

