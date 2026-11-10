// rea decompile_all
// name: CVSListBoxBase::SetStandardButtons
// address: 0x100500c7
// body: available
// range: 0x100500c7-0x10050270 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005014c to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall CVSListBoxBase::SetStandardButtons(unsigned int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CVSListBoxBase::SetStandardButtons(CVSListBoxBase *this,uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  AFX_GLOBAL_DATA *pAVar3;
  wchar_t *pwVar4;
  ushort uVar5;
  uchar uVar6;
  uint uVar7;
  wchar_t *local_14;
  
  if ((this == (CVSListBoxBase *)0x0) || (*(int *)(this + 0x20) == 0)) {
    iVar2 = 0;
  }
  else {
    uVar1 = FUN_1001e20a();
    FUN_1001d224(uVar1);
    if ((param_1 & 1) != 0) {
      iVar2 = FUN_1001de45(0x3e91);
      if ((iVar2 == 0) || (iVar2 = FUN_10018c20(iVar2,0x3e91), iVar2 == 0)) goto LAB_1005014c;
      uVar7 = 0xfffffff5;
      uVar6 = '\0';
      uVar5 = 0x2d;
      pwVar4 = local_14;
      pAVar3 = GetGlobalData();
      iVar2 = AFX_GLOBAL_DATA::Is32BitIcons(pAVar3);
      iVar2 = AddButton(this,(-(uint)(iVar2 != 0) & 0x7c) + 0x4221,pwVar4,uVar5,uVar6,uVar7);
      if (iVar2 == 0) goto LAB_1005014c;
    }
    if ((param_1 & 2) != 0) {
      iVar2 = FUN_1001de45(0x3e94);
      if ((iVar2 == 0) || (iVar2 = FUN_10018c20(iVar2,0x3e94), iVar2 == 0)) goto LAB_1005014c;
      uVar7 = 0xfffffff4;
      uVar6 = '\0';
      uVar5 = 0x2e;
      pwVar4 = local_14;
      pAVar3 = GetGlobalData();
      iVar2 = AFX_GLOBAL_DATA::Is32BitIcons(pAVar3);
      iVar2 = AddButton(this,(-(uint)(iVar2 != 0) & 0x7c) + 0x4222,pwVar4,uVar5,uVar6,uVar7);
      if (iVar2 == 0) goto LAB_1005014c;
    }
    if ((param_1 & 4) != 0) {
      iVar2 = FUN_1001de45(0x3e95);
      if ((iVar2 == 0) || (iVar2 = FUN_10018c20(iVar2,0x3e95), iVar2 == 0)) goto LAB_1005014c;
      uVar7 = 0xfffffff3;
      uVar6 = '\x10';
      uVar5 = 0x26;
      pwVar4 = local_14;
      pAVar3 = GetGlobalData();
      iVar2 = AFX_GLOBAL_DATA::Is32BitIcons(pAVar3);
      iVar2 = AddButton(this,(-(uint)(iVar2 != 0) & 0x7c) + 0x4223,pwVar4,uVar5,uVar6,uVar7);
      if (iVar2 == 0) goto LAB_1005014c;
    }
    if ((param_1 & 8) != 0) {
      iVar2 = FUN_1001de45(0x3e96);
      if ((iVar2 == 0) || (iVar2 = FUN_10018c20(iVar2,0x3e96), iVar2 == 0)) {
LAB_1005014c:
                    /* WARNING: Subroutine does not return */
        FUN_1001d023();
      }
      uVar7 = 0xfffffff2;
      uVar6 = '\x10';
      uVar5 = 0x28;
      pwVar4 = local_14;
      pAVar3 = GetGlobalData();
      iVar2 = AFX_GLOBAL_DATA::Is32BitIcons(pAVar3);
      iVar2 = AddButton(this,(-(uint)(iVar2 != 0) & 0x7d) + 0x4224,pwVar4,uVar5,uVar6,uVar7);
      if (iVar2 == 0) goto LAB_1005014c;
    }
    *(uint *)(this + 0xd4) = *(uint *)(this + 0xd4) | param_1;
    ATL::CStringData::Release((CStringData *)(local_14 + -8));
    iVar2 = 1;
  }
  return iVar2;
}

