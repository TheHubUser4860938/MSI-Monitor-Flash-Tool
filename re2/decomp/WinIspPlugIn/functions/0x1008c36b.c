// rea decompile_all
// name: CMFCVisualManager::OnDrawBarGripper
// address: 0x1008c36b
// body: available
// range: 0x1008c36b-0x1008c413 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawBarGripper(class CDC *,class
   CRect,int,class CBasePane *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManager::OnDrawBarGripper
          (undefined4 param_1_00,CDC *param_1,int param_3,int param_4,int param_5,int param_6,
          int param_7,int param_8)

{
  int iVar1;
  AFX_GLOBAL_DATA *pAVar2;
  ulong uVar3;
  ulong uVar4;
  
  iVar1 = param_8;
  if ((param_8 == 0) || (*(int *)(param_8 + 0x8c) == 0)) {
    pAVar2 = GetGlobalData();
    uVar4 = *(ulong *)(pAVar2 + 0x5c);
  }
  else {
    pAVar2 = GetGlobalData();
    uVar4 = *(ulong *)(pAVar2 + 0x24);
  }
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x8c) == 0)) {
    pAVar2 = GetGlobalData();
    uVar3 = *(ulong *)(pAVar2 + 0x58);
  }
  else {
    pAVar2 = GetGlobalData();
    uVar3 = *(ulong *)(pAVar2 + 0x20);
  }
  if (param_7 == 0) {
    InflateRect((LPRECT)&param_3,-3,0);
    param_6 = (param_6 + param_4) / 2;
    param_4 = param_6 + -1;
    param_6 = param_6 + 2;
  }
  else {
    InflateRect((LPRECT)&param_3,0,-3);
    param_5 = (param_5 + param_3) / 2;
    param_3 = param_5 + -1;
    param_5 = param_5 + 2;
  }
  CDC::Draw3dRect(param_1,(tagRECT *)&param_3,uVar4,uVar3);
  return;
}

