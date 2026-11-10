// rea decompile_all
// name: CDockingPanesRow::ArrangePanesRect
// address: 0x100f240c
// body: available
// range: 0x100f240c-0x100f25bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CDockingPanesRow::ArrangePanesRect(class CPane *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDockingPanesRow::ArrangePanesRect(CDockingPanesRow *this,CPane *param_1)

{
  code *pcVar1;
  BOOL BVar2;
  long _X;
  CPane *pCVar3;
  int iVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined4 local_24;
  int local_20;
  CPane *local_1c;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x30) != 0) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(this,(CRect *)&local_18);
    BVar2 = IsRectEmpty(&local_18);
    if (BVar2 == 0) {
      local_24 = 0;
      _X = GetAvailableLengthRect(this);
      if (*(int *)(this + 0x30) == 1) {
        if (param_1 == (CPane *)0x0) {
          param_1 = *(CPane **)(*(int *)(this + 0x28) + 8);
        }
        if (_X < 0) {
          StretchPaneRect(this,param_1,_X);
          goto LAB_100f25aa;
        }
      }
      if (param_1 == (CPane *)0x0) {
        param_1 = *(CPane **)(*(int *)(this + 0x28) + 8);
      }
      else {
        ResolveIntersectionRect(this,param_1,false);
      }
      ResolveIntersectionRect(this,param_1,true);
      pCVar3 = FindFirstVisiblePane(this,1);
      iVar4 = GetOutOfBoundsOffsetRect(this,pCVar3,1);
      if (0 < iVar4) {
        FUN_100f4a16(pCVar3,iVar4,1);
      }
      local_1c = FindFirstVisiblePane(this,0);
      iVar4 = GetOutOfBoundsOffsetRect(this,local_1c,0);
      if (0 < iVar4) {
        uVar9 = 0;
        if (_X < 1) {
          lVar5 = _labs(_X);
          FUN_100f4a16(local_1c,lVar5 - iVar4,uVar9);
          if (_X < 0) {
            local_20 = *(int *)(this + 0x2c);
            while (local_20 != 0) {
              puVar6 = (undefined4 *)FUN_10069da3(&local_20);
              local_1c = (CPane *)*puVar6;
              pcVar1 = *(code **)(*(int *)local_1c + 0x17c);
              guard_check_icall();
              iVar4 = (*pcVar1)();
              if ((iVar4 != 0) || (*(int *)(this + 4) != 0)) {
                pcVar1 = *(code **)(*(int *)local_1c + 0x2ac);
                guard_check_icall(_X,&local_24);
                iVar4 = (*pcVar1)();
                uVar8 = 0;
                lVar5 = _labs(iVar4);
                lVar7 = _labs(_X);
                MovePaneRect(this,local_1c,lVar7 - lVar5,(bool)uVar8);
                if (iVar4 == _X) break;
                _X = _X - iVar4;
              }
            }
          }
        }
        else {
          FUN_100f4a16(local_1c,-iVar4,0);
        }
      }
    }
  }
LAB_100f25aa:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

