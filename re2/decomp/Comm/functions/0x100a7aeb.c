// rea decompile_all
// name: CPaneFrameWnd::OnNcMouseMove
// address: 0x100a7aeb
// body: available
// range: 0x100a7aeb-0x100a7b29 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CPaneFrameWnd::OnNcMouseMove(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CPaneFrameWnd::OnNcMouseMove
          (CPaneFrameWnd *this,undefined4 param_1,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  if ((this[0x80] == (CPaneFrameWnd)0x0) && (this[0xa5] == (CPaneFrameWnd)0x0)) {
    pcVar1 = *(code **)(*(int *)this + 0x234);
    guard_check_icall(param_3,param_4);
    (*pcVar1)();
  }
  FUN_1001d029();
  return;
}

