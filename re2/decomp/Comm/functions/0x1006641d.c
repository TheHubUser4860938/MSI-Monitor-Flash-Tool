// rea decompile_all
// name: CMFCToolBar::SetTwoRowsWithSibling
// address: 0x1006641d
// body: available
// range: 0x1006641d-0x100665bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCToolBar::SetTwoRowsWithSibling(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCToolBar::SetTwoRowsWithSibling(CMFCToolBar *this)

{
  int iVar1;
  code *pcVar2;
  CMFCToolBar *pCVar3;
  CDockSite *pCVar4;
  __POSITION *p_Var5;
  CDockingPanesRow *pCVar6;
  CObject *hWinPosInfo;
  undefined1 local_1c [4];
  int local_18;
  CObject *local_14;
  undefined1 local_10 [4];
  CMFCToolBar *local_c;
  CObject *local_8;
  
  if ((*(int *)(this + 0xbcc) != 0) && (iVar1 = *(int *)(this + 0xd10), iVar1 != 0)) {
    local_8 = *(CObject **)(this + 0xbc);
    local_14 = *(CObject **)(iVar1 + 0xbc);
    if (local_8 == local_14) {
      local_c = this;
      if (*(int *)(this + 0xbd0) == 0) {
        pcVar2 = *(code **)(*(int *)local_8 + 0x24);
        guard_check_icall(iVar1);
        (*pcVar2)();
        pcVar2 = *(code **)(*(int *)this + 0x1a0);
        guard_check_icall();
        pCVar4 = (CDockSite *)(*pcVar2)();
        pcVar2 = *(code **)(**(int **)(local_c + 0xd10) + 0x260);
        guard_check_icall(local_1c,0,1);
        (*pcVar2)();
        p_Var5 = CObList::Find((CObList *)(pCVar4 + 300),local_8,(__POSITION *)0x0);
        pCVar6 = CDockSite::AddRow(pCVar4,p_Var5,local_18);
        pCVar3 = local_c;
        pcVar2 = *(code **)(*(int *)pCVar6 + 0x1c);
        guard_check_icall(*(undefined4 *)(local_c + 0xd10),5,0,0);
        (*pcVar2)();
        local_14 = BeginDeferWindowPos(10);
        CDockingPanesRow::MovePane(pCVar6,(CPane *)pCVar3,0,&local_14);
        hWinPosInfo = local_14;
      }
      else {
        pcVar2 = *(code **)(*(int *)local_14 + 0x24);
        guard_check_icall(this);
        (*pcVar2)();
        pcVar2 = *(code **)(**(int **)(this + 0xd10) + 0x1a0);
        guard_check_icall();
        pCVar4 = (CDockSite *)(*pcVar2)();
        pcVar2 = *(code **)(*(int *)this + 0x260);
        guard_check_icall(local_10,0,1);
        (*pcVar2)();
        p_Var5 = CObList::Find((CObList *)(pCVar4 + 300),local_14,(__POSITION *)0x0);
        pCVar6 = CDockSite::AddRow(pCVar4,p_Var5,(int)local_c);
        pcVar2 = *(code **)(*(int *)pCVar6 + 0x1c);
        guard_check_icall(this,5,0,0);
        (*pcVar2)();
        local_8 = BeginDeferWindowPos(10);
        CDockingPanesRow::MovePane(pCVar6,*(CPane **)(this + 0xd10),0,&local_8);
        hWinPosInfo = local_8;
      }
      EndDeferWindowPos(hWinPosInfo);
    }
  }
  return;
}

