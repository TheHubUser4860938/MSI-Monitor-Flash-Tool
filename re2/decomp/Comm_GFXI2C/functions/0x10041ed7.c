// rea decompile_all
// name: CWnd::CreateEx
// address: 0x10041ed7
// body: available
// range: 0x10041ed7-0x10041fb5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10041ef6 to 0x10038e31 FUN_10038e31 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CWnd::CreateEx(unsigned long,wchar_t const *,wchar_t const
   *,unsigned long,int,int,int,int,struct HWND__ *,struct HMENU__ *,void *)
   
   Library: Visual Studio 2008 Release */

int __thiscall
CWnd::CreateEx(CWnd *this,ulong param_1,wchar_t *param_2,wchar_t *param_3,ulong param_4,int param_5,
              int param_6,int param_7,int param_8,HWND__ *param_9,HMENU__ *param_10,void *param_11)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  uint uVar3;
  HWND pHVar4;
  void *local_34;
  HINSTANCE local_30;
  HMENU__ *local_2c;
  HWND__ *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  ulong local_14;
  wchar_t *local_10;
  wchar_t *local_c;
  ulong local_8;
  
  if (param_3 != (wchar_t *)0x0) {
    iVar1 = AfxIsValidString(param_3,-1);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10038e31();
    }
  }
  local_8 = param_1;
  local_c = param_2;
  local_14 = param_4;
  local_18 = param_5;
  local_1c = param_6;
  local_20 = param_7;
  local_24 = param_8;
  local_28 = param_9;
  local_10 = param_3;
  local_2c = param_10;
  pAVar2 = AfxGetModuleState();
  local_30 = *(HINSTANCE *)(pAVar2 + 8);
  local_34 = param_11;
  iVar1 = (**(code **)(*(int *)this + 100))(&local_34);
  if (iVar1 == 0) {
    (**(code **)(*(int *)this + 0x11c))();
    uVar3 = 0;
  }
  else {
    AfxHookWindowCreate(this);
    pHVar4 = FID_conflict_AfxCtxCreateWindowExW
                       (local_8,local_c,local_10,local_14,local_18,local_1c,local_20,local_24,
                        local_28,local_2c,local_30,local_34);
    iVar1 = AfxUnhookWindowCreate();
    if (iVar1 == 0) {
      (**(code **)(*(int *)this + 0x11c))();
    }
    uVar3 = (uint)(pHVar4 != (HWND)0x0);
  }
  return uVar3;
}

