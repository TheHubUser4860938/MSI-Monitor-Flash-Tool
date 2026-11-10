// rea decompile_all
// name: CreateEx
// address: 0x10080262
// body: available
// range: 0x10080262-0x100803d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CPane::CreateEx(unsigned long,char const *,unsigned long,struct
   tagRECT const &,class CWnd *,unsigned int,unsigned long,struct CCreateContext *)
    public: virtual int __thiscall CPane::CreateEx(unsigned long,wchar_t const *,unsigned
   long,struct tagRECT const &,class CWnd *,unsigned int,unsigned long,struct CCreateContext *)
   
   Library: Visual Studio 2015 Release */

void CreateEx(undefined4 param_1,int param_2,uint param_3,RECT *param_4,CWnd *param_5,
             undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  BOOL BVar4;
  uint uVar5;
  CPane *in_ECX;
  undefined1 *puVar6;
  wchar_t *pwVar7;
  undefined1 local_38 [4];
  int local_34;
  RECT *local_30;
  CPane *local_2c;
  undefined4 local_28;
  tagRECT local_24;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  local_8 = 0x1008026e;
  local_34 = param_2;
  local_30 = param_4;
  local_2c = in_ECX;
  uVar2 = FUN_10048e90();
  FUN_10034c30(uVar2);
  local_8 = 0;
  if (local_34 == 0) {
    puVar6 = local_38;
    pwVar7 = L"Afx:ControlBar";
    GetGlobalData();
    uVar2 = RegisterWindowClass(puVar6,pwVar7);
    local_8._0_1_ = 1;
    FUN_10034940(uVar2);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_10034f00();
  }
  else {
    FUN_100352a0(local_34);
  }
  *(undefined4 *)(in_ECX + 0x180) = param_6;
  iVar3 = CreateEx(param_1,local_28,0,param_3 | 0x6000000,local_30,param_5,param_6,param_7,param_8);
  if (iVar3 != 0) {
    CopyRect(&local_24,local_30);
    CWnd::ClientToScreen(param_5,&local_24);
    BVar4 = IsRectEmpty((RECT *)(in_ECX + 600));
    if (BVar4 != 0) {
      ((RECT *)(in_ECX + 600))->left = local_24.left;
      *(LONG *)(in_ECX + 0x25c) = local_24.top;
      *(LONG *)(in_ECX + 0x260) = local_24.right;
      *(LONG *)(in_ECX + 0x264) = local_24.bottom;
      in_ECX = local_2c;
    }
    BVar4 = IsRectEmpty((RECT *)(in_ECX + 0x218));
    if (BVar4 != 0) {
      ((RECT *)(in_ECX + 0x218))->left = local_24.left;
      *(LONG *)(in_ECX + 0x21c) = local_24.top;
      *(LONG *)(in_ECX + 0x220) = local_24.right;
      *(LONG *)(in_ECX + 0x224) = local_24.bottom;
      in_ECX = local_2c;
    }
    BVar4 = IsRectEmpty(&local_24);
    if (BVar4 == 0) {
      *(LONG *)(in_ECX + 0x1e8) = local_24.left;
      *(LONG *)(in_ECX + 0x1ec) = local_24.top;
      *(LONG *)(in_ECX + 0x1f0) = local_24.right;
      *(LONG *)(in_ECX + 500) = local_24.bottom;
    }
    if (param_5 == (CWnd *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_5 + 0x20);
    }
    *(undefined4 *)(local_2c + 0x5c) = uVar2;
    CPane::UpdateVirtualRect(local_2c);
    pcVar1 = *(code **)(*(int *)local_2c + 0x1cc);
    guard_check_icall();
    uVar5 = (*pcVar1)();
    if ((*(uint *)(local_2c + 0xa0) & uVar5) != 0) {
      FUN_100fb3df(local_2c);
    }
  }
  FUN_10034f00();
  FUN_1017f5f4();
  return;
}

