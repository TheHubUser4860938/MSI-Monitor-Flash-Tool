// rea decompile_all
// name: CDockingManager::RecalcLayout
// address: 0x100b95a3
// body: available
// range: 0x100b95a3-0x100b96ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CDockingManager::RecalcLayout(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDockingManager::RecalcLayout(CDockingManager *this,int param_1)

{
  code *pcVar1;
  CWnd *this_00;
  int iVar2;
  undefined4 *puVar3;
  ulong uVar4;
  int local_8;
  
  if ((((DAT_1020b520 == 0) && (*(int *)(this + 0x158) == 0)) && (*(int *)(this + 0xc) == 0)) &&
     (*(int *)(this + 4) != 0)) {
    *(undefined4 *)(this + 0x158) = 1;
    iVar2 = IsOLEContainerMode(this);
    local_8 = *(int *)(this + 0x24);
    if (iVar2 == 0) {
      while (local_8 != 0) {
        puVar3 = (undefined4 *)FUN_100972dc(&local_8);
        pcVar1 = *(code **)(*(int *)*puVar3 + 0x20c);
        guard_check_icall();
        (*pcVar1)();
      }
      local_8 = *(int *)(this + 0xcc);
      while (local_8 != 0) {
        puVar3 = (undefined4 *)FUN_100972dc(&local_8);
        pcVar1 = *(code **)(*(int *)*puVar3 + 0x1d0);
        guard_check_icall();
        (*pcVar1)();
      }
    }
    else {
      while (local_8 != 0) {
        puVar3 = (undefined4 *)FUN_100972dc(&local_8);
        this_00 = (CWnd *)*puVar3;
        uVar4 = CWnd::GetExStyle(this_00);
        if ((uVar4 & 0x10000000) != 0) {
          pcVar1 = *(code **)(*(int *)this_00 + 0x20c);
          guard_check_icall();
          (*pcVar1)();
        }
      }
    }
    pcVar1 = *(code **)(*(int *)this + 0x38);
    guard_check_icall(0);
    (*pcVar1)();
    *(undefined4 *)(this + 0x158) = 0;
  }
  return;
}

