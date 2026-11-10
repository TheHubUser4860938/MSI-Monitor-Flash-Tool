// rea decompile_all
// name: FUN_10124c4e
// address: 0x10124c4e
// body: available
// range: 0x10124c4e-0x10124d59 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10124d55 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10124c4e(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  __POSITION *p_Var2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  wchar_t *pwVar5;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_1020c280) &&
     (FUN_10153ede(&DAT_1020c280), DAT_1020c280 == -1)) {
    uVar4 = FUN_1001e20a();
    FUN_1001d224(uVar4);
    _atexit((_func_4879 *)&LAB_101a46f8);
    FUN_10153e9f(&DAT_1020c280);
  }
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1001d023();
  }
  iVar3 = *(int *)(in_ECX + 0x124);
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x20) != 0)) {
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + 0x20);
    }
    if (*param_2 == iVar1) {
      iVar3 = param_2[1];
      if (((iVar3 != 0) && (iVar3 <= *(int *)(in_ECX + 0x114))) &&
         (p_Var2 = CObList::FindIndex((CObList *)(in_ECX + 0x108),iVar3 + -1),
         p_Var2 != (__POSITION *)0x0)) {
        iVar3 = FUN_10168326();
        if (iVar3 == 0x17) {
          pwVar5 = L"Back";
        }
        else if (iVar3 == 0x18) {
          pwVar5 = L"Forward";
        }
        else {
          if (iVar3 != 0x19) goto LAB_10124cff;
          pwVar5 = L"Other Tasks Pane";
        }
        ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)&DAT_1020c27c,pwVar5);
        param_2[3] = DAT_1020c27c;
        return 1;
      }
LAB_10124cff:
      uVar4 = FUN_100b34b0(param_1,param_2,param_3);
      return uVar4;
    }
  }
  return 0;
}

