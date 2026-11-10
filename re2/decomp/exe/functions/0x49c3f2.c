// rea decompile_all
// name: CDockSite::RepositionPanes
// address: 0x49c3f2
// body: available
// range: 0x49c3f2-0x49c516 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CDockSite::RepositionPanes(class CRect &)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDockSite::RepositionPanes(CDockSite *this,CRect *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  int _X;
  int _X_00;
  int local_24;
  CRect *local_20;
  int *local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  local_20 = param_1;
  GetClientRect(*(HWND *)(this + 0x20),&local_18);
  if ((*(int *)(param_1 + 8) - *(int *)param_1 == local_18.right - local_18.left) &&
     (*(int *)(param_1 + 0xc) - *(int *)(local_20 + 4) == local_18.bottom - local_18.top)) {
    local_1c = *(int **)(this + 0x130);
    while (local_1c != (int *)0x0) {
      puVar2 = (undefined4 *)FUN_004ead48(&local_1c);
      CDockingPanesRow::ExpandStretchedPanesRect((CDockingPanesRow *)*puVar2);
    }
  }
  else {
    _X_00 = (*(int *)(param_1 + 0xc) - *(int *)(local_20 + 4)) - (local_18.bottom - local_18.top);
    _X = (*(int *)(param_1 + 8) - *(int *)param_1) - (local_18.right - local_18.left);
    local_24 = *(int *)(this + 0x130);
    while (local_24 != 0) {
      puVar2 = (undefined4 *)FUN_004ead48(&local_24);
      local_1c = (int *)*puVar2;
      if (_X != 0) {
        iVar1 = *local_1c;
        lVar3 = _labs(_X);
        guard_check_icall(local_20,2,0 < _X,lVar3);
        (**(code **)(iVar1 + 0x3c))();
      }
      if (_X_00 != 0) {
        iVar1 = *local_1c;
        lVar3 = _labs(_X_00);
        guard_check_icall(local_20,6,0 < _X_00,lVar3);
        (**(code **)(iVar1 + 0x3c))();
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

