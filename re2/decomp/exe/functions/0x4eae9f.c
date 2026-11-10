// rea decompile_all
// name: CMFCToolBarsCustomizeDialog::OnEditToolbarMenuImage
// address: 0x4eae9f
// body: available
// range: 0x4eae9f-0x4eaf25 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  puStack_c = &LAB_005a604a;
  local_10 = ExceptionList;
  uVar1 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  CMFCImageEditorDialog::CMFCImageEditorDialog(local_1f34,param_2,param_1,param_3);
  local_8 = 0;
  FUN_00424d62(uVar1);
  CMFCImageEditorDialog::~CMFCImageEditorDialog(local_1f34);
  ExceptionList = local_10;
  iVar2 = __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

