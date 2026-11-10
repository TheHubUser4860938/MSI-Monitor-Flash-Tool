// rea decompile_all
// name: CFileDialog::~CFileDialog
// address: 0x1001346b
// body: available
// range: 0x1001346b-0x1001352b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100134cb to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual __thiscall CFileDialog::~CFileDialog(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CFileDialog::~CFileDialog(CFileDialog *this)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_1016def1;
  local_10 = ExceptionList;
  uVar2 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = vftable;
  FID_conflict__free(*(void **)(this + 0xa8));
  if (*(int *)(this + 0xac) == 1) {
    pcVar1 = *(code **)(**(int **)(this + 0xbc) + 0x20);
    guard_check_icall(*(int **)(this + 0xbc),*(undefined4 *)(this + 0xb8),uVar2);
    iVar3 = (*pcVar1)();
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10012a3f();
    }
    pcVar1 = *(code **)(**(int **)(this + 0xc0) + 8);
    guard_check_icall(*(int **)(this + 0xc0));
    (*pcVar1)();
    pcVar1 = *(code **)(**(int **)(this + 0xbc) + 8);
    guard_check_icall(*(int **)(this + 0xbc));
    (*pcVar1)();
    CoUninitialize();
  }
  FUN_10003460();
  *(undefined ***)this = CCommonDialog::vftable;
  CDialog::~CDialog((CDialog *)this);
  ExceptionList = local_10;
  return;
}

