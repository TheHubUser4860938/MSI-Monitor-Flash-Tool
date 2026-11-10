// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnDrawMenuLabel
// address: 0x100cd503
// body: available
// range: 0x100cd503-0x100cd57f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual unsigned long __thiscall CMFCVisualManagerOffice2007::OnDrawMenuLabel(class CDC
   *,class CRect)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall
CMFCVisualManagerOffice2007::OnDrawMenuLabel
          (CMFCVisualManagerOffice2007 *this,CDC *param_1,LONG param_3,LONG param_4,LONG param_5,
          int param_6)

{
  int iVar1;
  HBRUSH hbr;
  ulong uVar2;
  LONG local_18;
  int local_14;
  LONG LStack_10;
  int iStack_c;
  CDC *local_8;
  
  local_8 = param_1;
  if ((this == (CMFCVisualManagerOffice2007 *)0xffff70b8) ||
     (iVar1 = 0x8f48, *(int *)(this + 0x8f4c) == 0)) {
    iVar1 = 0xfc;
  }
  hbr = (HBRUSH)0x0;
  if (this + iVar1 != (CMFCVisualManagerOffice2007 *)0x0) {
    hbr = *(HBRUSH *)(this + iVar1 + 4);
  }
  FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_3,hbr);
  local_14 = param_6 + -2;
  local_18 = param_3;
  LStack_10 = param_5;
  iStack_c = param_6;
  DrawSeparator(this,local_8,(CRect *)&local_18,1);
  uVar2 = *(ulong *)(this + 0x903c);
  if (uVar2 == 0xffffffff) {
    uVar2 = *(ulong *)(this + 0x8f9c);
  }
  return uVar2;
}

