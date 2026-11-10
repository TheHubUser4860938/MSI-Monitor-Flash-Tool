// rea decompile_all
// name: CDataSourceControl::BindProp
// address: 0x44214d
// body: available
// range: 0x44214d-0x4422dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CDataSourceControl::BindProp(class COleControlSite *,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CDataSourceControl::BindProp(CDataSourceControl *this,COleControlSite *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  wchar_t *pwVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int local_18;
  ulong local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x442159;
  if (param_2 == 0) {
    pcVar1 = *(code **)(*(int *)this + 0x18);
    guard_check_icall();
    (*pcVar1)();
    iVar6 = 0;
    if (0 < *(int *)(this + 0x10)) {
      local_14 = 0;
      do {
        local_18 = *(int *)(*(int *)(*(int *)(this + 0x14) + 0x24 + local_14) + 4);
        while (iVar2 = local_18, local_18 != 0) {
          piVar7 = (int *)FUN_004ead48(&local_18);
          if ((COleControlSite *)*piVar7 == param_1) {
            FUN_004d2617(iVar2);
            return;
          }
        }
        iVar6 = iVar6 + 1;
        local_14 = local_14 + 0x28;
      } while (iVar6 < *(int *)(this + 0x10));
    }
  }
  else {
    pcVar1 = *(code **)(*(int *)this + 0xc);
    guard_check_icall(param_1,0);
    (*pcVar1)();
    if (*(int *)(this + 0x48) == 0) {
      local_14 = 0;
      if (0 < *(int *)(this + 0x10)) {
        local_18 = 0;
        do {
          iVar6 = *(int *)(*(int *)(this + 0x14) + 0x1c + local_18);
          if (iVar6 != 0) {
            puVar5 = (undefined4 *)FUN_00415670(iVar6);
            local_8 = 1;
            iVar6 = FUN_0042cb39(*puVar5);
            local_8 = 0xffffffff;
            FUN_0040efa0();
            if (iVar6 == 0) goto LAB_004421e1;
          }
          local_14 = local_14 + 1;
          local_18 = local_18 + 0x28;
        } while ((int)local_14 < *(int *)(this + 0x10));
      }
    }
    else {
      local_14 = 0;
      if (0 < *(int *)(this + 0x10)) {
        do {
          uVar3 = local_14 + 1;
          pwVar4 = ATL::CDynamicAccessor::GetColumnName(*(CDynamicAccessor **)(this + 0x54),uVar3);
          puVar5 = (undefined4 *)FUN_00415a10(pwVar4);
          local_8 = 0;
          iVar6 = FUN_0042cb39(*puVar5);
          local_8 = 0xffffffff;
          FUN_0040efa0();
          if (iVar6 == 0) {
LAB_004421e1:
            CObList::AddTail(*(CObList **)(local_14 * 0x28 + 0x24 + *(int *)(this + 0x14)),
                             (CObject *)param_1);
            return;
          }
          local_14 = uVar3;
        } while ((int)uVar3 < *(int *)(this + 0x10));
      }
    }
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  return;
}

