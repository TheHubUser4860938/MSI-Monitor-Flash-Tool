// rea decompile_all
// name: COleControlSite::BindProperty
// address: 0x4422dd
// body: available
// range: 0x4422dd-0x4423ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall COleControlSite::BindProperty(long,class CWnd *)
   
   Library: Visual Studio 2015 Release */

void __thiscall COleControlSite::BindProperty(COleControlSite *this,long param_1,CWnd *param_2)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  CDataBoundProperty *this_00;
  int iVar5;
  
  if ((param_2 == (CWnd *)0x0) || (param_1 == -1)) {
    iVar5 = *(int *)(this + 0x94);
    iVar4 = 0;
    do {
      iVar3 = iVar4;
      iVar4 = iVar5;
      if (iVar4 == 0) {
        return;
      }
      iVar5 = *(int *)(iVar4 + 0x18);
    } while (((param_1 != -1) && (*(int *)(iVar4 + 8) != param_1)) ||
            ((param_2 != (CWnd *)0x0 && (*(int *)(param_2 + 0x74) != *(int *)(iVar4 + 0xc)))));
    if (iVar3 == 0) {
      *(int *)(this + 0x94) = iVar5;
    }
    else {
      *(int *)(iVar3 + 0x18) = iVar5;
    }
    if ((*(int *)(iVar4 + 0xc) != 0) &&
       (piVar2 = *(int **)(*(int *)(iVar4 + 0xc) + 0x90), piVar2 != (int *)0x0)) {
      pcVar1 = *(code **)(*piVar2 + 8);
      guard_check_icall(iVar4,0);
      (*pcVar1)();
    }
    FUN_0055b3de(iVar4,0x1c);
  }
  else {
    this_00 = (CDataBoundProperty *)FUN_00416408(0x1c);
    if (this_00 == (CDataBoundProperty *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = CDataBoundProperty::CDataBoundProperty
                        (this_00,*(CDataBoundProperty **)(this + 0x94),param_1,0);
    }
    *(int *)(this + 0x94) = iVar5;
    *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(param_2 + 0x74);
    **(undefined4 **)(this + 0x94) = this;
    pcVar1 = *(code **)(**(int **)(*(int *)(this + 0x94) + 0xc) + 0xb4);
    guard_check_icall();
    (*pcVar1)();
    pcVar1 = *(code **)(**(int **)(*(int *)(*(int *)(this + 0x94) + 0xc) + 0x90) + 8);
    guard_check_icall(*(int *)(this + 0x94),1);
    (*pcVar1)();
  }
  return;
}

