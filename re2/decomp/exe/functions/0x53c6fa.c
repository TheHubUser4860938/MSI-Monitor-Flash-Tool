// rea decompile_all
// name: FUN_0053c6fa
// address: 0x53c6fa
// body: available
// range: 0x53c6fa-0x53c8f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x53c8f4 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int FUN_0053c6fa(undefined4 param_1,int *param_2,_ITEMIDLIST *param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  _ITEMIDLIST *p_Var4;
  int *in_ECX;
  uint *puVar5;
  uint *puVar6;
  undefined4 local_98;
  undefined4 local_94;
  uint local_90 [15];
  uint local_54 [4];
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_34;
  undefined4 *local_30;
  int *local_2c;
  undefined4 *local_28;
  int local_24;
  uint local_20;
  int *local_1c;
  _ITEMIDLIST *local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x88;
  local_8 = 0x53c709;
  local_1c = (int *)0x0;
  iVar2 = *param_2;
  local_2c = in_ECX;
  guard_check_icall(param_2,0,in_ECX[0x23],&local_1c);
  iVar2 = (**(code **)(iVar2 + 0x10))();
  if ((-1 < iVar2) && (local_1c != (int *)0x0)) {
    local_14[0] = 1;
    iVar2 = *local_1c;
    while( true ) {
      guard_check_icall(local_1c,1,&local_18,local_14);
      iVar2 = (**(code **)(iVar2 + 0xc))();
      if ((iVar2 < 0) || (local_14[0] == 0)) break;
      _memset(local_54,0,0x28);
      local_54[0] = 0x67;
      pcVar1 = *(code **)(*param_2 + 4);
      guard_check_icall(param_2);
      (*pcVar1)();
      puVar3 = GlobalAlloc(0x40,0xc);
      local_28 = puVar3;
      if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00429127();
      }
      puVar3[2] = local_18;
      p_Var4 = CShellManager::ConcatenateItem(DAT_00612cc4,param_3,local_18);
      puVar3[1] = p_Var4;
      *puVar3 = param_2;
      pcVar1 = *(code **)(*in_ECX + 0x164);
      local_30 = puVar3;
      guard_check_icall(&local_24,puVar3);
      (*pcVar1)();
      local_8 = 0;
      local_44 = FUN_0040ed00(*(undefined4 *)(local_24 + -0xc));
      pcVar1 = *(code **)(*in_ECX + 0x168);
      guard_check_icall(local_28,0);
      local_3c = (*pcVar1)();
      pcVar1 = *(code **)(*in_ECX + 0x168);
      guard_check_icall(local_28,1);
      local_38 = (*pcVar1)();
      iVar2 = *param_2;
      local_20 = 0xb00fc010;
      guard_check_icall(param_2,1,&local_18,&local_20);
      (**(code **)(iVar2 + 0x24))();
      local_34 = local_20 & 0x90000000;
      if ((local_20 & 0x20000) != 0) {
        local_54[0] = local_54[0] | 8;
        local_54[3] = local_54[3] | 0xf00;
        local_54[2] = local_54[2] | 0x100;
      }
      puVar5 = local_54;
      puVar6 = local_90;
      for (iVar2 = 10; in_ECX = local_2c, iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      local_98 = param_1;
      local_94 = 0xffff0002;
      SendMessageW((HWND)local_2c[8],0x1132,0,(LPARAM)&local_98);
      local_14[0] = 0;
      local_8 = 0xffffffff;
      FUN_0040efa0();
      iVar2 = *local_1c;
    }
    pcVar1 = *(code **)(*local_1c + 8);
    guard_check_icall(local_1c);
    (*pcVar1)();
    iVar2 = 0;
  }
  return iVar2;
}

