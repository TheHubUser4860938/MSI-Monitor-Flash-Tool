// rea decompile_all
// name: CDockingPanesRow::MoveTrailingPanes
// address: 0x100bd7b8
// body: available
// range: 0x100bd7b8-0x100bd98d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: void __thiscall CDockingPanesRow::MoveTrailingPanes(struct __POSITION *,class
   CPoint,bool,class CPane *,void * &)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CDockingPanesRow::MoveTrailingPanes
          (CDockingPanesRow *this,int param_1,long param_3,long param_4,bool param_5,CPane *param_6,
          void **param_7)

{
  CPane *pCVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  BOOL BVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int local_34;
  CPane *local_30;
  CDockingPanesRow *local_2c;
  tagRECT local_28;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  local_2c = this;
  local_34 = param_1;
  do {
    do {
      do {
        do {
          if (local_34 == 0) {
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
          if (param_5 == false) {
            puVar4 = (undefined4 *)FUN_1002466e(&local_34);
          }
          else {
            puVar4 = (undefined4 *)FUN_1002e90e(&local_34);
          }
          pCVar1 = (CPane *)*puVar4;
          local_30 = pCVar1;
        } while (pCVar1 == param_6);
        pcVar2 = *(code **)(*(int *)pCVar1 + 0x17c);
        guard_check_icall();
        iVar5 = (*pcVar2)();
      } while ((iVar5 == 0) && (*(int *)(this + 4) == 0));
      ::GetWindowRect(*(HWND *)(pCVar1 + 0x20),&local_28);
      CPane::GetVirtualRect(pCVar1,(CRect *)&local_18);
      BVar6 = EqualRect(&local_28,&local_18);
    } while (BVar6 != 0);
    lVar9 = 0;
    bVar3 = CPane::IsLeftOf(local_30,local_18.left,local_18.top,local_18.right,local_18.bottom,1);
    lVar7 = param_4;
    if (param_5 == false) {
      if (!bVar3) goto LAB_100bd8b6;
      bVar3 = CPane::IsLeftOf(local_30,local_18.left,local_18.top,local_18.right,local_18.bottom,1);
      if (bVar3) goto LAB_100bd8e6;
    }
    else {
      if (bVar3) {
LAB_100bd8b6:
        if ((*(uint *)(local_2c + 0x40) & 0xa000) != 0) {
LAB_100bd8c2:
          lVar7 = param_3;
        }
      }
      else {
        bVar3 = CPane::IsLeftOf(local_30,local_18.left,local_18.top,local_18.right,local_18.bottom,1
                               );
        if (bVar3) goto LAB_100bd941;
LAB_100bd8e6:
        if ((*(uint *)(local_2c + 0x40) & 0xa000) == 0) {
          lVar9 = _labs(param_4);
          lVar8 = _labs(local_18.top - local_28.top);
          if (lVar8 <= lVar9) {
            lVar7 = local_18.top - local_28.top;
          }
        }
        else {
          lVar7 = _labs(param_3);
          lVar9 = _labs(local_18.left - local_28.left);
          if (lVar7 < lVar9) goto LAB_100bd8c2;
          lVar7 = local_18.left - local_28.left;
        }
      }
      lVar9 = _labs(lVar7);
    }
LAB_100bd941:
    pCVar1 = local_30;
    MovePane(local_2c,local_30,lVar9,param_5,param_7);
    ResolveIntersection(local_2c,pCVar1,param_5 == false,param_7);
    this = local_2c;
  } while( true );
}

