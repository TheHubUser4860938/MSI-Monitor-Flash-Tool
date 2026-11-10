// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnDrawRibbonDefaultPaneButton
// address: 0x10097ce0
// body: available
// range: 0x10097ce0-0x10097f29 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2007::OnDrawRibbonDefaultPaneButton(class
   CDC *,class CMFCRibbonButton *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2007::OnDrawRibbonDefaultPaneButton
          (CMFCVisualManagerOffice2007 *this,CDC *param_1,CMFCRibbonButton *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  CDC *pCVar4;
  CMFCVisualManagerOffice2007 *pCVar5;
  int local_2c;
  int local_28;
  CMFCRibbonButton *local_24;
  CDC *local_20;
  CMFCVisualManagerOffice2007 *local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  local_20 = param_1;
  local_24 = param_2;
  local_1c = this;
  iVar2 = CanDrawImage(this);
  if (iVar2 == 0) {
    CMFCVisualManager::OnDrawRibbonDefaultPaneButton((CMFCVisualManager *)this,param_1,param_2);
    goto LAB_10097f17;
  }
  pcVar1 = *(code **)(*(int *)this + 0x238);
  guard_check_icall();
  (*pcVar1)();
  pCVar5 = local_1c;
  local_18.left = *(LONG *)(param_2 + 0x74);
  local_18.top = *(LONG *)(param_2 + 0x78);
  local_18.right = *(LONG *)(param_2 + 0x7c);
  local_18.bottom = *(LONG *)(param_2 + 0x80);
  pCVar4 = local_20;
  if (*(int *)(param_2 + 0xc4) == 0) {
    if (*(int *)(local_1c + 0x6f4c) != 0) {
      pcVar1 = *(code **)(*(int *)param_2 + 0x114);
      guard_check_icall(&local_2c,1);
      (*pcVar1)();
      pCVar4 = local_20;
      iVar2 = *(int *)(pCVar5 + 0x6eb8);
      local_18.bottom = local_28 + local_18.top + 0x19;
      local_18.top = local_18.top + 3;
      local_18.left = ((local_18.right + local_18.left) / 2 - local_2c / 2) + -0xb;
      local_18.right = local_2c + 0x16 + local_18.left;
      guard_check_icall(local_20,local_18.left,local_18.top,local_18.right,local_18.bottom,0,0xff);
LAB_10097e8e:
      pCVar5 = local_1c;
      (**(code **)(iVar2 + 0x10))();
      param_2 = local_24;
    }
  }
  else {
    if (*(int *)(local_1c + 0x723c) != 0) {
      pcVar1 = *(code **)(*(int *)param_2 + 0xe4);
      guard_check_icall();
      iVar2 = (*pcVar1)();
      if (iVar2 == 0) {
        pcVar1 = *(code **)(*(int *)param_2 + 0xd8);
        guard_check_icall();
        iVar2 = (*pcVar1)();
        pcVar1 = *(code **)(*(int *)param_2 + 0xd0);
        if (iVar2 == 0) {
          guard_check_icall();
          iVar2 = (*pcVar1)();
          if (iVar2 == 0) {
            pcVar1 = *(code **)(*(int *)param_2 + 0xd4);
            guard_check_icall();
            iVar2 = (*pcVar1)();
            if (iVar2 == 0) goto LAB_10097e5f;
          }
          uVar3 = 1;
        }
        else {
          guard_check_icall();
          iVar2 = (*pcVar1)();
          if (iVar2 != 0) goto LAB_10097e31;
LAB_10097e5f:
          uVar3 = 0;
        }
      }
      else {
LAB_10097e31:
        uVar3 = 2;
      }
      pCVar4 = local_20;
      iVar2 = *(int *)(pCVar5 + 0x71a8);
      guard_check_icall(local_20,local_18.left,local_18.top,local_18.right,local_18.bottom,uVar3,
                        0xff);
      goto LAB_10097e8e;
    }
    if (*(int *)(local_1c + 0x70c4) != 0) {
      iVar2 = *(int *)(local_1c + 0x7164) - *(int *)(local_1c + 0x715c);
      if (local_18.bottom - local_18.top < iVar2) {
        iVar2 = (local_18.bottom - local_18.top) / 2;
      }
      InflateRect(&local_18,-1,0);
      pCVar4 = local_20;
      local_18.top = local_18.bottom - iVar2;
      iVar2 = *(int *)(pCVar5 + 0x7030);
      guard_check_icall(local_20,local_18.left,local_18.top,local_18.right,local_18.bottom,0,0xff);
      goto LAB_10097e8e;
    }
  }
  pcVar1 = *(code **)(*(int *)pCVar5 + 0x230);
  guard_check_icall(pCVar4,param_2);
  (*pcVar1)();
LAB_10097f17:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

