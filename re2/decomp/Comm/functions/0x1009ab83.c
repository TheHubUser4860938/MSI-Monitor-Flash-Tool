// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnFillCaptionBarButton
// address: 0x1009ab83
// body: available
// range: 0x1009ab83-0x1009abe2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual unsigned long __thiscall
   CMFCVisualManagerOffice2007::OnFillCaptionBarButton(class CDC *,class CMFCCaptionBar *,class
   CRect,int,int,int,int,int)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall
CMFCVisualManagerOffice2007::OnFillCaptionBarButton
          (CMFCVisualManagerOffice2007 *this,undefined4 param_1,int param_2,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,
          undefined4 param_10,undefined4 param_11,int param_12)

{
  ulong uVar1;
  int iVar2;
  
  uVar1 = CMFCVisualManagerOfficeXP::OnFillCaptionBarButton
                    ((CMFCVisualManagerOfficeXP *)this,param_1,param_2,param_4,param_5,param_6,
                     param_7,param_8,param_9,param_10,param_11,param_12);
  iVar2 = CanDrawImage(this);
  if ((((iVar2 != 0) && (*(int *)(param_2 + 0x2c4) != 0)) && (param_12 != 0)) && (param_9 == 0)) {
    uVar1 = *(ulong *)(this + 0x8f84);
  }
  return uVar1;
}

