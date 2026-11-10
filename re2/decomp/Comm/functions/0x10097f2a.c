// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnDrawRibbonDefaultPaneButtonIndicator
// address: 0x10097f2a
// body: available
// range: 0x10097f2a-0x10098026 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall
   CMFCVisualManagerOffice2007::OnDrawRibbonDefaultPaneButtonIndicator(class CDC *,class
   CMFCRibbonButton *,class CRect,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2007::OnDrawRibbonDefaultPaneButtonIndicator
          (CMFCVisualManagerOffice2007 *this,CDC *param_1,undefined4 param_2,int param_4,
          LONG param_5,int param_6,LONG param_7,undefined4 param_8,undefined4 param_9)

{
  CDC *pCVar1;
  int iVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  CMFCVisualManagerOffice2007 *pCVar4;
  undefined4 local_24;
  undefined4 local_20;
  CDC *local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  local_1c = param_1;
  local_20 = param_2;
  pCVar4 = this;
  iVar2 = CanDrawImage(this);
  if ((iVar2 == 0) || (*(int *)(this + 0x6f4c) == 0)) {
    CMFCVisualManager::OnDrawRibbonDefaultPaneButtonIndicator
              ((CMFCVisualManager *)this,local_1c,local_20,param_4,param_5,param_6,param_7,param_8,
               param_9);
    uVar3 = extraout_EDX_00;
  }
  else {
    param_4 = (*(int *)(this + 0x6fe0) - *(int *)(this + 0x6fe8)) + param_6;
    iVar2 = *(int *)(this + 0x6eb8);
    guard_check_icall(local_1c,param_4,param_5,param_6,param_7,0,0xff);
    (**(code **)(iVar2 + 0x10))();
    local_18.left = param_4;
    local_18.top = param_5;
    local_18.right = param_6;
    local_18.bottom = param_7;
    OffsetRect(&local_18,0,1);
    pCVar1 = local_1c;
    local_24 = 0;
    local_20 = 0;
    CMenuImages::Draw(local_1c,0,(CRect *)&local_18,3,(CSize *)&local_24);
    local_24 = 0;
    local_20 = 0;
    CMenuImages::Draw(pCVar1,0,(CRect *)&param_4,0,(CSize *)&local_24);
    uVar3 = extraout_EDX;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,uVar3,pCVar4);
  return;
}

