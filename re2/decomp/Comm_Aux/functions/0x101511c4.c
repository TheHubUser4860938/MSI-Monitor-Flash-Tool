// rea decompile_all
// name: CMFCRibbonBar::DrawMenuImage
// address: 0x101511c4
// body: available
// range: 0x101511c4-0x1015137b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CMFCRibbonBar::DrawMenuImage(class CDC *,class CMFCToolBarMenuButton
   const *,class CRect const &)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCRibbonBar::DrawMenuImage
          (CMFCRibbonBar *this,CDC *param_1,CMFCToolBarMenuButton *param_2,CRect *param_3)

{
  code *pcVar1;
  uint uVar2;
  CMFCRibbonBaseElement *pCVar3;
  AFX_GLOBAL_DATA *pAVar4;
  int iVar5;
  int iVar6;
  int local_28;
  int local_24;
  undefined4 local_20;
  CMFCRibbonBaseElement *local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  uVar2 = *(uint *)(param_2 + 0x20);
  if (uVar2 != 0) {
    if (uVar2 == 0xffffd8ee) {
      uVar2 = 0xe123;
    }
    if (uVar2 == 0xffffd8ed) {
      uVar2 = 0xe122;
    }
    if (uVar2 == 0xffffd8ec) {
      uVar2 = 0xe125;
    }
    if (uVar2 == 0xffffd8eb) {
      uVar2 = 0xe12a;
    }
    pCVar3 = FindByID(this,uVar2,0,1);
    local_1c = pCVar3;
    if (pCVar3 != (CMFCRibbonBaseElement *)0x0) {
      pAVar4 = GetGlobalData();
      local_20 = *(undefined4 *)(pAVar4 + 0x1e8);
      pAVar4 = GetGlobalData();
      *(undefined4 *)(pAVar4 + 0x1e8) = 0;
      pcVar1 = *(code **)(*(int *)pCVar3 + 0x114);
      guard_check_icall(&local_28,1);
      (*pcVar1)();
      if ((((local_28 == 0) && (local_24 == 0)) ||
          (*(int *)(param_3 + 8) - *(int *)param_3 < local_28)) ||
         (*(int *)(param_3 + 0xc) - *(int *)(param_3 + 4) < local_24)) {
        pAVar4 = GetGlobalData();
        *(undefined4 *)(pAVar4 + 0x1e8) = local_20;
      }
      else {
        local_18.left = *(LONG *)param_3;
        local_18.top = *(LONG *)(param_3 + 4);
        local_18.right = *(LONG *)(param_3 + 8);
        local_18.bottom = *(LONG *)(param_3 + 0xc);
        InflateRect(&local_18,-(((*(int *)(param_3 + 8) - *(int *)param_3) - local_28) / 2),
                    -(((*(int *)(param_3 + 0xc) - *(int *)(param_3 + 4)) - local_24) / 2));
        pcVar1 = *(code **)(*(int *)pCVar3 + 0xdc);
        guard_check_icall();
        iVar5 = (*pcVar1)();
        pcVar1 = *(code **)(*(int *)pCVar3 + 0xe0);
        guard_check_icall();
        iVar6 = (*pcVar1)();
        *(uint *)(local_1c + 0xd4) = *(uint *)(param_2 + 0x24) & 0x40000;
        *(uint *)(local_1c + 0xd8) = *(uint *)(param_2 + 0x24) & 0x10000;
        pcVar1 = *(code **)(*(int *)local_1c + 0x158);
        guard_check_icall(param_1,local_18.left,local_18.top,local_18.right,local_18.bottom);
        pCVar3 = local_1c;
        (*pcVar1)();
        *(int *)(pCVar3 + 0xd8) = iVar6;
        *(int *)(pCVar3 + 0xd4) = iVar5;
        pAVar4 = GetGlobalData();
        *(undefined4 *)(pAVar4 + 0x1e8) = local_20;
      }
    }
  }
  iVar5 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar5;
}

