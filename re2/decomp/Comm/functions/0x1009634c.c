// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnDrawMenuScrollButton
// address: 0x1009634c
// body: available
// range: 0x1009634c-0x1009640a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2007::OnDrawMenuScrollButton(class CDC
   *,class CRect,int,int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2007::OnDrawMenuScrollButton
          (CMFCVisualManagerOffice2007 *this,CDC *param_1,undefined4 param_3,int param_4,
          undefined4 param_5,undefined4 param_6,int param_7,int param_8,undefined4 param_9,
          undefined4 param_10)

{
  CDC *pCVar1;
  int iVar2;
  undefined4 local_10;
  CMFCVisualManagerOffice2007 *local_c;
  CDC *local_8;
  
  local_8 = param_1;
  iVar2 = CanDrawImage(this);
  pCVar1 = local_8;
  if (iVar2 == 0) {
    CMFCVisualManagerOfficeXP::OnDrawMenuScrollButton
              ((CMFCVisualManagerOfficeXP *)this,local_8,param_3,param_4,param_5,param_6,param_7,
               param_8,param_9,param_10);
  }
  else {
    local_c = this + 0x3108;
    if ((param_7 != 0) && (*(int *)(this + 0x3314) != 0)) {
      local_c = this + 0x3280;
    }
    iVar2 = *(int *)local_c;
    param_4 = param_4 + -1;
    guard_check_icall(local_8,param_3,param_4,param_5,param_6,param_8 != 0,0xff);
    (**(code **)(iVar2 + 0x10))();
    local_10 = 0;
    local_c = (CMFCVisualManagerOffice2007 *)0x0;
    CMenuImages::Draw(pCVar1,(-(uint)(param_7 != 0) & 0xfffffff9) + 7,(CRect *)&param_3,0,
                      (CSize *)&local_10);
  }
  return;
}

