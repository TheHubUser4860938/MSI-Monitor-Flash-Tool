// rea decompile_all
// name: CPaneContainerManager::AddPaneToRecentPaneContainer
// address: 0x101335b5
// body: available
// range: 0x101335b5-0x101336fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual class CDockablePane * __thiscall
   CPaneContainerManager::AddPaneToRecentPaneContainer(class CDockablePane *,class CPaneContainer *)
   
   Library: Visual Studio 2015 Release */

CDockablePane * __thiscall
CPaneContainerManager::AddPaneToRecentPaneContainer
          (CPaneContainerManager *this,CDockablePane *param_1,CPaneContainer *param_2)

{
  CPaneContainer *this_00;
  int iVar1;
  CPaneDivider *pCVar2;
  CList<HWND__*,HWND__*> *pCVar3;
  CDockablePane *pCVar4;
  undefined4 *puVar5;
  __POSITION *p_Var6;
  CPaneContainer *this_01;
  CObList local_38 [28];
  CPaneContainer *local_1c;
  __POSITION *local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x101335c1;
  local_18[0] = (__POSITION *)this;
  this_00 = (CPaneContainer *)FUN_1012e9c0(param_2,3);
  local_1c = this_00;
  if (this_00 != (CPaneContainer *)0x0) {
    iVar1 = CPaneContainer::IsEmpty(this_00);
    p_Var6 = local_18[0];
    if ((iVar1 == 0) && (*(int *)(this_00 + 0xc) == 0)) {
      pCVar2 = CreatePaneDivider((CPaneContainerManager *)local_18[0],
                                 *(undefined4 *)(this_00 + 0x44),*(undefined4 *)(this_00 + 0x48),
                                 *(undefined4 *)(this_00 + 0x4c),*(undefined4 *)(this_00 + 0x50),
                                 *(undefined4 *)(this_00 + 0x40),0xffffffff);
      *(CPaneDivider **)(this_00 + 0xc) = pCVar2;
      this = (CPaneContainerManager *)p_Var6;
    }
    iVar1 = CPaneContainer::IsEmpty(this_00);
    this_01 = this_00;
    if (iVar1 != 0) {
      while ((p_Var6 = local_18[0], this_00 = *(CPaneContainer **)(this_00 + 0x18),
             this_01 = local_1c, this_00 != *(CPaneContainer **)(this + 0x3c) &&
             (this_00 != (CPaneContainer *)0x0))) {
        if ((*(int *)(this_00 + 0xc) == 0) && (*(int *)(this_00 + 0x40) != 0)) {
          pCVar2 = CreatePaneDivider((CPaneContainerManager *)local_18[0],
                                     *(undefined4 *)(this_00 + 0x44),*(undefined4 *)(this_00 + 0x48)
                                     ,*(undefined4 *)(this_00 + 0x4c),
                                     *(undefined4 *)(this_00 + 0x50),*(undefined4 *)(this_00 + 0x40)
                                     ,0xffffffff);
          *(CPaneDivider **)(this_00 + 0xc) = pCVar2;
          this = (CPaneContainerManager *)p_Var6;
        }
      }
    }
    iVar1 = FUN_100250d6(&PTR_s_CPaneFrameWnd_102018e4);
    CObList::CObList(local_38,10);
    local_8 = 0;
    pCVar3 = CRecentDockSiteInfo::GetRecentListOfPanes
                       ((CRecentDockSiteInfo *)(param_1 + 0x1e4),(uint)(iVar1 == 0));
    CObList::AddTail(local_38,(CObject *)pCVar3);
    local_18[0] = CObList::Find(local_38,(CObject *)param_1,(__POSITION *)0x0);
    pCVar4 = CPaneContainer::AddPane(this_01,param_1);
    if (pCVar4 == param_1) {
      CPaneContainer::CheckPaneDividerVisibility(*(CPaneContainer **)(this + 0x3c));
      do {
        if (local_18[0] == (__POSITION *)0x0) {
          CObList::AddHead((CObList *)(this + 4),(CObject *)pCVar4);
          goto LAB_101336e1;
        }
        puVar5 = (undefined4 *)FUN_10039e35(local_18);
        p_Var6 = CObList::Find((CObList *)(this + 4),(CObject *)*puVar5,(__POSITION *)0x0);
      } while (p_Var6 == (__POSITION *)0x0);
      CObList::InsertAfter((CObList *)(this + 4),p_Var6,(CObject *)pCVar4);
    }
LAB_101336e1:
    CObList::~CObList(local_38);
  }
  pCVar4 = (CDockablePane *)FUN_10154478();
  return pCVar4;
}

