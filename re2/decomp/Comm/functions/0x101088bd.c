// rea decompile_all
// name: CMFCRibbonColorButton::OnDrawPaletteIcon
// address: 0x101088bd
// body: available
// range: 0x101088bd-0x10108a36 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonColorButton::OnDrawPaletteIcon(class CDC *,class
   CRect,int,class CMFCRibbonGalleryIcon *,unsigned long)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCRibbonColorButton::OnDrawPaletteIcon
          (CMFCRibbonColorButton *this,undefined4 param_1,LONG param_3,int param_4,LONG param_5,
          int param_6,int param_7,int *param_8)

{
  ushort uVar1;
  code *pcVar2;
  int *piVar3;
  ushort *puVar4;
  int iVar5;
  CMFCVisualManager *pCVar6;
  bool bVar7;
  bool bVar8;
  ulong local_20;
  undefined4 local_1c;
  undefined4 local_14;
  int local_10;
  int local_c;
  
  piVar3 = param_8;
  bVar8 = true;
  local_14 = 1;
  local_1c = 0;
  local_10 = 0;
  if (*(int *)(this + 0x3b4) < 1) {
    local_10 = 2;
  }
  if (param_8 == (int *)0x0) {
    local_20 = *(ulong *)(this + 0x380);
    bVar7 = *(int *)(this + 0x378) == -1;
    local_10 = 2;
  }
  else {
    local_20 = GetColorByIndex(this,param_7);
    bVar7 = *(ulong *)(this + 0x378) == local_20;
    pcVar2 = *(code **)(*piVar3 + 0xd0);
    guard_check_icall();
    local_1c = (*pcVar2)();
    if ((param_7 < *(int *)(this + 0x38c)) && (local_c = 0, 0 < *(int *)(this + 0x3b4))) {
      do {
        puVar4 = (ushort *)FUN_100d7168(local_c);
        uVar1 = *puVar4;
        iVar5 = FUN_100d7168(local_c);
        if (((int)(uint)uVar1 <= param_7) && (param_7 <= (int)(uint)*(ushort *)(iVar5 + 2))) {
          local_14 = 0;
          bVar8 = piVar3[0x75] != 0;
          if (bVar8) {
            param_4 = param_4 + 1;
          }
          local_10 = 0;
          if (piVar3[0x76] != 0) {
            param_6 = param_6 + -1;
            local_14 = 1;
            local_10 = 0;
          }
          goto LAB_101089b1;
        }
        local_c = local_c + 1;
      } while (local_c < *(int *)(this + 0x3b4));
    }
    if (0 < *(int *)(this + 0x3b4)) {
      param_6 = param_6 + -1;
    }
  }
LAB_101089b1:
  InflateRect((LPRECT)&param_3,-2,-local_10);
  pCVar6 = CMFCVisualManager::GetInstance();
  pcVar2 = *(code **)(*(int *)pCVar6 + 0x2c8);
  guard_check_icall(param_1,this,piVar3,local_20,param_3,param_4,param_5,param_6,bVar8,local_14,
                    local_1c,bVar7,0);
  (*pcVar2)();
  return;
}

