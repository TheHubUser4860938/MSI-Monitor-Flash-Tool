// rea decompile_all
// name: CreateEx
// address: 0x10048706
// body: available
// range: 0x10048706-0x10048935 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CBasePane::CreateEx(unsigned long,char const *,char const
   *,unsigned long,struct tagRECT const &,class CWnd *,unsigned int,unsigned long,struct
   CCreateContext *)
    public: virtual int __thiscall CBasePane::CreateEx(unsigned long,wchar_t const *,wchar_t const
   *,unsigned long,struct tagRECT const &,class CWnd *,unsigned int,unsigned long,struct
   CCreateContext *)
   
   Library: Visual Studio 2015 Release */

void CreateEx(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,
             undefined4 param_5,CWnd *param_6,int param_7,undefined4 param_8,undefined4 param_9)

{
  code *pcVar1;
  undefined4 uVar2;
  CDockingManager *pCVar3;
  CFrameWnd *pCVar4;
  uint uVar5;
  AFX_MODULE_STATE *pAVar6;
  int iVar7;
  HBRUSH dwNewLong;
  CObject *pCVar8;
  CWnd *in_ECX;
  CWnd *pCVar9;
  undefined1 local_64 [4];
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  CDockingManager *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  CWnd *local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  local_28 = param_2;
  local_24 = param_3;
  local_34 = param_5;
  local_20 = param_6;
  local_1c = param_7;
  local_30 = param_9;
  uVar2 = FUN_10019d4f(&PTR_s_CDialog_10180a68);
  *(undefined4 *)(in_ECX + 0x8c) = uVar2;
  if ((*(int *)(in_ECX + 0x94) != 0) &&
     (pCVar3 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_101d3944,param_6),
     pCVar3 == (CDockingManager *)0x0)) {
    pCVar4 = AFXGetParentFrame(param_6);
    local_2c = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_101d3944,(CWnd *)pCVar4)
    ;
    if (local_2c != (CDockingManager *)0x0) {
      pcVar1 = *(code **)(*(int *)local_2c + 0x24);
      guard_check_icall(param_7,1);
      (*pcVar1)();
    }
  }
  iVar7 = *(int *)in_ECX;
  *(uint *)(in_ECX + 0x80) = *(uint *)(in_ECX + 0x80) & 0x10000000;
  pcVar1 = *(code **)(iVar7 + 0x1c0);
  guard_check_icall();
  uVar5 = (*pcVar1)();
  pcVar1 = *(code **)(iVar7 + 0x1e4);
  guard_check_icall(uVar5 | param_4);
  (*pcVar1)();
  pCVar9 = local_20;
  *(undefined4 *)(in_ECX + 0xa0) = param_8;
  if (*(int *)(in_ECX + 0xc4) == 0) {
    iVar7 = CreateEx(param_1,local_28,local_24,param_4,local_34,local_20,local_1c,local_30);
    if (iVar7 == 0) goto LAB_10048923;
  }
  else {
    _memset(local_64,0,0x30);
    local_3c = local_28;
    local_40 = local_24;
    local_44 = param_4 | 0x40000000;
    local_5c = local_1c;
    pAVar6 = AfxGetModuleState();
    pCVar9 = local_20;
    local_60 = *(undefined4 *)(pAVar6 + 8);
    if (local_20 == (CWnd *)0x0) {
      local_58 = 0;
    }
    else {
      local_58 = *(undefined4 *)(local_20 + 0x20);
    }
    pcVar1 = *(code **)(*(int *)in_ECX + 100);
    guard_check_icall(local_64);
    iVar7 = (*pcVar1)();
    if ((iVar7 == 0) || (iVar7 = CreateDlg(*(undefined4 *)(in_ECX + 0xc4),pCVar9), iVar7 == 0))
    goto LAB_10048923;
    dwNewLong = GetSysColorBrush(0xf);
    SetClassLongW(*(HWND *)(in_ECX + 0x20),-10,(LONG)dwNewLong);
    CWnd::SetDlgCtrlID(in_ECX,local_1c);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetWindowRect(*(HWND *)(in_ECX + 0x20),&local_18);
    *(LONG *)(in_ECX + 200) = local_18.right - local_18.left;
    *(LONG *)(in_ECX + 0xcc) = local_18.bottom - local_18.top;
  }
  iVar7 = FUN_10019d4f(&PTR_s_CFrameWnd_1018c350);
  if (iVar7 == 0) {
    pCVar4 = AFXGetParentFrame(pCVar9);
    pCVar8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_1018c350,(CObject *)pCVar4);
  }
  else {
    pCVar8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_1018c350,(CObject *)pCVar9);
  }
  *(CObject **)(in_ECX + 0xa4) = pCVar8;
  uVar2 = FUN_10019d4f(&PTR_s_CDialog_10180a68);
  *(undefined4 *)(in_ECX + 0x8c) = uVar2;
LAB_10048923:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

