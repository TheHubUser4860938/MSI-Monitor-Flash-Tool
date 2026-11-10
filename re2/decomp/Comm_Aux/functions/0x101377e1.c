// rea decompile_all
// name: CMFCShadowRenderer::DrawFrame
// address: 0x101377e1
// body: available
// range: 0x101377e1-0x10137b09 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCShadowRenderer::DrawFrame(class CDC *,class CRect,unsigned
   int,unsigned char)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCShadowRenderer::DrawFrame
          (CMFCShadowRenderer *this,undefined4 param_1,int param_3,int param_4,int param_5,
          int param_6,int param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int local_54;
  int local_4c;
  int local_28;
  int local_24;
  int local_20;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  local_18.left = *(LONG *)(this + 0x128);
  local_18.top = *(LONG *)(this + 300);
  local_18.right = *(LONG *)(this + 0x130);
  local_18.bottom = *(LONG *)(this + 0x134);
  if (*(int *)(this + 0xc) == 1) {
    OffsetRect(&local_18,0,(*(int *)(this + 0x134) - *(int *)(this + 300)) * param_7);
    param_7 = 0;
  }
  iVar6 = DAT_1020e43c;
  iVar1 = *(int *)(this + 0x138);
  iVar2 = *(int *)(this + 0x13c);
  iVar3 = *(int *)(this + 0x140);
  iVar4 = *(int *)(this + 0x144);
  iVar7 = param_6 - iVar4;
  local_20 = *(int *)(this + 0x148);
  local_28 = *(int *)(this + 0x150);
  iVar5 = *(int *)(this + 0x154);
  iVar8 = param_4 + iVar2;
  iVar9 = (param_5 - iVar3) - (iVar1 + param_3);
  if ((iVar9 < 1) && (iVar7 == iVar8 || iVar7 - iVar8 < 0)) goto LAB_10137af7;
  if (iVar7 != iVar8 && -1 < iVar7 - iVar8) {
    if (DAT_1020e43c == 0) {
      if (0 < local_28) {
        local_20 = local_18.right;
        local_4c = param_5;
        local_54 = param_5 - local_28;
        local_28 = local_18.right - local_28;
        uVar10 = 2;
        goto LAB_1013792a;
      }
    }
    else if (0 < local_20) {
      local_4c = local_20 + param_3;
      local_54 = param_3;
      local_20 = local_20 + local_18.left;
      local_28 = local_18.left;
      uVar10 = 0;
LAB_1013792a:
      local_24 = local_18.top + iVar2;
      CMFCToolBarImages::DrawEx
                ((CMFCToolBarImages *)(this + 8),param_1,local_54,iVar8,local_4c,iVar7,param_7,
                 uVar10,3,local_28,local_24,local_20,local_18.bottom - iVar4,param_8);
    }
  }
  if ((0 < iVar9) && (0 < iVar5)) {
    CMFCToolBarImages::DrawEx
              ((CMFCToolBarImages *)(this + 8),param_1,iVar1 + param_3,param_6 - iVar5,
               param_5 - iVar3,param_6,param_7,3,2,local_18.left + iVar1,local_18.bottom - iVar5,
               local_18.right - iVar3,local_18.bottom,param_8);
  }
  if (iVar6 == 0) {
    if ((0 < iVar3) && (0 < iVar2)) {
      local_28 = local_18.right - iVar3;
      local_20 = local_28 + iVar3;
      uVar10 = 2;
LAB_10137a29:
      CMFCToolBarImages::DrawEx
                ((CMFCToolBarImages *)(this + 8),param_1,param_3,param_4,param_5,param_6,param_7,
                 uVar10,0,local_28,local_18.top,local_20,local_18.top + iVar2,param_8);
    }
LAB_10137a4d:
    if ((0 < iVar1) && (0 < iVar4)) {
      CMFCToolBarImages::DrawEx
                ((CMFCToolBarImages *)(this + 8),param_1,param_3,param_4,param_5,param_6,param_7,0,2
                 ,local_18.left,local_18.bottom - iVar4,local_18.left + iVar1,
                 (local_18.bottom - iVar4) + iVar4,param_8);
    }
  }
  else if (0 < iVar1) {
    if (0 < iVar2) {
      local_28 = local_18.left;
      local_20 = local_18.left + iVar1;
      uVar10 = 0;
      goto LAB_10137a29;
    }
    goto LAB_10137a4d;
  }
  if ((0 < iVar3) && (0 < iVar4)) {
    CMFCToolBarImages::DrawEx
              ((CMFCToolBarImages *)(this + 8),param_1,param_3,param_4,param_5,param_6,param_7,2,2,
               local_18.right - iVar3,local_18.bottom - iVar4,(local_18.right - iVar3) + iVar3,
               (local_18.bottom - iVar4) + iVar4,param_8);
  }
LAB_10137af7:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

