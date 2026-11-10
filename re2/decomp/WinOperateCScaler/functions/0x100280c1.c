// rea decompile_all
// name: CWnd::CreateAccessibleProxy
// address: 0x100280c1
// body: available
// range: 0x100280c1-0x1002818f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __thiscall CWnd::CreateAccessibleProxy(unsigned int,long,long *)
   
   Library: Visual Studio 2015 Release */

long __thiscall CWnd::CreateAccessibleProxy(CWnd *this,uint param_1,long param_2,long *param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  LRESULT LVar4;
  int iVar5;
  undefined4 *local_18;
  int *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x100280cd;
  iVar5 = -0x7fffbffb;
  if (param_2 == -4) {
    pcVar1 = *(code **)(*(int *)this + 0x94);
    guard_check_icall();
    iVar5 = (*pcVar1)();
    if (-1 < iVar5) {
      if (*(int *)(this + 0x2c) == 0) {
        iVar5 = FUN_100266b4(&local_18);
        if (-1 < iVar5) {
          iVar5 = 0;
          local_14[0] = (int *)0x0;
          puVar2 = (undefined4 *)*local_18;
          local_8 = 0;
          guard_check_icall(local_18,&DAT_101ab110,local_14);
          iVar3 = (*(code *)*puVar2)();
          if (-1 < iVar3) {
            *(int **)(this + 0x2c) = local_14[0];
            iVar3 = *local_14[0];
            guard_check_icall(local_14[0],this + 0x30,this + 0x34);
            (**(code **)(iVar3 + 0xc))();
            LVar4 = LresultFromObject((IID *)&DAT_101ab120,param_1,*(LPUNKNOWN *)(this + 0x2c));
            *param_3 = LVar4;
          }
          ATL::CComPtrBase<IAccessibleProxy>::~CComPtrBase<IAccessibleProxy>
                    ((CComPtrBase<IAccessibleProxy> *)local_14);
        }
      }
      else {
        LVar4 = LresultFromObject((IID *)&DAT_101ab120,param_1,*(LPUNKNOWN *)(this + 0x2c));
        iVar5 = 0;
        *param_3 = LVar4;
      }
    }
  }
  return iVar5;
}

