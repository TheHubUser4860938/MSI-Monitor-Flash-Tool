// rea decompile_all
// name: CMFCBaseTabCtrl::HasImage
// address: 0x100a093d
// body: available
// range: 0x100a093d-0x100a09a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCBaseTabCtrl::HasImage(int)const 
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCBaseTabCtrl::HasImage(CMFCBaseTabCtrl *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 < 0) || (*(int *)(this + 0xbc) <= param_1)) {
    iVar4 = 0;
  }
  else {
    iVar2 = FUN_10069fb9(param_1);
    iVar4 = 0;
    if (*(int *)(iVar2 + 0xc) == 0) {
      pcVar1 = *(code **)(*(int *)this + 0x23c);
      guard_check_icall();
      iVar3 = (*pcVar1)();
      if ((iVar3 != 0) && (*(int *)(iVar2 + 8) != -1)) {
        iVar4 = 1;
      }
    }
    else {
      iVar4 = 1;
    }
  }
  return iVar4;
}

