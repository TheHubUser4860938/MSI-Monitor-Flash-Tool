// rea decompile_all
// name: CMFCVisualManagerOfficeXP::OnDrawMenuLabel
// address: 0x10144a4e
// body: available
// range: 0x10144a4e-0x10144ac9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual unsigned long __thiscall CMFCVisualManagerOfficeXP::OnDrawMenuLabel(class CDC
   *,class CRect)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall
CMFCVisualManagerOfficeXP::OnDrawMenuLabel
          (CMFCVisualManagerOfficeXP *this,CDC *param_1,LONG param_3,LONG param_4,LONG param_5,
          int param_6)

{
  HBRUSH hbr;
  AFX_GLOBAL_DATA *pAVar1;
  ulong uVar2;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  if (this == (CMFCVisualManagerOfficeXP *)0xffffff04) {
    hbr = (HBRUSH)0x0;
  }
  else {
    hbr = *(HBRUSH *)(this + 0x100);
  }
  FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_3,hbr);
  local_18.top = param_6 + -2;
  local_18.left = param_3;
  local_18.right = param_5;
  local_18.bottom = param_6;
  pAVar1 = GetGlobalData();
  uVar2 = *(ulong *)(pAVar1 + 0x5c);
  pAVar1 = GetGlobalData();
  CDC::Draw3dRect(param_1,&local_18,*(ulong *)(pAVar1 + 0x58),uVar2);
  GetGlobalData();
  uVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return uVar2;
}

