// rea decompile_all
// name: CCheckListBox::SetCheck
// address: 0x101730f9
// body: available
// range: 0x101730f9-0x101731c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CCheckListBox::SetCheck(int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CCheckListBox::SetCheck(CCheckListBox *this,int param_1,int param_2)

{
  code *pcVar1;
  int *piVar2;
  
  if ((param_2 == 2) && ((*(int *)(this + 0x84) == 2 || (*(int *)(this + 0x84) == 3)))) {
    NotifyWinEvent(0x800a,*(HWND *)(this + 0x20),-4,param_1 + 1);
  }
  else {
    pcVar1 = *(code **)(*(int *)this + 0x11c);
    guard_check_icall(0x199,param_1,0);
    piVar2 = (int *)(*pcVar1)();
    if (piVar2 != (int *)0xffffffff) {
      if (piVar2 == (int *)0x0) {
        piVar2 = (int *)FUN_100491ae(0xc);
        if (piVar2 == (int *)0x0) {
          piVar2 = (int *)0x0;
        }
        else {
          *piVar2 = 0;
          piVar2[2] = 0;
          piVar2[1] = 1;
        }
      }
      *piVar2 = param_2;
      pcVar1 = *(code **)(*(int *)this + 0x11c);
      guard_check_icall(0x19a,param_1,piVar2);
      (*pcVar1)();
      FUN_1017226d(param_1);
      NotifyWinEvent(0x800a,*(HWND *)(this + 0x20),-4,param_1 + 1);
    }
  }
  return;
}

