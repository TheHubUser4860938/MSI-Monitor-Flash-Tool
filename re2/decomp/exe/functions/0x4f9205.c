// rea decompile_all
// name: CSmartDockingManager::SetOuterRect
// address: 0x4f9205
// body: available
// range: 0x4f9205-0x4f92bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CSmartDockingManager::SetOuterRect(class CRect)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CSmartDockingManager::SetOuterRect
          (CSmartDockingManager *this,LONG param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  tagRECT *lprcSrc;
  CWnd *this_00;
  code *pcVar1;
  CSmartDockingManager *pCVar2;
  LONG LStack_28;
  int local_c;
  
  this_00 = *(CWnd **)(this + 0x14);
  lprcSrc = (tagRECT *)(this + 0x20);
  lprcSrc->left = param_2;
  *(undefined4 *)(this + 0x24) = param_3;
  *(undefined4 *)(this + 0x28) = param_4;
  *(undefined4 *)(this + 0x2c) = param_5;
  LStack_28 = 0x4f922b;
  CWnd::ClientToScreen(this_00,lprcSrc);
  if (*(int *)(this + 4) != 0) {
    pCVar2 = this + 0xe8;
    local_c = 4;
    do {
      CopyRect((LPRECT)&stack0xffffffd0,lprcSrc);
      pcVar1 = *(code **)(**(int **)pCVar2 + 0x18);
      guard_check_icall();
      (*pcVar1)();
      pcVar1 = *(code **)(**(int **)pCVar2 + 0x14);
      guard_check_icall();
      (*pcVar1)();
      pCVar2 = pCVar2 + 4;
      local_c = local_c + -1;
    } while (local_c != 0);
    CopyRect((LPRECT)&stack0xffffffcc,lprcSrc);
    pcVar1 = *(code **)(**(int **)(this + 0x10c) + 0x18);
    guard_check_icall();
    (*pcVar1)();
  }
  return;
}

