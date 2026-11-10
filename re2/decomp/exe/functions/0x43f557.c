// rea decompile_all
// name: CEnumUnknown::~CEnumUnknown
// address: 0x43f557
// body: available
// range: 0x43f557-0x43f5ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual __thiscall CEnumUnknown::~CEnumUnknown(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CEnumUnknown::~CEnumUnknown(CEnumUnknown *this)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_005a5494;
  local_10 = ExceptionList;
  uVar4 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar5 = 0;
  *(undefined ***)this = vftable;
  if (*(int *)(this + 0x24) == 0) {
    iVar1 = *(int *)(this + 0x28);
    if (*(int *)(this + 0x30) != 0) {
      do {
        piVar2 = *(int **)(iVar1 + uVar5 * 4);
        pcVar3 = *(code **)(*piVar2 + 8);
        guard_check_icall(piVar2,uVar4);
        (*pcVar3)();
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(this + 0x30));
    }
  }
  CEnumArray::~CEnumArray((CEnumArray *)this);
  ExceptionList = local_10;
  return;
}

