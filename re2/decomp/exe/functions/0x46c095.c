// rea decompile_all
// name: CDockingManager::SetPrintPreviewMode
// address: 0x46c095
// body: available
// range: 0x46c095-0x46c1b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CDockingManager::SetPrintPreviewMode(int,struct CPrintPreviewState *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CDockingManager::SetPrintPreviewMode(CDockingManager *this,int param_1,CPrintPreviewState *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  CObject *pCVar4;
  int local_8;
  
  if (param_1 == 0) {
    if ((*(int *)(this + 0x130) == 0) || (iVar2 = IsOLEContainerMode(this), iVar2 != 0)) {
      *(undefined4 *)(this + 0x130) = 0;
      return;
    }
    local_8 = *(int *)(this + 0x138);
    while (local_8 != 0) {
      puVar3 = (undefined4 *)FUN_004ead48(&local_8);
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_DAT_005b1318,(CObject *)*puVar3);
      if (pCVar4 != (CObject *)0x0) {
        iVar2 = FUN_0043970d(&PTR_s_CBasePane_005c4284);
        if (iVar2 == 0) {
          CWnd::ShowWindow((CWnd *)pCVar4,4);
        }
        else {
          pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_005c4284,pCVar4);
          pcVar1 = *(code **)(*(int *)pCVar4 + 0x224);
          guard_check_icall(1,1,0);
          (*pcVar1)();
        }
      }
    }
  }
  else {
    if ((*(int *)(this + 0x130) != 0) || (iVar2 = IsOLEContainerMode(this), iVar2 != 0)) {
      *(undefined4 *)(this + 0x130) = 1;
      return;
    }
    CObList::RemoveAll((CObList *)(this + 0x134));
    if ((DAT_0060c60c != 0) || (iVar2 = IsOLEContainerMode(this), iVar2 == 0)) {
      HideForPrintPreview(this,(CObList *)(this + 0x3c));
    }
    HideForPrintPreview(this,(CObList *)(this + 0x20));
  }
  *(int *)(this + 0x130) = param_1;
  return;
}

