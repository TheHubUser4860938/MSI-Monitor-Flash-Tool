// rea decompile_all
// name: CMFCToolBarComboBoxButton::OnDrawOnCustomizeList
// address: 0x1008d226
// body: available
// range: 0x1008d226-0x1008d331 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCToolBarComboBoxButton::OnDrawOnCustomizeList(class CDC
   *,class CRect const &,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCToolBarComboBoxButton::OnDrawOnCustomizeList
          (CMFCToolBarComboBoxButton *this,CDC *param_1,CRect *param_2,int param_3)

{
  int iVar1;
  AFX_GLOBAL_DATA *pAVar2;
  HBRUSH hbr;
  CMFCVisualManager *pCVar3;
  ulong uVar4;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_100e82a6(param_1,param_2,param_3);
  iVar1 = (*(int *)(param_2 + 8) - *(int *)param_2) - (iVar1 + 10);
  local_18.top = *(LONG *)(param_2 + 4);
  local_18.right = *(LONG *)(param_2 + 8);
  local_18.bottom = *(LONG *)(param_2 + 0xc);
  local_18.left = 0x14;
  if (0x13 < iVar1) {
    local_18.left = iVar1;
  }
  local_18.left = local_18.right - local_18.left;
  InflateRect(&local_18,-1,-1);
  pAVar2 = GetGlobalData();
  hbr = (HBRUSH)0x0;
  if (pAVar2 != (AFX_GLOBAL_DATA *)0xffffff38) {
    hbr = *(HBRUSH *)(pAVar2 + 0xcc);
  }
  FillRect(*(HDC *)(param_1 + 4),&local_18,hbr);
  pAVar2 = GetGlobalData();
  uVar4 = *(ulong *)(pAVar2 + 0x58);
  pAVar2 = GetGlobalData();
  CDC::Draw3dRect(param_1,&local_18,*(ulong *)(pAVar2 + 0x58),uVar4);
  local_28.left = local_18.right + 2 + (local_18.top - local_18.bottom);
  local_28.top = local_18.top;
  local_28.right = local_18.right;
  local_28.bottom = local_18.bottom;
  InflateRect(&local_28,-1,-1);
  pCVar3 = CMFCVisualManager::GetInstance();
  iVar1 = *(int *)pCVar3;
  guard_check_icall(param_1,local_28.left,local_28.top,local_28.right,local_28.bottom,0,0,0,this);
  (**(code **)(iVar1 + 0x6c))();
  iVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar1;
}

