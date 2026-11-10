// rea decompile_all
// name: CMFCToolBarImages::MirrorBitmap
// address: 0x10088fd4
// body: available
// range: 0x10088fd4-0x10089244 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: static int __stdcall CMFCToolBarImages::MirrorBitmap(struct HBITMAP__ * &,int)
   
   Library: Visual Studio 2015 Release */

int CMFCToolBarImages::MirrorBitmap(HBITMAP__ **param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  HDC pHVar3;
  COLORREF color;
  COLORREF color_00;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int y;
  undefined1 local_b8 [4];
  int local_b4;
  int local_b0;
  short local_a6;
  CDC local_a0 [4];
  HDC local_9c;
  int local_90;
  undefined4 *local_8c;
  int local_88;
  undefined4 *local_84;
  int local_80;
  undefined4 *local_7c;
  undefined4 *local_78;
  HGDIOBJ local_74;
  undefined4 *local_70;
  int local_6c;
  undefined1 local_68 [18];
  short local_56;
  undefined4 *local_54;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xa8;
  local_8 = 0x10088fe3;
  local_88 = param_2;
  if ((*param_1 != (HBITMAP__ *)0x0) && (iVar4 = GetObjectW(*param_1,0x18,local_b8), iVar4 != 0)) {
    local_6c = local_b0;
    iVar4 = local_b4 / param_2;
    local_90 = local_b4;
    local_80 = iVar4;
    if (local_a6 == 0x20) {
      iVar2 = GetObjectW(*param_1,0x54,local_68);
      if ((((iVar2 != 0) && (local_56 == 0x20)) &&
          (local_78 = local_54, local_54 != (undefined4 *)0x0)) && (0 < iVar4)) {
        iVar2 = param_2 * 4;
        local_7c = local_54 + param_2 + -1;
        do {
          if (0 < local_6c) {
            local_70 = (undefined4 *)(param_2 / 2);
            local_84 = local_7c;
            puVar6 = local_54;
            iVar4 = local_6c;
            do {
              local_8c = puVar6;
              puVar6 = local_84;
              puVar7 = local_70;
              puVar8 = local_8c;
              if (0 < (int)local_70) {
                do {
                  uVar1 = *puVar8;
                  *puVar8 = *puVar6;
                  *puVar6 = uVar1;
                  puVar7 = (undefined4 *)((int)puVar7 + -1);
                  puVar6 = puVar6 + -1;
                  puVar8 = puVar8 + 1;
                } while (puVar7 != (undefined4 *)0x0);
              }
              local_84 = local_84 + local_90;
              iVar4 = iVar4 + -1;
              puVar6 = local_8c + local_90;
            } while (iVar4 != 0);
            iVar2 = local_88 << 2;
            local_74 = (HGDIOBJ)0x0;
            iVar4 = local_80;
            param_2 = local_88;
          }
          local_54 = (undefined4 *)((int)local_54 + iVar2);
          local_7c = (undefined4 *)((int)local_7c + iVar2);
          iVar4 = iVar4 + -1;
          local_80 = iVar4;
        } while (iVar4 != 0);
        local_80 = 0;
        local_78 = local_54;
      }
    }
    else {
      CDC::CDC(local_a0);
      local_8 = 0;
      pHVar3 = CreateCompatibleDC((HDC)0x0);
      CDC::Attach(local_a0,pHVar3);
      if (*param_1 == (HBITMAP__ *)0x0) {
        local_74 = (HGDIOBJ)0x0;
      }
      else {
        local_74 = SelectObject(local_9c,*param_1);
      }
      if (local_74 != (HGDIOBJ)0x0) {
        if (0 < iVar4) {
          local_78 = (undefined4 *)0x0;
          iVar2 = local_88;
          iVar5 = local_6c;
          do {
            y = 0;
            local_90 = 0;
            puVar6 = local_78;
            if (0 < iVar5) {
              puVar8 = (undefined4 *)((int)local_78 + iVar2 + -1);
              puVar7 = (undefined4 *)(iVar2 / 2);
              iVar5 = local_6c;
              local_8c = puVar7;
              local_84 = puVar8;
              do {
                local_70 = puVar8;
                if (0 < (int)puVar7) {
                  do {
                    local_7c = puVar7;
                    color = GetPixel(local_9c,(int)puVar6,y);
                    color_00 = GetPixel(local_9c,(int)local_70,y);
                    SetPixel(local_9c,(int)puVar6,y,color_00);
                    puVar7 = local_70;
                    SetPixel(local_9c,(int)local_70,y,color);
                    puVar6 = (undefined4 *)((int)puVar6 + 1);
                    local_70 = (undefined4 *)((int)puVar7 + -1);
                    puVar7 = (undefined4 *)((int)local_7c + -1);
                  } while ((undefined4 *)((int)local_7c + -1) != (undefined4 *)0x0);
                  local_7c = (undefined4 *)0x0;
                  puVar7 = local_8c;
                  puVar6 = local_78;
                  iVar5 = local_6c;
                  puVar8 = local_84;
                }
                y = y + 1;
                iVar2 = local_88;
                iVar4 = local_80;
              } while (y < iVar5);
            }
            local_78 = (undefined4 *)((int)puVar6 + iVar2);
            iVar4 = iVar4 + -1;
            local_80 = iVar4;
          } while (iVar4 != 0);
          local_80 = 0;
        }
        SelectObject(local_9c,local_74);
      }
      CDC::~CDC(local_a0);
    }
  }
  iVar4 = FUN_1018015d();
  return iVar4;
}

