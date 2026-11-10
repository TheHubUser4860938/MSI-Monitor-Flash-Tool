// rea decompile_all
// name: FUN_10051daa
// address: 0x10051daa
// body: available
// range: 0x10051daa-0x10051eb0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_10051daa(int *param_1,HGDIOBJ param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  HDC pHVar4;
  COLORREF color;
  COLORREF color_00;
  uint uVar5;
  HGDIOBJ pvVar6;
  HGDIOBJ pvVar7;
  undefined1 local_b8 [4];
  void *local_b4;
  int local_b0;
  ushort local_a6;
  int local_a0;
  CDC aCStack_9c [4];
  HDC pHStack_98;
  HGDIOBJ local_8c;
  HGDIOBJ local_88;
  HGDIOBJ local_84;
  HGDIOBJ local_80;
  HGDIOBJ local_7c;
  int local_78;
  HGDIOBJ local_74;
  int local_70;
  void *local_6c;
  undefined1 local_68 [18];
  ushort local_56;
  HGDIOBJ local_54;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xa8;
  uStack_8 = 0x10051db9;
  local_88 = param_2;
  if ((*param_1 != 0) && (iVar1 = GetObjectW((HANDLE)*param_1,0x18,local_b8), iVar1 != 0)) {
    local_6c = local_b4;
    iVar1 = local_b0 / (int)param_2;
    local_70 = iVar1;
    if (local_a6 < 0x10) {
      CDC::CDC(aCStack_9c);
      uStack_8 = 0;
      pHVar4 = CreateCompatibleDC((HDC)0x0);
      CDC::Attach(aCStack_9c,pHVar4);
      if (*param_1 == 0) {
        local_8c = (HGDIOBJ)0x0;
      }
      else {
        local_8c = SelectObject(pHStack_98,(HGDIOBJ)*param_1);
      }
      if (local_8c != (HGDIOBJ)0x0) {
        if (0 < local_70) {
          local_7c = (HGDIOBJ)0x0;
          local_84 = (HGDIOBJ)((int)param_2 / 2);
          do {
            iVar1 = (int)param_2 + -1 + (int)local_7c;
            pvVar6 = local_84;
            pvVar3 = local_6c;
            pvVar7 = local_7c;
            local_78 = iVar1;
            local_74 = local_7c;
            if (0 < (int)local_84) {
              do {
                local_80 = pvVar6;
                iVar2 = 0;
                local_74 = pvVar7;
                local_78 = iVar1;
                if (0 < (int)pvVar3) {
                  do {
                    color = GetPixel(pHStack_98,iVar2,(int)pvVar7);
                    color_00 = GetPixel(pHStack_98,iVar2,local_78);
                    SetPixel(pHStack_98,iVar2,(int)pvVar7,color_00);
                    iVar1 = local_78;
                    SetPixel(pHStack_98,iVar2,local_78,color);
                    iVar2 = iVar2 + 1;
                    pvVar3 = local_6c;
                  } while (iVar2 < (int)local_6c);
                }
                local_74 = (HGDIOBJ)((int)local_74 + 1);
                iVar1 = iVar1 + -1;
                pvVar6 = (HGDIOBJ)((int)local_80 + -1);
                pvVar7 = local_74;
              } while ((HGDIOBJ)((int)local_80 + -1) != (HGDIOBJ)0x0);
              local_80 = (HGDIOBJ)0x0;
              param_2 = local_88;
              local_78 = iVar1;
            }
            local_7c = (HGDIOBJ)((int)local_7c + (int)param_2);
            local_70 = local_70 + -1;
          } while (local_70 != 0);
          local_70 = 0;
        }
        SelectObject(pHStack_98,local_8c);
      }
      CDC::~CDC(aCStack_9c);
    }
    else {
      iVar2 = GetObjectW((HANDLE)*param_1,0x54,local_68);
      if ((iVar2 != 0) && (local_56 == local_a6)) {
        local_7c = local_54;
        if (local_54 != (HGDIOBJ)0x0) {
          uVar5 = (int)(((int)((uint)local_56 * (int)local_6c) >> 0x1f & 7U) +
                       (uint)local_56 * (int)local_6c) >> 3;
          if ((uVar5 & 3) != 0) {
            uVar5 = (uVar5 & 0xfffffffc) + 4;
          }
          pvVar3 = (void *)FUN_10011fb9(uVar5);
          local_6c = pvVar3;
          if (0 < iVar1) {
            local_78 = (int)local_88 / 2;
            local_80 = (HGDIOBJ)((int)local_88 * uVar5);
            local_84 = (HGDIOBJ)(((int)local_88 + -1) * uVar5 + (int)local_54);
            local_a0 = 0;
            iVar1 = local_70;
            pvVar6 = local_54;
            do {
              local_a0 = local_a0 + 1;
              local_8c = pvVar6;
              local_88 = local_84;
              if (0 < local_78) {
                local_74 = (HGDIOBJ)local_78;
                pvVar7 = local_84;
                do {
                  FUN_1014c320(pvVar3,pvVar6,uVar5);
                  FUN_1014c320(pvVar6,pvVar7,uVar5);
                  FUN_1014c320(pvVar7,local_6c,uVar5);
                  pvVar6 = (HGDIOBJ)((int)pvVar6 + uVar5);
                  pvVar7 = (HGDIOBJ)((int)pvVar7 - uVar5);
                  local_74 = (HGDIOBJ)((int)local_74 + -1);
                  pvVar3 = local_6c;
                } while (local_74 != (HGDIOBJ)0x0);
                local_74 = (HGDIOBJ)0x0;
                iVar1 = local_70;
                pvVar6 = local_7c;
              }
              pvVar6 = (HGDIOBJ)((int)pvVar6 + (int)local_80);
              local_84 = (HGDIOBJ)((int)local_84 + (int)local_80);
              local_7c = pvVar6;
            } while (local_a0 < iVar1);
          }
          FID_conflict__free(pvVar3);
        }
      }
    }
  }
  FUN_101490fe();
  return;
}

