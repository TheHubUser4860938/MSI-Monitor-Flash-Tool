// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnHighlightRarelyUsedMenuItems
// address: 0x100d33a4
// body: available
// range: 0x100d33a4-0x100d3429 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall
   CMFCVisualManagerOffice2007::OnHighlightRarelyUsedMenuItems(class CDC *,class CRect)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2007::OnHighlightRarelyUsedMenuItems
          (CMFCVisualManagerOffice2007 *this,int param_1,int param_3,LONG param_4,int param_5,
          LONG param_6)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  HBRUSH hbr;
  CMFCVisualManagerOffice2007 *local_c;
  int local_8;
  
  local_8 = param_1;
  local_c = this;
  iVar2 = CanDrawImage(this);
  iVar3 = local_8;
  if (iVar2 == 0) {
    CMFCVisualManagerOffice2003::OnHighlightRarelyUsedMenuItems
              ((CMFCVisualManagerOffice2003 *)this,local_8,param_3,param_4,param_5,param_6);
    param_1 = iVar3;
  }
  param_3 = param_3 + -1;
  pcVar1 = *(code **)(*(int *)this + 0x2dc);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  piVar4 = (int *)FUN_10096799(&local_c);
  param_5 = param_3 + 2 + *piVar4 + iVar3 * 2;
  hbr = (HBRUSH)0x0;
  if (this != (CMFCVisualManagerOffice2007 *)0xfffffefc) {
    hbr = *(HBRUSH *)(this + 0x108);
  }
  FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_3,hbr);
  return;
}

