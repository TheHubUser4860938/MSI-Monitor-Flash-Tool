// rea decompile_all
// name: CPaneContainerManager::OnPaneDividerMove
// address: 0x4dcf92
// body: available
// range: 0x4dcf92-0x4dd158 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CPaneContainerManager::OnPaneDividerMove(class CPaneDivider
   *,unsigned int,int,void * &)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CPaneContainerManager::OnPaneDividerMove
          (CPaneContainerManager *this,CPaneDivider *param_1,uint param_2,int param_3,void **param_4
          )

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  int local_30;
  int local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_30 = 0;
  local_2c = 0;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  pcVar1 = *(code **)(**(int **)(this + 0x3c) + 0xc);
  guard_check_icall(&local_18,0);
  (*pcVar1)();
  piVar4 = &local_30;
  pcVar1 = *(code **)(**(int **)(this + 0x3c) + 0x10);
  guard_check_icall(piVar4);
  (*pcVar1)();
  if (param_1 == *(CPaneDivider **)(this + 0x44)) {
    pcVar1 = *(code **)(*(int *)param_1 + 0x194);
    guard_check_icall(piVar4);
    iVar2 = (*pcVar1)();
    CWnd::ScreenToClient(*(CWnd **)(this + 0x4c),&local_18);
    uVar3 = CWnd::GetExStyle(*(CWnd **)(this + 0x4c));
    if (iVar2 == 0x1000) {
      if ((uVar3 & 0x400000) == 0) {
        local_18.right = local_18.right + param_3;
      }
      else {
        local_18.left = local_18.left + param_3;
      }
      if (local_18.right - local_18.left < local_30) {
        local_18.right = local_30 + local_18.left;
      }
    }
    else if (iVar2 == 0x2000) {
      local_18.bottom = local_18.bottom + param_3;
      if (local_18.bottom - local_18.top < local_2c) {
        local_18.bottom = local_18.top + local_2c;
      }
    }
    else if (iVar2 == 0x4000) {
      if ((uVar3 & 0x400000) == 0) {
        local_18.left = local_18.left + param_3;
      }
      else {
        local_18.right = local_18.right + param_3;
      }
      if (local_18.right - local_18.left < local_30) {
        local_18.left = local_18.right - local_30;
      }
    }
    else if ((iVar2 == 0x8000) &&
            (local_18.top = local_18.top + param_3, local_18.bottom - local_18.top < local_2c)) {
      local_18.top = local_18.bottom - local_2c;
    }
    iVar2 = *(int *)this;
    guard_check_icall(local_18.left,local_18.top,local_18.right,local_18.bottom,param_4);
    (**(code **)(iVar2 + 0x38))();
  }
  else {
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    ::GetWindowRect(*(HWND *)(param_1 + 0x20),&local_28);
    piVar4 = (int *)FUN_004fd640(param_1,2);
    if (piVar4 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar4 + 0x38);
      guard_check_icall(param_3,param_4);
      (*pcVar1)();
    }
  }
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

