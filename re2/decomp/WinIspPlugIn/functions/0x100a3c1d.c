// rea decompile_all
// name: Create
// address: 0x100a3c1d
// body: available
// range: 0x100a3c1d-0x100a3cae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CMFCOutlookBar::Create(char const *,class CWnd *,struct tagRECT
   const &,unsigned int,unsigned long,unsigned long,struct CCreateContext *)
    public: virtual int __thiscall CMFCOutlookBar::Create(wchar_t const *,class CWnd *,struct
   tagRECT const &,unsigned int,unsigned long,unsigned long,struct CCreateContext *)
   
   Library: Visual Studio 2015 Release */

undefined4
Create(int param_1,CWnd *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
      uint param_6,undefined4 param_7)

{
  code *pcVar1;
  int iVar2;
  CDockingManager *this;
  undefined4 uVar3;
  CBasePane *in_ECX;
  
  iVar2 = Create(param_1,param_2,param_3,0,param_4,param_5,0x40,param_6 & 0xfffffffe,param_7);
  uVar3 = 0;
  if (iVar2 != 0) {
    if ((param_6 & 4) == 0) {
      this = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_1023d944,param_2);
      if (this != (CDockingManager *)0x0) {
        CDockingManager::AddPane(this,in_ECX,1,0,0);
      }
    }
    else {
      pcVar1 = *(code **)(*(int *)in_ECX + 0x1ec);
      guard_check_icall(0xf000);
      (*pcVar1)();
      CBasePane::DockPaneUsingRTTI(in_ECX,0);
    }
    if (param_1 != 0) {
      FUN_10047140(param_1);
    }
    uVar3 = 1;
  }
  return uVar3;
}

