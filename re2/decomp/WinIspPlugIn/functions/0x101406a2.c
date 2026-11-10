// rea decompile_all
// name: CMFCColorMenuButton::OpenColorDialog
// address: 0x101406a2
// body: available
// range: 0x101406a2-0x1014074a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCColorMenuButton::OpenColorDialog(unsigned long,unsigned long
   &)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCColorMenuButton::OpenColorDialog(CMFCColorMenuButton *this,ulong param_1,ulong *param_2)

{
  int iVar1;
  undefined **local_ad4 [45];
  ulong local_a20;
  CMFCColorDialog local_a04 [228];
  ulong local_920;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xac4;
  local_8 = 0x101406b1;
  if (*(int *)(this + 0x130) == 0) {
    CMFCColorDialog::CMFCColorDialog(local_a04,param_1,0,(CWnd *)0x0,(HPALETTE__ *)0x0);
    local_8 = 1;
    iVar1 = FUN_10059e1c();
    if (iVar1 == 1) {
      *param_2 = local_920;
    }
    CMFCColorDialog::~CMFCColorDialog(local_a04);
  }
  else {
    CColorDialog::CColorDialog((CColorDialog *)local_ad4,param_1,0x102,(CWnd *)0x0);
    local_8 = 0;
    iVar1 = CColorDialog::DoModal((CColorDialog *)local_ad4);
    if (iVar1 == 1) {
      *param_2 = local_a20;
    }
    local_ad4[0] = CCommonDialog::vftable;
    CDialog::~CDialog((CDialog *)local_ad4);
  }
  iVar1 = FUN_1018015d();
  return iVar1;
}

