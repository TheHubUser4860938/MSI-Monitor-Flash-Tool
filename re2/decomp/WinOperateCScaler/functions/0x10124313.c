// rea decompile_all
// name: CMFCRibbonGallery::RebuildIconLocations
// address: 0x10124313
// body: available
// range: 0x10124313-0x1012454a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonGallery::RebuildIconLocations(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonGallery::RebuildIconLocations(CMFCRibbonGallery *this)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  CObject *pCVar4;
  int iVar5;
  int iVar6;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  local_18.left = *(LONG *)(this + 0x74);
  local_18.top = *(LONG *)(this + 0x78);
  local_18.right = *(LONG *)(this + 0x7c);
  local_18.bottom = *(LONG *)(this + 0x80);
  pcVar1 = *(code **)(*(int *)this + 0x28c);
  guard_check_icall(&local_3c);
  (*pcVar1)();
  iVar5 = (-(uint)(*(int *)(this + 0x358) != 0) & 0xfffffffc) + 4;
  local_1c = iVar5;
  InflateRect(&local_18,0,-iVar5);
  local_34 = local_38 + iVar5 * 2;
  local_24 = ((local_18.bottom - *(int *)(this + 0x338) * local_34) - local_18.top) / 2;
  if (local_24 < 0) {
    local_24 = 0;
  }
  iVar6 = 0;
  iVar5 = 0;
  local_28 = 0;
  local_20 = 0;
  local_2c = local_3c + local_1c * 2;
  local_1c = 0;
  if (0 < *(int *)(this + 0x1cc)) {
    do {
      puVar3 = (undefined4 *)FUN_1009f8c7(local_1c);
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonGalleryIcon_101c9f50,
                                  (CObject *)*puVar3);
      if (pCVar4 != (CObject *)0x0) {
        *(undefined4 *)(pCVar4 + 0x1cc) = 0;
        *(undefined4 *)(pCVar4 + 0x1d0) = 0;
        *(undefined4 *)(pCVar4 + 0x1d4) = 0;
        *(undefined4 *)(pCVar4 + 0x1d8) = 0;
        *(undefined4 *)(pCVar4 + 0x94) = *(undefined4 *)(this + 0x94);
        iVar2 = *(int *)(pCVar4 + 0x1c8);
        if (iVar2 < 0) {
          if (iVar2 == -1) {
            *(uint *)(pCVar4 + 0xd4) = (uint)(*(int *)(this + 0x33c) == 0);
          }
          else if (iVar2 == -2) {
            *(uint *)(pCVar4 + 0xd4) = (uint)(*(int *)(this + 0x340) <= *(int *)(this + 0x33c));
          }
        }
        else {
          local_30 = iVar6 - *(int *)(this + 0x33c);
          if ((local_30 < *(int *)(this + 0x338)) && (*(int *)(this + 0x33c) <= iVar6)) {
            iVar5 = local_18.left + 2 + local_2c * iVar5;
            iVar6 = local_30 * local_34 + local_18.top + local_24;
            *(int *)(pCVar4 + 0x74) = iVar5;
            *(int *)(pCVar4 + 0x78) = iVar6;
            *(int *)(pCVar4 + 0x7c) = iVar5 + local_2c;
            *(int *)(pCVar4 + 0x80) = iVar6 + local_34;
            *(uint *)(pCVar4 + 0x1cc) = (uint)(local_20 == 0);
            *(uint *)(pCVar4 + 0x1d0) = (uint)(local_20 == *(int *)(this + 0x330) + -1);
            *(uint *)(pCVar4 + 0x1d4) = (uint)(local_28 == *(int *)(this + 0x33c));
            *(uint *)(pCVar4 + 0x1d8) =
                 (uint)(local_28 - *(int *)(this + 0x33c) == *(int *)(this + 0x338) + -1);
            iVar5 = local_20;
            iVar6 = local_28;
          }
          else {
            SetRectEmpty((LPRECT)(pCVar4 + 0x74));
          }
          iVar5 = iVar5 + 1;
          local_20 = iVar5;
          if (iVar5 == *(int *)(this + 0x330)) {
            iVar5 = 0;
            iVar6 = iVar6 + 1;
            local_20 = 0;
            local_28 = iVar6;
          }
        }
      }
      local_1c = local_1c + 1;
    } while (local_1c < *(int *)(this + 0x1cc));
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

