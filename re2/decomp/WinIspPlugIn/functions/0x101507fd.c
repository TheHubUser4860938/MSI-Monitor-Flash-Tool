// rea decompile_all
// name: CMFCTasksPaneFrameWnd::OnDrawCaptionButtons
// address: 0x101507fd
// body: available
// range: 0x101507fd-0x10150875 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCTasksPaneFrameWnd::OnDrawCaptionButtons(class CDC *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCTasksPaneFrameWnd::OnDrawCaptionButtons(CMFCTasksPaneFrameWnd *this,CDC *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  byte bVar4;
  int local_8;
  
  local_8 = *(int *)(this + 0x10c);
  while (local_8 != 0) {
    puVar2 = (undefined4 *)FUN_100c321b(&local_8);
    bVar4 = 1;
    piVar1 = (int *)*puVar2;
    iVar3 = FUN_1018d6f4();
    if (iVar3 == 9) {
      bVar4 = ~-(*(int *)(this + 0x94) != 0) & 1;
    }
    iVar3 = *piVar1;
    guard_check_icall(param_1,0,1,bVar4,0);
    (**(code **)(iVar3 + 0x10))();
  }
  return;
}

