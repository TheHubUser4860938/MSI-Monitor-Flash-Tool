// rea decompile_all
// name: CFileDialog::GetPathName
// address: 0x10013d7e
// body: available
// range: 0x10013d7e-0x10013f75 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> >
   > __thiscall CFileDialog::GetPathName(void)const 
   
   Library: Visual Studio 2015 Release */

int * __thiscall CFileDialog::GetPathName(CFileDialog *this)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  LPARAM LVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  LRESULT LVar7;
  int *in_stack_00000004;
  undefined1 local_20 [4];
  int *local_1c;
  LPVOID local_18;
  int *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x10013d8a;
  if (*(int *)(this + 0xac) != 1) {
    if (((*(uint *)(*(int *)(this + 0xa8) + 0x34) & 0x80000) != 0) && (*(int *)(this + 0x20) != 0))
    {
      uVar2 = FUN_10013071();
      FUN_10003190(uVar2);
      local_8 = 1;
      LVar4 = FUN_100035b0(0x104);
      pHVar5 = GetParent(*(HWND *)(this + 0x20));
      pCVar6 = CWnd::FromHandle(pHVar5);
      LVar7 = SendMessageW(*(HWND *)(pCVar6 + 0x20),0x464,0x104,LVar4);
      if (LVar7 < 0) {
        FUN_10003400();
      }
      else {
        ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer((CSimpleStringT<wchar_t,0> *)local_14,-1);
      }
      if (local_14[0][-3] != 0) {
        LVar4 = FUN_100035b0(0x104);
        pHVar5 = GetParent(*(HWND *)(this + 0x20));
        pCVar6 = CWnd::FromHandle(pHVar5);
        LVar7 = SendMessageW(*(HWND *)(pCVar6 + 0x20),0x465,0x104,LVar4);
        if (-1 < LVar7) {
          ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer((CSimpleStringT<wchar_t,0> *)local_14,-1);
          local_1c = local_14[0];
          goto LAB_10013e6c;
        }
        FUN_10003400();
      }
      local_8 = 0xffffffff;
      FUN_10003460();
    }
LAB_10013f4b:
    FUN_100037c0(*(undefined4 *)(*(int *)(this + 0xa8) + 0x1c));
    return in_stack_00000004;
  }
  if (*(int *)(this + 0x20) == 0) goto LAB_10013f4b;
  uVar2 = FUN_10013071();
  FUN_10003190(uVar2);
  local_8 = 0;
  pcVar1 = *(code **)(**(int **)(this + 0xbc) + 0x38);
  guard_check_icall(*(int **)(this + 0xbc),local_14);
  iVar3 = (*pcVar1)();
  if (iVar3 < 0) goto LAB_10013e6c;
  iVar3 = *local_14[0];
  guard_check_icall(local_14[0],0x400000,local_20);
  iVar3 = (**(code **)(iVar3 + 0x18))();
  if (iVar3 == 1) {
    iVar3 = *local_14[0];
    guard_check_icall(local_14[0],0x20000000,local_20);
    iVar3 = (**(code **)(iVar3 + 0x18))();
    if (iVar3 != 0) goto LAB_10013e18;
  }
  else {
LAB_10013e18:
    local_18 = (LPVOID)0x0;
    iVar3 = *local_14[0];
    guard_check_icall(local_14[0],0x80058000,&local_18);
    iVar3 = (**(code **)(iVar3 + 0x14))();
    if (-1 < iVar3) {
      FUN_10003780(local_18);
      ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer((CSimpleStringT<wchar_t,0> *)&local_1c,-1);
      CoTaskMemFree(local_18);
    }
  }
  pcVar1 = *(code **)(*local_14[0] + 8);
  guard_check_icall(local_14[0]);
  (*pcVar1)();
LAB_10013e6c:
  iVar3 = FUN_10003060(local_1c + -4);
  *in_stack_00000004 = iVar3 + 0x10;
  FUN_10003460();
  return in_stack_00000004;
}

