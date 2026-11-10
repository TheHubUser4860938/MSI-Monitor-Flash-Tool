// rea decompile_all
// name: CreateEx
// address: 0x100a4b3b
// body: available
// range: 0x100a4b3b-0x100a4c2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CPaneFrameWnd::CreateEx(unsigned long,char const *,unsigned
   long,struct tagRECT const &,class CWnd *,struct CCreateContext *)
    public: virtual int __thiscall CPaneFrameWnd::CreateEx(unsigned long,wchar_t const *,unsigned
   long,struct tagRECT const &,class CWnd *,struct CCreateContext *)
   
   Library: Visual Studio 2015 Release */

undefined4
CreateEx(uint param_1,undefined4 param_2,uint param_3,undefined4 param_4,CWnd *param_5,
        undefined4 param_6)

{
  code *pcVar1;
  ulong uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  CObject *pCVar6;
  CDockingManager *pCVar7;
  int in_ECX;
  undefined1 *puVar8;
  wchar_t *pwVar9;
  undefined1 local_18 [4];
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x100a4b47;
  local_14 = in_ECX;
  if (param_5 == (CWnd *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar2 = CWnd::GetExStyle(param_5);
    if ((uVar2 & 0x400000) != 0) {
      param_1 = param_1 | 0x400000;
    }
    uVar5 = *(undefined4 *)(param_5 + 0x20);
  }
  *(undefined4 *)(in_ECX + 200) = uVar5;
  puVar8 = local_18;
  pwVar9 = L"Afx:MiniFrame";
  GetGlobalData();
  puVar3 = (undefined4 *)RegisterWindowClass(puVar8,pwVar9);
  local_8 = 0;
  iVar4 = CreateEx(param_1,*puVar3,param_2,param_3 | 0x80000000,param_4,param_5,0,param_6);
  local_8 = 0xffffffff;
  FUN_10003460();
  if (iVar4 == 0) {
LAB_100a4bcb:
    uVar5 = 0;
  }
  else {
    if (param_5 != (CWnd *)0x0) {
      pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_1018c350,(CObject *)param_5);
      if (pCVar6 == (CObject *)0x0) goto LAB_100a4bcb;
      pCVar7 = *(CDockingManager **)(in_ECX + 0x184);
      if (pCVar7 == (CDockingManager *)0x0) {
        pCVar7 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_101d3944,param_5);
        if (pCVar7 == (CDockingManager *)0x0) goto LAB_100a4bcb;
      }
      pcVar1 = *(code **)(*(int *)pCVar7 + 0x1c);
      guard_check_icall(local_14);
      (*pcVar1)();
      in_ECX = local_14;
    }
    FUN_100c5067(in_ECX);
    uVar5 = 1;
  }
  return uVar5;
}

