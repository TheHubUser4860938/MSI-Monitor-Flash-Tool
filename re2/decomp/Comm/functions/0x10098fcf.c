// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnDrawScrollButtons
// address: 0x10098fcf
// body: available
// range: 0x10098fcf-0x10099065 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2007::OnDrawScrollButtons(class CDC
   *,class CRect const &,int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2007::OnDrawScrollButtons
          (CMFCVisualManagerOffice2007 *this,CDC *param_1,CRect *param_2,int param_3,int param_4,
          int param_5)

{
  int iVar1;
  undefined4 local_c;
  CMFCVisualManagerOffice2007 *local_8;
  
  local_8 = this;
  iVar1 = CanDrawImage(this);
  if (iVar1 == 0) {
    CMFCVisualManagerOffice2003::OnDrawScrollButtons
              ((CMFCVisualManagerOffice2003 *)this,param_1,param_2,param_3,param_4,param_5);
  }
  else {
    iVar1 = *(int *)(this + 0x3570);
    guard_check_icall(param_1,*(undefined4 *)param_2,*(int *)(param_2 + 4) + -1,
                      *(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),param_5 != 0,0xff)
    ;
    (**(code **)(iVar1 + 0x10))();
    local_c = 0;
    local_8 = (CMFCVisualManagerOffice2007 *)0x0;
    CMenuImages::Draw(param_1,param_4,param_2,0,(CSize *)&local_c);
  }
  return;
}

