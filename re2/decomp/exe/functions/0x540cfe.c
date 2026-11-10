// rea decompile_all
// name: CDockBar::~CDockBar
// address: 0x540cfe
// body: available
// range: 0x540cfe-0x540d7a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual __thiscall CDockBar::~CDockBar(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDockBar::~CDockBar(CDockBar *this)

{
  CControlBar *pCVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0059cae0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = 0;
  *(undefined ***)this = vftable;
  if (0 < *(int *)(this + 0xd4)) {
    do {
      pCVar1 = GetDockedControlBar(this,iVar2);
      if ((pCVar1 != (CControlBar *)0x0) && (*(CDockBar **)(pCVar1 + 0xbc) == this)) {
        *(undefined4 *)(pCVar1 + 0xbc) = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(this + 0xd4));
  }
  CPtrArray::~CPtrArray((CPtrArray *)(this + 0xcc));
  CControlBar::~CControlBar((CControlBar *)this);
  ExceptionList = local_10;
  return;
}

