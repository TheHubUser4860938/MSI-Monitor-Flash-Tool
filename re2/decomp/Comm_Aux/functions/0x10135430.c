// rea decompile_all
// name: CMFCOutlookBarToolBar::OnUpdateCmdUI
// address: 0x10135430
// body: available
// range: 0x10135430-0x101354cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCOutlookBarToolBar::OnUpdateCmdUI(class CFrameWnd *,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCOutlookBarToolBar::OnUpdateCmdUI(CMFCOutlookBarToolBar *this,CFrameWnd *param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  iVar4 = 0;
  if (0 < *(int *)(this + 0xc48)) {
    do {
      uVar2 = CMFCToolBar::GetButtonStyle((CMFCToolBar *)this,iVar4);
      local_8 = -1;
      uVar2 = uVar2 & 0xffeeffff;
      iVar3 = CMap<int,int,int,int>::Lookup((CMap<int,int,int,int> *)(this + 0xd40),iVar4,&local_8);
      if (iVar3 != 0) {
        pcVar1 = *(code **)(**(int **)(this + 0xd5c) + 0x20c);
        guard_check_icall();
        iVar3 = (*pcVar1)();
        if (iVar3 == local_8) {
          uVar2 = uVar2 | 0x10000;
        }
        pcVar1 = *(code **)(*(int *)this + 0x374);
        guard_check_icall(iVar4,uVar2 | 2);
        (*pcVar1)();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(this + 0xc48));
  }
  return;
}

