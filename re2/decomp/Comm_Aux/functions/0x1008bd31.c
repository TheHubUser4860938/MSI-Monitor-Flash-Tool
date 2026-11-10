// rea decompile_all
// name: CMFCVisualManager::OnDrawPaneDivider
// address: 0x1008bd31
// body: available
// range: 0x1008bd31-0x1008be4c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawPaneDivider(class CDC *,class
   CPaneDivider *,class CRect,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManager::OnDrawPaneDivider
          (CMFCVisualManager *this,CDC *param_1,CWnd *param_2,int param_4,LONG param_5,int param_6,
          LONG param_7,int param_8)

{
  int iVar1;
  code *pcVar2;
  AFX_GLOBAL_DATA *pAVar3;
  uint uVar4;
  ulong uVar5;
  CDC *pCVar6;
  CWnd *pCVar7;
  LONG LVar8;
  LONG LVar9;
  int iVar10;
  LONG LVar11;
  int iVar12;
  LONG LVar13;
  int iVar14;
  LONG LVar15;
  undefined4 uVar16;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  pAVar3 = GetGlobalData();
  local_28.left = *(LONG *)(pAVar3 + 0x16c);
  local_28.top = *(LONG *)(pAVar3 + 0x170);
  local_28.right = *(LONG *)(pAVar3 + 0x174);
  local_28.bottom = *(LONG *)(pAVar3 + 0x178);
  CWnd::ScreenToClient(param_2,&local_28);
  local_18.left = param_4;
  local_18.top = param_5;
  local_18.right = param_6;
  local_18.bottom = param_7;
  if (local_28.left <= param_4) {
    local_18.left = local_28.left;
  }
  uVar16 = 0;
  iVar1 = *(int *)this;
  pCVar6 = param_1;
  pCVar7 = param_2;
  LVar8 = local_18.left;
  LVar9 = param_5;
  iVar10 = param_6;
  LVar11 = param_7;
  iVar12 = param_4;
  LVar13 = param_5;
  iVar14 = param_6;
  LVar15 = param_7;
  guard_check_icall(param_1,param_2,local_18.left,param_5,param_6,param_7,param_4,param_5,param_6,
                    param_7,0);
  (**(code **)(iVar1 + 0x34))();
  if (param_8 == 0) goto LAB_1008be3a;
  pcVar2 = *(code **)(*(int *)param_2 + 0x194);
  guard_check_icall(pCVar6,pCVar7,LVar8,LVar9,iVar10,LVar11,iVar12,LVar13,iVar14,LVar15,uVar16);
  uVar4 = (*pcVar2)();
  local_18.left = param_4;
  local_18.top = param_5;
  local_18.right = param_6;
  local_18.bottom = param_7;
  pAVar3 = GetGlobalData();
  uVar5 = *(ulong *)(pAVar3 + 0x60);
  if ((uVar4 & 0x1000) == 0) {
    if ((uVar4 & 0x4000) == 0) {
      if ((uVar4 & 0x2000) != 0) {
        local_18.top = local_18.bottom;
        goto LAB_1008be2c;
      }
      if ((uVar4 & 0x8000) == 0) goto LAB_1008be3a;
      local_18.bottom = local_18.top;
    }
    else {
      local_18.right = local_18.left;
    }
    pAVar3 = GetGlobalData();
    uVar5 = *(ulong *)(pAVar3 + 0x5c);
  }
  else {
    local_18.left = local_18.right;
  }
LAB_1008be2c:
  CDC::Draw3dRect(param_1,&local_18,uVar5,uVar5);
LAB_1008be3a:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

