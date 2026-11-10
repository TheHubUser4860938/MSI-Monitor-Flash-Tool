// rea decompile_all
// name: CMFCVisualManagerOfficeXP::OnDrawPaneCaption
// address: 0x101452f8
// body: available
// range: 0x101452f8-0x101453b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual unsigned long __thiscall CMFCVisualManagerOfficeXP::OnDrawPaneCaption(class
   CDC *,class CDockablePane *,int,class CRect,class CRect)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall
CMFCVisualManagerOfficeXP::OnDrawPaneCaption
          (undefined4 param_1_00,CDC *param_1,undefined4 param_2,int param_3)

{
  AFX_GLOBAL_DATA *pAVar1;
  ulong uVar2;
  CPen *pCVar3;
  undefined **local_1c [2];
  CPen *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x10145304;
  pAVar1 = GetGlobalData();
  if (param_3 == 0) {
    uVar2 = *(ulong *)(pAVar1 + 0x58);
  }
  else {
    uVar2 = *(ulong *)(pAVar1 + 100);
  }
  CPen::CPen((CPen *)local_1c,0,1,uVar2);
  local_8 = 0;
  local_14 = CDC::SelectObject(param_1,(CPen *)local_1c);
  pAVar1 = GetGlobalData();
  if (param_3 == 0) {
    pCVar3 = (CPen *)(pAVar1 + 0xd0);
  }
  else {
    pCVar3 = (CPen *)(pAVar1 + 0xb8);
  }
  pCVar3 = CDC::SelectObject(param_1,pCVar3);
  if (param_3 != 0) {
    InflateRect((LPRECT)&stack0x00000010,1,1);
  }
  CDC::RoundRect(param_1,(tagRECT *)&stack0x00000010,(tagPOINT)0x200000002);
  CDC::SelectObject(param_1,pCVar3);
  CDC::SelectObject(param_1,local_14);
  pAVar1 = GetGlobalData();
  if (param_3 == 0) {
    uVar2 = *(ulong *)(pAVar1 + 0x68);
  }
  else {
    uVar2 = *(ulong *)(pAVar1 + 0x74);
  }
  local_1c[0] = CPen::vftable;
  CImageList::~CImageList((CImageList *)local_1c);
  return uVar2;
}

