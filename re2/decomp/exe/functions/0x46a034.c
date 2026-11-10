// rea decompile_all
// name: CDockingManager::ProcessPaneContextMenuCommand
// address: 0x46a034
// body: available
// range: 0x46a034-0x46a172 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CDockingManager::ProcessPaneContextMenuCommand(unsigned int,int,void
   *,struct AFX_CMDHANDLERINFO *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CDockingManager::ProcessPaneContextMenuCommand
          (CDockingManager *this,uint param_1,int param_2,void *param_3,AFX_CMDHANDLERINFO *param_4)

{
  CWnd *this_00;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  CWnd *local_8;
  
  if (((*(int *)(this + 0x1dc) != 0) && (*(int *)(this + 0x1c8) != 0)) &&
     ((param_2 != -1 || (*(int *)(this + 0x1d8) != 0)))) {
    local_8 = (CWnd *)0x0;
    iVar1 = CMap<int,int,int,int>::Lookup
                      ((CMap<int,int,int,int> *)(this + 0x1bc),param_1,(int *)&local_8);
    if ((iVar1 != 0) && (local_8 != (CWnd *)0x0)) {
      if (param_2 == -1) {
        if (param_3 == (void *)0x0) {
          return 0;
        }
        iVar1 = *(int *)param_3;
        pcVar4 = *(code **)(*(int *)local_8 + 0x17c);
        guard_check_icall();
        uVar2 = (*pcVar4)();
        guard_check_icall(uVar2);
        (**(code **)(iVar1 + 4))();
      }
      else if ((((uint)param_2 >> 0x10 == 0x111) || ((uint)param_2 >> 0x10 == 0)) &&
              (param_3 == (void *)0x0)) {
        iVar1 = *(int *)local_8;
        pcVar4 = *(code **)(iVar1 + 0x17c);
        guard_check_icall(0,1);
        iVar3 = (*pcVar4)();
        pcVar4 = *(code **)(iVar1 + 0x224);
        guard_check_icall(iVar3 == 0);
        this_00 = local_8;
        (*pcVar4)();
        local_8 = (CWnd *)DAT_0061620c;
        if ((DAT_0061620c == (CFrameWnd *)0x0) &&
           (local_8 = (CWnd *)CWnd::GetTopLevelFrame(this_00), local_8 == (CWnd *)0x0)) {
          pcVar4 = *(code **)(*(int *)this + 0x34);
          guard_check_icall(1);
        }
        else {
          pcVar4 = *(code **)(*(int *)local_8 + 0x178);
          guard_check_icall(1);
        }
        (*pcVar4)();
        CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)(this + 0x1bc));
      }
      return 1;
    }
  }
  return 0;
}

