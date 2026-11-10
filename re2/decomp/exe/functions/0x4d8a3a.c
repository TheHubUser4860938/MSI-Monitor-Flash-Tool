// rea decompile_all
// name: CArray<CTaskDialog::_CTaskDialogButton,CTaskDialog::_CTaskDialogButton_const&>::SetSize
// address: 0x4d8a3a
// body: available
// range: 0x4d8a3a-0x4d8d59 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4d8a5c to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CArray<struct CTaskDialog::_CTaskDialogButton,struct
   CTaskDialog::_CTaskDialogButton const &>::SetSize(int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CArray<CTaskDialog::_CTaskDialogButton,CTaskDialog::_CTaskDialogButton_const&>::SetSize
          (CArray<CTaskDialog::_CTaskDialogButton,CTaskDialog::_CTaskDialogButton_const&> *this,
          int param_1,int param_2)

{
  void *_Dst;
  _CTaskDialogButton *p_Var1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  size_t _Size;
  int local_20;
  void *local_1c;
  uint local_18;
  uint local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0x4d8a46;
  local_14 = 0;
  local_18 = 0;
  if (param_1 < 0) {
LAB_004d8a5c:
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
  if (-1 < param_2) {
    *(int *)(this + 0x10) = param_2;
  }
  if (param_1 == 0) {
    if (*(int *)(this + 4) != 0) {
      iVar5 = 0;
      if (0 < *(int *)(this + 8)) {
        iVar4 = 0;
        do {
          CTaskDialog::_CTaskDialogButton::_scalar_deleting_destructor_
                    ((_CTaskDialogButton *)(*(int *)(this + 4) + iVar4),0);
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0xc;
        } while (iVar5 < *(int *)(this + 8));
      }
      FID_conflict__free(*(void **)(this + 4));
      *(undefined4 *)(this + 4) = 0;
    }
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 8) = 0;
    return;
  }
  if (*(int *)(this + 4) == 0) {
    local_20 = *(int *)(this + 0x10);
    if (*(int *)(this + 0x10) < param_1) {
      local_20 = param_1;
    }
    _Size = local_20 * 0xc;
    _Dst = (void *)FUN_00416444(_Size);
    *(void **)(this + 4) = _Dst;
    _memset(_Dst,0,_Size);
    iVar5 = 0;
    if (0 < param_1) {
      do {
        p_Var1 = (_CTaskDialogButton *)(iVar5 * 0xc + *(int *)(this + 4));
        local_8 = 0;
        if (p_Var1 != (_CTaskDialogButton *)0x0) {
          uVar2 = FUN_004295fe();
          FUN_0040eb30(uVar2);
          local_18 = local_14 | 1;
          local_8 = CONCAT31(local_8._1_3_,1);
          local_14 = local_18;
          CTaskDialog::_CTaskDialogButton::_CTaskDialogButton
                    (p_Var1,0,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                              &local_1c,'\0');
        }
        local_8 = 0xffffffff;
        if ((local_14 & 1) != 0) {
          local_14 = local_14 & 0xfffffffe;
          FUN_0040efa0();
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_1);
    }
  }
  else {
    iVar5 = *(int *)(this + 0xc);
    if (param_1 <= iVar5) {
      iVar5 = *(int *)(this + 8);
      if (iVar5 < param_1) {
        _memset((void *)(iVar5 * 0xc + *(int *)(this + 4)),0,(param_1 - iVar5) * 0xc);
        iVar5 = 0;
        if (param_1 != *(int *)(this + 8) && -1 < param_1 - *(int *)(this + 8)) {
          do {
            p_Var1 = (_CTaskDialogButton *)((*(int *)(this + 8) + iVar5) * 0xc + *(int *)(this + 4))
            ;
            local_8 = 3;
            if (p_Var1 != (_CTaskDialogButton *)0x0) {
              uVar2 = FUN_004295fe();
              FUN_0040eb30(uVar2);
              local_18 = local_14 | 2;
              local_8 = CONCAT31(local_8._1_3_,4);
              local_14 = local_18;
              CTaskDialog::_CTaskDialogButton::_CTaskDialogButton
                        (p_Var1,0,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                   *)&local_20,'\0');
            }
            local_8 = 0xffffffff;
            if ((local_14 & 2) != 0) {
              local_14 = local_14 & 0xfffffffd;
              FUN_0040efa0();
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < param_1 - *(int *)(this + 8));
        }
      }
      else if ((param_1 < iVar5) && (iVar4 = 0, iVar5 != param_1 && -1 < iVar5 - param_1)) {
        local_20 = param_1 * 0xc;
        do {
          CTaskDialog::_CTaskDialogButton::_scalar_deleting_destructor_
                    ((_CTaskDialogButton *)(*(int *)(this + 4) + local_20),0);
          iVar4 = iVar4 + 1;
          local_20 = local_20 + 0xc;
        } while (iVar4 < *(int *)(this + 8) - param_1);
      }
      goto LAB_004d8d4f;
    }
    iVar4 = *(int *)(this + 0x10);
    if (iVar4 == 0) {
      iVar4 = (int)(*(int *)(this + 8) + (*(int *)(this + 8) >> 0x1f & 7U)) >> 3;
      if (iVar4 < 4) {
        iVar4 = 4;
      }
      else if (0x400 < iVar4) {
        iVar4 = 0x400;
      }
    }
    iVar3 = iVar4 + iVar5;
    if (iVar4 + iVar5 <= param_1) {
      iVar3 = param_1;
    }
    if (iVar3 < iVar5) goto LAB_004d8a5c;
    local_1c = (void *)FUN_00416444(iVar3 * 0xc);
    ATL::Checked::memmove_s(local_1c,iVar3 * 0xc,*(void **)(this + 4),*(int *)(this + 8) * 0xc);
    _memset((void *)(*(int *)(this + 8) * 0xc + (int)local_1c),0,
            (param_1 - *(int *)(this + 8)) * 0xc);
    iVar5 = 0;
    if (param_1 != *(int *)(this + 8) && -1 < param_1 - *(int *)(this + 8)) {
      do {
        p_Var1 = (_CTaskDialogButton *)((*(int *)(this + 8) + iVar5) * 0xc + (int)local_1c);
        local_8 = 6;
        if (p_Var1 != (_CTaskDialogButton *)0x0) {
          uVar2 = FUN_004295fe();
          FUN_0040eb30(uVar2);
          local_18 = local_14 | 4;
          local_8 = CONCAT31(local_8._1_3_,7);
          local_14 = local_18;
          CTaskDialog::_CTaskDialogButton::_CTaskDialogButton
                    (p_Var1,0,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                              &local_20,'\0');
        }
        local_8 = 0xffffffff;
        if ((local_14 & 4) != 0) {
          local_14 = local_14 & 0xfffffffb;
          FUN_0040efa0();
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_1 - *(int *)(this + 8));
    }
    FID_conflict__free(*(void **)(this + 4));
    *(void **)(this + 4) = local_1c;
    local_20 = iVar3;
  }
  *(int *)(this + 0xc) = local_20;
LAB_004d8d4f:
  *(int *)(this + 8) = param_1;
  return;
}

