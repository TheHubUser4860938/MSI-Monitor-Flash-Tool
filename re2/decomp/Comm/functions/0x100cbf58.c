// rea decompile_all
// name: FUN_100cbf58
// address: 0x100cbf58
// body: available
// range: 0x100cbf58-0x100cc32d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_100cbf58(CDC *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  CObject *pCVar1;
  double dVar2;
  code *pcVar3;
  CObject *pCVar4;
  CObject *pCVar5;
  AFX_GLOBAL_DATA *pAVar6;
  CWnd *this;
  ulong uVar7;
  HDC hdc;
  HICON__ *in_ECX;
  double *pdVar8;
  undefined4 *puVar9;
  UINT diFlags;
  undefined1 local_184 [12];
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 local_140;
  CDC *local_138;
  int local_134;
  HICON__ *local_130;
  CMFCToolBarImages local_12c [84];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x174;
  local_8 = 0x100cbf67;
  local_138 = param_1;
  local_130 = in_ECX;
  pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonButton_101963ec,
                              (CObject *)in_ECX[0x23].unused);
  local_140._4_4_ = pCVar5;
  if (pCVar5 == (CObject *)0x0) {
    if ((HICON__ *)in_ECX[0x57].unused == (HICON__ *)0x0) {
      local_130 = (HICON__ *)in_ECX[0x24].unused;
      if ((local_130 == (HICON__ *)0x0) || (local_130[0x49].unused < 1)) {
        local_130 = (HICON__ *)in_ECX[0x22].unused;
        if ((local_130 != (HICON__ *)0x0) && ((param_5 != param_3 && (param_6 != param_4)))) {
          pcVar3 = *(code **)(local_130->unused + 0xd0);
          guard_check_icall(local_138,param_3,param_4,param_5,param_6);
          (*pcVar3)();
        }
      }
      else {
        pcVar3 = *(code **)(local_130->unused + 0x24c);
        guard_check_icall(local_138,param_3,param_4,param_5,param_6);
        (*pcVar3)();
      }
    }
    else {
      if ((param_2 == 0) ||
         (local_130 = (HICON__ *)in_ECX[0x58].unused,
         (HICON__ *)in_ECX[0x58].unused == (HICON__ *)0x0)) {
        local_130 = (HICON__ *)in_ECX[0x57].unused;
      }
      if (param_2 == 0) {
        local_150 = 0x20;
        pdVar8 = (double *)&local_150;
        local_14c = 0x20;
      }
      else {
        local_158 = 0x10;
        pdVar8 = (double *)&local_158;
        local_154 = 0x10;
      }
      local_140._4_4_ = *(CObject **)pdVar8;
      local_148 = (double)CONCAT44(local_148._4_4_,local_140._4_4_);
      local_134 = *(int *)((int)pdVar8 + 4);
      local_148 = *pdVar8;
      pAVar6 = GetGlobalData();
      local_160 = 0x3ff0000000000000;
      if (*(int *)(pAVar6 + 0x1e8) == 0) {
        dVar2 = 1.0;
      }
      else {
        dVar2 = *(double *)(pAVar6 + 0x1e0);
      }
      if (dVar2 != 1.0) {
        GetGlobalData();
        local_140 = (double)(int)local_148;
        pCVar5 = (CObject *)FUN_10149490();
        local_140._4_4_ = pCVar5;
        pAVar6 = GetGlobalData();
        if (*(int *)(pAVar6 + 0x1e8) != 0) {
          local_160 = *(undefined8 *)(pAVar6 + 0x1e0);
        }
        local_148 = (double)local_148._4_4_;
        local_134 = FUN_10149490();
      }
      if (in_ECX[0x35].unused == 0) {
        pcVar3 = *(code **)(in_ECX->unused + 0xa4);
        guard_check_icall();
        this = (CWnd *)(*pcVar3)();
        if ((this == (CWnd *)0x0) || (uVar7 = CWnd::GetExStyle(this), (uVar7 & 0x400000) == 0)) {
          diFlags = 3;
        }
        else {
          diFlags = 0x13;
        }
        hdc = (HDC)0x0;
        if (local_138 != (CDC *)0x0) {
          hdc = *(HDC *)(local_138 + 4);
        }
        DrawIconEx(hdc,param_3,param_4,local_130,(int)local_140._4_4_,local_134,0,(HBRUSH)0x0,
                   diFlags);
      }
      else {
        CMFCToolBarImages::CMFCToolBarImages(local_12c);
        local_8 = 0;
        if (param_2 == 0) {
          local_168 = 0x20;
          puVar9 = &local_168;
          local_164 = 0x20;
        }
        else {
          local_170 = 0x10;
          puVar9 = &local_170;
          local_16c = 0x10;
        }
        local_d8 = *puVar9;
        local_d4 = puVar9[1];
        CMFCToolBarImages::AddIcon(local_12c,local_130,in_ECX[0x60].unused);
        CMFCToolBarImages::PrepareDrawImage(local_12c,local_184,local_140._4_4_,local_134,0);
        CMFCToolBarImages::Draw(local_12c,param_1,param_3,param_4,0,0,1,0,0,0,0xff);
        FUN_10050819(local_184);
        CMFCToolBarImages::~CMFCToolBarImages(local_12c);
      }
    }
  }
  else {
    local_134 = *(int *)(pCVar5 + 0xd4);
    pCVar1 = pCVar5 + 0x74;
    *(int *)(pCVar5 + 0xd4) = in_ECX[0x35].unused;
    local_178 = *(undefined4 *)pCVar1;
    uStack_174 = *(undefined4 *)(pCVar5 + 0x78);
    local_170 = *(undefined4 *)(pCVar5 + 0x7c);
    local_16c = *(undefined4 *)(pCVar5 + 0x80);
    *(int *)pCVar1 = local_130[0x1d].unused;
    *(int *)(pCVar5 + 0x78) = local_130[0x1e].unused;
    *(int *)(pCVar5 + 0x7c) = local_130[0x1f].unused;
    *(int *)(pCVar5 + 0x80) = local_130[0x20].unused;
    pcVar3 = *(code **)(*(int *)pCVar5 + 0x120);
    guard_check_icall(local_138,param_2,param_3,param_4,param_5,param_6);
    pCVar4 = local_140._4_4_;
    (*pcVar3)();
    *(int *)(pCVar4 + 0xd4) = local_134;
    *(undefined4 *)pCVar1 = local_178;
    *(undefined4 *)(pCVar5 + 0x78) = uStack_174;
    *(undefined4 *)(pCVar5 + 0x7c) = local_170;
    *(undefined4 *)(pCVar5 + 0x80) = local_16c;
  }
  FUN_101490fe();
  return;
}

