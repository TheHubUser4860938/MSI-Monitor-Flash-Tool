// rea decompile_all
// name: CMFCToolBarEditBoxButton::SetACCData
// address: 0x1014ba00
// body: available
// range: 0x1014ba00-0x1014ba63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCToolBarEditBoxButton::SetACCData(class CWnd *,class
   CAccessibilityData &)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCToolBarEditBoxButton::SetACCData
          (CMFCToolBarEditBoxButton *this,CWnd *param_1,CAccessibilityData *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = CMFCToolBarButton::SetACCData((CMFCToolBarButton *)this,param_1,param_2);
  iVar3 = 0;
  if (iVar2 != 0) {
    *(undefined4 *)(param_2 + 0x18) = 0x2a;
    *(undefined4 *)(param_2 + 0x1c) = 0x100000;
    pcVar1 = *(code **)(*(int *)this + 0xa4);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 != 0) {
      *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) | 4;
    }
    ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)(param_2 + 0x14),L"Edit");
    FUN_10018680(this + 0x2c);
    iVar3 = 1;
  }
  return iVar3;
}

