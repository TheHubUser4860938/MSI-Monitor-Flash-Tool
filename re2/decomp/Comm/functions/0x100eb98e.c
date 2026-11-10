// rea decompile_all
// name: CMFCToolBarsCustomizeDialog::OnEditToolbarMenuImage
// address: 0x100eb98e
// body: available
// range: 0x100eb98e-0x100eba14 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCToolBarsCustomizeDialog::OnEditToolbarMenuImage(class CWnd
   *,class CBitmap &,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCToolBarsCustomizeDialog::OnEditToolbarMenuImage
          (CMFCToolBarsCustomizeDialog *this,CWnd *param_1,CBitmap *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  CMFCImageEditorDialog local_1f34 [7968];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10176ea7;
  local_10 = ExceptionList;
  uVar1 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  CMFCImageEditorDialog::CMFCImageEditorDialog(local_1f34,param_2,param_1,param_3);
  local_8 = 0;
  FUN_10022d40(uVar1);
  CMFCImageEditorDialog::~CMFCImageEditorDialog(local_1f34);
  ExceptionList = local_10;
  iVar2 = __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

