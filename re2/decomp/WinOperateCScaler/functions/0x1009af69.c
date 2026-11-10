// rea decompile_all
// name: CMFCPropertyGridToolTipCtrl::Create
// address: 0x1009af69
// body: available
// range: 0x1009af69-0x1009afd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCPropertyGridToolTipCtrl::Create(class CWnd *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCPropertyGridToolTipCtrl::Create(CMFCPropertyGridToolTipCtrl *this,CWnd *param_1)

{
  HCURSOR pHVar1;
  wchar_t *pwVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  uVar4 = 0x10;
  *(CWnd **)(this + 0x9c) = param_1;
  pHVar1 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
  pwVar2 = (wchar_t *)AfxRegisterWndClass(0x800,pHVar1,uVar4,uVar5);
  ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)&DAT_1020b294,pwVar2);
  uVar4 = 0;
  if (param_1 != (CWnd *)0x0) {
    uVar4 = *(undefined4 *)(param_1 + 0x20);
  }
  iVar3 = *(int *)this;
  guard_check_icall(0,DAT_1020b294,&DAT_101a63a8,0x80000000,0,0,0,0,uVar4,0,0);
  iVar3 = (**(code **)(iVar3 + 0x5c))();
  return iVar3;
}

