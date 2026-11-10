// rea decompile_all
// name: CMFCToolTipCtrl::OnDrawIcon
// address: 0x1010d8d8
// body: available
// range: 0x1010d8d8-0x1010da19 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCToolTipCtrl::OnDrawIcon(class CDC *,class CRect)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCToolTipCtrl::OnDrawIcon
          (CMFCToolTipCtrl *this,CDC *param_1,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 local_1c [12];
  CDC *local_10;
  undefined4 local_c;
  CMFCToolTipCtrl *local_8;
  
  iVar1 = *(int *)(this + 0xac);
  local_10 = param_1;
  local_8 = this;
  if (iVar1 == 0) {
    if ((*(int *)(this + 0xa8) == 0) ||
       (*(CMFCToolBarImages **)(this + 0xa4) == (CMFCToolBarImages *)0x0)) {
      return 0;
    }
    CMFCToolBarImages::PrepareDrawImage(*(CMFCToolBarImages **)(this + 0xa4),local_1c,0,0,0);
    local_c = DAT_10209cf8;
    iVar1 = *(int *)(local_8 + 0xa8);
    uVar3 = *(undefined4 *)(iVar1 + 0x24);
    uVar4 = *(undefined4 *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    DAT_10209cf8 = 0;
    *(undefined4 *)(*(int *)(local_8 + 0xa8) + 8) = 0;
    *(undefined4 *)(*(int *)(local_8 + 0xa8) + 0xc) = 1;
    *(undefined4 *)(*(int *)(local_8 + 0xa8) + 0x24) = 0;
    CMFCToolBarButton::OnDraw
              (*(CMFCToolBarButton **)(local_8 + 0xa8),local_10,(CRect *)&param_3,
               *(CMFCToolBarImages **)(local_8 + 0xa4),1,0,0,1,1);
    *(undefined4 *)(*(int *)(local_8 + 0xa8) + 0x24) = uVar3;
    *(undefined4 *)(*(int *)(local_8 + 0xa8) + 8) = uVar4;
    *(undefined4 *)(*(int *)(local_8 + 0xa8) + 0xc) = uVar5;
    DAT_10209cf8 = local_c;
    FUN_1005bd4d(local_1c);
  }
  else {
    local_c = *(undefined4 *)(iVar1 + 0xd4);
    *(undefined4 *)(iVar1 + 0xd4) = 0;
    pcVar2 = *(code **)(**(int **)(this + 0xac) + 0x120);
    guard_check_icall(param_1,*(undefined4 *)(this + 0xe4),param_3,param_4,param_5,param_6);
    (*pcVar2)();
    *(undefined4 *)(*(int *)(local_8 + 0xac) + 0xd4) = local_c;
  }
  return 1;
}

