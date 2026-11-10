// rea decompile_all
// name: CMFCVisualManager::DoDrawHeaderSortArrow
// address: 0x4192a6
// body: available
// range: 0x4192a6-0x4193c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CMFCVisualManager::DoDrawHeaderSortArrow(class CDC *,class
   CRect,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManager::DoDrawHeaderSortArrow
          (undefined4 param_1_00,CDC *param_1,int param_3,int param_4,int param_5,int param_6,
          int param_7,int param_8)

{
  AFX_GLOBAL_DATA *pAVar1;
  ulong uVar2;
  CPen *pCVar3;
  undefined1 local_28 [8];
  undefined **local_20 [2];
  undefined **local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x4192b2;
  pAVar1 = GetGlobalData();
  if (param_8 == 0) {
    uVar2 = *(ulong *)(pAVar1 + 0x5c);
  }
  else {
    uVar2 = *(ulong *)(pAVar1 + 0x24);
  }
  CPen::CPen((CPen *)local_20,0,1,uVar2);
  local_8 = 0;
  pAVar1 = GetGlobalData();
  if (param_8 == 0) {
    uVar2 = *(ulong *)(pAVar1 + 0x60);
  }
  else {
    uVar2 = *(ulong *)(pAVar1 + 0x30);
  }
  CPen::CPen((CPen *)local_18,0,1,uVar2);
  local_8 = CONCAT31(local_8._1_3_,1);
  pCVar3 = CDC::SelectObject(param_1,(CPen *)local_20);
  if (param_7 == 0) {
    CDC::MoveTo(param_1,(int)local_28,param_5);
    CDC::LineTo(param_1,(param_3 + param_5) / 2,param_6);
    CDC::SelectObject(param_1,(CPen *)local_18);
    CDC::LineTo(param_1,param_3,param_4);
  }
  else {
    CDC::MoveTo(param_1,(int)local_28,param_3);
    CDC::LineTo(param_1,param_5,param_6);
    CDC::LineTo(param_1,(param_3 + param_5) / 2,param_4);
    CDC::SelectObject(param_1,(CPen *)local_18);
    param_5 = param_3;
    param_4 = param_6;
  }
  CDC::LineTo(param_1,param_5,param_4);
  CDC::SelectObject(param_1,pCVar3);
  local_18[0] = CPen::vftable;
  FUN_0040ee80();
  local_20[0] = CPen::vftable;
  FUN_0040ee80();
  return;
}

