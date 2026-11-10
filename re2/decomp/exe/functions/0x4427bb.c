// rea decompile_all
// name: CreateControlCommon
// address: 0x4427bb
// body: available
// range: 0x4427bb-0x442b01 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44285a to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: virtual long __thiscall COleControlSite::CreateControlCommon(class CWnd *,struct
   _GUID const &,class CControlCreationInfo const &,char const *,unsigned long,struct tagPOINT const
   *,struct tagSIZE const *,unsigned int,class CFile *,int,wchar_t *)
    protected: virtual long __thiscall COleControlSite::CreateControlCommon(class CWnd *,struct
   _GUID const &,class CControlCreationInfo const &,wchar_t const *,unsigned long,struct tagPOINT
   const *,struct tagSIZE const *,unsigned int,class CFile *,int,wchar_t *)
   
   Library: Visual Studio 2015 Release */

void CreateControlCommon(int param_1,undefined4 param_2,CControlCreationInfo *param_3,int param_4,
                        uint param_5,int *param_6,int *param_7,undefined4 param_8,undefined4 param_9
                        ,undefined4 param_10,undefined4 param_11)

{
  LPRECT lprc;
  code *pcVar1;
  int *piVar2;
  _AFX_THREAD_STATE *p_Var3;
  int iVar4;
  ulong uVar5;
  COleControlSite *in_ECX;
  CClientDC local_48 [20];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  tagSIZE local_24;
  int local_1c;
  uint local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x38;
  local_8 = 0x4427c7;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  local_24.cx = 0;
  local_24.cy = 0;
  if (param_1 != 0) {
    *(int *)(in_ECX + 0x28) = param_1;
    *(COleControlSite **)(param_1 + 0x74) = in_ECX;
  }
  p_Var3 = AfxGetThreadState();
  if ((*(int *)(p_Var3 + 0x160) == 0) && (iVar4 = AfxOleInit(), iVar4 == 0)) goto LAB_00442afa;
  iVar4 = CControlCreationInfo::IsManaged(param_3);
  if (iVar4 == 0) {
    pcVar1 = *(code **)(*(int *)in_ECX + 200);
    guard_check_icall(param_2,param_9,param_10,param_11);
    local_1c = (*pcVar1)();
  }
  else {
    pcVar1 = *(code **)(*(int *)in_ECX + 0xcc);
    guard_check_icall(param_3);
    local_1c = (*pcVar1)();
  }
  if (local_1c < 0) goto LAB_00442afa;
  if ((*(int *)(in_ECX + 0x50) == 0) ||
     (*(undefined4 *)(in_ECX + 0x2c) = param_8, param_6 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
  if (param_7 == (int *)0x0) {
    CClientDC::CClientDC(local_48,(CWnd *)0x0);
    local_8 = 0;
    iVar4 = **(int **)(in_ECX + 0x50);
    guard_check_icall(*(int **)(in_ECX + 0x50),1,&local_24);
    (**(code **)(iVar4 + 0x48))();
    CDC::HIMETRICtoDP((CDC *)local_48,&local_24);
    local_34 = *param_6;
    local_30 = param_6[1];
    local_8 = 0xffffffff;
    local_2c = local_24.cx + local_34;
    local_28 = local_24.cy + local_30;
    *(int *)(in_ECX + 0x30) = local_34;
    *(int *)(in_ECX + 0x34) = local_30;
    *(int *)(in_ECX + 0x38) = local_2c;
    *(int *)(in_ECX + 0x3c) = local_28;
    CClientDC::~CClientDC(local_48);
  }
  else {
    local_34 = *param_6;
    local_30 = param_6[1];
    local_2c = local_34 + *param_7;
    local_28 = param_7[1] + local_30;
    *(int *)(in_ECX + 0x30) = local_34;
    *(int *)(in_ECX + 0x34) = local_30;
    *(int *)(in_ECX + 0x38) = local_2c;
    *(int *)(in_ECX + 0x3c) = local_28;
  }
  *(undefined4 *)(in_ECX + 0x68) = 0x30000;
  if ((*(uint *)(in_ECX + 0x70) & 0x1000) != 0) {
    *(undefined4 *)(in_ECX + 0x68) = 0x30001;
  }
  if ((*(uint *)(in_ECX + 0x70) & 0x400) != 0) {
    param_5 = param_5 & 0xefffffff;
  }
  *(uint *)(in_ECX + 0x6c) = *(uint *)(in_ECX + 0x68) & param_5;
  local_18 = param_5;
  if (local_1c != 1) {
    uVar5 = COleControlSite::ConnectSink
                      (in_ECX,(_GUID *)(in_ECX + 0x40),(IUnknown *)(in_ECX + 0xe0));
    *(ulong *)(in_ECX + 0x60) = uVar5;
    uVar5 = COleControlSite::ConnectSink(in_ECX,(_GUID *)&DAT_005dbb10,(IUnknown *)(in_ECX + 0xdc));
    *(ulong *)(in_ECX + 100) = uVar5;
  }
  uVar5 = COleControlSite::ConnectSink(in_ECX,(_GUID *)&DAT_005db900,(IUnknown *)(in_ECX + 0xe8));
  *(ulong *)(in_ECX + 0x8c) = uVar5;
  COleControlSite::SetExtent(in_ECX);
  pcVar1 = *(code **)**(undefined4 **)(in_ECX + 0x50);
  guard_check_icall(*(undefined4 **)(in_ECX + 0x50),&DAT_005db9c0,in_ECX + 0x54);
  iVar4 = (*pcVar1)();
  if (iVar4 < 0) {
LAB_00442a41:
    piVar2 = *(int **)(in_ECX + 0x54);
    if (piVar2 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar2 + 8);
      guard_check_icall(piVar2);
      (*pcVar1)();
      *(undefined4 *)(in_ECX + 0x54) = 0;
    }
    COleControlSite::DisconnectSink(in_ECX,(_GUID *)(in_ECX + 0x40),*(ulong *)(in_ECX + 0x60));
    COleControlSite::DisconnectSink(in_ECX,(_GUID *)&DAT_005dbb10,*(ulong *)(in_ECX + 100));
    COleControlSite::DisconnectSink(in_ECX,(_GUID *)&DAT_005db900,*(ulong *)(in_ECX + 0x8c));
    *(undefined4 *)(in_ECX + 0x60) = 0;
    *(undefined4 *)(in_ECX + 100) = 0;
    *(undefined4 *)(in_ECX + 0x8c) = 0;
    pcVar1 = *(code **)(**(int **)(in_ECX + 0x50) + 8);
    guard_check_icall(*(int **)(in_ECX + 0x50));
    (*pcVar1)();
    *(undefined4 *)(in_ECX + 0x50) = 0;
    if (iVar4 < 0) goto LAB_00442afa;
  }
  else {
    if ((local_18 & 0x10000000) == 0) {
      OffsetRect((LPRECT)(in_ECX + 0x30),-32000,-32000);
      pcVar1 = *(code **)(*(int *)in_ECX + 0x5c);
      guard_check_icall(0xfffffffb,0);
      iVar4 = (*pcVar1)();
      if (-1 < iVar4) {
        pcVar1 = *(code **)(*(int *)in_ECX + 0x5c);
        guard_check_icall(0xfffffffd,0);
        iVar4 = (*pcVar1)();
        if (-1 < iVar4) {
          lprc = (LPRECT)(in_ECX + 0x30);
          OffsetRect(lprc,32000,32000);
          pcVar1 = *(code **)(**(int **)(in_ECX + 0x54) + 0x1c);
          guard_check_icall(*(int **)(in_ECX + 0x54),lprc,lprc);
          iVar4 = (*pcVar1)();
          goto LAB_00442a2c;
        }
      }
      goto LAB_00442a41;
    }
    pcVar1 = *(code **)(*(int *)in_ECX + 0x5c);
    guard_check_icall(0xfffffffb,0);
    iVar4 = (*pcVar1)();
LAB_00442a2c:
    if (iVar4 < 0) goto LAB_00442a41;
    *(COleControlSite **)(*(int *)(in_ECX + 0x20) + 0x70) = in_ECX;
    FUN_00443733();
  }
  FUN_004416e5();
  if (param_4 != 0) {
    pcVar1 = *(code **)(*(int *)in_ECX + 0x88);
    guard_check_icall(param_4);
    (*pcVar1)();
  }
  pcVar1 = *(code **)(*(int *)in_ECX + 0x80);
  guard_check_icall(0,local_18 & 0x8800000 | *(uint *)(in_ECX + 0x6c),0);
  (*pcVar1)();
LAB_00442afa:
  FUN_0055bae6();
  return;
}

