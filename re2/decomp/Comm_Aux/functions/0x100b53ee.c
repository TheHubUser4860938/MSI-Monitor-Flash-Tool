// rea decompile_all
// name: CMFCShadowWnd::Create
// address: 0x100b53ee
// body: available
// range: 0x100b53ee-0x100b54d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCShadowWnd::Create(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCShadowWnd::Create(CMFCShadowWnd *this)

{
  code *pcVar1;
  AFX_GLOBAL_DATA *pAVar2;
  HCURSOR pHVar3;
  ulong uVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x100b53fa;
  pAVar2 = GetGlobalData();
  if (8 < *(int *)(pAVar2 + 0x1ac)) {
    uVar9 = 0;
    uVar8 = 0x10;
    pHVar3 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
    uVar8 = AfxRegisterWndClass(0x800,pHVar3,uVar8,uVar9);
    FUN_100352e0(uVar8);
    local_8 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    uVar4 = CWnd::GetExStyle(*(CWnd **)(this + 0x130));
    if ((uVar4 & 0x400000) != 0) {
      *(undefined4 *)(this + 0x2b0) = 1;
    }
    pHVar5 = GetParent(*(HWND *)(*(int *)(this + 0x130) + 0x20));
    pCVar6 = CWnd::FromHandle(pHVar5);
    iVar7 = CreateEx(0x80080,local_28,&DAT_101e24d0,0x80000000,&local_24,pCVar6,0);
    if (iVar7 != 0) {
      pcVar1 = *(code **)(*(int *)(this + 0x138) + 0x2c);
      guard_check_icall(*(undefined4 *)(this + 0x134),0x5a5a5a,0,0x32);
      (*pcVar1)();
    }
    FUN_10034f00();
  }
  iVar7 = FUN_1017f5f4();
  return iVar7;
}

