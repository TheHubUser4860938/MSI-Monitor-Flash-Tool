// rea decompile_all
// name: CMFCToolBar::NotifyControlCommand
// address: 0x10095f8d
// body: available
// range: 0x10095f8d-0x10095fe9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCToolBar::NotifyControlCommand(class CMFCToolBarButton
   *,int,int,unsigned int,long)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCToolBar::NotifyControlCommand
          (CMFCToolBar *this,CMFCToolBarButton *param_1,int param_2,int param_3,uint param_4,
          long param_5)

{
  ushort uVar1;
  code *pcVar2;
  int iVar3;
  CWnd *pCVar4;
  
  if (param_2 == 0) {
    pcVar2 = *(code **)(*(int *)param_1 + 0x40);
    guard_check_icall(param_3);
    iVar3 = (*pcVar2)();
    if (iVar3 == 0) {
      return 0;
    }
  }
  uVar1 = *(ushort *)(param_1 + 0x20);
  pCVar4 = CWnd::GetOwner((CWnd *)this);
  PostMessageW(*(HWND *)(pCVar4 + 0x20),0x111,param_3 << 0x10 | (uint)uVar1,param_5);
  return 1;
}

