// rea decompile_all
// name: CMFCVisualManager::OnDrawRibbonLaunchButton
// address: 0x1008ec8e
// body: available
// range: 0x1008ec8e-0x1008ed87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawRibbonLaunchButton(class CDC *,class
   CMFCRibbonLaunchButton *,class CMFCRibbonPanel *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManager::OnDrawRibbonLaunchButton
          (CMFCVisualManager *this,CDC *param_1,CMFCRibbonLaunchButton *param_2,
          CMFCRibbonPanel *param_3)

{
  code *pcVar1;
  int iVar2;
  IMAGE_STATE IVar3;
  undefined4 uVar4;
  CDC *pCVar5;
  CMFCRibbonLaunchButton *pCVar6;
  undefined4 local_20;
  IMAGE_STATE local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  pcVar1 = *(code **)(*(int *)this + 0x238);
  pCVar5 = param_1;
  pCVar6 = param_2;
  guard_check_icall(param_1,param_2);
  (*pcVar1)();
  uVar4 = DAT_1024594c;
  if (*(int *)(param_3 + 0x68) == 0) {
    uVar4 = DAT_1024595c;
  }
  local_1c = 0;
  pcVar1 = *(code **)(*(int *)param_2 + 0xdc);
  guard_check_icall(pCVar5,pCVar6);
  iVar2 = (*pcVar1)();
  if (iVar2 == 0) {
    pcVar1 = *(code **)(*(int *)param_2 + 0xd0);
    guard_check_icall(pCVar5,pCVar6);
    iVar2 = (*pcVar1)();
    IVar3 = local_1c;
    if (iVar2 == 0) {
      if ((((byte)uVar4 < 0xc1) || ((byte)((uint)uVar4 >> 8) < 0xc1)) ||
         ((byte)((uint)uVar4 >> 0x10) < 0xc1)) {
        IVar3 = 0;
      }
      else {
        IVar3 = 3;
      }
    }
  }
  else {
    IVar3 = 1;
  }
  local_20 = 0;
  local_1c = 0;
  local_18 = *(undefined4 *)(param_2 + 0x74);
  uStack_14 = *(undefined4 *)(param_2 + 0x78);
  uStack_10 = *(undefined4 *)(param_2 + 0x7c);
  uStack_c = *(undefined4 *)(param_2 + 0x80);
  CMenuImages::Draw(param_1,0x23,(CRect *)&local_18,IVar3,(CSize *)&local_20);
  pcVar1 = *(code **)(*(int *)this + 0x240);
  guard_check_icall(param_1,param_2);
  (*pcVar1)();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

