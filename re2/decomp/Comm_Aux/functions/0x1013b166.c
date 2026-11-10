// rea decompile_all
// name: CMFCCustomizeMenuButton::DrawCheckBox
// address: 0x1013b166
// body: available
// range: 0x1013b166-0x1013b273 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCCustomizeMenuButton::DrawCheckBox(class CDC *,class CRect
   const &,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCCustomizeMenuButton::DrawCheckBox
          (CMFCCustomizeMenuButton *this,CDC *param_1,CRect *param_2,int param_3)

{
  code *pcVar1;
  uint uVar2;
  CMFCVisualManager *pCVar3;
  int iVar4;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0xec) != 0) {
    local_18 = *(undefined4 *)param_2;
    local_14 = *(int *)(param_2 + 4) + 1;
    local_10 = *(int *)(param_2 + 8) + -1;
    local_c = *(int *)(param_2 + 0xc) + -1;
    pCVar3 = CMFCVisualManager::GetInstance();
    pcVar1 = *(code **)(*(int *)pCVar3 + 0xb0);
    guard_check_icall();
    iVar4 = (*pcVar1)();
    if (iVar4 == 0) {
      uVar2 = *(uint *)(this + 0x24);
      *(uint *)(this + 0x24) = uVar2 | 0x10000;
      CMFCToolBarButton::FillInterior
                ((CMFCToolBarButton *)this,param_1,(CRect *)&local_18,param_3,1);
      if (param_3 != 0) {
        pCVar3 = CMFCVisualManager::GetInstance();
        if (*(int *)(pCVar3 + 100) != 0) {
          *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 0x800000;
        }
      }
      pCVar3 = CMFCVisualManager::GetInstance();
      pcVar1 = *(code **)(*(int *)pCVar3 + 0x88);
      guard_check_icall(param_1,this,local_18,local_14,local_10,local_c,1);
      (*pcVar1)();
      *(uint *)(this + 0x24) = uVar2;
    }
    pCVar3 = CMFCVisualManager::GetInstance();
    pcVar1 = *(code **)(*(int *)pCVar3 + 0xa4);
    guard_check_icall(param_1,this,local_18,local_14,local_10,local_c,param_3,0);
    (*pcVar1)();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

