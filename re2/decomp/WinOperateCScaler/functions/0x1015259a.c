// rea decompile_all
// name: CPreviewView::PositionPage
// address: 0x1015259a
// body: available
// range: 0x1015259a-0x10152666 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CPreviewView::PositionPage(unsigned int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPreviewView::PositionPage(CPreviewView *this,uint param_1)

{
  int iVar1;
  code *pcVar2;
  CPreviewView *pCVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 local_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  CPreviewView *local_8;
  
  local_8 = this;
  CalcPageDisplaySize(this);
  iVar6 = param_1 * 0x28;
  iVar1 = *(int *)(this + 0xc4);
  guard_check_icall(0xc,0,0,*(int *)(local_8 + 0xe0) + 0x10 + iVar6);
  (**(code **)(iVar1 + 0x74))();
  pCVar3 = local_8;
  iVar1 = *(int *)(local_8 + 0xe0);
  iVar4 = MulDiv(*(int *)(iVar6 + 0x10 + iVar1),DAT_10207838,*(int *)(local_8 + 0x154));
  *(int *)(iVar6 + 0x10 + iVar1) = iVar4;
  iVar4 = MulDiv(*(int *)(iVar6 + 0x14 + iVar1),DAT_1020783c,*(int *)(pCVar3 + 0x158));
  *(int *)(iVar6 + 0x14 + iVar1) = iVar4;
  pcVar2 = *(code **)(*(int *)pCVar3 + 0x1b8);
  guard_check_icall(local_18,local_10,local_c,*(undefined4 *)(iVar6 + 0x10 + iVar1),iVar4);
  pCVar3 = local_8;
  puVar5 = (undefined4 *)(*pcVar2)();
  iVar1 = *(int *)(pCVar3 + 0xe0);
  *(undefined4 *)(iVar6 + 0x20 + iVar1) = *puVar5;
  *(undefined4 *)(iVar6 + 0x24 + iVar1) = puVar5[1];
  SetScaledSize(pCVar3,param_1);
  return;
}

