// rea decompile_all
// name: CScrollView::OnScroll
// address: 0x10080916
// body: available
// range: 0x10080916-0x10080a24 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CScrollView::OnScroll(unsigned int,unsigned int,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CScrollView::OnScroll(CScrollView *this,uint param_1,uint param_2,int param_3)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = CWnd::GetScrollPos((CWnd *)this,0);
  uVar5 = param_1 & 0xff;
  if (uVar5 == 0) {
    uVar6 = uVar2 - *(int *)(this + 0xa8);
  }
  else if (uVar5 == 1) {
    uVar6 = uVar2 + *(int *)(this + 0xa8);
  }
  else if (uVar5 == 2) {
    uVar6 = uVar2 - *(int *)(this + 0xa0);
  }
  else if (uVar5 == 3) {
    uVar6 = uVar2 + *(int *)(this + 0xa0);
  }
  else {
    uVar6 = param_2;
    if (uVar5 != 5) {
      if (uVar5 == 6) {
        uVar6 = 0;
      }
      else {
        uVar6 = uVar2;
        if (uVar5 == 7) {
          uVar6 = 0x7fffffff;
        }
      }
    }
  }
  uVar5 = CWnd::GetScrollPos((CWnd *)this,1);
  uVar3 = param_1 >> 8 & 0xff;
  if (uVar3 == 0) {
    param_2 = uVar5 - *(int *)(this + 0xac);
  }
  else if (uVar3 == 1) {
    param_2 = uVar5 + *(int *)(this + 0xac);
  }
  else if (uVar3 == 2) {
    param_2 = uVar5 - *(int *)(this + 0xa4);
  }
  else if (uVar3 == 3) {
    param_2 = uVar5 + *(int *)(this + 0xa4);
  }
  else if (uVar3 != 5) {
    if (uVar3 == 6) {
      param_2 = 0;
    }
    else {
      param_2 = uVar5;
      if (uVar3 == 7) {
        param_2 = 0x7fffffff;
      }
    }
  }
  pcVar1 = *(code **)(*(int *)this + 0x16c);
  guard_check_icall(uVar6 - uVar2,param_2 - uVar5,param_3);
  iVar4 = (*pcVar1)();
  if ((iVar4 != 0) && (param_3 != 0)) {
    UpdateWindow(*(HWND *)(this + 0x20));
  }
  return iVar4;
}

