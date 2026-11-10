// rea decompile_all
// name: CMFCVisualManager::OnDrawExpandingBox
// address: 0x10060eff
// body: available
// range: 0x10060eff-0x10060fcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawExpandingBox(class CDC *,class
   CRect,int,unsigned long)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManager::OnDrawExpandingBox
          (undefined4 param_1_00,CDC *param_1,int param_3,int param_4,int param_5,int param_6,
          int param_7,ulong param_8)

{
  int iVar1;
  AFX_GLOBAL_DATA *pAVar2;
  undefined1 local_28 [8];
  undefined **local_20 [2];
  CPen *local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x10060f0b;
  CDC::Draw3dRect(param_1,(tagRECT *)&param_3,param_8,param_8);
  InflateRect((LPRECT)&param_3,-2,-2);
  pAVar2 = GetGlobalData();
  CPen::CPen((CPen *)local_20,0,1,*(ulong *)(pAVar2 + 0x68));
  local_8 = 0;
  local_18 = CDC::SelectObject(param_1,(CPen *)local_20);
  local_14 = (param_5 + param_3) / 2;
  iVar1 = param_6 + param_4;
  CDC::MoveTo(param_1,(int)local_28,param_3);
  CDC::LineTo(param_1,param_5,iVar1 / 2);
  iVar1 = local_14;
  if (param_7 == 0) {
    CDC::MoveTo(param_1,(int)local_28,local_14);
    CDC::LineTo(param_1,iVar1,param_6);
  }
  CDC::SelectObject(param_1,local_18);
  local_20[0] = CPen::vftable;
  CImageList::~CImageList((CImageList *)local_20);
  return;
}

