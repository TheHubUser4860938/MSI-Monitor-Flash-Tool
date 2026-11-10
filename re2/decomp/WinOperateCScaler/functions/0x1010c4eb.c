// rea decompile_all
// name: CMFCControlRenderer::DrawFrame
// address: 0x1010c4eb
// body: available
// range: 0x1010c4eb-0x1010c9be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCControlRenderer::DrawFrame(class CDC *,class CRect,unsigned
   int,unsigned char)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCControlRenderer::DrawFrame
          (CMFCControlRenderer *this,undefined4 param_1,int param_3,int param_4,int param_5,
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
  int iVar10;
  int iVar11;
  int iVar12;
  int local_28;
  int local_24;
  int local_20;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  local_18.left = *(LONG *)(this + 0x128);
  local_18.top = *(LONG *)(this + 300);
  local_18.right = *(LONG *)(this + 0x130);
  local_18.bottom = *(LONG *)(this + 0x134);
  if (*(int *)(this + 0xc) == 1) {
    OffsetRect(&local_18,0,(*(int *)(this + 0x134) - *(int *)(this + 300)) * param_7);
    param_7 = 0;
  }
  iVar9 = *(int *)(this + 0x138);
  iVar8 = *(int *)(this + 0x13c);
  iVar1 = *(int *)(this + 0x140);
  iVar2 = *(int *)(this + 0x144);
  iVar6 = iVar9 + param_3;
  iVar10 = param_6 - iVar2;
  iVar7 = *(int *)(this + 0x148);
  iVar3 = *(int *)(this + 0x14c);
  iVar4 = *(int *)(this + 0x150);
  iVar5 = *(int *)(this + 0x154);
  iVar12 = param_5 - iVar1;
  iVar11 = param_4 + iVar8;
  if ((0 < iVar12 - iVar6) || (iVar10 != iVar11 && -1 < iVar10 - iVar11)) {
    if (iVar10 != iVar11 && -1 < iVar10 - iVar11) {
      if (0 < iVar7) {
        if (*(int *)(this + 0x170) == 0) {
          local_20 = local_18.left + iVar7;
          local_28 = local_18.left;
        }
        else {
          local_28 = local_18.right - iVar7;
          local_20 = local_18.right;
        }
        local_24 = local_18.top + iVar8;
        CMFCToolBarImages::DrawEx
                  ((CMFCToolBarImages *)(this + 8),param_1,param_3,iVar11,param_3 + iVar7,iVar10,
                   param_7,0,3,local_28,local_24,local_20,local_18.bottom - iVar2,param_8);
      }
      if (0 < iVar4) {
        if (*(int *)(this + 0x170) == 0) {
          local_28 = local_18.right - iVar4;
          local_20 = local_18.right;
        }
        else {
          local_20 = iVar4 + local_18.left;
          local_28 = local_18.left;
        }
        local_24 = local_18.top + iVar8;
        CMFCToolBarImages::DrawEx
                  ((CMFCToolBarImages *)(this + 8),param_1,param_5 - iVar4,iVar11,param_5,iVar10,
                   param_7,2,3,local_28,local_24,local_20,local_18.bottom - iVar2,param_8);
      }
    }
    if (0 < iVar12 - iVar6) {
      if (0 < iVar3) {
        iVar7 = iVar1;
        local_28 = iVar9;
        if (*(int *)(this + 0x170) != 0) {
          iVar7 = iVar9;
          local_28 = iVar1;
        }
        local_28 = local_18.left + local_28;
        CMFCToolBarImages::DrawEx
                  ((CMFCToolBarImages *)(this + 8),param_1,iVar6,param_4,iVar12,param_4 + iVar3,
                   param_7,3,0,local_28,local_18.top,local_18.right - iVar7,iVar3 + local_18.top,
                   param_8);
      }
      if (0 < iVar5) {
        iVar7 = iVar1;
        local_28 = iVar9;
        if (*(int *)(this + 0x170) != 0) {
          iVar7 = iVar9;
          local_28 = iVar1;
        }
        local_24 = local_18.bottom - iVar5;
        local_28 = local_18.left + local_28;
        CMFCToolBarImages::DrawEx
                  ((CMFCToolBarImages *)(this + 8),param_1,iVar6,param_6 - iVar5,iVar12,param_6,
                   param_7,3,2,local_28,local_24,local_18.right - iVar7,local_18.bottom,param_8);
      }
    }
    if ((0 < iVar9) && (0 < iVar8)) {
      iVar7 = local_18.left;
      if (*(int *)(this + 0x170) != 0) {
        iVar7 = local_18.right - iVar9;
      }
      CMFCToolBarImages::DrawEx
                ((CMFCToolBarImages *)(this + 8),param_1,param_3,param_4,param_5,param_6,param_7,0,0
                 ,iVar7,local_18.top,iVar7 + iVar9,local_18.top + iVar8,param_8);
    }
    if ((0 < iVar1) && (0 < iVar8)) {
      iVar7 = local_18.left;
      if (*(int *)(this + 0x170) == 0) {
        iVar7 = local_18.right - iVar1;
      }
      CMFCToolBarImages::DrawEx
                ((CMFCToolBarImages *)(this + 8),param_1,param_3,param_4,param_5,param_6,param_7,2,0
                 ,iVar7,local_18.top,iVar7 + iVar1,local_18.top + iVar8,param_8);
    }
    if ((0 < iVar9) && (0 < iVar2)) {
      iVar8 = local_18.left;
      if (*(int *)(this + 0x170) != 0) {
        iVar8 = local_18.right - iVar9;
      }
      CMFCToolBarImages::DrawEx
                ((CMFCToolBarImages *)(this + 8),param_1,param_3,param_4,param_5,param_6,param_7,0,2
                 ,iVar8,local_18.bottom - iVar2,iVar8 + iVar9,iVar2 + (local_18.bottom - iVar2),
                 param_8);
    }
    if ((0 < iVar1) && (0 < iVar2)) {
      iVar9 = local_18.left;
      if (*(int *)(this + 0x170) == 0) {
        iVar9 = local_18.right - iVar1;
      }
      CMFCToolBarImages::DrawEx
                ((CMFCToolBarImages *)(this + 8),param_1,param_3,param_4,param_5,param_6,param_7,2,2
                 ,iVar9,local_18.bottom - iVar2,iVar9 + iVar1,(local_18.bottom - iVar2) + iVar2,
                 param_8);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

