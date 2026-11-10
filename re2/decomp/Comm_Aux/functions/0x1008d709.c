// rea decompile_all
// name: CMFCVisualManager::OnDrawRibbonRecentFilesFrame
// address: 0x1008d709
// body: available
// range: 0x1008d709-0x1008d77c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawRibbonRecentFilesFrame(class CDC
   *,class CMFCRibbonMainPanel *,class CRect)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManager::OnDrawRibbonRecentFilesFrame
          (undefined4 param_1_00,CDC *param_1,undefined4 param_2,int param_4,LONG param_5,
          LONG param_6,LONG param_7)

{
  AFX_GLOBAL_DATA *pAVar1;
  HBRUSH hbr;
  ulong uVar2;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  pAVar1 = GetGlobalData();
  hbr = (HBRUSH)0x0;
  if (pAVar1 != (AFX_GLOBAL_DATA *)0xffffff68) {
    hbr = *(HBRUSH *)(pAVar1 + 0x9c);
  }
  FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_4,hbr);
  local_18.right = param_4 + 2;
  local_18.left = param_4;
  local_18.top = param_5;
  local_18.bottom = param_7;
  pAVar1 = GetGlobalData();
  uVar2 = *(ulong *)(pAVar1 + 0x24);
  pAVar1 = GetGlobalData();
  CDC::Draw3dRect(param_1,&local_18,*(ulong *)(pAVar1 + 0x20),uVar2);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

