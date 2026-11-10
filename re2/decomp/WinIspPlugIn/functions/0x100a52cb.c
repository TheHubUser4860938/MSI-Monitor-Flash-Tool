// rea decompile_all
// name: CMFCOutlookBarPane::OnBeforeFloat
// address: 0x100a52cb
// body: available
// range: 0x100a52cb-0x100a5390 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCOutlookBarPane::OnBeforeFloat(class CRect &,enum
   AFX_DOCK_METHOD)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCOutlookBarPane::OnBeforeFloat(CMFCOutlookBarPane *this,CRect *param_1,AFX_DOCK_METHOD param_2)

{
  POINT pt;
  HWND pHVar1;
  CWnd *pCVar2;
  BOOL BVar3;
  int iVar4;
  undefined4 uVar5;
  tagPOINT local_24;
  uint local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  if (param_2 == 1) {
    uVar5 = 0;
    local_24.x = 0;
    local_24.y = 0;
    GetCursorPos(&local_24);
    pHVar1 = GetParent(*(HWND *)(this + 0x20));
    pCVar2 = CWnd::FromHandle(pHVar1);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(pCVar2 + 0x20),&local_18);
    pt.y = local_24.y;
    pt.x = local_24.x;
    BVar3 = PtInRect(&local_18,pt);
    local_1c = (uint)(BVar3 == 0);
    if (local_1c != 0) {
      iVar4 = FUN_10051e53(&PTR_s_CMFCOutlookBar_1023d668);
      if (iVar4 == 0) {
        pHVar1 = GetParent(*(HWND *)(pCVar2 + 0x20));
        pCVar2 = CWnd::FromHandle(pHVar1);
        if (pCVar2 != (CWnd *)0x0) {
          uVar5 = *(undefined4 *)(pCVar2 + 0x20);
        }
        *(undefined4 *)(this + 0x1dcc) = uVar5;
      }
      else {
        *(undefined4 *)(this + 0x1dcc) = *(undefined4 *)(pCVar2 + 0x20);
      }
    }
  }
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}

