// rea decompile_all
// name: CDC::Attach
// address: 0x100281d7
// body: available
// range: 0x100281d7-0x10028217 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CDC::Attach(struct HDC__ *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CDC::Attach(CDC *this,HDC__ *param_1)

{
  code *pcVar1;
  CHandleMap *pCVar2;
  void **ppvVar3;
  
  if (param_1 != (HDC__ *)0x0) {
    *(HDC__ **)(this + 4) = param_1;
    pCVar2 = afxMapHDC(1);
    ppvVar3 = CMapPtrToPtr::operator[]((CMapPtrToPtr *)(pCVar2 + 0x1c),*(void **)(this + 4));
    *ppvVar3 = this;
    pcVar1 = *(code **)(*(int *)this + 0xc);
    guard_check_icall(*(undefined4 *)(this + 4));
    (*pcVar1)();
  }
  return (uint)(param_1 != (HDC__ *)0x0);
}

