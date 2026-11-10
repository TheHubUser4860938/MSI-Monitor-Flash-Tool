// rea decompile_all
// name: CDockingPanesRow::ArrangePanes
// address: 0x4ed9f4
// body: available
// range: 0x4ed9f4-0x4edc5d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CDockingPanesRow::ArrangePanes(class CPane *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDockingPanesRow::ArrangePanes(CDockingPanesRow *this,CPane *param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int iVar3;
  int dx;
  CPane *pCVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  long _X;
  undefined1 uVar8;
  undefined4 uVar9;
  void **ppvVar10;
  int local_34;
  void *local_30;
  CPane *local_2c;
  RECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x30) != 0) {
    local_28.left = 0;
    local_28.top = 0;
    local_28.right = 0;
    local_28.bottom = 0;
    GetClientRect(this,(CRect *)&local_28);
    BVar2 = IsRectEmpty(&local_28);
    if (BVar2 == 0) {
      local_30 = (void *)0x0;
      pcVar1 = *(code **)(*(int *)this + 0x5c);
      guard_check_icall(0);
      local_34 = (*pcVar1)();
      if (*(int *)(this + 0x30) == 1) {
        if (param_1 == (CPane *)0x0) {
          param_1 = *(CPane **)(*(int *)(this + 0x28) + 8);
        }
        if (local_34 < 0) {
          pcVar1 = *(code **)(*(int *)param_1 + 0x2ac);
          guard_check_icall(local_34,&local_30);
          (*pcVar1)();
          local_18.left = 0;
          local_18.top = 0;
          local_18.right = 0;
          local_18.bottom = 0;
          ::GetWindowRect(*(HWND *)(param_1 + 0x20),&local_18);
          CWnd::ScreenToClient(*(CWnd **)(this + 0x44),&local_18);
          if ((*(uint *)(this + 0x40) & 0xa000) == 0) {
            iVar3 = -local_18.top;
            dx = *(int *)(this + 0x18) - local_18.left;
          }
          else {
            iVar3 = *(int *)(this + 0x18) - local_18.top;
            dx = -local_18.left;
          }
          OffsetRect(&local_18,dx,iVar3);
          pcVar1 = *(code **)(*(int *)param_1 + 0x238);
          guard_check_icall(0,local_18.left,local_18.top,local_18.right - local_18.left,
                            local_18.bottom - local_18.top,0x14,0);
          (*pcVar1)();
          goto LAB_004edc4b;
        }
      }
      if (param_1 == (CPane *)0x0) {
        param_1 = *(CPane **)(*(int *)(this + 0x28) + 8);
      }
      else {
        ResolveIntersection(this,param_1,false,&local_30);
      }
      ResolveIntersection(this,param_1,true,&local_30);
      pCVar4 = FindFirstVisiblePane(this,1);
      iVar3 = GetOutOfBoundsOffset(this,pCVar4,1);
      if (0 < iVar3) {
        FUN_004f00a5(pCVar4,iVar3,1);
      }
      local_2c = FindFirstVisiblePane(this,0);
      iVar3 = GetOutOfBoundsOffset(this,local_2c,0);
      _X = local_34;
      if (0 < iVar3) {
        uVar9 = 0;
        if (local_34 < 1) {
          lVar5 = _labs(local_34);
          FUN_004f00a5(local_2c,lVar5 - iVar3,uVar9);
          if (_X < 0) {
            local_34 = *(int *)(this + 0x2c);
            while (local_34 != 0) {
              puVar6 = (undefined4 *)FUN_00434304(&local_34);
              local_2c = (CPane *)*puVar6;
              pcVar1 = *(code **)(*(int *)local_2c + 0x17c);
              guard_check_icall();
              iVar3 = (*pcVar1)();
              if ((iVar3 != 0) || (*(int *)(this + 4) != 0)) {
                pcVar1 = *(code **)(*(int *)local_2c + 0x2ac);
                guard_check_icall(_X,&local_30);
                iVar3 = (*pcVar1)();
                ppvVar10 = &local_30;
                uVar8 = 0;
                lVar5 = _labs(iVar3);
                lVar7 = _labs(_X);
                MovePane(this,local_2c,lVar7 - lVar5,(bool)uVar8,ppvVar10);
                if (iVar3 == _X) break;
                _X = _X - iVar3;
              }
            }
          }
        }
        else {
          FUN_004f00a5(local_2c,-iVar3,0);
        }
      }
    }
  }
LAB_004edc4b:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

