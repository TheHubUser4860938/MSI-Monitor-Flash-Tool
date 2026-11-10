// rea decompile_all
// name: CMFCRibbonUndoButton::OnDrawPaletteIcon
// address: 0x10131ca5
// body: available
// range: 0x10131ca5-0x10131dbc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCRibbonUndoButton::OnDrawPaletteIcon(class CDC *,class
   CRect,int,class CMFCRibbonGalleryIcon *,unsigned long)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCRibbonUndoButton::OnDrawPaletteIcon
          (CMFCRibbonUndoButton *this,int *param_1,LONG param_3,LONG param_4,LONG param_5,
          LONG param_6,int param_7,int *param_8,int param_9)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  iVar1 = param_8[0x36];
  param_8[0x36] = 0;
  iVar2 = param_8[0x32];
  param_8[0x32] = (uint)(param_7 < *(int *)(this + 0x378));
  pcVar3 = *(code **)(*param_8 + 0x270);
  guard_check_icall(param_1);
  (*pcVar3)();
  local_18.left = param_3;
  local_18.top = param_4;
  local_18.right = param_5;
  local_18.bottom = param_6;
  InflateRect(&local_18,-5,0);
  uVar6 = 0xffffffff;
  if (param_9 != -1) {
    pcVar3 = *(code **)(*param_1 + 0x30);
    guard_check_icall(param_9);
    uVar6 = (*pcVar3)();
  }
  piVar5 = (int *)FUN_100d7168(param_7);
  iVar4 = *param_1;
  guard_check_icall(*piVar5,*(undefined4 *)(*piVar5 + -0xc),&local_18,0x24);
  (**(code **)(iVar4 + 0x68))();
  if (param_9 != -1) {
    pcVar3 = *(code **)(*param_1 + 0x30);
    guard_check_icall(uVar6);
    (*pcVar3)();
  }
  pcVar3 = *(code **)(*param_8 + 0x274);
  guard_check_icall(param_1);
  (*pcVar3)();
  param_8[0x36] = iVar1;
  param_8[0x32] = iVar2;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

