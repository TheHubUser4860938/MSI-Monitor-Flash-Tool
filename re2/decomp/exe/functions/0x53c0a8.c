// rea decompile_all
// name: CMFCPropertyGridCtrl::accHitTest
// address: 0x53c0a8
// body: available
// range: 0x53c0a8-0x53c11b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual long __thiscall CMFCPropertyGridCtrl::accHitTest(long,long,struct tagVARIANT *)
   
   Library: Visual Studio 2015 Release */

long __thiscall
CMFCPropertyGridCtrl::accHitTest
          (CMFCPropertyGridCtrl *this,long param_1,long param_2,tagVARIANT *param_3)

{
  long lVar1;
  CMFCPropertyGridProperty *pCVar2;
  tagPOINT local_c;
  
  if (param_3 == (tagVARIANT *)0x0) {
    lVar1 = -0x7ff8ffa9;
  }
  else {
    local_c.y = param_2;
    local_c.x = param_1;
    ScreenToClient(*(HWND *)(this + 0x20),&local_c);
    pCVar2 = HitTest(this,local_c.x,local_c.y,0,0);
    *(undefined2 *)param_3 = 3;
    if (pCVar2 == (CMFCPropertyGridProperty *)0x0) {
      *(undefined4 *)(param_3 + 8) = 0;
    }
    else {
      *(uint *)(param_3 + 8) = param_2 << 0x10 | param_1 & 0xffffU;
    }
    *(CMFCPropertyGridProperty **)(this + 0x404) = pCVar2;
    lVar1 = 0;
  }
  return lVar1;
}

