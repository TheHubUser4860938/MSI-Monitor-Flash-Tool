// rea decompile_all
// name: CMFCControlRenderer::Create
// address: 0x10136e6b
// body: available
// range: 0x10136e6b-0x10137039 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCControlRenderer::Create(class CMFCControlRendererInfo const
   &,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCControlRenderer::Create(CMFCControlRenderer *this,CMFCControlRendererInfo *param_1,int param_2)

{
  CMFCToolBarImages *this_00;
  code *pcVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined1 local_1c [18];
  short sStack_a;
  
  pcVar1 = *(code **)(*(int *)this + 0x28);
  guard_check_icall();
  (*pcVar1)();
  CMFCControlRendererInfo::operator=((CMFCControlRendererInfo *)(this + 0x120),param_1);
  pcVar3 = (char *)GetResourceID();
  if (pcVar3 != (char *)0x0) {
    this_00 = (CMFCToolBarImages *)(this + 8);
    *(int *)(this + 0x60) = *(int *)(this + 0x134) - *(int *)(this + 300);
    *(int *)(this + 0x5c) = *(int *)(this + 0x130) - *(int *)(this + 0x128);
    *(undefined4 *)(this + 0x44) = *(undefined4 *)(this + 0x16c);
    *(undefined4 *)(this + 0x3c) = 0;
    CMFCToolBarImages::LoadStr(this_00,pcVar3,(HINSTANCE__ *)0x0,0);
    if (param_2 != 0) {
      CMFCToolBarImages::MirrorVert(this_00);
    }
    if (*(ulong *)(this + 0x168) != 0xff000000) {
      CMFCToolBarImages::SetTransparentColor(this_00,*(ulong *)(this + 0x168));
    }
    if (((DAT_1020e43c != 0) && (*(HANDLE *)(this + 0x94) != (HANDLE)0x0)) &&
       (*(int *)(this + 0x168) == -0x1000000)) {
      iVar4 = GetObjectW(*(HANDLE *)(this + 0x94),0x18,local_1c);
      if ((iVar4 != 0) && (sStack_a == 0x20)) {
        pcVar1 = *(code **)(*(int *)this + 0x24);
        guard_check_icall();
        (*pcVar1)();
      }
    }
    iVar4 = CRect::IsRectNull((CRect *)(this + 0x148));
    if (iVar4 != 0) {
      *(undefined4 *)(this + 0x148) = *(undefined4 *)(this + 0x138);
      *(undefined4 *)(this + 0x14c) = *(undefined4 *)(this + 0x13c);
      *(undefined4 *)(this + 0x150) = *(undefined4 *)(this + 0x140);
      *(undefined4 *)(this + 0x154) = *(undefined4 *)(this + 0x144);
    }
    iVar4 = CRect::IsRectNull((CRect *)(this + 0x158));
    if (iVar4 != 0) {
      *(undefined4 *)(this + 0x158) = 0;
      *(undefined4 *)(this + 0x15c) = 0;
      *(int *)(this + 0x160) = *(int *)(this + 0x130) - *(int *)(this + 0x128);
      *(int *)(this + 0x164) = *(int *)(this + 0x134) - *(int *)(this + 300);
      *(int *)(this + 0x158) = *(int *)(this + 0x158) + *(int *)(this + 0x138);
      *(int *)(this + 0x15c) = *(int *)(this + 0x15c) + *(int *)(this + 0x13c);
      *(int *)(this + 0x160) = *(int *)(this + 0x160) - *(int *)(this + 0x140);
      *(int *)(this + 0x164) = *(int *)(this + 0x164) - *(int *)(this + 0x144);
    }
    if (param_2 != 0) {
      uVar2 = *(undefined4 *)(this + 0x13c);
      *(undefined4 *)(this + 0x13c) = *(undefined4 *)(this + 0x144);
      *(undefined4 *)(this + 0x144) = uVar2;
      uVar2 = *(undefined4 *)(this + 0x14c);
      *(undefined4 *)(this + 0x14c) = *(undefined4 *)(this + 0x154);
      *(undefined4 *)(this + 0x154) = uVar2;
      iVar4 = *(int *)(this + 0x15c);
      *(int *)(this + 0x15c) =
           (*(int *)(this + 0x134) - *(int *)(this + 300)) - *(int *)(this + 0x164);
      *(int *)(this + 0x164) = (*(int *)(this + 0x134) - *(int *)(this + 300)) - iVar4;
    }
  }
  return 1;
}

