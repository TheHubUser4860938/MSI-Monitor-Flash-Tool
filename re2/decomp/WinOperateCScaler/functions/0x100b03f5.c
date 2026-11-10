// rea decompile_all
// name: CPaneFrameWnd::FindButton
// address: 0x100b03f5
// body: available
// range: 0x100b03f5-0x100b04b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: class CMFCCaptionButton * __thiscall CPaneFrameWnd::FindButton(class CPoint)const 
   
   Library: Visual Studio 2015 Release */

CMFCCaptionButton * __thiscall
CPaneFrameWnd::FindButton(CPaneFrameWnd *this,int param_2,LONG param_3)

{
  code *pcVar1;
  POINT pt;
  ulong uVar2;
  int *piVar3;
  BOOL BVar4;
  CMFCCaptionButton *pCVar5;
  int local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect(*(HWND *)(this + 0x20),&local_18);
  uVar2 = CWnd::GetExStyle((CWnd *)this);
  if ((uVar2 & 0x400000) != 0) {
    param_2 = (local_18.left - param_2) + local_18.right;
  }
  local_2c = *(int *)(this + 0x10c);
  do {
    if (local_2c == 0) break;
    piVar3 = (int *)FUN_1006a9f1(&local_2c);
    pcVar1 = *(code **)(*piVar3 + 0xc);
    guard_check_icall(&local_28);
    (*pcVar1)();
    OffsetRect(&local_28,local_18.left,local_18.top);
    pt.y = param_3;
    pt.x = param_2;
    BVar4 = PtInRect(&local_28,pt);
  } while (BVar4 == 0);
  pCVar5 = (CMFCCaptionButton *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pCVar5;
}

