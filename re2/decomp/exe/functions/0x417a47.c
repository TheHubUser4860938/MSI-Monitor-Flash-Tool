// rea decompile_all
// name: COccManager::BindControls
// address: 0x417a47
// body: available
// range: 0x417a47-0x417b7a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall COccManager::BindControls(class CWnd *)
   
   Library: Visual Studio 2015 Release */

void __thiscall COccManager::BindControls(COccManager *this,CWnd *param_1)

{
  ushort uVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  CDataBoundProperty *this_00;
  CWnd *pCVar5;
  int local_8;
  
  if (*(int *)(param_1 + 0x70) != 0) {
    local_8 = *(int *)(*(int *)(param_1 + 0x70) + 0x44);
    while (local_8 != 0) {
      piVar4 = (int *)FUN_004ead48(&local_8);
      iVar2 = *piVar4;
      if (*(int *)(iVar2 + 4) != 0) {
        this_00 = *(CDataBoundProperty **)(*(int *)(iVar2 + 4) + 0x94);
        while (this_00 != (CDataBoundProperty *)0x0) {
          CDataBoundProperty::SetClientSite(this_00,*(COleControlSite **)(iVar2 + 4));
          if (*(ushort *)(this_00 + 4) != 0) {
            pCVar5 = CWnd::GetDlgItem(param_1,(uint)*(ushort *)(this_00 + 4));
            CDataBoundProperty::SetDSCSite(this_00,*(COleControlSite **)(pCVar5 + 0x74));
          }
          this_00 = (CDataBoundProperty *)FUN_0044414f();
        }
        uVar1 = *(ushort *)(*(int *)(iVar2 + 4) + 0x98);
        if (uVar1 != 0) {
          pCVar5 = CWnd::GetDlgItem(param_1,(uint)uVar1);
          pcVar3 = *(code **)(**(int **)(pCVar5 + 0x74) + 0xb4);
          guard_check_icall();
          (*pcVar3)();
          *(undefined4 *)(*(int *)(iVar2 + 4) + 0x98) = *(undefined4 *)(pCVar5 + 0x74);
          pcVar3 = *(code **)(**(int **)(*(int *)(pCVar5 + 0x74) + 0x90) + 0xc);
          guard_check_icall(*(undefined4 *)(iVar2 + 4),1);
          (*pcVar3)();
        }
      }
    }
    local_8 = *(int *)(*(int *)(param_1 + 0x70) + 0x44);
    while (local_8 != 0) {
      piVar4 = (int *)FUN_004ead48(&local_8);
      if ((*(int *)(*piVar4 + 4) != 0) &&
         (piVar4 = *(int **)(*(int *)(*piVar4 + 4) + 0x90), piVar4 != (int *)0x0)) {
        pcVar3 = *(code **)(*piVar4 + 0x10);
        guard_check_icall();
        (*pcVar3)();
      }
    }
  }
  return;
}

