// rea decompile_all
// name: CDockSite::CreateEx
// address: 0x100d118e
// body: available
// range: 0x100d118e-0x100d12f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CDockSite::CreateEx(unsigned long,unsigned long,struct tagRECT
   const &,class CWnd *,unsigned long,struct CCreateContext *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CDockSite::CreateEx(CDockSite *this,ulong param_1,ulong param_2,tagRECT *param_3,CWnd *param_4,
                   ulong param_5,CCreateContext *param_6)

{
  code *pcVar1;
  CWnd *pCVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  wchar_t *pwVar7;
  int local_40;
  CCreateContext *local_3c;
  CWnd *local_38;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  local_8 = 0x100d119a;
  local_38 = param_4;
  local_3c = param_6;
  pcVar1 = *(code **)(*(int *)this + 0x198);
  guard_check_icall();
  uVar3 = (*pcVar1)();
  pcVar1 = *(code **)(*(int *)this + 0x1ec);
  guard_check_icall(uVar3 | param_2);
  (*pcVar1)();
  pcVar1 = *(code **)(*(int *)this + 0x1e0);
  guard_check_icall(param_2);
  (*pcVar1)();
  CopyRect(&local_34,param_3);
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  GetClientRect(*(HWND *)(local_38 + 0x20),&local_24);
  local_34.left = local_24.left;
  local_34.top = local_24.top;
  local_34.right = local_24.right;
  local_34.bottom = local_24.bottom;
  pcVar1 = *(code **)(*(int *)this + 0x194);
  guard_check_icall();
  iVar4 = (*pcVar1)();
  pCVar2 = local_38;
  if (iVar4 == 0x1000) {
    local_34.right = 0;
    *(undefined4 *)(this + 0x148) = 0xe81c;
  }
  else if (iVar4 == 0x2000) {
    local_34.bottom = local_24.top;
    *(undefined4 *)(this + 0x148) = 0xe81b;
  }
  else if (iVar4 == 0x4000) {
    local_34.left = local_24.right;
    *(undefined4 *)(this + 0x148) = 0xe81d;
  }
  else if (iVar4 == 0x8000) {
    local_34.top = local_24.bottom;
    *(undefined4 *)(this + 0x148) = 0xe81e;
  }
  *(ulong *)(this + 0xa0) = param_5;
  piVar6 = &local_40;
  pwVar7 = L"Afx:DockPane";
  *(CWnd **)(this + 0xa4) = local_38;
  GetGlobalData();
  puVar5 = (undefined4 *)RegisterWindowClass(piVar6,pwVar7);
  local_8 = 0;
  ::CreateEx(0,*puVar5,0,param_2 | 0x46000000,&local_34,pCVar2,*(undefined4 *)(this + 0x148),
             local_3c);
  ATL::CStringData::Release((CStringData *)(local_40 + -0x10));
  iVar4 = FUN_10154478();
  return iVar4;
}

