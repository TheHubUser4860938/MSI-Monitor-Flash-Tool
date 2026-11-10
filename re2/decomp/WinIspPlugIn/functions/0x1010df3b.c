// rea decompile_all
// name: CMFCRibbonCategory::EnsureVisible
// address: 0x1010df3b
// body: available
// range: 0x1010df3b-0x1010e158 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonCategory::EnsureVisible(class CMFCRibbonButton *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCRibbonCategory::EnsureVisible(CMFCRibbonCategory *this,CMFCRibbonButton *param_1)

{
  code *pcVar1;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int local_24;
  int local_20;
  int local_1c;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  BVar2 = IsRectEmpty((RECT *)(this + 0x7c));
  if (BVar2 == 0) {
    iVar6 = *(int *)(this + 0x84);
    iVar3 = ((RECT *)(this + 0x7c))->left + 4;
    local_18.left = *(LONG *)(param_1 + 0x74);
    local_18.top = *(LONG *)(param_1 + 0x78);
    local_18.right = *(LONG *)(param_1 + 0x7c);
    local_18.bottom = *(LONG *)(param_1 + 0x80);
    BVar2 = IsRectEmpty(&local_18);
    if (BVar2 == 0) {
      if (local_18.left < *(int *)(this + 0x7c) + -2) {
        iVar3 = iVar3 - local_18.left;
        uVar8 = 1;
      }
      else {
        if (local_18.right <= *(int *)(this + 0x84) + 2) goto LAB_1010e147;
        iVar3 = local_18.right - (iVar6 + -4);
        uVar8 = 0;
      }
      pcVar1 = *(code **)(*(int *)this + 0xe0);
      guard_check_icall(uVar8,iVar3);
      (*pcVar1)();
    }
    else {
      pcVar1 = *(code **)(*(int *)param_1 + 0x130);
      guard_check_icall();
      iVar4 = (*pcVar1)();
      if (iVar4 != 0) {
        iVar7 = 0;
        local_20 = -1;
        local_24 = -1;
        local_1c = -1;
        if (0 < *(int *)(this + 0x564)) {
          do {
            piVar5 = (int *)FUN_100efaed(iVar7);
            if (*piVar5 == iVar4) {
              local_24 = iVar7;
            }
            BVar2 = IsRectEmpty((RECT *)(*piVar5 + 0xcc));
            if ((BVar2 == 0) && (local_20 = iVar7, local_1c < 0)) {
              local_1c = iVar7;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < *(int *)(this + 0x564));
          if (((local_24 != -1) && (local_1c != -1)) && (local_20 != -1)) {
            if (local_24 < local_1c) {
              pcVar1 = *(code **)(*(int *)this + 0xe0);
              guard_check_icall(1,0);
              iVar6 = (*pcVar1)();
              if (iVar6 != 0) {
                do {
                  BVar2 = IsRectEmpty((RECT *)(iVar4 + 0xcc));
                  if ((BVar2 == 0) && (iVar3 <= ((RECT *)(iVar4 + 0xcc))->left)) break;
                  pcVar1 = *(code **)(*(int *)this + 0xe0);
                  guard_check_icall(1,0);
                  iVar6 = (*pcVar1)();
                } while (iVar6 != 0);
              }
            }
            else if (local_20 < local_24) {
              pcVar1 = *(code **)(*(int *)this + 0xe0);
              guard_check_icall(0,0);
              iVar3 = (*pcVar1)();
              while ((iVar3 != 0 &&
                     ((BVar2 = IsRectEmpty((RECT *)(iVar4 + 0xcc)), BVar2 != 0 ||
                      (iVar6 + -4 < *(int *)(iVar4 + 0xd4)))))) {
                pcVar1 = *(code **)(*(int *)this + 0xe0);
                guard_check_icall(0,0);
                iVar3 = (*pcVar1)();
              }
            }
          }
        }
      }
    }
  }
LAB_1010e147:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

