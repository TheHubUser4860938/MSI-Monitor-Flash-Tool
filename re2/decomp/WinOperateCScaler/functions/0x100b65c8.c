// rea decompile_all
// name: CDockingManager::AdjustRectToClientArea
// address: 0x100b65c8
// body: available
// range: 0x100b65c8-0x100b66b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CDockingManager::AdjustRectToClientArea(class CRect &,unsigned
   long)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CDockingManager::AdjustRectToClientArea(CDockingManager *this,CRect *param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  AFX_GLOBAL_DATA *pAVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  
  iVar4 = *(int *)(this + 0x104);
  iVar5 = *(int *)(this + 0xfc);
  pAVar3 = GetGlobalData();
  iVar1 = *(int *)(this + 0x100);
  iVar2 = *(int *)(this + 0xf8);
  iVar4 = (*(int *)(pAVar3 + 0x1c0) * (iVar4 - iVar5)) / 100;
  pAVar3 = GetGlobalData();
  iVar5 = (*(int *)(pAVar3 + 0x1c0) * (iVar1 - iVar2)) / 100;
  if (((param_2 & 0xa000) != 0) && (iVar4 <= *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4))) {
    if ((param_2 & 0x2000) != 0) {
      *(int *)(param_1 + 0xc) = iVar4 + *(int *)(param_1 + 4);
      return 1;
    }
    if ((param_2 & 0x8000) != 0) {
      *(int *)(param_1 + 4) = *(int *)(param_1 + 0xc) - iVar4;
      return 1;
    }
    return 0;
  }
  if ((param_2 & 0x5000) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 8) - *(int *)param_1 < iVar5) {
    return 0;
  }
  uVar6 = CWnd::GetExStyle(*(CWnd **)(this + 0xe4));
  if ((param_2 & 0x1000) == 0) {
    if ((param_2 & 0x4000) == 0) {
      return 0;
    }
    if ((uVar6 & 0x400000) != 0) goto LAB_100b66ad;
  }
  else if ((uVar6 & 0x400000) == 0) {
LAB_100b66ad:
    *(int *)(param_1 + 8) = *(int *)param_1 + iVar5;
    return 1;
  }
  *(int *)param_1 = *(int *)(param_1 + 8) - iVar5;
  return 1;
}

