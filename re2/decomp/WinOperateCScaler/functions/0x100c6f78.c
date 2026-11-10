// rea decompile_all
// name: CDockingPanesRow::ArrangePanes
// address: 0x100c6f78
// body: available
// range: 0x100c6f78-0x100c71b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CDockingPanesRow::ArrangePanes(int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDockingPanesRow::ArrangePanes(CDockingPanesRow *this,int param_1,int param_2)

{
  code *pcVar1;
  CDockingPanesRow *pCVar2;
  CMFCVisualManager *pCVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined1 local_50 [8];
  CDockingPanesRow *local_48;
  int local_44;
  int local_40;
  int local_3c;
  CDockingPanesRow *local_38;
  int local_34;
  int *local_30;
  char local_29;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  local_28 = 0;
  iVar6 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  local_34 = 0;
  local_38 = this;
  GetWindowRect(this,(CRect *)&local_28);
  local_29 = '\x01';
  pCVar3 = CMFCVisualManager::GetInstance();
  pcVar1 = *(code **)(*(int *)pCVar3 + 0x1ac);
  guard_check_icall();
  local_3c = (*pcVar1)();
  local_44 = *(int *)(local_38 + 0x28);
  if (local_44 != 0) {
    local_48 = local_38 + 0x24;
    do {
      piVar4 = (int *)FUN_100972dc(&local_44);
      piVar4 = (int *)*piVar4;
      pcVar1 = *(code **)(*piVar4 + 0x17c);
      local_30 = piVar4;
      guard_check_icall();
      iVar5 = (*pcVar1)();
      pCVar2 = local_38;
      if ((iVar5 != 0) || (*(int *)(local_38 + 4) != 0)) {
        ::GetWindowRect((HWND)piVar4[8],&local_18);
        if (local_29 != '\0') {
          if ((*(uint *)(pCVar2 + 0x40) & 0xa000) == 0) {
            local_34 = param_1 + local_24;
          }
          else {
            iVar6 = param_1 + local_28;
          }
        }
        if ((local_30[0x45] == 0) && (local_29 == '\0')) {
          if ((*(uint *)(pCVar2 + 0x40) & 0xa000) == 0) {
            local_34 = local_34 - (DAT_10201a20 + param_2);
            if (local_3c != 0) {
              local_34 = local_34 - (local_18.right - local_18.left) / 2;
            }
          }
          else {
            iVar6 = iVar6 - (DAT_10201a20 + param_2);
            if (local_3c != 0) {
              iVar6 = iVar6 - (local_18.bottom - local_18.top) / 2;
            }
          }
        }
        iVar5 = local_34;
        local_29 = '\0';
        if ((*(uint *)(pCVar2 + 0x40) & 0xa000) == 0) {
          local_40 = local_18.bottom - local_18.top;
          local_18.bottom = local_40 + local_34;
          local_18.top = local_34;
        }
        else {
          local_40 = local_18.right - local_18.left;
          local_18.right = local_40 + iVar6;
          local_18.left = iVar6;
        }
        CWnd::ScreenToClient(*(CWnd **)(pCVar2 + 0x44),&local_18);
        pcVar1 = *(code **)(*local_30 + 0x238);
        guard_check_icall(0,local_18.left,local_18.top,local_18.right - local_18.left,
                          local_18.bottom - local_18.top,0x14,0);
        (*pcVar1)();
        pcVar1 = *(code **)(*local_30 + 0x208);
        guard_check_icall(local_50,local_40,(*(uint *)(local_38 + 0x40) & 0xa000) == 0);
        (*pcVar1)();
        ::GetWindowRect((HWND)local_30[8],&local_18);
        if ((*(uint *)(local_38 + 0x40) & 0xa000) == 0) {
          local_34 = iVar5 + (local_18.bottom - local_18.top) + param_2;
        }
        else {
          iVar6 = iVar6 + (local_18.right - local_18.left) + param_2;
        }
      }
    } while (local_44 != 0);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

