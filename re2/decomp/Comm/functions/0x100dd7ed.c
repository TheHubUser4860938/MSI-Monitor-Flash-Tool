// rea decompile_all
// name: CMFCCaptionBar::OnDrawBackground
// address: 0x100dd7ed
// body: available
// range: 0x100dd7ed-0x100dd8b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCCaptionBar::OnDrawBackground(class CDC *,class CRect)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCCaptionBar::OnDrawBackground
          (CMFCCaptionBar *this,undefined4 param_1,LONG param_3,LONG param_4,int param_5,
          LONG param_6)

{
  int iVar1;
  code *pcVar2;
  CMFCVisualManager *pCVar3;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  pCVar3 = CMFCVisualManager::GetInstance();
  iVar1 = *(int *)pCVar3;
  guard_check_icall(param_1,this,param_3,param_4,param_5,param_6,param_3,param_4,param_5,param_6,0);
  (**(code **)(iVar1 + 0x34))();
  if (*(int *)(this + 0x2c4) != 0) {
    local_18.left = param_3;
    local_18.top = param_4;
    local_18.right = param_5;
    local_18.bottom = param_6;
    InflateRect(&local_18,-4,-4);
    local_18.right = local_18.right + (*(int *)(this + 0x4ac) - *(int *)(this + 0x4b4));
    pCVar3 = CMFCVisualManager::GetInstance();
    pcVar2 = *(code **)(*(int *)pCVar3 + 0xd0);
    guard_check_icall(param_1,this,local_18.left,local_18.top,local_18.right,local_18.bottom);
    (*pcVar2)();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

