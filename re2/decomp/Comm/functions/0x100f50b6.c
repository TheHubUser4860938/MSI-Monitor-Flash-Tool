// rea decompile_all
// name: CDockablePane::OffsetRectForSliding
// address: 0x100f50b6
// body: available
// range: 0x100f50b6-0x100f5161 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CDockablePane::OffsetRectForSliding(class CRect &,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CDockablePane::OffsetRectForSliding(CDockablePane *this,CRect *param_1,int param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int dy;
  
  pcVar1 = *(code **)(*(int *)this + 0x1dc);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if (iVar2 == 0) {
    return;
  }
  pcVar1 = *(code **)(*(int *)this + 0x194);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if (iVar2 == 0x1000) {
    if (param_3 == 0) {
LAB_100f511c:
      if (param_2 == 0) {
LAB_100f5134:
        dy = 0;
        iVar2 = -*(int *)(this + 0x308);
        goto LAB_100f513d;
      }
    }
    else {
LAB_100f512c:
      if (param_2 != 0) goto LAB_100f5134;
    }
    dy = 0;
    iVar2 = *(int *)(this + 0x308);
    goto LAB_100f513d;
  }
  if (iVar2 == 0x2000) {
    if (param_2 == 0) goto LAB_100f5109;
LAB_100f5152:
    dy = *(int *)(this + 0x308);
  }
  else {
    if (iVar2 == 0x4000) {
      if (param_3 == 0) goto LAB_100f512c;
      goto LAB_100f511c;
    }
    if (iVar2 != 0x8000) {
      return;
    }
    if (param_2 == 0) goto LAB_100f5152;
LAB_100f5109:
    dy = -*(int *)(this + 0x308);
  }
  iVar2 = 0;
LAB_100f513d:
  OffsetRect((LPRECT)param_1,iVar2,dy);
  return;
}

