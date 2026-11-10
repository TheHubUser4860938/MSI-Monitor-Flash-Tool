// rea decompile_all
// name: CFileDialog::OnNotify
// address: 0x1004b91e
// body: available
// range: 0x1004b91e-0x1004ba16 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CFileDialog::OnNotify(unsigned int,long,long *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CFileDialog::OnNotify(CFileDialog *this,uint param_1,long param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  LRESULT LVar3;
  code *pcVar4;
  
  iVar1 = FUN_10052286(param_1,param_2,param_3);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 == -0x25f) {
    pcVar4 = *(code **)(*(int *)this + 0x1a8);
LAB_1004ba02:
    guard_check_icall();
    (*pcVar4)();
  }
  else {
    if (iVar1 == -0x25e) {
      pcVar4 = *(code **)(*(int *)this + 0x194);
      guard_check_icall();
      lVar2 = (*pcVar4)();
    }
    else {
      if (iVar1 == -0x25d) {
        LVar3 = SendMessageW(*(HWND *)(this + 0x20),0x111,0xe146,0);
        if (LVar3 != 0) {
          return 1;
        }
        SendMessageW(*(HWND *)(this + 0x20),0x365,0,0);
        return 1;
      }
      if (iVar1 != -0x25c) {
        if (iVar1 == -0x25b) {
          pcVar4 = *(code **)(*(int *)this + 0x1a4);
        }
        else if (iVar1 == -0x25a) {
          pcVar4 = *(code **)(*(int *)this + 0x1a0);
        }
        else {
          if (iVar1 != -0x259) {
            return 0;
          }
          pcVar4 = *(code **)(*(int *)this + 0x19c);
        }
        goto LAB_1004ba02;
      }
      pcVar4 = *(code **)(*(int *)this + 400);
      guard_check_icall(*(undefined4 *)(param_2 + 0x10));
      lVar2 = (*pcVar4)();
    }
    *param_3 = lVar2;
  }
  return 1;
}

