// rea decompile_all
// name: CDataRecoveryHandler::ReopenPreviousDocuments
// address: 0x10031d57
// body: available
// range: 0x10031d57-0x10031f3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CDataRecoveryHandler::ReopenPreviousDocuments(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CDataRecoveryHandler::ReopenPreviousDocuments(CDataRecoveryHandler *this)

{
  code *pcVar1;
  wchar_t *pwVar2;
  undefined4 uVar3;
  wchar_t *pwVar4;
  AFX_MODULE_STATE *pAVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  wchar_t *local_18;
  int *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x10031d63;
  local_1c = 0;
  CMap<ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>,wchar_t_const*,CDocument*,CDocument*>
  ::RemoveAll((CMap<ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>,wchar_t_const*,CDocument*,CDocument*>
               *)(this + 0x20));
  *(undefined4 *)(this + 0xc4) = 1;
  if (((byte)this[0xb4] & 0x10) != 0) {
    local_28 = -(uint)(*(int *)(this + 0x10) != 0);
    while (local_28 != 0) {
      local_14 = (int *)0x0;
      uVar3 = FUN_1001e20a();
      FUN_1001d224(uVar3);
      local_8 = 0;
      uVar3 = FUN_1001e20a();
      FUN_1001d224(uVar3);
      local_8._0_1_ = 1;
      FUN_100310e7(&local_28,&local_18,&local_24);
      pwVar2 = local_18;
      pwVar4 = _wcspbrk(local_18,L":/\\");
      if ((pwVar4 == (wchar_t *)0x0) || ((int)pwVar4 - (int)pwVar2 >> 1 == -1)) {
        pAVar5 = AfxGetModuleState();
        if ((*(int *)(pAVar5 + 4) != 0) &&
           (piVar6 = *(int **)(*(int *)(pAVar5 + 4) + 0x5c), piVar6 != (int *)0x0)) {
          pcVar1 = *(code **)(*piVar6 + 0x30);
          guard_check_icall(pwVar2);
          piVar6 = (int *)(*pcVar1)();
          if (piVar6 != (int *)0x0) {
            pcVar1 = *(code **)(*piVar6 + 0x80);
            guard_check_icall(0,0,1);
            local_14 = (int *)(*pcVar1)();
            if (local_14 != (int *)0x0) {
              iVar7 = FUN_100187a0(pwVar2 + -8);
              iVar7 = iVar7 + 0x10;
              local_8._0_1_ = 2;
              local_20 = iVar7;
              iVar8 = FUN_1016e179(pwVar2,0x2e);
              if ((iVar8 != 0) && (0 < iVar8 - (int)pwVar2 >> 1)) {
                uVar3 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                        Left((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             &local_18,(int)&local_2c);
                local_8._0_1_ = 3;
                FUN_10018680(uVar3);
                local_8._0_1_ = 2;
                ATL::CStringData::Release((CStringData *)(local_2c + -0x10));
                iVar7 = local_20;
              }
              pcVar1 = *(code **)(*local_14 + 0x54);
              guard_check_icall(iVar7);
              (*pcVar1)();
              local_8._0_1_ = 1;
              ATL::CStringData::Release((CStringData *)(iVar7 + -0x10));
            }
          }
        }
      }
      else {
        pAVar5 = AfxGetModuleState();
        pcVar1 = *(code **)(**(int **)(pAVar5 + 4) + 0xa0);
        guard_check_icall(pwVar2,1);
        local_14 = (int *)(*pcVar1)();
      }
      puVar9 = (undefined4 *)FUN_1003056b(pwVar2);
      *puVar9 = local_14;
      local_1c = local_1c | local_14 != (int *)0x0;
      ATL::CStringData::Release((CStringData *)(local_24 + -0x10));
      local_8 = 0xffffffff;
      ATL::CStringData::Release((CStringData *)(pwVar2 + -8));
    }
  }
  *(undefined4 *)(this + 0xc4) = 0;
  return local_1c;
}

