// rea decompile_all
// name: CMFCVisualManager::OnDrawPaneCaption
// address: 0x1008d729
// body: available
// range: 0x1008d729-0x1008d798 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual unsigned long __thiscall CMFCVisualManager::OnDrawPaneCaption(class CDC *,class
   CDockablePane *,int,class CRect,class CRect)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall
CMFCVisualManager::OnDrawPaneCaption
          (undefined4 param_1_00,int param_1,undefined4 param_2,int param_3)

{
  AFX_GLOBAL_DATA *pAVar1;
  ulong uVar2;
  undefined **local_18;
  HBRUSH local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x1008d735;
  pAVar1 = GetGlobalData();
  if (param_3 == 0) {
    uVar2 = *(ulong *)(pAVar1 + 0x80);
  }
  else {
    uVar2 = *(ulong *)(pAVar1 + 0x7c);
  }
  CBrush::CBrush((CBrush *)&local_18,uVar2);
  local_8 = 0;
  FillRect(*(HDC *)(param_1 + 4),(RECT *)&stack0x00000010,local_14);
  pAVar1 = GetGlobalData();
  if (param_3 == 0) {
    uVar2 = *(ulong *)(pAVar1 + 0x84);
  }
  else {
    uVar2 = *(ulong *)(pAVar1 + 0x74);
  }
  local_18 = CBrush::vftable;
  CImageList::~CImageList((CImageList *)&local_18);
  return uVar2;
}

