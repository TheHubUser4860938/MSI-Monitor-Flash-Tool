// rea decompile_all
// name: CPaneDivider::CreateEx
// address: 0x4dfdc4
// body: available
// range: 0x4dfdc4-0x4dfece inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4dfe20 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CPaneDivider::CreateEx(unsigned long,unsigned long,struct tagRECT
   const &,class CWnd *,unsigned int,struct CCreateContext *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CPaneDivider::CreateEx
          (CPaneDivider *this,ulong param_1,ulong param_2,tagRECT *param_3,CWnd *param_4,
          uint param_5,CCreateContext *param_6)

{
  code *pcVar1;
  int iVar2;
  CObject *pCVar3;
  CFrameWnd *pCVar4;
  undefined4 *puVar5;
  CObject **ppCVar6;
  wchar_t *pwVar7;
  CObject *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x4dfdd0;
  *(uint *)(this + 0x110) = param_5;
  *(ulong *)(this + 0x114) = param_2;
  if ((param_2 & 2) == 0) {
    if ((param_2 & 1) != 0) {
      iVar2 = param_3->bottom - param_3->top;
      goto LAB_004dfe01;
    }
  }
  else {
    iVar2 = param_3->right - param_3->left;
LAB_004dfe01:
    *(int *)(this + 0x118) = iVar2;
  }
  if (*(int *)(this + 300) != 0) {
    if (PTR_PTR_0060c894 != (undefined *)0x0) {
      pCVar3 = (CObject *)FUN_00439696();
      local_14[0] = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneContainerManager_005c41bc,pCVar3
                                      );
      *(CObject **)(this + 0x168) = local_14[0];
      if (local_14[0] != (CObject *)0x0) {
        pcVar1 = *(code **)(*(int *)local_14[0] + 0xc);
        guard_check_icall(param_4,this,0);
        (*pcVar1)();
        goto LAB_004dfe5e;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
LAB_004dfe5e:
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_005c363c,(CObject *)param_4);
  *(CObject **)(this + 0xa4) = pCVar3;
  if (pCVar3 == (CObject *)0x0) {
    pCVar4 = AFXGetParentFrame(param_4);
    *(CFrameWnd **)(this + 0xa4) = pCVar4;
  }
  ppCVar6 = local_14;
  pwVar7 = L"Afx:Slider";
  GetGlobalData();
  puVar5 = (undefined4 *)RegisterWindowClass(ppCVar6,pwVar7);
  local_8 = 0;
  iVar2 = ::CreateEx(param_1,*puVar5,0,param_2 | 0x46000000,param_3,param_4,param_5,param_6);
  FUN_0040efa0();
  return iVar2;
}

