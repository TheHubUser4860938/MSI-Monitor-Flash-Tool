// rea decompile_all
// name: CPaneContainer::LoadTabbedPane
// address: 0x1012f406
// body: available
// range: 0x1012f406-0x1012f4e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: class CDockablePane * __thiscall CPaneContainer::LoadTabbedPane(class CArchive
   &,class CList<unsigned int,unsigned int> &)
   
   Library: Visual Studio 2015 Release */

CDockablePane * __thiscall
CPaneContainer::LoadTabbedPane
          (CPaneContainer *this,CArchive *param_1,CList<unsigned_int,unsigned_int> *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_c;
  CDockablePane *local_8;
  
  local_8 = (CDockablePane *)0x0;
  local_c = 0;
  CBaseTabbedPane::LoadSiblingPaneIDs(param_1,param_2);
  operator>>(param_1,&local_8);
  FUN_10026405(&local_c);
  iVar3 = *(int *)local_8;
  pcVar1 = *(code **)(iVar3 + 0x1c4);
  guard_check_icall(0xf,0);
  uVar2 = (*pcVar1)();
  pcVar1 = *(code **)(iVar3 + 0x324);
  guard_check_icall(&DAT_101a63a8,*(undefined4 *)(*(int *)(this + 0x1c) + 0x4c),local_8 + 0x298,1,
                    0xffffffff,local_c,uVar2);
  iVar3 = (*pcVar1)();
  if (iVar3 == 0) {
    CList<tagPOINT,tagPOINT>::RemoveAll((CList<tagPOINT,tagPOINT> *)param_2);
    if (local_8 != (CDockablePane *)0x0) {
      pcVar1 = *(code **)(*(int *)local_8 + 4);
      guard_check_icall(1);
      (*pcVar1)();
    }
    local_8 = (CDockablePane *)0x0;
  }
  else {
    pcVar1 = *(code **)(*(int *)local_8 + 0x3d8);
    guard_check_icall(param_1);
    (*pcVar1)();
    *(int *)(local_8 + 0x368) = 1;
  }
  return local_8;
}

