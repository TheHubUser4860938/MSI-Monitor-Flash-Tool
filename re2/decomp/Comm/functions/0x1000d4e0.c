// rea decompile_all
// name: FUN_1000d4e0
// address: 0x1000d4e0
// body: available
// range: 0x1000d4e0-0x1000d5a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1000d4e0(int *param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  wchar_t *pwVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  _Ctypevec *p_Var6;
  bool bVar7;
  _Ctypevec local_24;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1016d6ef;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar7 = false;
  local_14 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 == 0)) {
    puVar4 = (undefined4 *)FUN_10011f7d(0x18,DAT_101d3fec ^ (uint)&stack0xfffffffc);
    local_8 = 0;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      iVar1 = *(int *)(param_2 + 4);
      if (iVar1 == 0) {
        puVar5 = &DAT_101b5dfa;
      }
      else {
        puVar5 = *(undefined **)(iVar1 + 0x18);
        if (puVar5 == (undefined *)0x0) {
          puVar5 = (undefined *)(iVar1 + 0x1c);
        }
      }
      FUN_1000d230(puVar5);
      puVar4[1] = 0;
      bVar7 = true;
      *puVar4 = std::ctype<char>::vftable;
      p_Var6 = __Getctype(&local_24);
      psVar2 = p_Var6->_Table;
      iVar1 = p_Var6->_Delfl;
      pwVar3 = p_Var6->_LocaleName;
      puVar4[2] = p_Var6->_Page;
      puVar4[3] = psVar2;
      puVar4[4] = iVar1;
      puVar4[5] = pwVar3;
    }
    *param_1 = (int)puVar4;
    if (bVar7) {
      FUN_1000d310();
    }
  }
  ExceptionList = local_10;
  return 2;
}

