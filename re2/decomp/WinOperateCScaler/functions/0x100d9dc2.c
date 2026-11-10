// rea decompile_all
// name: CMFCRibbonButton::OnFillBackground
// address: 0x100d9dc2
// body: available
// range: 0x100d9dc2-0x100d9e25 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual unsigned long __thiscall CMFCRibbonButton::OnFillBackground(class CDC *)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall CMFCRibbonButton::OnFillBackground(CMFCRibbonButton *this,CDC *param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  CMFCVisualManager *pCVar4;
  ulong uVar5;
  
  iVar1 = *(int *)(this + 0xd4);
  if (iVar1 != 0) {
    pcVar2 = *(code **)(*(int *)this + 0x138);
    guard_check_icall();
    iVar3 = (*pcVar2)();
    if (iVar3 != 0) {
      *(undefined4 *)(this + 0xd4) = 0;
    }
  }
  pCVar4 = CMFCVisualManager::GetInstance();
  pcVar2 = *(code **)(*(int *)pCVar4 + 0x238);
  guard_check_icall(param_1,this);
  uVar5 = (*pcVar2)();
  *(int *)(this + 0xd4) = iVar1;
  return uVar5;
}

