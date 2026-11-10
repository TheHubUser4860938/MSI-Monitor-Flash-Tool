// rea decompile_all
// name: CMFCShadowRenderer::Create
// address: 0x10137f5c
// body: available
// range: 0x10137f5c-0x1013808b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCShadowRenderer::Create(int,unsigned long,int,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCShadowRenderer::Create
          (CMFCShadowRenderer *this,int param_1,ulong param_2,int param_3,int param_4)

{
  int iVar1;
  code *pcVar2;
  HBITMAP__ *ho;
  uint uVar3;
  int iVar4;
  CMFCShadowRenderer *pCVar5;
  
  pcVar2 = *(code **)(*(int *)this + 0x28);
  guard_check_icall();
  (*pcVar2)();
  ho = (HBITMAP__ *)FUN_100b43c8(param_1,param_2,param_3,param_4);
  uVar3 = 0;
  if (ho != (HBITMAP__ *)0x0) {
    iVar4 = 3;
    if (2 < param_1) {
      iVar4 = param_1;
    }
    iVar1 = iVar4 * 2 + 1;
    pCVar5 = this + 0x128;
    *(int *)pCVar5 = 0;
    *(undefined4 *)(this + 300) = 0;
    *(int *)(this + 0x130) = iVar1;
    *(int *)(this + 0x134) = iVar1;
    *(int *)(this + 0x138) = iVar4;
    *(int *)(this + 0x13c) = iVar4;
    *(int *)(this + 0x140) = iVar4;
    *(int *)(this + 0x144) = iVar4;
    *(int *)(this + 0x148) = iVar4;
    *(int *)(this + 0x14c) = iVar4;
    *(int *)(this + 0x150) = iVar4;
    *(int *)(this + 0x154) = iVar4;
    *(undefined4 *)(this + 0x158) = 0;
    *(undefined4 *)(this + 0x15c) = 0;
    *(int *)(this + 0x160) = *(int *)(this + 0x130) - *(int *)pCVar5;
    *(int *)(this + 0x164) = *(int *)(this + 0x134) - *(int *)(this + 300);
    *(int *)(this + 0x158) = *(int *)(this + 0x158) + *(int *)(this + 0x138);
    *(int *)(this + 0x15c) = *(int *)(this + 0x15c) + *(int *)(this + 0x13c);
    *(int *)(this + 0x160) = *(int *)(this + 0x160) - *(int *)(this + 0x140);
    *(int *)(this + 0x164) = *(int *)(this + 0x164) - *(int *)(this + 0x144);
    *(int *)(this + 0x5c) = *(int *)(this + 0x130) - *(int *)pCVar5;
    *(int *)(this + 0x60) = *(int *)(this + 0x134) - *(int *)(this + 300);
    *(undefined4 *)(this + 0x3c) = 0;
    *(undefined4 *)(this + 0x44) = *(undefined4 *)(this + 0x16c);
    CMFCToolBarImages::AddImage((CMFCToolBarImages *)(this + 8),ho,1);
    DeleteObject(ho);
    uVar3 = (uint)(*(int *)(this + 0xc) == 1);
  }
  return uVar3;
}

