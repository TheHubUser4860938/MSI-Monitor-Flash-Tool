// rea decompile_all
// name: CWnd::~CWnd
// address: 0x42d263
// body: available
// range: 0x42d263-0x42d344 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual __thiscall CWnd::~CWnd(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CWnd::~CWnd(CWnd *this)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_005a67ac;
  local_10 = ExceptionList;
  uVar3 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = vftable;
  if ((((*(int *)(this + 0x20) != 0) && (this != (CWnd *)&DAT_00614a70)) &&
      (this != (CWnd *)&DAT_00614af0)) &&
     ((this != (CWnd *)&DAT_00614b70 && (this != (CWnd *)&DAT_00614bf0)))) {
    FUN_0042ecae(uVar3);
  }
  if (*(int **)(this + 0x70) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0x70) + 4);
    guard_check_icall(1);
    (*pcVar1)();
  }
  iVar2 = *(int *)(this + 0x74);
  if ((iVar2 != 0) && (*(CWnd **)(iVar2 + 0x28) == this)) {
    *(undefined4 *)(iVar2 + 0x28) = 0;
  }
  if (*(int **)(this + 0x78) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0x78) + 4);
    guard_check_icall(1);
    (*pcVar1)();
  }
  if (*(int *)(this + 0x54) != 0) {
    FUN_0055b3de(*(undefined4 *)(this + 0x54),0x30);
  }
  if (*(int **)(this + 0x58) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0x58) + 4);
    guard_check_icall(1);
    (*pcVar1)();
    *(undefined4 *)(this + 0x58) = 0;
  }
  CCmdTarget::~CCmdTarget((CCmdTarget *)this);
  ExceptionList = local_10;
  return;
}

