// rea decompile_all
// name: CMFCRibbonPanel::RecalcWidths
// address: 0x477955
// body: available
// range: 0x477955-0x477c22 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCRibbonPanel::RecalcWidths(class CDC *,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonPanel::RecalcWidths(CMFCRibbonPanel *this,CDC *param_1,int param_2)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined1 local_40 [4];
  int local_3c;
  int local_38;
  int local_34;
  CDC *local_30;
  int local_2c;
  int local_28 [8];
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_30 = param_1;
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  SystemParametersInfoW(0x30,0,local_28,0);
  pcVar1 = *(code **)(*(int *)(this + 0x2e0) + 0x180);
  guard_check_icall(param_1);
  (*pcVar1)();
  pcVar1 = *(code **)(*(int *)(this + 0x2e0) + 0xf8);
  guard_check_icall(local_40,local_30);
  piVar2 = (int *)(*pcVar1)();
  iVar3 = *piVar2;
  local_38 = iVar3;
  FUN_00558084(0,0xffffffff);
  CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)(this + 0x4ac));
  *(undefined4 *)(this + 0xa4) = 0;
  local_2c = 1;
  *(undefined4 *)(this + 0x6c) = 1;
  local_34 = -1;
  if ((*(int *)(this + 0x70) == 0) || (*(int *)(this + 0x80) != 0)) {
    if (*(int *)(this + 0x84) == 0) {
      local_3c = iVar3 + 1;
      do {
        local_28[4] = 0;
        local_28[5] = 0;
        local_28[7] = param_2;
        iVar3 = local_3c;
        local_28[6] = local_3c;
        while (iVar3 < local_28[2] - local_28[0]) {
          pcVar1 = *(code **)(*(int *)this + 0xec);
          guard_check_icall(local_30,local_28 + 4);
          (*pcVar1)();
          if ((local_34 != -1) && (local_34 < *(int *)(this + 0xa8))) goto LAB_00477b96;
          if ((*(int *)(this + 0xac) == local_2c) && (0 < *(int *)(this + 0xa8))) {
            if ((*(int *)(this + 0xac) == 2) && (*(int *)(this + 0x80) == 0)) {
              FUN_00558084(0,0xffffffff);
            }
            FUN_00473afc(*(undefined4 *)(this + 0x4d0),*(undefined4 *)(this + 0xa8));
            iVar3 = local_28[6] - local_28[4];
            piVar2 = (int *)FUN_00489126(*(int *)(this + 0xb0) + *(int *)(this + 0xa8));
            *piVar2 = iVar3;
            local_34 = *(int *)(this + 0xa8);
            goto LAB_00477b96;
          }
          local_28[6] = local_28[6] + 0x10;
          iVar3 = local_28[6] - local_28[4];
        }
        if (*(int *)(this + 0x4d0) == 0) {
          FUN_00473afc(*(undefined4 *)(this + 0x4d0),0x7fff);
        }
LAB_00477b96:
        local_2c = local_2c + 1;
      } while (local_2c < 4);
    }
    else {
      local_28[4] = 0;
      local_28[5] = 0;
      local_28[6] = (local_28[2] - local_28[0]) + -10;
      local_28[7] = param_2;
      pcVar1 = *(code **)(*(int *)this + 0xec);
      guard_check_icall(local_30,local_28 + 4);
      (*pcVar1)();
      FUN_00473afc(*(undefined4 *)(this + 0x4d0),*(undefined4 *)(this + 0xa8));
    }
  }
  else {
    local_28[4] = 0;
    local_28[5] = 0;
    local_28[6] = 0x7fff;
    local_28[7] = param_2;
    do {
      pcVar1 = *(code **)(*(int *)this + 0xec);
      guard_check_icall(local_30,local_28 + 4);
      (*pcVar1)();
      if (*(int *)(this + 0x60) == 0) break;
      if ((local_34 == -1) || (*(int *)(this + 0xa8) < local_34)) {
        iVar3 = *(int *)(this + 0xa8);
        local_34 = iVar3;
        if ((iVar3 <= local_38) || ((iVar3 <= (local_38 * 3) / 2 && (*(int *)(this + 0x4e4) == 1))))
        {
          if (*(int *)(this + 0x4d0) == 0) goto LAB_00477ba9;
          break;
        }
        FUN_00473afc(*(undefined4 *)(this + 0x4d0),iVar3);
        local_28[6] = iVar3;
      }
      local_28[6] = local_28[6] + -0x10;
    } while (*(int *)(this + 0xb0) * 2 < local_28[6] - local_28[4]);
  }
  iVar3 = local_38;
LAB_00477ba9:
  FUN_00473afc(*(undefined4 *)(this + 0x4d0),iVar3);
  *(undefined4 *)(this + 0x6c) = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

