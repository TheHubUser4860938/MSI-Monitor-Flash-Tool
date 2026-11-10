// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnNcActivate
// address: 0x1009c0d8
// body: available
// range: 0x1009c0d8-0x1009c1dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCVisualManagerOffice2007::OnNcActivate(class CWnd *,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCVisualManagerOffice2007::OnNcActivate
          (CMFCVisualManagerOffice2007 *this,CWnd *param_1,int param_2)

{
  code *pcVar1;
  AFX_GLOBAL_DATA *this_00;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint local_10;
  uint local_c;
  
  if ((param_1 != (CWnd *)0x0) && (*(int *)(param_1 + 0x20) != 0)) {
    this_00 = GetGlobalData();
    iVar2 = AFX_GLOBAL_DATA::IsDwmCompositionEnabled(this_00);
    if (iVar2 == 0) {
      if (((byte)param_1[0x60] & 0x20) == 0) {
        local_c = param_2;
      }
      else {
        local_c = 1;
      }
      iVar2 = CWnd::IsWindowEnabled(param_1);
      uVar4 = -(uint)(iVar2 != 0) & local_c;
      local_c = 0;
      local_10 = 0;
      pcVar1 = *(code **)(*(int *)this + 500);
      guard_check_icall();
      iVar2 = (*pcVar1)();
      if (iVar2 != 0) {
        local_c = FUN_10019d4f(&PTR_s_CMDIFrameWnd_1019dfb4);
        local_10 = IsWindowActive(this,param_1);
      }
      puVar3 = (uint *)FUN_10067d49(*(undefined4 *)(param_1 + 0x20));
      *puVar3 = uVar4;
      SendMessageW(*(HWND *)(param_1 + 0x20),0x85,0,0);
      pcVar1 = *(code **)(*(int *)this + 500);
      guard_check_icall();
      iVar2 = (*pcVar1)();
      if (((iVar2 != 0) && (local_c != 0)) && (local_10 != uVar4)) {
        RedrawWindow(*(HWND *)(param_1 + 0x120),(RECT *)0x0,(HRGN)0x0,0x81);
      }
      return 1;
    }
  }
  return 0;
}

