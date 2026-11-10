// rea decompile_all
// name: CDockingPanesRow::MovePane
// address: 0x100f4731
// body: available
// range: 0x100f4731-0x100f48ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CDockingPanesRow::MovePane(class CPane *,class CPoint,int,void * &)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CDockingPanesRow::MovePane
          (CDockingPanesRow *this,CPane *param_1,int param_3,long param_4,undefined4 param_5,
          undefined4 param_6)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  long local_40;
  int local_3c;
  tagRECT local_38;
  LONG local_28;
  LONG local_24;
  LONG local_20;
  LONG local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  CPane::GetVirtualRect(param_1,(CRect *)&local_28);
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  ::GetWindowRect(*(HWND *)(param_1 + 0x20),&local_18);
  local_38.left = local_28;
  local_38.top = local_24;
  local_38.right = local_20;
  local_38.bottom = local_1c;
  OffsetRect(&local_38,param_3,param_4);
  local_40 = 0;
  local_3c = param_4;
  if ((*(uint *)(this + 0x40) & 0xa000) != 0) {
    local_40 = param_3;
    param_4 = 0;
    local_3c = param_3;
  }
  bVar5 = -1 < local_3c;
  iVar2 = IsEnoughSpaceToMove(this,param_1,bVar5,&local_3c);
  if (iVar2 == 0) goto LAB_100f489c;
  if ((*(uint *)(this + 0x40) & 0xa000) == 0) {
LAB_100f4807:
    lVar3 = _labs(param_4);
    lVar4 = _labs(local_3c);
    iVar2 = local_40;
    if (lVar4 < lVar3) {
      param_4 = local_3c;
    }
  }
  else {
    lVar3 = _labs(local_40);
    lVar4 = _labs(local_3c);
    iVar2 = local_3c;
    if ((lVar3 <= lVar4) && (iVar2 = local_40, (*(uint *)(this + 0x40) & 0xa000) == 0))
    goto LAB_100f4807;
  }
  OffsetRect(&local_18,iVar2,param_4);
  iVar2 = CheckPanes(this,&local_18,param_1,bVar5,iVar2,param_4,param_5,param_6);
  if (iVar2 != 0) {
    CWnd::ScreenToClient(*(CWnd **)(this + 0x44),&local_18);
    pcVar1 = *(code **)(*(int *)param_1 + 0x238);
    guard_check_icall(0,local_18.left,local_18.top,local_18.right - local_18.left,
                      local_18.bottom - local_18.top,0x14,0);
    (*pcVar1)();
  }
  pcVar1 = *(code **)(*(int *)this + 0x28);
  guard_check_icall(param_1);
  (*pcVar1)();
LAB_100f489c:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

