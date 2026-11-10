// rea decompile_all
// name: CDockingPanesRow::IsEnoughSpaceToMove
// address: 0x100c850b
// body: available
// range: 0x100c850b-0x100c869c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: int __thiscall CDockingPanesRow::IsEnoughSpaceToMove(class CPane *,bool,int &)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CDockingPanesRow::IsEnoughSpaceToMove
          (CDockingPanesRow *this,CPane *param_1,bool param_2,int *param_3)

{
  code *pcVar1;
  CPane *pCVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int local_4c;
  CPane *local_48;
  CDockingPanesRow *local_44;
  CPane *local_40;
  int local_3c;
  tagRECT local_38;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  local_4c = *(int *)(this + 0x28);
  local_3c = 0;
  local_44 = this;
  local_40 = param_1;
  iVar5 = local_3c;
joined_r0x100c853c:
  do {
    do {
      local_3c = iVar5;
      if (local_4c == 0) {
        local_38.left = 0;
        local_38.top = 0;
        local_38.right = 0;
        local_38.bottom = 0;
        ::GetWindowRect(*(HWND *)(local_40 + 0x20),&local_38);
        local_28 = 0;
        local_24 = 0;
        local_20 = 0;
        local_1c = 0;
        GetWindowRect(this,(CRect *)&local_28);
        *param_3 = 0;
        if ((*(uint *)(this + 0x40) & 0xa000) == 0) {
          if (param_2) {
            iVar6 = local_1c - local_38.bottom;
          }
          else {
            iVar6 = local_24 - local_38.top;
          }
        }
        else if (param_2) {
          iVar6 = local_20 - local_38.right;
        }
        else {
          iVar6 = local_28 - local_38.left;
        }
        *param_3 = iVar6;
        if (param_2) {
          iVar5 = -iVar5;
        }
        *param_3 = iVar6 + iVar5;
        iVar5 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return iVar5;
      }
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      puVar4 = (undefined4 *)FUN_100972dc(&local_4c);
      local_48 = (CPane *)*puVar4;
      pcVar1 = *(code **)(*(int *)local_48 + 0x17c);
      guard_check_icall();
      iVar5 = (*pcVar1)();
      pCVar2 = local_48;
    } while (((iVar5 == 0) && (iVar5 = local_3c, *(int *)(this + 4) == 0)) ||
            (::GetWindowRect(*(HWND *)(local_48 + 0x20),&local_18), iVar5 = local_3c,
            pCVar2 == local_40));
    bVar3 = CPane::IsLeftOf(local_40,local_18.left,local_18.top,local_18.right,local_18.bottom,1);
    this = local_44;
    iVar5 = local_3c;
    if (!param_2) goto LAB_100c8621;
  } while (bVar3);
  goto LAB_100c8625;
LAB_100c8621:
  if (bVar3) {
LAB_100c8625:
    if ((*(uint *)(local_44 + 0x40) & 0xa000) == 0) {
      iVar5 = local_18.bottom - local_18.top;
    }
    else {
      iVar5 = local_18.right - local_18.left;
    }
    iVar5 = local_3c + iVar5;
  }
  goto joined_r0x100c853c;
}

