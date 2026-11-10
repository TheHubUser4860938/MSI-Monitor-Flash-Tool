// rea decompile_all
// name: CMFCVisualManager::OnDrawMenuArrowOnCustomizeList
// address: 0x1008cfd5
// body: available
// range: 0x1008cfd5-0x1008d07b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawMenuArrowOnCustomizeList(class CDC
   *,class CRect,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManager::OnDrawMenuArrowOnCustomizeList
          (undefined4 param_1_00,CDC *param_1,undefined4 param_3,LONG param_4,int param_5,
          LONG param_6,int param_7)

{
  int *piVar1;
  AFX_GLOBAL_DATA *pAVar2;
  ulong uVar3;
  undefined4 local_30;
  undefined4 local_2c;
  tagRECT local_28;
  int local_18;
  LONG LStack_14;
  int local_10;
  LONG LStack_c;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  local_18 = param_3;
  LStack_14 = param_4;
  local_10 = param_5;
  LStack_c = param_6;
  piVar1 = (int *)FUN_100b0af4(&local_30);
  local_18 = local_10 - *piVar1;
  local_30 = 0;
  local_2c = 0;
  CMenuImages::Draw(param_1,0xe,(CRect *)&local_18,-(uint)(param_7 != 0) & 3,(CSize *)&local_30);
  local_28.right = local_18 + -1;
  local_28.top = param_4;
  local_28.bottom = param_6;
  local_28.left = local_18 + -3;
  InflateRect(&local_28,0,-2);
  pAVar2 = GetGlobalData();
  uVar3 = *(ulong *)(pAVar2 + 0x24);
  pAVar2 = GetGlobalData();
  CDC::Draw3dRect(param_1,&local_28,*(ulong *)(pAVar2 + 0x20),uVar3);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

