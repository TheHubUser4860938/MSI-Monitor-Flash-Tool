// rea decompile_all
// name: CBasePane::CanFloat
// address: 0x4ddc9d
// body: available
// range: 0x4ddc9d-0x4ddd1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CBasePane::CanFloat(void)const 
   
   Library: Visual Studio 2015 Release */

int __thiscall CBasePane::CanFloat(CBasePane *this)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  CMFCBaseTabCtrl *pCVar4;
  CBasePane *local_8;
  
  pcVar1 = *(code **)(*(int *)this + 0x16c);
  local_8 = this;
  guard_check_icall();
  iVar3 = (*pcVar1)();
  if (iVar3 == 0) {
    uVar2 = *(uint *)(this + 0xa0);
  }
  else {
    local_8 = (CBasePane *)0x0;
    pCVar4 = GetParentTabWnd(this,(HWND__ **)&local_8);
    if (pCVar4 != (CMFCBaseTabCtrl *)0x0) {
      pcVar1 = *(code **)(*(int *)pCVar4 + 0x21c);
      guard_check_icall(local_8);
      iVar3 = (*pcVar1)();
      if (iVar3 != -1) {
        pcVar1 = *(code **)(*(int *)pCVar4 + 0x1f0);
        guard_check_icall(iVar3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
    uVar2 = *(uint *)(this + 0xa0);
  }
  return uVar2 & 1;
}

