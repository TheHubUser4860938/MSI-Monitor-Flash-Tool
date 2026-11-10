// rea decompile_all
// name: CMFCVisualManager::GetTabFrameColors
// address: 0x1008bf0e
// body: available
// range: 0x1008bf0e-0x1008c07e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::GetTabFrameColors(class CMFCBaseTabCtrl const
   *,unsigned long &,unsigned long &,unsigned long &,unsigned long &,unsigned long &,unsigned long
   &,class CBrush * &,class CBrush * &)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManager::GetTabFrameColors
          (CMFCVisualManager *this,CMFCBaseTabCtrl *param_1,ulong *param_2,ulong *param_3,
          ulong *param_4,ulong *param_5,ulong *param_6,ulong *param_7,CBrush **param_8,
          CBrush **param_9)

{
  code *pcVar1;
  undefined4 uVar2;
  ulong uVar3;
  int iVar4;
  AFX_GLOBAL_DATA *pAVar5;
  
  iVar4 = *(int *)param_1;
  pcVar1 = *(code **)(iVar4 + 0x20c);
  guard_check_icall();
  uVar2 = (*pcVar1)();
  pcVar1 = *(code **)(iVar4 + 0x1dc);
  guard_check_icall(uVar2);
  uVar3 = (*pcVar1)();
  pcVar1 = *(code **)(*(int *)param_1 + 0x288);
  guard_check_icall();
  iVar4 = (*pcVar1)();
  if ((iVar4 == 0) || (uVar3 == 0xffffffff)) {
    if (*(int *)(param_1 + 0x134) == 0) {
      pAVar5 = GetGlobalData();
      uVar3 = *(ulong *)(pAVar5 + 0x54);
    }
    else {
      pAVar5 = GetGlobalData();
      uVar3 = *(ulong *)(pAVar5 + 0x1c);
    }
    *param_5 = uVar3;
  }
  else {
    *param_5 = uVar3;
  }
  if (*(int *)(param_1 + 0x134) == 0) {
    pAVar5 = GetGlobalData();
    *param_2 = *(ulong *)(pAVar5 + 0x58);
    pAVar5 = GetGlobalData();
    *param_3 = *(ulong *)(pAVar5 + 0x68);
    pcVar1 = *(code **)(*(int *)param_1 + 0x28c);
    guard_check_icall();
    iVar4 = (*pcVar1)();
    if (iVar4 == 0) {
      pAVar5 = GetGlobalData();
      uVar3 = *(ulong *)(pAVar5 + 0x5c);
    }
    else {
      pAVar5 = GetGlobalData();
      uVar3 = *(ulong *)(pAVar5 + 0x58);
    }
    *param_4 = uVar3;
    pAVar5 = GetGlobalData();
    *param_6 = *(ulong *)(pAVar5 + 0x60);
    pAVar5 = GetGlobalData();
    *param_7 = *(ulong *)(pAVar5 + 100);
    pAVar5 = GetGlobalData();
    pAVar5 = pAVar5 + 0xd0;
  }
  else {
    pAVar5 = GetGlobalData();
    *param_2 = *(ulong *)(pAVar5 + 0x20);
    pAVar5 = GetGlobalData();
    *param_3 = *(ulong *)(pAVar5 + 0x28);
    pcVar1 = *(code **)(*(int *)param_1 + 0x28c);
    guard_check_icall();
    iVar4 = (*pcVar1)();
    if (iVar4 == 0) {
      pAVar5 = GetGlobalData();
      uVar3 = *(ulong *)(pAVar5 + 0x24);
    }
    else {
      pAVar5 = GetGlobalData();
      uVar3 = *(ulong *)(pAVar5 + 0x20);
    }
    *param_4 = uVar3;
    pAVar5 = GetGlobalData();
    *param_6 = *(ulong *)(pAVar5 + 0x30);
    pAVar5 = GetGlobalData();
    *param_7 = *(ulong *)(pAVar5 + 0x34);
    pAVar5 = GetGlobalData();
    pAVar5 = pAVar5 + 0x98;
  }
  *param_8 = (CBrush *)pAVar5;
  pAVar5 = GetGlobalData();
  *param_9 = (CBrush *)(pAVar5 + 0xb0);
  return;
}

