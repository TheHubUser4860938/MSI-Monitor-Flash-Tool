// rea decompile_all
// name: CDockingPanesRow::CalcFixedLayout
// address: 0x100bc2a3
// body: available
// range: 0x100bc2a3-0x100bc3c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CSize __thiscall CDockingPanesRow::CalcFixedLayout(int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDockingPanesRow::CalcFixedLayout(CDockingPanesRow *this,int param_1,int param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 in_stack_0000000c;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  CObject *local_c;
  int local_8;
  
  if (*(int *)(this + 8) == 0) {
    if ((*(uint *)(this + 0x40) & 0xa000) == 0) {
      *(undefined4 *)param_1 = 0;
      *(undefined4 *)(param_1 + 4) = 0x7fff;
    }
    else {
      *(undefined4 *)param_1 = 0x7fff;
      *(undefined4 *)(param_1 + 4) = 0;
    }
  }
  else {
    local_8 = 0;
    local_14 = (uint)((*(uint *)(this + 0x40) & 0xa000) != 0);
    local_10 = *(int *)(this + 0x28);
    iVar4 = 0;
    while (local_10 != 0) {
      puVar2 = (undefined4 *)FUN_1002466e(&local_10);
      local_c = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_101878f4,(CObject *)*puVar2);
      pcVar1 = *(code **)(*(int *)local_c + 0x17c);
      guard_check_icall();
      iVar3 = (*pcVar1)();
      if ((iVar3 != 0) || (*(int *)(this + 4) != 0)) {
        pcVar1 = *(code **)(*(int *)local_c + 0x260);
        guard_check_icall(&local_1c,param_2,in_stack_0000000c);
        (*pcVar1)();
        if (local_14 == 0) {
          if (local_8 <= local_1c) {
            local_8 = local_1c;
          }
          iVar4 = iVar4 + local_18;
        }
        else {
          local_8 = local_8 + local_1c;
          if (iVar4 <= local_18) {
            iVar4 = local_18;
          }
        }
      }
    }
    if (local_14 == 0) {
      if (0 < local_8) {
        local_8 = local_8 + *(int *)(this + 0x1c);
      }
    }
    else if (0 < iVar4) {
      iVar4 = iVar4 + *(int *)(this + 0x1c);
    }
    *(int *)(param_1 + 4) = iVar4;
    *(int *)param_1 = local_8;
  }
  return;
}

