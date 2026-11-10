// rea decompile_all
// name: CMFCControlRenderer::FillInterior
// address: 0x10137b48
// body: available
// range: 0x10137b48-0x10137c28 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCControlRenderer::FillInterior(class CDC *,class CRect,enum
   CMFCToolBarImages::ImageAlignHorz,enum CMFCToolBarImages::ImageAlignVert,unsigned int,unsigned
   char)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCControlRenderer::FillInterior
          (CMFCControlRenderer *this,undefined4 param_1,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,
          undefined4 param_10)

{
  BOOL BVar1;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  BVar1 = IsRectEmpty((RECT *)(this + 0x158));
  if (BVar1 == 0) {
    local_18.left = ((RECT *)(this + 0x158))->left;
    local_18.top = *(LONG *)(this + 0x15c);
    local_18.right = *(LONG *)(this + 0x160);
    local_18.bottom = *(LONG *)(this + 0x164);
    if (*(int *)(this + 0x170) != 0) {
      local_18.left = (*(int *)(this + 0x130) - *(int *)(this + 0x160)) - *(int *)(this + 0x128);
      local_18.right = (*(int *)(this + 0x160) - *(int *)(this + 0x158)) + local_18.left;
    }
    OffsetRect(&local_18,*(int *)(this + 0x128),*(int *)(this + 300));
    if (*(int *)(this + 0xc) == 1) {
      OffsetRect(&local_18,0,(*(int *)(this + 0x134) - *(int *)(this + 300)) * param_9);
      param_9 = 0;
    }
    CMFCToolBarImages::DrawEx
              ((CMFCToolBarImages *)(this + 8),param_1,param_3,param_4,param_5,param_6,param_9,
               param_7,param_8,local_18.left,local_18.top,local_18.right,local_18.bottom,param_10);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

