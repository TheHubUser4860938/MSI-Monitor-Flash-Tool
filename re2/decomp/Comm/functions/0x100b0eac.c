// rea decompile_all
// name: OnMoveMiniFrame
// address: 0x100b0eac
// body: available
// range: 0x100b0eac-0x100b0ecf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CFrameWndEx::OnMoveMiniFrame(class CWnd *)
    public: virtual int __thiscall CMDIChildWndEx::OnMoveMiniFrame(class CWnd *)
    public: virtual int __thiscall CMDIFrameWndEx::OnMoveMiniFrame(class CWnd *)
    public: virtual int __thiscall COleCntrFrameWndEx::OnMoveMiniFrame(class CWnd *)
     6 names - too many to list
   
   Library: Visual Studio 2015 Release */

void OnMoveMiniFrame(undefined4 param_1)

{
  code *pcVar1;
  int in_ECX;
  
  pcVar1 = *(code **)(*(int *)(in_ECX + 0x238) + 0x3c);
  guard_check_icall(param_1);
  (*pcVar1)();
  return;
}

