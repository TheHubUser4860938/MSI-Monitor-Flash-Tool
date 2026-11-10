// rea decompile_all
// name: CWinApp::UpdatePrinterSelection
// address: 0x10140af0
// body: available
// range: 0x10140af0-0x10140d1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10140b27 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: void __thiscall CWinApp::UpdatePrinterSelection(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CWinApp::UpdatePrinterSelection(CWinApp *this,int param_1)

{
  bool bVar1;
  bool bVar2;
  ushort *puVar3;
  int iVar4;
  undefined4 *puVar5;
  CDialog *this_00;
  undefined **local_204 [42];
  int local_15c;
  undefined **local_114 [42];
  int local_6c;
  uint local_18;
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 500;
  local_8 = 0x10140aff;
  local_14 = 0;
  if ((param_1 == 0) && (*(int *)(this + 0x78) != 0)) {
    puVar3 = GlobalLock(*(HGLOBAL *)(this + 0x78));
    if (puVar3 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1004a383();
    }
    if ((puVar3[3] & 1) == 0) {
      return;
    }
    bVar2 = false;
    bVar1 = false;
    local_18 = 1;
    CPrintDialog::CPrintDialog((CPrintDialog *)local_114,1,0x14000c,(CWnd *)0x0);
    local_8 = 0;
    iVar4 = CPrintDialog::GetDefaults((CPrintDialog *)local_114);
    if (iVar4 != 0) {
      if (*(int *)(local_6c + 0xc) == 0) {
        if (*(int *)(this + 0x74) != 0) {
          AfxGlobalFree(*(void **)(this + 0x74));
        }
        AfxGlobalFree(*(void **)(this + 0x78));
        *(undefined4 *)(this + 0x74) = 0;
        *(undefined4 *)(this + 0x78) = 0;
      }
      else {
        puVar5 = (undefined4 *)CPrintDialog::GetDriverName((CPrintDialog *)local_114);
        local_8 = CONCAT31(local_8._1_3_,1);
        local_14 = 1;
        iVar4 = lstrcmpW((LPCWSTR)(puVar3 + *puVar3),(LPCWSTR)*puVar5);
        if (iVar4 == 0) {
          puVar5 = (undefined4 *)CPrintDialog::GetDeviceName((CPrintDialog *)local_114);
          bVar2 = true;
          bVar1 = false;
          local_8 = 2;
          local_14 = 3;
          iVar4 = lstrcmpW((LPCWSTR)(puVar3 + puVar3[1]),(LPCWSTR)*puVar5);
          if (iVar4 == 0) {
            puVar5 = (undefined4 *)CPrintDialog::GetPortName((CPrintDialog *)local_114);
            bVar2 = true;
            bVar1 = true;
            iVar4 = lstrcmpW((LPCWSTR)(puVar3 + puVar3[2]),(LPCWSTR)*puVar5);
            if (iVar4 == 0) {
              local_18 = local_18 & 0xffffff00;
            }
          }
        }
        if (bVar1) {
          FUN_100476d0();
        }
        if (bVar2) {
          FUN_100476d0();
        }
        local_8 = 0;
        FUN_100476d0();
        if ((char)local_18 == '\0') {
          if (*(void **)(local_6c + 8) != (void *)0x0) {
            AfxGlobalFree(*(void **)(local_6c + 8));
          }
          if (*(int *)(local_6c + 0xc) != 0) {
            AfxGlobalFree(*(void **)(local_6c + 0xc));
          }
        }
        else {
          if (*(int *)(this + 0x74) != 0) {
            AfxGlobalFree(*(void **)(this + 0x74));
          }
          AfxGlobalFree(*(void **)(this + 0x78));
          *(undefined4 *)(this + 0x74) = *(undefined4 *)(local_6c + 8);
          *(undefined4 *)(this + 0x78) = *(undefined4 *)(local_6c + 0xc);
        }
      }
    }
    local_114[0] = CCommonDialog::vftable;
    this_00 = (CDialog *)local_114;
  }
  else {
    CPrintDialog::CPrintDialog((CPrintDialog *)local_204,1,0x14000c,(CWnd *)0x0);
    local_8 = 3;
    CPrintDialog::GetDefaults((CPrintDialog *)local_204);
    if (*(int *)(this + 0x74) != 0) {
      AfxGlobalFree(*(void **)(this + 0x74));
    }
    if (*(int *)(this + 0x78) != 0) {
      AfxGlobalFree(*(void **)(this + 0x78));
    }
    *(undefined4 *)(this + 0x74) = *(undefined4 *)(local_15c + 8);
    this_00 = (CDialog *)local_204;
    *(undefined4 *)(this + 0x78) = *(undefined4 *)(local_15c + 0xc);
    local_204[0] = CCommonDialog::vftable;
  }
  CDialog::~CDialog(this_00);
  return;
}

