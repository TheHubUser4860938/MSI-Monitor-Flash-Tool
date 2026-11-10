// rea decompile_all
// name: CDockingPanesRow::GetOutOfBoundsOffsetRect
// address: 0x100c83be
// body: available
// range: 0x100c83be-0x100c8455 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CDockingPanesRow::GetOutOfBoundsOffsetRect(class CPane *,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CDockingPanesRow::GetOutOfBoundsOffsetRect(CDockingPanesRow *this,CPane *param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_EDX;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  if (param_1 == (CPane *)0x0) {
    if (param_2 == 0) {
      iVar1 = *(int *)(this + 0x2c);
    }
    else {
      iVar1 = *(int *)(this + 0x28);
    }
    param_1 = *(CPane **)(iVar1 + 8);
  }
  uVar2 = *(undefined4 *)(param_1 + 0xa8);
  uVar3 = *(undefined4 *)(param_1 + 0xac);
  uVar4 = *(undefined4 *)(param_1 + 0xb0);
  uVar5 = *(undefined4 *)(param_1 + 0xb4);
  GetWindowRect(this,(CRect *)&local_18);
  iVar1 = __security_check_cookie
                    (local_8 ^ (uint)&stack0xfffffffc,extraout_EDX,uVar2,uVar3,uVar4,uVar5);
  return iVar1;
}

