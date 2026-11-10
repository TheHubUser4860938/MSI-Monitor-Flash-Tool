// rea decompile_all
// name: CDockingPanesRow::StretchPaneRect
// address: 0x100f4cb1
// body: available
// range: 0x100f4cb1-0x100f4d59 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CDockingPanesRow::StretchPaneRect(class CPane *,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CDockingPanesRow::StretchPaneRect(CDockingPanesRow *this,CPane *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int local_10;
  int local_c;
  
  pcVar3 = *(code **)(*(int *)param_1 + 0x278);
  guard_check_icall();
  iVar4 = (*pcVar3)();
  pcVar3 = *(code **)(*(int *)param_1 + 0x27c);
  guard_check_icall();
  iVar5 = (*pcVar3)();
  if (param_2 < 1) {
    lVar6 = _labs(param_2);
    if (iVar5 < lVar6) {
      param_2 = -iVar5;
    }
  }
  else {
    if (iVar4 == 0) {
      return 0;
    }
    if (iVar4 <= param_2) {
      param_2 = iVar4;
    }
  }
  uVar1 = *(undefined4 *)(param_1 + 0xa8);
  uVar2 = *(undefined4 *)(param_1 + 0xac);
  local_10 = *(int *)(param_1 + 0xb0);
  local_c = *(int *)(param_1 + 0xb4);
  if ((*(uint *)(this + 0x40) & 0xa000) == 0) {
    local_c = local_c + param_2;
  }
  else {
    local_10 = local_10 + param_2;
  }
  lVar6 = _labs(param_2);
  if (0 < lVar6) {
    *(undefined4 *)(param_1 + 0xa8) = uVar1;
    *(undefined4 *)(param_1 + 0xac) = uVar2;
    *(int *)(param_1 + 0xb0) = local_10;
    *(int *)(param_1 + 0xb4) = local_c;
  }
  return param_2;
}

