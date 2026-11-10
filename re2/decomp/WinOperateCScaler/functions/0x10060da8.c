// rea decompile_all
// name: CMFCVisualManager::OnDrawDefaultRibbonImage
// address: 0x10060da8
// body: available
// range: 0x10060da8-0x10060edd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawDefaultRibbonImage(class CDC *,class
   CRect,int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManager::OnDrawDefaultRibbonImage
          (undefined4 param_1_00,CDC *param_1,int param_3,int param_4,int param_5,int param_6,
          int param_7)

{
  code *pcVar1;
  AFX_GLOBAL_DATA *pAVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  CPen *pCVar6;
  CPen *pCVar7;
  undefined4 uVar8;
  CDrawingManager local_34 [8];
  undefined **local_2c [2];
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0x10060db4;
  local_24.top = (param_6 + param_4) / 2;
  local_24.left = (param_5 + param_3) / 2;
  local_24.right = local_24.left + 1;
  local_24.bottom = local_24.top + 1;
  InflateRect(&local_24,5,5);
  pAVar2 = GetGlobalData();
  if (8 < *(int *)(pAVar2 + 0x1ac)) {
    pAVar2 = GetGlobalData();
    iVar3 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar2);
    if (iVar3 == 0) {
      CDrawingManager::CDrawingManager(local_34,param_1);
      local_8 = 1;
      if (param_7 == 0) {
        uVar8 = 0x2c7547;
        uVar4 = 0x80d0a0;
      }
      else {
        pAVar2 = GetGlobalData();
        uVar8 = *(undefined4 *)(pAVar2 + 0x20);
        pAVar2 = GetGlobalData();
        uVar4 = *(undefined4 *)(pAVar2 + 0x38);
      }
      FUN_10084f6c(&local_24,uVar4,uVar8);
      FUN_10084c54();
      goto LAB_10060ed6;
    }
  }
  if (param_7 == 0) {
    uVar5 = 0x7f00;
  }
  else {
    pAVar2 = GetGlobalData();
    uVar5 = *(ulong *)(pAVar2 + 0x38);
  }
  CBrush::CBrush((CBrush *)local_2c,uVar5);
  local_8 = 0;
  pCVar6 = CDC::SelectObject(param_1,(CPen *)local_2c);
  pcVar1 = *(code **)(*(int *)param_1 + 0x24);
  guard_check_icall(8);
  pCVar7 = (CPen *)(*pcVar1)();
  Ellipse(*(HDC *)(param_1 + 4),local_24.left,local_24.top,local_24.right,local_24.bottom);
  CDC::SelectObject(param_1,pCVar6);
  CDC::SelectObject(param_1,pCVar7);
  local_2c[0] = CBrush::vftable;
  CImageList::~CImageList((CImageList *)local_2c);
LAB_10060ed6:
  FUN_10154478();
  return;
}

