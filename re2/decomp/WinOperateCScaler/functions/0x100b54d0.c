// rea decompile_all
// name: CPaneFrameWnd::UpdateTooltips
// address: 0x100b54d0
// body: available
// range: 0x100b54d0-0x100b55ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CPaneFrameWnd::UpdateTooltips(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPaneFrameWnd::UpdateTooltips(CPaneFrameWnd *this)

{
  code *pcVar1;
  int *piVar2;
  LRESULT LVar3;
  LONG *pLVar4;
  int iVar5;
  int local_40;
  int local_3c;
  undefined1 local_38 [16];
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  if ((*(int *)(this + 0x124) != 0) && (*(int *)(*(int *)(this + 0x124) + 0x20) != 0)) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_18);
    CWnd::ScreenToClient((CWnd *)this,&local_18);
    local_40 = *(int *)(this + 0x10c);
    local_3c = 0;
    iVar5 = local_3c;
    while (local_3c = iVar5, local_40 != 0) {
      piVar2 = (int *)FUN_100972dc(&local_40);
      piVar2 = (int *)*piVar2;
      LVar3 = SendMessageW(*(HWND *)(*(int *)(this + 0x124) + 0x20),0x40d,0,0);
      if (iVar5 < LVar3) {
        local_28.left = 0;
        local_28.top = 0;
        local_28.right = 0;
        local_28.bottom = 0;
        SetRectEmpty(&local_28);
        if (piVar2[3] == 0) {
          pcVar1 = *(code **)(*piVar2 + 0xc);
          guard_check_icall(local_38);
          pLVar4 = (LONG *)(*pcVar1)();
          local_28.left = *pLVar4;
          local_28.top = pLVar4[1];
          local_28.right = pLVar4[2];
          local_28.bottom = pLVar4[3];
          OffsetRect(&local_28,local_18.left,local_18.top);
          iVar5 = local_3c;
        }
        CToolTipCtrl::SetToolRect(*(CToolTipCtrl **)(this + 0x124),(CWnd *)this,iVar5 + 1,&local_28)
        ;
      }
      iVar5 = iVar5 + 1;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

