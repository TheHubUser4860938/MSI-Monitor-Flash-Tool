// rea decompile_all
// name: CMFCToolBar::DrawButton
// address: 0x1005e4eb
// body: available
// range: 0x1005e4eb-0x1005e5ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCToolBar::DrawButton(class CDC *,class CMFCToolBarButton
   *,class CMFCToolBarImages *,int,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCToolBar::DrawButton
          (CMFCToolBar *this,CDC *param_1,CMFCToolBarButton *param_2,CMFCToolBarImages *param_3,
          int param_4,int param_5)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  CMFCToolBarButton *pCVar6;
  
  uVar5 = 0;
  if ((*(int *)(param_2 + 0x50) != 0) && (*(int *)(param_2 + 0x40) == 0)) {
    pCVar6 = param_2 + 0x54;
    pcVar1 = *(code **)(*(int *)param_1 + 0x58);
    guard_check_icall(pCVar6);
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      pcVar1 = *(code **)(*(int *)this + 0x194);
      guard_check_icall(pCVar6);
      uVar3 = (*pcVar1)();
      if ((*(int *)(this + 0xbc0) == 0) || (param_5 != 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      if (((DAT_101daf90 != 0) && (DAT_101daf94 == 0)) && (*(int *)(this + 0xb78) == 0)) {
        uVar5 = 1;
      }
      iVar2 = *(int *)param_2;
      guard_check_icall(param_1,param_2 + 0x54,param_3,(uVar3 & 0xa000) != 0,uVar5,param_4,
                        *(undefined4 *)(this + 0xbbc),uVar4);
      (**(code **)(iVar2 + 0x18))();
    }
  }
  return 1;
}

