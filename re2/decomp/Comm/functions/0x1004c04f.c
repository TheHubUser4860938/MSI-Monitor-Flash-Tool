// rea decompile_all
// name: CPane::OnLButtonDblClk
// address: 0x1004c04f
// body: available
// range: 0x1004c04f-0x1004c0b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CPane::OnLButtonDblClk(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPane::OnLButtonDblClk(CPane *this)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*(int *)this + 700);
  guard_check_icall();
  (*pcVar1)();
  pcVar1 = *(code **)(*(int *)this + 0x1cc);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    pcVar1 = *(code **)(*(int *)this + 0x1fc);
    guard_check_icall(*(undefined4 *)(this + 0x1e8),*(undefined4 *)(this + 0x1ec),
                      *(undefined4 *)(this + 0x1f0),*(undefined4 *)(this + 500),2,1);
    (*pcVar1)();
    FUN_1001d029();
  }
  return;
}

