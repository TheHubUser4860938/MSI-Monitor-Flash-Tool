// rea decompile_all
// name: AFX_MODULE_STATE::~AFX_MODULE_STATE
// address: 0x434b6d
// body: available
// range: 0x434b6d-0x434c0a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual __thiscall AFX_MODULE_STATE::~AFX_MODULE_STATE(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall AFX_MODULE_STATE::~AFX_MODULE_STATE(AFX_MODULE_STATE *this)

{
  code *pcVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_005a67ac;
  local_10 = ExceptionList;
  uVar2 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined ***)this = vftable;
  if (*(undefined4 **)(this + 0x48) != (undefined4 *)0x0) {
    pcVar1 = *(code **)**(undefined4 **)(this + 0x48);
    guard_check_icall(1,uVar2);
    (*pcVar1)();
  }
  if (*(int **)(this + 0x70) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0x70) + 0xc);
    guard_check_icall(this + 0x4c,uVar2);
    (*pcVar1)();
    if (*(int **)(this + 0x70) != (int *)0x0) {
      pcVar1 = *(code **)(**(int **)(this + 0x70) + 4);
      guard_check_icall(1,uVar2);
      (*pcVar1)();
    }
  }
  CThreadLocalObject::~CThreadLocalObject((CThreadLocalObject *)(this + 0x74));
  FUN_0040efa0();
  ExceptionList = local_10;
  return;
}

