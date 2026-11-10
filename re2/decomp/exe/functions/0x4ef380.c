// rea decompile_all
// name: CDockingPanesRow::MoveTrailingPanes
// address: 0x4ef380
// body: available
// range: 0x4ef380-0x4ef555 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
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
            puVar4 = (undefined4 *)FUN_004ead48(&local_34);
          }
          else {
            puVar4 = (undefined4 *)FUN_00434304(&local_34);
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
      if (!bVar3) goto LAB_004ef47e;
      bVar3 = CPane::IsLeftOf(local_30,local_18.left,local_18.top,local_18.right,local_18.bottom,1);
      if (bVar3) goto LAB_004ef4ae;
    }
    else {
      if (bVar3) {
LAB_004ef47e:
        if ((*(uint *)(local_2c + 0x40) & 0xa000) != 0) {
LAB_004ef48a:
          lVar7 = param_3;
        }
      }
      else {
        bVar3 = CPane::IsLeftOf(local_30,local_18.left,local_18.top,local_18.right,local_18.bottom,1
                               );
        if (bVar3) goto LAB_004ef509;
LAB_004ef4ae:
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
          if (lVar7 < lVar9) goto LAB_004ef48a;
          lVar7 = local_18.left - local_28.left;
        }
      }
      lVar9 = _labs(lVar7);
    }
LAB_004ef509:
    pCVar1 = local_30;
    MovePane(local_2c,local_30,lVar9,param_5,param_7);
    ResolveIntersection(local_2c,pCVar1,param_5 == false,param_7);
    this = local_2c;
  } while( true );
}

