// rea decompile_all
// name: CMDIChildWndEx::SetTaskbarTabProperties
// address: 0x100c2c04
// body: available
// range: 0x100c2c04-0x100c2c7e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CMDIChildWndEx::SetTaskbarTabProperties(unsigned long)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMDIChildWndEx::SetTaskbarTabProperties(CMDIChildWndEx *this,ulong param_1)

{
  code *pcVar1;
  int iVar2;
  AFX_GLOBAL_DATA *this_00;
  ITaskbarList3 *pIVar3;
  undefined4 uVar4;
  int *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x100c2c10;
  iVar2 = IsTaskbarTabsSupportEnabled(this);
  if (iVar2 != 0) {
    iVar2 = IsRegisteredWithTaskbarTabs(this);
    if (((iVar2 != 0) && (this != (CMDIChildWndEx *)0xfffffbb0)) && (*(int *)(this + 0x470) != 0)) {
      this_00 = GetGlobalData();
      pIVar3 = AFX_GLOBAL_DATA::GetITaskbarList3(this_00);
      ATL::
      CComQIPtr<ITaskbarList4,&struct___s_GUID_const__GUID_c43dc798_95d1_4bea_9030_bb99e2983a1a>::
      CComQIPtr<ITaskbarList4,&struct___s_GUID_const__GUID_c43dc798_95d1_4bea_9030_bb99e2983a1a>
                ((CComQIPtr<ITaskbarList4,&struct___s_GUID_const__GUID_c43dc798_95d1_4bea_9030_bb99e2983a1a>
                  *)local_14,(IUnknown *)pIVar3);
      uVar4 = 0;
      local_8 = 0;
      if (local_14[0] != (int *)0x0) {
        if (this != (CMDIChildWndEx *)0xfffffbb0) {
          uVar4 = *(undefined4 *)(this + 0x470);
        }
        pcVar1 = *(code **)(*local_14[0] + 0x54);
        guard_check_icall(local_14[0],uVar4,param_1);
        (*pcVar1)();
      }
      ATL::CComPtrBase<IAccessibleProxy>::~CComPtrBase<IAccessibleProxy>
                ((CComPtrBase<IAccessibleProxy> *)local_14);
    }
  }
  return;
}

