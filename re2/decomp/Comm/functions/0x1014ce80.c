// rea decompile_all
// name: __except_handler4
// address: 0x1014ce80
// body: available
// range: 0x1014ce80-0x1014cfe5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1014cfe5 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __except_handler4
   
   Library: Visual Studio 2015 Release */

undefined4 __except_handler4(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  BOOL BVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int *local_20;
  undefined4 local_1c;
  int local_18;
  int *local_14;
  undefined4 local_10;
  uint local_c;
  char local_5;
  
  local_5 = '\0';
  local_10 = 1;
  local_18 = param_2 + 0x10;
  uVar6 = *(uint *)(param_2 + 8) ^ DAT_101d3fec;
  local_c = uVar6;
  _ValidateLocalCookies(uVar6,local_18);
  guard_check_icall(param_3);
  if ((*(byte *)(param_1 + 1) & 0x66) == 0) {
    local_20 = param_1;
    local_1c = param_3;
    *(int ***)(param_2 + -4) = &local_20;
    iVar7 = *(int *)(param_2 + 0xc);
    if (*(int *)(param_2 + 0xc) == -2) {
      return local_10;
    }
    do {
      iVar1 = iVar7 * 3 + 4;
      iVar3 = *(int *)(uVar6 + 4 + iVar1 * 4);
      local_14 = (int *)(uVar6 + iVar1 * 4);
      iVar1 = *local_14;
      if (iVar3 != 0) {
        iVar3 = _EH4_CallFilterFunc(iVar3,param_2 + 0x10);
        local_5 = '\x01';
        if (iVar3 < 0) {
          local_10 = 0;
          uVar6 = local_c;
          goto LAB_1014cf9e;
        }
        if (0 < iVar3) {
          if ((*param_1 == -0x1f928c9d) &&
             (BVar4 = __IsNonwritableInCurrentImage((PBYTE)&PTR____DestructExceptionObject_101ab9c8)
             , BVar4 != 0)) {
            guard_check_icall(param_1,1);
            ___DestructExceptionObject();
          }
          _EH4_GlobalUnwind2(param_2,param_1);
          if (*(int *)(param_2 + 0xc) != iVar7) {
            _EH4_LocalUnwind(param_2,iVar7,param_2 + 0x10,&DAT_101d3fec);
          }
          *(int *)(param_2 + 0xc) = iVar1;
          _ValidateLocalCookies(local_c,param_2 + 0x10);
          _EH4_TransferToHandler(local_14[2],param_2 + 0x10);
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return uVar5;
        }
      }
      uVar6 = local_c;
      iVar7 = iVar1;
    } while (iVar1 != -2);
    if (local_5 == '\0') {
      return local_10;
    }
  }
  else {
    if (*(int *)(param_2 + 0xc) == -2) {
      return local_10;
    }
    _EH4_LocalUnwind(param_2,0xfffffffe,param_2 + 0x10,&DAT_101d3fec);
  }
LAB_1014cf9e:
  _ValidateLocalCookies(uVar6,local_18);
  return local_10;
}

