// rea decompile_all
// name: CMFCShowAllButton::OnDraw
// address: 0x100dcf47
// body: available
// range: 0x100dcf47-0x100dd02c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCShowAllButton::OnDraw(class CDC *,class CRect const &,class
   CMFCToolBarImages *,int,int,int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCShowAllButton::OnDraw
          (CMFCShowAllButton *this,CDC *param_1,CRect *param_2,CMFCToolBarImages *param_3,
          int param_4,int param_5,int param_6,int param_7,int param_8)

{
  code *pcVar1;
  CMFCVisualManager *pCVar2;
  undefined4 uVar3;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  local_18.left = *(LONG *)param_2;
  local_18.top = *(LONG *)(param_2 + 4);
  local_18.right = *(LONG *)(param_2 + 8);
  local_18.bottom = *(LONG *)(param_2 + 0xc);
  InflateRect(&local_18,-1,-1);
  uVar3 = 0;
  CMFCToolBarButton::FillInterior((CMFCToolBarButton *)this,param_1,param_2,param_6,0);
  if (param_6 == 0) {
    if ((*(uint *)(this + 0x24) & 0x30000) != 0) {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 2;
  }
  pCVar2 = CMFCVisualManager::GetInstance();
  pcVar1 = *(code **)(*(int *)pCVar2 + 0x2fc);
  guard_check_icall(param_1,local_18.left,local_18.top,local_18.right,local_18.bottom,uVar3);
  (*pcVar1)();
  if ((*(uint *)(this + 0x24) & 0x30000) == 0) {
    if (param_6 == 0) goto LAB_100dd01a;
    pCVar2 = CMFCVisualManager::GetInstance();
    uVar3 = 2;
  }
  else {
    pCVar2 = CMFCVisualManager::GetInstance();
    uVar3 = 1;
  }
  pcVar1 = *(code **)(*(int *)pCVar2 + 0x88);
  guard_check_icall(param_1,this,local_18.left,local_18.top,local_18.right,local_18.bottom,uVar3);
  (*pcVar1)();
LAB_100dd01a:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

