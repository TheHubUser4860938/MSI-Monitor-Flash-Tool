// rea decompile_all
// name: _AfxPostInitDialog
// address: 0x1002c059
// body: available
// range: 0x1002c059-0x1002c104 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    void __stdcall _AfxPostInitDialog(class CWnd *,struct tagRECT const &,unsigned long)
   
   Library: Visual Studio 2015 Release */

void _AfxPostInitDialog(CWnd *param_1,tagRECT *param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  HWND pHVar3;
  CWnd *this;
  int iVar4;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  if (((param_3 & 0x10000000) == 0) &&
     (uVar2 = CWnd::GetExStyle(param_1), (uVar2 & 0x50000000) == 0)) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(param_1 + 0x20),&local_18);
    if ((param_2->left == local_18.left) && (param_2->top == local_18.top)) {
      pHVar3 = GetWindow(*(HWND *)(param_1 + 0x20),4);
      this = CWnd::FromHandle(pHVar3);
      if ((this == (CWnd *)0x0) || (iVar4 = CWnd::IsWindowEnabled(this), iVar4 == 0)) {
        pcVar1 = *(code **)(*(int *)param_1 + 0x14c);
        guard_check_icall();
        iVar4 = (*pcVar1)();
        if (iVar4 != 0) {
          CWnd::CenterWindow(param_1,(CWnd *)0x0);
        }
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

