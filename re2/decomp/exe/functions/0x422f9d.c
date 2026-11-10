// rea decompile_all
// name: FUN_00422f9d
// address: 0x422f9d
// body: available
// range: 0x422f9d-0x423287 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x423283 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00422f9d(CDC *param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  code *pcVar1;
  bool bVar2;
  AFX_GLOBAL_DATA *pAVar3;
  undefined4 uVar4;
  COLORREF CVar5;
  int iVar6;
  int *in_ECX;
  HDC hdc;
  int iVar7;
  int local_38;
  int local_34;
  int local_30;
  int local_28;
  int local_24;
  int local_20;
  undefined4 uStack_1c;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  if ((param_2 != 0) && (hdc = (HDC)0x0, *(int *)(param_2 + 4) != 0)) {
    if ((HTHEME)in_ECX[10] == (HTHEME)0x0) {
      FUN_004a0272(param_1,param_2,param_3,param_4,param_5);
    }
    else if (*(int *)(*(int *)(param_2 + 8) + -0xc) != 0) {
      if (*(int *)(param_2 + 0x2c) == 0) {
        if (param_1 != (CDC *)0x0) {
          hdc = *(HDC *)(param_1 + 4);
        }
        iVar7 = 8;
      }
      else {
        if (param_1 != (CDC *)0x0) {
          hdc = *(HDC *)(param_1 + 4);
        }
        iVar7 = 0xc;
      }
      DrawThemeBackground((HTHEME)in_ECX[10],hdc,iVar7,0,(LPCRECT)(param_2 + 0x34),(LPCRECT)0x0);
      if ((*(int *)(param_2 + 0x5c) == 0) ||
         (((*(int *)(param_2 + 0x38) - *(int *)(param_2 + 0x40)) + *(int *)(param_2 + 0x3c)) -
          *(int *)(param_2 + 0x34) <= *(int *)(param_2 + 0x54))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
        pcVar1 = *(code **)(*in_ECX + 0x16c);
        guard_check_icall(param_1,param_2,5,param_3,param_4,param_5);
        (*pcVar1)();
      }
      iVar7 = *(int *)param_1;
      pAVar3 = GetGlobalData();
      guard_check_icall(pAVar3 + 300);
      uVar4 = (**(code **)(iVar7 + 0x28))();
      CVar5 = GetTextColor(*(HDC *)(param_1 + 8));
      if ((param_5 == 0) || (param_3 == 0)) {
        iVar7 = *(int *)(param_2 + 0x60);
      }
      else {
        iVar7 = *(int *)(param_2 + 100);
      }
      if (*(int *)(param_2 + 0x2c) == 0) {
        if (iVar7 == -1) {
          pAVar3 = GetGlobalData();
          iVar7 = *(int *)(pAVar3 + 0x3c);
        }
      }
      else if (iVar7 == -1) {
        pAVar3 = GetGlobalData();
        iVar7 = *(int *)(pAVar3 + 0x6c);
      }
      pcVar1 = *(code **)(*(int *)param_1 + 0x30);
      guard_check_icall(iVar7);
      (*pcVar1)();
      iVar6 = CDC::SetBkMode(param_1,1);
      iVar7 = *(int *)(*(int *)(param_2 + 4) + 8);
      local_38 = *(int *)(iVar7 + 0x3bc);
      local_24 = *(int *)(iVar7 + 0x3c0);
      if (local_38 == -1) {
        local_38 = in_ECX[0x24];
      }
      uStack_1c = *(undefined4 *)(param_2 + 0x40);
      if (bVar2) {
        local_30 = *(int *)(param_2 + 0x54) + 5;
      }
      else {
        local_30 = local_38;
      }
      local_28 = *(int *)(param_2 + 0x34) + local_30;
      if (local_24 == -1) {
        local_24 = in_ECX[0x25];
      }
      local_24 = *(int *)(param_2 + 0x38) + local_24;
      if (param_5 == 0) {
        local_34 = local_38;
      }
      else {
        local_34 = *(int *)(param_2 + 0x40) - *(int *)(param_2 + 0x38);
      }
      local_20 = local_28;
      if (local_28 <= *(int *)(param_2 + 0x3c) - local_34) {
        if (param_5 != 0) {
          local_38 = *(int *)(param_2 + 0x40) - *(int *)(param_2 + 0x38);
        }
        local_20 = *(int *)(param_2 + 0x3c) - local_38;
      }
      iVar7 = *(int *)param_1;
      guard_check_icall(*(int *)(param_2 + 8),*(undefined4 *)(*(int *)(param_2 + 8) + -0xc),
                        &local_28,0x8020);
      (**(code **)(iVar7 + 0x68))();
      CDC::SetBkMode(param_1,iVar6);
      pcVar1 = *(code **)(*(int *)param_1 + 0x28);
      guard_check_icall(uVar4);
      (*pcVar1)();
      pcVar1 = *(code **)(*(int *)param_1 + 0x30);
      guard_check_icall(CVar5);
      (*pcVar1)();
      if (param_5 != 0) {
        local_18.left = ((LPCRECT)(param_2 + 0x34))->left;
        local_18.top = *(int *)(param_2 + 0x38);
        local_18.right = *(int *)(param_2 + 0x3c);
        local_18.bottom = *(int *)(param_2 + 0x40);
        iVar7 = local_18.right + (local_18.top - local_18.bottom);
        if (local_18.left <= iVar7) {
          local_18.left = iVar7;
        }
        if (*(int *)(param_2 + 0x2c) == 0) {
          if (*(int *)(param_2 + 0x30) == 0) {
            if (param_3 == 0) {
              iVar7 = 1;
            }
            else {
              iVar7 = 2;
            }
            iVar6 = 6;
          }
          else {
            if (param_3 == 0) {
              iVar7 = 1;
            }
            else {
              iVar7 = 2;
            }
            iVar6 = 7;
          }
        }
        else if (*(int *)(param_2 + 0x30) == 0) {
          if (param_3 == 0) {
            iVar7 = 1;
          }
          else {
            iVar7 = 2;
          }
          iVar6 = 10;
        }
        else {
          if (param_3 == 0) {
            iVar7 = 1;
          }
          else {
            iVar7 = 2;
          }
          iVar6 = 0xb;
        }
        DrawThemeBackground((HTHEME)in_ECX[10],*(HDC *)(param_1 + 4),iVar6,iVar7,&local_18,
                            (LPCRECT)0x0);
      }
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00429127();
}

